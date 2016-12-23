# Overview

This library provides bindings to ETW event call APIs generated from the [ETW manifest file](./manifest/rtrace.man). Currently, three functions are provided in the manifest for reference: [`__rt_trace`, `__rt_init`, and `__rt_cleanup`](./rusttrace/libtrace/libtrace/exports.def). These functions are then exposed in [`libtrace.dll`](./rusttrace/libtrace/libtrace/libtrace.cpp).

# License

[The MIT License](./LICENSE.md)
