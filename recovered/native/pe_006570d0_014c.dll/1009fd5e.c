/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009fd5e */

int FUN_1009fd5e(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  bool bVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100c3f40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = param_1;
  local_14 = 0;
  local_30 = param_2;
  while( true ) {
    bVar1 = local_30 == 0;
    local_30 = local_30 + -1;
    if (bVar1) break;
    local_24 = local_28;
    local_2c = param_1;
    FUN_1009fe10();
    param_1 = local_2c + 0x34;
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

