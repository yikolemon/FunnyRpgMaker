/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041a3a0 */

int __fastcall FUN_0041a3a0(undefined4 param_1,undefined4 param_2)

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

