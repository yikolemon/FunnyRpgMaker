/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d25a */

void FUN_1001d25a(int param_1)

{
  undefined *puVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059450;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  puVar1 = (undefined *)0xe;
  if (*(int *)(param_1 + 4) - 8U < 4) {
    puVar1 = (&PTR_s_array_1028f474)[*(int *)(param_1 + 4)];
  }
  local_24 = (undefined4 *)FUN_10228350(0x18);
  local_24[1] = puVar1;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_14 = 0xffffffff;
  *local_24 = std::_Node_end_group::vftable;
  local_24[5] = param_1;
  FUN_1001d4f8(local_24);
  *unaff_FS_OFFSET = local_1c;
  return;
}

