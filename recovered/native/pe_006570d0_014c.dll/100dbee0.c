/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dbee0 */

undefined8 * __thiscall FUN_100dbee0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *param_3;
  *(undefined4 *)((int)param_1 + 0xc) = param_3[1];
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  *(undefined4 *)(param_1 + 2) = param_3[2];
  *(undefined4 *)((int)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((int)param_1 + 0x1c) = uVar3;
  param_1[4] = *(undefined8 *)(param_3 + 6);
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 2) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  param_1[7] = *(undefined8 *)(param_3 + 0xc);
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  *(undefined4 *)(param_1 + 5) = param_3[8];
  *(undefined4 *)((int)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((int)param_1 + 0x34) = uVar3;
  param_3[0xc] = 0;
  param_3[0xd] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  param_1[8] = *(undefined8 *)(param_3 + 0xe);
  return param_1;
}

