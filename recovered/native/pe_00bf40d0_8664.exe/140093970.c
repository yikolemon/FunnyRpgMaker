/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093970 */

/* Library Function - Single Match
    void __cdecl common_end_thread(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl common_end_thread(uint param_1)

{
  longlong lVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = FUN_1400a1588();
  if ((p_Var2 != (__acrt_ptd *)0x0) && (lVar1 = *(longlong *)(p_Var2 + 0x3c0), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) != '\0') {
      FUN_1400a21b0();
    }
    if ((longlong)*(HANDLE *)(lVar1 + 0x10) - 1U < 0xfffffffffffffffe) {
      CloseHandle(*(HANDLE *)(lVar1 + 0x10));
    }
    if ((undefined1 *)((longlong)&(*(HMODULE *)(lVar1 + 0x18))[-1].unused + 3U) <
        (undefined1 *)0xfffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(*(HMODULE *)(lVar1 + 0x18),param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}

