/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ca7b */

void FUN_1017ca7b(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_2[0xc] = 0;
  param_2[0xd] = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar2 = param_2[0xf];
  uVar3 = param_2[0x10];
  uVar4 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  uVar2 = param_2[0x15];
  param_2[0x15] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x13);
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  *(undefined8 *)(param_1 + 0x13) = uVar1;
  param_1[0x15] = uVar2;
  return;
}

