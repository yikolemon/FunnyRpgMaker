/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cf1b4 */

int __fastcall FUN_100cf1b4(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"IsWow64Process"), pFVar1 != (FARPROC)0x0)) {
    iVar2 = (*pFVar1)(param_1,param_2);
    return iVar2;
  }
  return 0;
}

