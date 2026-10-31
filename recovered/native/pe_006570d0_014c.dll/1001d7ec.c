/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d7ec */

undefined4 * FUN_1001d7ec(int param_1)

{
  undefined4 *puVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_10059470;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  puVar1 = (undefined4 *)FUN_10228350(0x14);
  puVar1[1] = DAT_1028f568;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  local_10 = 0xffffffff;
  *puVar1 = std::_Node_endif::vftable;
  local_24 = puVar1;
  FUN_1001d4f8(puVar1);
  local_20 = (undefined4 *)FUN_10228350(0x1c);
  local_20[1] = DAT_1028f56c;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  *local_20 = std::_Node_if::vftable;
  local_20[5] = puVar1;
  local_20[6] = 0;
  local_10 = 0xffffffff;
  FUN_1002065a(*(undefined4 *)(param_1 + 0xc),local_20);
  *unaff_FS_OFFSET = local_18;
  return puVar1;
}

