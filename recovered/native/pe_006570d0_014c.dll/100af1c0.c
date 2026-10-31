/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100af1c0 */

undefined4 * __thiscall FUN_100af1c0(undefined4 *param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c46f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = *param_2;
  local_24 = param_1 + 1;
  FUN_10002e46(param_2 + 1);
  param_1[7] = param_2[7];
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

