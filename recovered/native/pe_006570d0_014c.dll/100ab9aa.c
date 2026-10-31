/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ab9aa */

int FUN_100ab9aa(int param_1,int param_2,int param_3)

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
  local_18 = &LAB_100c4520;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = param_3;
  local_14 = 0;
  while (param_1 != param_2) {
    local_24 = local_28;
    local_30 = param_3;
    local_2c = param_1;
    FUN_100ac49d(param_3,param_1);
    param_3 = local_30 + 0x44;
    param_1 = local_2c + 0x44;
  }
  *unaff_FS_OFFSET = local_1c;
  return param_3;
}

