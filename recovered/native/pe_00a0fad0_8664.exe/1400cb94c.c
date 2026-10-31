/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cb94c */

undefined8 * FUN_1400cb94c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
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
  puVar2 = param_1 + 0xc;
  FUN_14000892c(puVar2,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  puVar3 = param_1 + 0x13;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14005872a(puVar3,*(longlong *)(param_2 + 0xa0) - *(longlong *)(param_2 + 0x98),param_2 + 0x98,
                param_2 + 0xa0);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_1400cbba4(param_1 + 0x16,*(longlong *)(param_2 + 0xb8) - *(longlong *)(param_2 + 0xb0) >> 7,
                param_2 + 0xb0,param_2 + 0xb8,param_1 + 0x16,puVar2,puVar3,param_1,uVar4);
  return param_1;
}

