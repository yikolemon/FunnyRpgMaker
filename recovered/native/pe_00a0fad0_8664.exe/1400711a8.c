/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400711a8 */

undefined8 * FUN_1400711a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_3[1];
  param_1[4] = *param_3;
  param_1[5] = uVar1;
  *(undefined1 *)param_3 = 0;
  param_3[1] = 0;
  return param_1;
}

