/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10076b48 */

undefined4 * __thiscall FUN_10076b48(int param_1,undefined4 *param_2,int *param_3)

{
  int *unaff_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c2bb0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_14 = 0;
  local_24 = param_1;
  if (*param_3 == -1) {
    FUN_10077646(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24),&local_28);
  }
  else {
    local_20 = (undefined1 *)&local_28;
    FUN_10077646(*param_3,&local_28);
  }
  local_28 = 0xffffffff;
  FUN_1007759e(param_2,&local_28);
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

