/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ec70 */

undefined4 * __thiscall FUN_1008ec70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3830;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  local_24 = param_1 + 1;
  FUN_10091cfc();
  local_14 = 1;
  iVar1 = FUN_10271d80(param_2);
  local_28 = param_1;
  FUN_10091c24(param_2,param_2 + iVar1 * 2,param_3);
  *unaff_FS_OFFSET = local_1c;
  return local_28;
}

