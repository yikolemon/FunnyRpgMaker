/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022b4b8 */

void FUN_14022b4b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar1 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar1;
  }
  return;
}

