/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004406a */

void FUN_1004406a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_1005a5f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 0;
  local_24 = (undefined4 *)0x0;
  local_28 = (undefined4 *)FUN_10228350(0x38);
  local_24 = local_28;
  FUN_1004411c(param_3);
  *local_28 = param_2;
  local_28[1] = param_2;
  local_28[2] = param_2;
  *(undefined2 *)(local_28 + 3) = 0;
  *unaff_FS_OFFSET = local_1c;
  return;
}

