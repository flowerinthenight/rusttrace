// rusttrace.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <Windows.h>
#include "libtrace.h"
#include "../../manifest/rtrace.h"

void __rt_trace(const char* m) {
    EventWriteTrace(m);
}

void __rt_init(const char* m) {
    EventWriteInit(m);
}

void __rt_cleanup(const char* m) {
    EventWriteCleanup(m);
}