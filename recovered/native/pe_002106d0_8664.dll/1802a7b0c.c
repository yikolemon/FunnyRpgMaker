/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a7b0c */

/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_180416870,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_180416870 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_180416870);
      }
      DAT_180416870 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_180416870,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}

