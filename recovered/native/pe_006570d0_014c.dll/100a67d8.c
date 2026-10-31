/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a67d8 */

int FUN_100a67d8(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100c42c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = param_3;
  local_14 = 0;
  while (param_1 != param_2) {
    local_24 = local_28;
    local_30 = param_1;
    local_2c = param_3;
    FUN_100a64c2(param_1);
    param_3 = local_2c + 0x4c;
    param_1 = local_30 + 0x4c;
  }
  *unaff_FS_OFFSET = local_1c;
  return param_3;
}

