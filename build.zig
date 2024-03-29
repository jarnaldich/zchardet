const std = @import("std");

// Although this function looks imperative, note that its job is to
// declaratively construct a build graph that will be executed by an external
// runner.
pub fn build(b: *std.Build) void {
    // Standard target options allows the person running `zig build` to choose
    // what target to build for. Here we do not override the defaults, which
    // means any target is allowed, and the default is native. Other options
    // for restricting supported target set are available.
    const target = b.standardTargetOptions(.{});
    //    const mode = b.standardReleaseOptions();

    // Standard optimization options allow the person running `zig build` to select
    // between Debug, ReleaseSafe, ReleaseFast, and ReleaseSmall. Here we do not
    // set a preferred release mode, allowing the user to decide how to optimize.
    const optimize = b.standardOptimizeOption(.{});

    // This generates a "C" static library
    const uchardet = b.addStaticLibrary(.{
        .name = "uchardet",
        .target = target,
        .optimize = optimize,
    });

    uchardet.addCSourceFiles(.{
        .files = &.{
            "3rdparty/uchardet/src/CharDistribution.cpp",
            "3rdparty/uchardet/src/JpCntx.cpp",
            "3rdparty/uchardet/src/LangModels/LangArabicModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangBelarusianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangBulgarianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangCatalanModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangCroatianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangCzechModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangEnglishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangEsperantoModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangEstonianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangFinnishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangFrenchModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangDanishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangGermanModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangGeorgianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangGreekModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangHungarianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangHebrewModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangHindiModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangIrishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangItalianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangLithuanianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangLatvianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangMacedonianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangMalteseModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangPolishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangPortugueseModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangRomanianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangRussianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangSerbianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangSlovakModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangSloveneModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangSwedishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangSpanishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangThaiModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangTurkishModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangUkrainianModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangVietnameseModel.cpp",
            "3rdparty/uchardet/src/LangModels/LangNorwegianModel.cpp",
            "3rdparty/uchardet/src/nsHebrewProber.cpp",
            "3rdparty/uchardet/src/nsCharSetProber.cpp",
            "3rdparty/uchardet/src/nsBig5Prober.cpp",
            "3rdparty/uchardet/src/nsEUCJPProber.cpp",
            "3rdparty/uchardet/src/nsEUCKRProber.cpp",
            "3rdparty/uchardet/src/nsEUCTWProber.cpp",
            "3rdparty/uchardet/src/nsEscCharsetProber.cpp",
            "3rdparty/uchardet/src/nsEscSM.cpp",
            "3rdparty/uchardet/src/nsGB2312Prober.cpp",
            "3rdparty/uchardet/src/nsJohabProber.cpp",
            "3rdparty/uchardet/src/nsMBCSGroupProber.cpp",
            "3rdparty/uchardet/src/nsMBCSSM.cpp",
            "3rdparty/uchardet/src/nsSBCSGroupProber.cpp",
            "3rdparty/uchardet/src/nsSBCharSetProber.cpp",
            "3rdparty/uchardet/src/nsSJISProber.cpp",
            "3rdparty/uchardet/src/nsUTF8Prober.cpp",
            "3rdparty/uchardet/src/nsLanguageDetector.cpp",
            "3rdparty/uchardet/src/nsCJKDetector.cpp",
            "3rdparty/uchardet/src/nsLatin1Prober.cpp",
            "3rdparty/uchardet/src/nsUniversalDetector.cpp",
            "3rdparty/uchardet/src/uchardet.cpp",
        },
        .flags = &.{
            "-Wall",
            "-W",
            "-Wstrict-prototypes",
            "-Wwrite-strings",
            "-Wno-missing-field-initializers",
        },
    });
    uchardet.linkLibCpp();
    // The following is required
    uchardet.installHeader("3rdparty/uchardet/src/uchardet.h", "uchardet.h");
    b.installArtifact(uchardet);

    // This is a wrapper Zig static library.
    const lib = b.addStaticLibrary(.{
        .name = "zchardet",
        // In this case the main source file is merely a path, however, in more
        // complicated build scripts, this could be a generated file.
        .root_source_file = .{ .path = "src/main.zig" },
        .target = target,
        .optimize = optimize,
    });
    lib.addIncludePath(.{ .path = b.pathFromRoot("3rdparty/uchardet/src/") });
    lib.linkLibrary(uchardet);
    b.installArtifact(lib);

    // This declares intent for the library to be installed into the standard
    // location when the user invokes the "install" step (the default step when
    // running `zig build`).

    // The module for package management
    // This will make it possible for Zig applications to use the library
    // without needing to know anything from the underlying "C" library (uchardet)
    const zchardet_module = b.addModule("zchardet", .{
        .root_source_file = .{ .path = b.pathFromRoot("src/main.zig") },
    });
    zchardet_module.linkLibrary(uchardet);
    zchardet_module.linkLibrary(lib);

    // Creates a step for unit testing.
    const main_tests = b.addTest(.{
        .root_source_file = .{ .path = "src/main.zig" },
        .target = target,
        .optimize = optimize,
    });
    main_tests.linkLibC();
    main_tests.linkLibrary(uchardet);

    // This creates a build step. It will be visible in the `zig build --help` menu,
    // and can be selected like this: `zig build test`
    // This will evaluate the `test` step rather than the default, which is "install".
    const run_tests = b.addRunArtifact(main_tests);
    const test_step = b.step("test", "Run library tests");
    test_step.dependOn(&run_tests.step);
}
