/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018365a */

undefined8 * FUN_18018365a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)(param_2 + 2) = 0;
  uVar1 = param_2[8];
  param_2[8] = 0;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar1;
  return param_1;
}

