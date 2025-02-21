load("@rules_cc//cc:defs.bzl","cc_library")
cc_library(
    name = "example_library",
    hdrs = ["example.h"],
    srcs = ["example.c"],
    visibility = ["//visibility:public"],
)
cc_binary(
    name = "example_binary",
    srcs = ["example.c",],
    visibility = ["//visibility:public"],
    deps = ["example_library"],
)