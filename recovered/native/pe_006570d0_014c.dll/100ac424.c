/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ac424 */

int FUN_100ac424(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c45d0;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  FUN_1000334a(param_1);
  *(undefined4 *)(local_20 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

