/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009b26d */

longlong FUN_14009b26d(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  while ((lVar1 = param_1, lVar2 != 0 && (lVar1 = FUN_14009b26d(), lVar1 == 0))) {
    param_1 = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  return lVar1;
}

