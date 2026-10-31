/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c0ca */

undefined4 FUN_1006c0ca(undefined4 param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_38 [24];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2550;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10002056(param_1,0);
  local_14 = 0;
  uVar1 = FUN_1000404c(local_38);
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return uVar1;
}

