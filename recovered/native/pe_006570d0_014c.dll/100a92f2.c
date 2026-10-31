/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a92f2 */

undefined4 * __thiscall FUN_100a92f2(undefined4 *param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c43e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  local_24 = param_1;
  FUN_1000254c(*param_2,param_2[1]);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

