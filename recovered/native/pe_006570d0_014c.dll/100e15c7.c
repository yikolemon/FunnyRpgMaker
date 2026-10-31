/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e15c7 */

undefined4 FUN_100e15c7(void)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_f8 [3];
  undefined1 local_f5;
  undefined4 local_f4;
  int local_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined2 uStack_ea;
  undefined4 local_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  int local_e0;
  int aiStack_a8 [9];
  int local_84;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_f8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ea850;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_10080870();
  local_18 = 0;
  if (local_84 == 0) {
    FUN_10001f66(&DAT_10356101);
  }
  else {
    local_e8 = 0;
    uStack_e4 = 1;
    local_f0 = *(int *)((int)aiStack_a8 + *(int *)(local_e0 + 4));
    uStack_ec = local_f0 == 0;
    uStack_eb = 0;
    FUN_100e1c7a(CONCAT26(uStack_ea,(uint6)CONCAT14(uStack_ec,local_f0)),
                 CONCAT26(uStack_e2,0x100000000),&local_f5);
  }
  local_18 = 0xffffffff;
  FUN_10080b20();
  *unaff_FS_OFFSET = local_20;
  return local_f4;
}

