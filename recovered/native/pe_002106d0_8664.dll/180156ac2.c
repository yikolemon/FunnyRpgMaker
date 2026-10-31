/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180156ac2 */

void FUN_180156ac2(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1[1] < 0) {
    uVar1 = FUN_1800fe7f8(0);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x18);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    param_1[1] = 0;
  }
  *param_1 = 0;
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

