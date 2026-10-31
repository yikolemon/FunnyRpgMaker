/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400720af */

undefined8 * FUN_1400720af(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[2];
  param_2[2] = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = param_2[3];
  return param_1;
}

