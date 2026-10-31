/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801839f7 */

void FUN_1801839f7(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  param_1[3] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[4] = *param_3;
  param_1[1] = 0x3000000000000008;
  uVar1 = param_4[2];
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  param_1[5] = param_4;
  param_1[6] = uVar1;
  param_1[2] = 0xc000000000000010;
  return;
}

