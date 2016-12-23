// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "../../manifest/rtrace.h"

//
// DLL Entry Point.
//
BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        EventRegisterRustTrace();
        break;

    case DLL_PROCESS_DETACH:
        EventUnregisterRustTrace();
        break;

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        break;
    }

    return TRUE;
}