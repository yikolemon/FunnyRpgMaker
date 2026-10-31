/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004eb78 */

undefined4 FUN_1004eb78(undefined4 param_1,int param_2,int param_3)

{
  undefined4 ***pppuVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_5c;
  undefined4 local_58 [6];
  int local_40;
  undefined4 **local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a870;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10001f66("syntax error ");
  local_14 = 0;
  if (*(int *)(param_3 + 0x10) != 0) {
    local_58[0] = CONCAT31(local_58[0]._1_3_,0x20);
    FUN_10050f4a(local_3c,"while parsing ",param_3,local_58);
    local_14 = 5;
    pppuVar1 = local_3c;
    if (0xf < local_28) {
      pppuVar1 = (undefined4 ***)local_3c[0];
    }
    FUN_1000347e(pppuVar1,local_2c);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  local_14 = 0;
  FUN_1000347e(&DAT_1034bc7d,2);
  if (*(int *)(local_40 + 0x28) == 0xe) {
    local_21 = 0x27;
    FUN_1004edf4(local_58);
    local_14 = 3;
    local_5c = *(undefined4 *)(local_40 + 0x74);
    FUN_100546d0(local_3c,&local_5c,"; last read: \'",local_58,&local_21);
    local_14 = 4;
    pppuVar1 = local_3c;
    if (0xf < local_28) {
      pppuVar1 = (undefined4 ***)local_3c[0];
    }
    FUN_1000347e(pppuVar1,local_2c);
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10001fee();
  }
  else {
    local_58[0] = FUN_100547ee(*(int *)(local_40 + 0x28));
    FUN_10017682(local_3c,"unexpected ",local_58);
    local_14 = 2;
    pppuVar1 = local_3c;
    if (0xf < local_28) {
      pppuVar1 = (undefined4 ***)local_3c[0];
    }
    FUN_1000347e(pppuVar1,local_2c);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  if (param_2 != 0) {
    local_58[0] = FUN_100547ee(param_2);
    local_14 = 0;
    FUN_10017682(local_3c,"; expected ",local_58);
    local_14 = 1;
    pppuVar1 = local_3c;
    if (0xf < local_28) {
      pppuVar1 = (undefined4 ***)local_3c[0];
    }
    FUN_1000347e(pppuVar1,local_2c);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

