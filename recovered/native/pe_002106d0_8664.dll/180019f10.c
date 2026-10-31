/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180019f10 */

void FUN_180019f10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    param_1[2] = param_3[2];
    uVar1 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar1;
  }
  return;
}

