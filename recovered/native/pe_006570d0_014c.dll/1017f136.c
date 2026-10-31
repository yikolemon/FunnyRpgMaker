/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017f136 */

void FUN_1017f136(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 2) = 0;
  uVar2 = param_2[10];
  param_2[10] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_2[9] = 0;
  param_2[8] = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_1[10] = uVar2;
  return;
}

