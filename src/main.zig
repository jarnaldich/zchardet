const std = @import("std");
const uchardet = @cImport({
    @cInclude("uchardet.h");
});

const testing = std.testing;

const ZCharDet = struct {
    uc: uchardet.uchardet_t,

    //TODO: Check for null, return error.
    fn init() !ZCharDet {
        const uc_or_null = uchardet.uchardet_new();
        if (uc_or_null == null) {
            return error.InitError;
        }

        return .{
            .uc = uc_or_null,
        };
    }

    fn deinit(self: ZCharDet) void {
        uchardet.uchardet_delete(self.uc);
    }

    fn handle_data(self: ZCharDet, data: [:0]const u8) !void {
        const res = uchardet.uchardet_handle_data(self.uc, data.ptr, data.len);
        if (res != 0) {
            return error.HandleDataError;
        }
    }

    fn data_end(self: ZCharDet) void {
        uchardet.uchardet_data_end(self.uc);
    }

    fn get_n_candidates(self: ZCharDet) usize {
        return uchardet.uchardet_get_n_candidates(self.uc);
    }

    // Return iconv-compatible name of encoding or error
    fn get_encoding(self: ZCharDet, ncandidate: usize) [:0]const u8 {
        return std.mem.span(uchardet.uchardet_get_encoding(self.uc, ncandidate));
    }

    fn get_confidence(self: ZCharDet, ncandidate: usize) f32 {
        return uchardet.uchardet_get_confidence(self.uc, ncandidate);
    }

    fn get_language(self: ZCharDet, ncandidate: usize) ![:0]const u8 {
        const res = uchardet.uchardet_get_language(self.uc, ncandidate);
        if (res == null)
            return error.UnableToDetect;

        return std.mem.span(res);
    }

    fn set_default_weight(self: ZCharDet, weight: f32) void {
        uchardet.uchardet_set_default_weight(self.uc, weight);
    }

    //XXX: Is this a typo in the original uchardet library?
    fn weigh_language(self: ZCharDet, lang: [:0]const u8, weight: f32) void {
        uchardet.uchardet_weigh_language(self.uc, lang.ptr, weight);
    }
};

test "Basic ASCII encoding detection" {
    const char_det = try ZCharDet.init();
    defer char_det.deinit();

    try char_det.handle_data("PROVA");
    char_det.data_end();

    try testing.expect(char_det.get_n_candidates() == 1);
    try testing.expect(char_det.get_confidence(0) > 0.9);
    try testing.expect(std.mem.eql(u8, char_det.get_encoding(0), "ASCII"));
}
