/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018d305 */

void FUN_18018d305(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 < *(int *)(param_1 + 0x20)) {
    FUN_18018d35e(param_2,param_1);
    iVar1 = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_3 + 0x20) < iVar1) {
    FUN_18018d35e(param_3,param_2);
    if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x20)) {
      FUN_18018d35e(param_2,param_1);
      return;
    }
  }
  return;
}

