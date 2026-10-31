/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007a40e */

undefined4 FUN_1007a40e(undefined4 param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_f0 [3];
  undefined1 local_ed;
  int local_ec;
  code *local_e8 [2];
  undefined4 local_e0;
  undefined4 local_dc;
  int local_c8 [5];
  uint auStack_b4 [11];
  undefined1 auStack_88 [96];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_f0;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2ce0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_1007aee8(1);
  local_18 = 0;
  for (local_ec = 0; local_ec != 0x40; local_ec = local_ec + 8) {
    *(uint *)((int)auStack_b4 + *(int *)(local_c8[0] + 4)) =
         *(uint *)((int)auStack_b4 + *(int *)(local_c8[0] + 4)) & 0xfffff1ff | 0x800;
    FUN_102331e0(local_e8,0x10,0);
    (*local_e8[0])((int)local_c8 + *(int *)(local_c8[0] + 4),local_e0,local_dc);
    FUN_1007b00b(&local_ed,0x30);
    auStack_88[*(int *)(local_c8[0] + 4)] = local_ed;
    FUN_1007b016(*(undefined4 *)(param_2 + local_ec),*(undefined4 *)(param_2 + 4 + local_ec));
  }
  FUN_1007d6e4(param_1);
  local_18 = 0xffffffff;
  FUN_1007b1f0();
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

