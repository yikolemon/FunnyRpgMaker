/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9a2a */

void FUN_100e9a2a(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar2 = param_2[8];
  param_2[8] = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[8] = uVar2;
  uVar2 = param_2[0xb];
  param_2[0xb] = 0;
  uVar1 = *(undefined8 *)(param_2 + 9);
  param_2[10] = 0;
  param_2[9] = 0;
  *(undefined8 *)(param_1 + 9) = uVar1;
  param_1[0xb] = uVar2;
  return;
}

