const std = @import("std");
const uchardet = @cImport({
    @cInclude("uchardet.h");
});

const testing = std.testing;

const ZCharDet = struct {
    uc: uchardet.uchardet_t,

    //TODO: Check for null, return error.
    fn init() ZCharDet {
        return .{
            .uc = uchardet.uchardet_new(),
        };
    }

    fn deinit(self: ZCharDet) void {
        uchardet.uchardet_delete(self.uc);
    }
};

export fn add(a: i32, b: i32) i32 {
    return a + b;
}

test "basic add functionality" {
    try testing.expect(add(3, 7) == 10);
}

test "basic string detection" {
    const char_det = ZCharDet.init();
    defer char_det.deinit();
}
