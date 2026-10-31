/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cc181 */

undefined8 * FUN_1400cc181(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  uVar1 = param_2[10];
  param_2[10] = 0;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_2[8] = 0;
  param_2[9] = 0;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  return param_1;
}

