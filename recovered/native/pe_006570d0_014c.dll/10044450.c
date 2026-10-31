/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044450 */

undefined4 FUN_10044450(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a640;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = FUN_10228350(0x18);
  local_14 = 0;
  local_24 = local_28;
  FUN_1000334a(param_1);
  *unaff_FS_OFFSET = local_1c;
  return local_28;
}

