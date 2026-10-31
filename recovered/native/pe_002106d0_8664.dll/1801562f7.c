/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801562f7 */

void FUN_1801562f7(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar1;
  }
  return;
}

