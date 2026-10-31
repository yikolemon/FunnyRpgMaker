/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180014c98 */

void FUN_180014c98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  while (lVar1 != 0) {
    FUN_180014cd0(param_1);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_180014d32(param_1);
  return;
}

