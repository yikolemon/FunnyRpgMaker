/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10050e0e */

undefined4 FUN_10050e0e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ***pppuVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined4 **local_38 [5];
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_80;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a930;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10001f66(&DAT_10356101);
  local_14 = 0;
  FUN_10001f66("out_of_range");
  local_14 = 1;
  FUN_10017b08(local_68,local_50,param_2);
  local_14 = 2;
  FUN_10017a0c(local_38,local_68,local_80,param_3);
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  FUN_10001fee();
  local_14 = 3;
  pppuVar1 = local_38;
  if (0xf < local_24) {
    pppuVar1 = (undefined4 ***)local_38[0];
  }
  FUN_100517c0(param_2,pppuVar1);
  local_14 = 0xffffffff;
  FUN_10001fee();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

