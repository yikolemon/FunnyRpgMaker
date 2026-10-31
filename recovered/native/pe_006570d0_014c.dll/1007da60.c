/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007da60 */

undefined4 FUN_1007da60(undefined4 param_1)

{
  undefined4 ***pppuVar1;
  int *unaff_FS_OFFSET;
  undefined4 **local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2e80;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10001e84(param_1,0);
  local_14 = 0;
  pppuVar1 = local_3c;
  if (7 < local_28) {
    pppuVar1 = (undefined4 ***)local_3c[0];
  }
  FUN_100048de(pppuVar1,local_2c);
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

