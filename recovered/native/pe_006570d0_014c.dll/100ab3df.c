/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ab3df */

int FUN_100ab3df(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  bool bVar1;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100c44d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = param_3;
  local_14 = 0;
  local_30 = param_2;
  while( true ) {
    bVar1 = local_30 == 0;
    local_30 = local_30 + -1;
    if (bVar1) break;
    local_24 = local_28;
    local_34 = param_1;
    local_2c = param_3;
    FUN_1000334a(param_1);
    param_3 = local_2c + 0x18;
    param_1 = local_34 + 0x18;
  }
  *unaff_FS_OFFSET = local_1c;
  return param_3;
}

