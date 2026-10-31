/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a29e0 */

void FUN_1800a29e0(undefined8 *param_1,undefined8 *param_2)

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
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  uVar1 = param_2[6];
  param_2[6] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar1;
  uVar1 = param_2[9];
  param_2[9] = 0;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  return;
}

