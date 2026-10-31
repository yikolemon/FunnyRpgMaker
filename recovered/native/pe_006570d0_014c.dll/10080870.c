/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080870 */

undefined4
FUN_10080870(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *unaff_FS_OFFSET;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c30b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  FUN_1008101e(param_1,param_2,param_3,param_4);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

