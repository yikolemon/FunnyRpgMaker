/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a6182 */

undefined4 * __thiscall FUN_100a6182(undefined4 *param_1,undefined4 *param_2)

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
  param_2[7] = 7;
  *(undefined2 *)(param_2 + 2) = 0;
  param_1[8] = param_2[8];
  uVar2 = param_2[0xb];
  param_2[0xb] = 0;
  uVar1 = *(undefined8 *)(param_2 + 9);
  param_2[10] = 0;
  param_2[9] = 0;
  *(undefined8 *)(param_1 + 9) = uVar1;
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xe];
  param_2[0xe] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  param_1[0xe] = uVar2;
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  uVar2 = param_2[0x12];
  param_2[0x12] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  param_1[0x12] = uVar2;
  uVar2 = param_2[0x15];
  param_2[0x15] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x13);
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  *(undefined8 *)(param_1 + 0x13) = uVar1;
  param_1[0x15] = uVar2;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  return param_1;
}

