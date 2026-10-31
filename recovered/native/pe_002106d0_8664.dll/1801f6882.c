/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6882 */

void FUN_1801f6882(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  FUN_1801f6ac6();
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4);
    *piVar1 = *piVar1 + param_3;
  }
  return;
}

