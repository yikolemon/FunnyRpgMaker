/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c0d66 */

undefined8 * FUN_1400c0d66(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_9c = 0;
  local_20 = param_1;
  FUN_1400860ca(param_1,param_2,&DAT_1401d4810,&local_9c,param_3,&DAT_140165d71);
  *local_20 = GameDat::vftable;
  local_98 = local_20 + 0xb;
  local_20[0xb] = 0;
  local_20[0xc] = 0;
  local_20[0xd] = 0;
  *(undefined4 *)(local_20 + 0xe) = 0;
  local_90 = local_20 + 0xf;
  FUN_14000f628(local_90,&DAT_140174404);
  local_88 = local_20 + 0x13;
  FUN_14000f628(local_88,&DAT_140174404);
  local_80 = local_20 + 0x17;
  local_20[0x17] = 0;
  local_20[0x18] = 0;
  local_20[0x19] = 0;
  local_78 = local_20 + 0x1a;
  FUN_14000f628(local_78,&DAT_140174404);
  local_70 = local_20 + 0x1e;
  local_20[0x1e] = 0;
  local_20[0x1f] = 0;
  local_20[0x20] = 0;
  local_68 = local_20 + 0x21;
  FUN_14000f628(local_68,&DAT_140174404);
  local_60 = local_20 + 0x25;
  FUN_14000f628(local_60,&DAT_140174404);
  local_58 = local_20 + 0x29;
  FUN_14000f628(local_58,&DAT_140174404);
  local_50 = local_20 + 0x2d;
  FUN_14000f628(local_50,&DAT_140174404);
  local_48 = local_20 + 0x31;
  FUN_14000f628(local_48,&DAT_140174404);
  local_40 = local_20 + 0x35;
  FUN_14000f628(local_40,&DAT_140174404);
  local_38 = local_20 + 0x39;
  FUN_14000f628(local_38,&DAT_140174404);
  local_20[0x3d] = 0;
  *(undefined4 *)(local_20 + 0x3e) = 0;
  local_30 = local_20 + 0x3f;
  local_20[0x3f] = 0;
  local_20[0x40] = 0;
  local_20[0x41] = 0;
  local_28 = local_20 + 0x43;
  local_20[0x44] = 0;
  local_20[0x45] = 0;
  local_20[0x42] = 0;
  local_20[0x43] = 0;
  *(undefined4 *)(local_20 + 0x46) = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400861d2(local_20,param_2);
  }
  return local_20;
}

