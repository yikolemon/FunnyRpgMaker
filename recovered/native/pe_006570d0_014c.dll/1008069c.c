/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008069c */

undefined4 * __thiscall FUN_1008069c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 **ppuVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100c3090;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = std::exception::vftable;
  local_2c = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  local_14 = 0;
  *param_1 = WolfRPGException::vftable;
  local_24 = param_1;
  ppuVar2 = &local_2c;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_1039cc24) {
    FUN_1022c0d0(&DAT_1039cc24);
    ppuVar2 = (undefined4 **)local_20;
    if (DAT_1039cc24 == -1) {
      local_14 = 1;
      FUN_10075be2();
      FUN_1022c3a0(&LAB_10080db4);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039cc24);
      param_1 = local_24;
      ppuVar2 = (undefined4 **)local_20;
    }
  }
  local_20 = (undefined1 *)ppuVar2;
  local_28 = param_1 + 3;
  piVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  local_14 = 0;
  FUN_1007671c(local_28,param_2,(int)param_2 + *piVar1 * 2);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

