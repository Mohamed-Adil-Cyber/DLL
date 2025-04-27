#include <windows.h>

__declspec(dllexport) void PrintString(){
    MessageBoxA(NULL,"Testing DLL coding", "Testing prints", MB_OK);
    return;
}


__declspec(dllexport) void TestOptions(){
    MessageBoxA(NULL,"Testing yes and no", "Testing options", MB_YESNO);
    return;
}


__declspec(dllexport) void TestOptions2(){
    MessageBoxA(NULL,"Testing yes and no and cancel", "Testing options", MB_YESNOCANCEL);
    return;
}


BOOL WINAPI DllMain(HINSTANCE hinstdll, DWORD fdwReason, LPVOID lpReserved){
    return TRUE;
}

