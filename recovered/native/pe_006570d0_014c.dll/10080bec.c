/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080bec */

undefined4 * __thiscall FUN_10080bec(undefined4 *param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c30e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  local_24 = param_1;
  if (param_2 == param_3) {
    param_1[5] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    FUN_10080c82(param_2,param_3,param_3 - param_2);
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

