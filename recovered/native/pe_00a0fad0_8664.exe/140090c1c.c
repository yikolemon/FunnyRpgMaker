/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140090c1c */

void FUN_140090c1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar1 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar1;
  }
  return;
}

