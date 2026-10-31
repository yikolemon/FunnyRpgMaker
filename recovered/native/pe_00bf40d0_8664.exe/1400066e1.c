/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400066e1 */

void FUN_1400066e1(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x12) = param_4;
  return;
}

