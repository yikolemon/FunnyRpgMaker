/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f33e */

void FUN_18012f33e(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1[1] < param_2) {
    uVar1 = FUN_1800fe7f8((longlong)param_2);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}

