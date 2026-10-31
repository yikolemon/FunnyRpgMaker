/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018956 */

undefined4 * __thiscall FUN_10018956(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100591d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  local_24 = param_1 + 1;
  FUN_1001c078();
  local_14 = 1;
  sVar1 = _strlen(param_2);
  local_28 = param_1;
  FUN_1001bf04(param_2,param_2 + sVar1,param_3);
  *unaff_FS_OFFSET = local_1c;
  return local_28;
}

