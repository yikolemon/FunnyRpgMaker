/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c5d04 */

undefined8 * FUN_1400c5d04(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = WolfDataBase::vftable;
  FUN_140041956(param_1 + 1,param_2 + 8);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_14005872a(param_1 + 5,*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28),
                param_2 + 0x28,param_2 + 0x30);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x4f) = *(undefined4 *)(param_2 + 0x4f);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = Map::vftable;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar3;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 7;
  *(undefined2 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  param_1[0x18] = uVar1;
  return param_1;
}

