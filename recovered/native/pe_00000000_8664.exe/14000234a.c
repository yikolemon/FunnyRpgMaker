/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000234a */

void FUN_14000234a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  while (lVar1 != 0) {
    FUN_140002382(param_1);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400023c4(param_1);
  return;
}

