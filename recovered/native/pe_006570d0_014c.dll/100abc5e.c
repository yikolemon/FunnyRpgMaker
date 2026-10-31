/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100abc5e */

undefined4 FUN_100abc5e(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 local_20;
  undefined1 local_19;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_100c4540;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_100ac0f8(param_1,&local_19);
  *unaff_FS_OFFSET = local_14;
  return local_20;
}

