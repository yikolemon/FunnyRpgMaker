/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014f5d6 */

void FUN_18014f5d6(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[6] = 1;
  if ((int)param_1[9] < 0) {
    uVar1 = FUN_1800fe7f8(0);
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1802a82f0(uVar1,*(longlong *)(param_1 + 10),(longlong)(int)param_1[8] << 4);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 10));
    }
    *(undefined8 *)(param_1 + 10) = uVar1;
    param_1[9] = 0;
  }
  param_1[8] = 0;
  return;
}

