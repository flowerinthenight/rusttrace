#pragma once

#ifdef __cplusplus
extern "C" {
#endif

    void __rt_trace(const char* m);
    void __rt_init(const char* m);
    void __rt_cleanup(const char* m);

#ifdef __cplusplus
}
#endif