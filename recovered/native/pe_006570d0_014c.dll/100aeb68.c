/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aeb68 */

undefined4 * __thiscall
FUN_100aeb68(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c46c0;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  *param_1 = *param_2;
  local_20 = param_1 + 1;
  FUN_1006d7c2(param_3);
  param_1[7] = param_4;
  *unaff_FS_OFFSET = local_18;
  return param_1;
}

