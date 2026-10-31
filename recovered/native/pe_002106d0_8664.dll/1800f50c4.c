/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f50c4 */

void FUN_1800f50c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  while (lVar1 != 0) {
    FUN_1800f50fc(param_1);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1800bbcde(param_1);
  return;
}

