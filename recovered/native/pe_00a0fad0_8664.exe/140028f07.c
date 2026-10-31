/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140028f07 */

undefined8 * FUN_140028f07(undefined8 *param_1,undefined8 *param_2)

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
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_2[5] = 0;
  param_2[6] = 0xf;
  *(undefined1 *)(param_2 + 3) = 0;
  uVar1 = param_2[9];
  param_2[9] = 0;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar1;
  return param_1;
}

