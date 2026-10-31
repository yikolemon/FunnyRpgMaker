/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d6e4 */

undefined4 * FUN_1007d6e4(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100c2e50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  FUN_1007d77a(&local_2c);
  if (local_2c != 0) {
    FUN_100180a6(local_2c,local_28);
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

