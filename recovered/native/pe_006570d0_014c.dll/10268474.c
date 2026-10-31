/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268474 */

/* Library Function - Single Match
    void __cdecl common_end_thread(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl common_end_thread(uint param_1)

{
  HANDLE hObject;
  HMODULE hLibModule;
  int iVar1;
  
  iVar1 = FUN_1027441e();
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x360), iVar1 != 0)) {
    if (*(char *)(iVar1 + 0x10) != '\0') {
      FUN_10274e4d();
    }
    hObject = *(HANDLE *)(iVar1 + 8);
    if ((hObject != (HANDLE)0xffffffff) && (hObject != (HANDLE)0x0)) {
      CloseHandle(hObject);
    }
    hLibModule = *(HMODULE *)(iVar1 + 0xc);
    if ((hLibModule != (HMODULE)0xffffffff) && (hLibModule != (HMODULE)0x0)) {
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(hLibModule,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}

