/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006d70c */

int FUN_1006d70c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  int local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c2680;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  FUN_1006d586(param_1);
  iVar1 = local_20;
  local_10 = 0;
  FUN_1006d7c2(param_3);
  **(undefined4 **)(iVar1 + 4) = param_2;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xd) = 0;
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

