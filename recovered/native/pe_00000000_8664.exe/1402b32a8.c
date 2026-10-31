/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b32a8 */

undefined8 * FUN_1402b32a8(undefined8 *param_1,undefined8 *param_2)

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
  param_2[7] = 7;
  *(undefined2 *)(param_2 + 4) = 0;
  uVar1 = param_2[10];
  param_2[10] = 0;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_2[8] = 0;
  param_2[9] = 0;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar1 = param_2[0xe];
  param_2[0xe] = 0;
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar1;
  param_1[0xf] = param_2[0xf];
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  uVar3 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar3;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  param_2[0x12] = 0;
  param_2[0x13] = 7;
  *(undefined2 *)(param_2 + 0x10) = 0;
  return param_1;
}

