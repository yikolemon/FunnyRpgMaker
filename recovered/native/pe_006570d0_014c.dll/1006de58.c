/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006de58 */

int FUN_1006de58(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 ***pppuVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b0 [64];
  undefined1 local_70 [32];
  undefined4 **local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_b0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2700;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10002e46(param_1);
  local_14 = 0;
  *(undefined1 *)(local_24 + 0x18) = *param_2;
  *(undefined1 *)(local_24 + 0x19) = *param_3;
  local_70[0] = 0;
  FUN_10001e84(&DAT_10356101,0);
  local_14 = 1;
  local_34 = local_24 + 0x1c;
  FUN_1006e18c(local_50,local_70);
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_30 = local_24 + 0x19c;
  *(undefined4 *)(local_24 + 0x19c) = 0;
  *(undefined4 *)(local_24 + 0x1a0) = 0;
  *(undefined4 *)(local_24 + 0x1a4) = 0;
  local_14 = 3;
  local_2c = local_24 + 0x1a8;
  FUN_1006e56c();
  local_28 = local_24 + 500;
  *(undefined4 *)(local_24 + 500) = 0;
  *(undefined4 *)(local_24 + 0x1f8) = 0;
  *(undefined4 *)(local_24 + 0x1fc) = 0;
  *(undefined1 *)(local_24 + 0x200) = 0;
  local_14 = 6;
  FUN_10001e84("uncompressed",0);
  local_14 = 7;
  pppuVar1 = local_50;
  if (7 < local_3c) {
    pppuVar1 = (undefined4 ***)local_50[0];
  }
  FUN_10004664(pppuVar1,local_40);
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 6;
  FUN_1006e682();
  FUN_1006e794();
  FUN_1006e9a0();
  FUN_1006f10e();
  *(undefined1 *)(local_24 + 0x200) = 1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

