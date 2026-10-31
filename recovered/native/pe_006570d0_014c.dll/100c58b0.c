/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c58b0 */

undefined4 * FUN_100c58b0(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c7dc0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_14 = 0;
  local_24 = param_1;
  FUN_100c593a();
  FUN_100c593a();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

