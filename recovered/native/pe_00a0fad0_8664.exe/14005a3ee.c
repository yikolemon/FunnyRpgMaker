/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005a3ee */

undefined8 * FUN_14005a3ee(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[1] = 0;
    param_3 = param_3 + 2;
  }
  return param_3;
}

