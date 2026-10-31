/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017cc2d */

void FUN_1017cc2d(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_2[8] = 0;
  param_2[9] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  uVar2 = param_2[0xc];
  param_2[0xc] = 0;
  uVar1 = *(undefined8 *)(param_2 + 10);
  param_2[0xb] = 0;
  param_2[10] = 0;
  *(undefined8 *)(param_1 + 10) = uVar1;
  param_1[0xc] = uVar2;
  return;
}

