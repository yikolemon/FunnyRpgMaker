/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402a9132 */

void FUN_1402a9132(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[2] = param_2;
  param_1[3] = uVar1;
  *param_1 = 0xc000000000000000;
  uVar1 = param_3[2];
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  param_1[4] = param_3;
  param_1[5] = uVar1;
  param_1[1] = 0xc000000000000010;
  return;
}

