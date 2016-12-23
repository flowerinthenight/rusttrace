// rusttrace-test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "../libtrace/libtrace.h"

#pragma comment(lib, "libtrace.lib")

int main()
{
    __rt_init("test init");

    for (int i = 0; i < 10; i++) {
        char m[MAX_PATH];
        sprintf_s(m, MAX_PATH, "trace = %d", i);
        __rt_trace(m);
    }

    __rt_cleanup("test cleanup");
    return 0;
}

