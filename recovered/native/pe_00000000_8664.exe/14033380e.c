/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033380e */

longlong FUN_14033380e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  while ((lVar1 = param_1, lVar2 != 0 && (lVar1 = FUN_14033380e(), lVar1 == 0))) {
    param_1 = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  return lVar1;
}

