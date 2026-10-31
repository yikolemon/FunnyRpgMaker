/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027f558 */

undefined8 * FUN_14027f558(undefined8 *param_1,longlong param_2,undefined8 param_3)

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
  FUN_14028145c(param_1,param_2,&DAT_1406290f8,&local_9c,param_3,&DAT_1404c953c);
  *local_20 = &DAT_1404c9548;
  local_98 = local_20 + 0xb;
  local_20[0xb] = 0;
  local_20[0xc] = 0;
  local_20[0xd] = 0;
  *(undefined4 *)(local_20 + 0xe) = 0;
  local_90 = local_20 + 0xf;
  FUN_140212724(local_90,"o long");
  local_88 = local_20 + 0x13;
  FUN_140212724(local_88,"o long");
  local_80 = local_20 + 0x17;
  local_20[0x17] = 0;
  local_20[0x18] = 0;
  local_20[0x19] = 0;
  local_78 = local_20 + 0x1a;
  FUN_140212724(local_78,"o long");
  local_70 = local_20 + 0x1e;
  local_20[0x1e] = 0;
  local_20[0x1f] = 0;
  local_20[0x20] = 0;
  local_68 = local_20 + 0x21;
  FUN_140212724(local_68,"o long");
  local_60 = local_20 + 0x25;
  FUN_140212724(local_60,"o long");
  local_58 = local_20 + 0x29;
  FUN_140212724(local_58,"o long");
  local_50 = local_20 + 0x2d;
  FUN_140212724(local_50,"o long");
  local_48 = local_20 + 0x31;
  FUN_140212724(local_48,"o long");
  local_40 = local_20 + 0x35;
  FUN_140212724(local_40,"o long");
  local_38 = local_20 + 0x39;
  FUN_140212724(local_38,"o long");
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
    FUN_140281564(local_20,param_2);
  }
  return local_20;
}

