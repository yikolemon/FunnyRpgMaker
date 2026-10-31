/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ddfe0 */

bool FUN_1400ddfe0(void)

{
  HMODULE pHVar1;
  longlong lVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (lVar2 = (longlong)pHVar1[0xf].unused, *(int *)((longlong)&pHVar1->unused + lVar2) == 0x4550))
     && ((*(short *)((longlong)&pHVar1[6].unused + lVar2) == 0x20b &&
         (0xe < *(uint *)((longlong)&pHVar1[0x21].unused + lVar2))))) {
    return *(int *)((longlong)&pHVar1[0x3e].unused + lVar2) != 0;
  }
  return false;
}

