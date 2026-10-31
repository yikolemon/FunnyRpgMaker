/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009e638 */

undefined4 FUN_1009e638(undefined4 param_1,undefined1 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_f0 [2];
  undefined2 local_ee;
  int *local_ec;
  code *local_e8 [2];
  undefined4 local_e0;
  undefined4 local_dc;
  int local_c8 [5];
  uint auStack_b4 [35];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_f0;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3e70;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_1009fee2(1);
  local_18 = 0;
  local_ec = (int *)FUN_100a0005(local_c8,&DAT_103563ee);
  FUN_100a02a6(&local_ee,0x30);
  *(undefined2 *)((int)local_ec + *(int *)(*local_ec + 4) + 0x40) = local_ee;
  FUN_102331e0(local_e8,2,0);
  (*local_e8[0])((int)local_ec + *(int *)(*local_ec + 4),local_e0,local_dc);
  *(uint *)((int)auStack_b4 + *(int *)(local_c8[0] + 4)) =
       *(uint *)((int)auStack_b4 + *(int *)(local_c8[0] + 4)) & 0xfffff1ff | 0x800;
  FUN_100a02b4(param_2);
  FUN_100a302e(param_1);
  local_18 = 0xffffffff;
  FUN_100a0488();
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

