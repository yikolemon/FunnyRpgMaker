/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403738 */

undefined4 * __cdecl
FUN_00403738(undefined4 *param_1,uint *param_2,uint param_3,LPCWSTR param_4,LPCWSTR param_5)

{
  LPCWSTR pWVar1;
  uint uVar2;
  uint **local_60 [4];
  uint local_50;
  uint local_4c;
  uint **local_48 [4];
  uint local_38;
  uint local_34;
  uint **local_30;
  uint **local_2c;
  UINT local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_60;
  local_18 = &LAB_00406f20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  local_28 = FUN_00481b00();
  pWVar1 = param_4 + 8;
  if (7 < *(uint *)(param_4 + 10)) {
    param_4 = *(LPCWSTR *)param_4;
  }
  local_2c = (uint **)local_48;
  local_30 = (uint **)local_60;
  FUN_00404058((LPSTR)local_30,local_28,param_4,*(int **)pWVar1);
  local_14 = 1;
  pWVar1 = param_5 + 8;
  if (7 < *(uint *)(param_5 + 10)) {
    param_5 = *(LPCWSTR *)param_5;
  }
  FUN_00404058((LPSTR)local_48,local_28,param_5,*(int **)pWVar1);
  local_14 = 2;
  uVar2 = local_38 + param_3 + local_50 + (uint)(local_38 != 0) * 4 + 4;
  if ((uint)param_1[5] < uVar2) {
    local_28 = param_1[4];
    FUN_004044d6(param_1,uVar2 - local_28);
    param_1[4] = local_28;
  }
  FUN_00403c80(param_1,param_2,param_3);
  FUN_00403c80(param_1,(uint *)&DAT_00504bf9,3);
  if (0xf < local_4c) {
    local_30 = local_60[0];
  }
  FUN_00403c80(param_1,(uint *)local_30,local_50);
  if (local_38 != 0) {
    FUN_00403c80(param_1,(uint *)&DAT_00504bfd,4);
    if (0xf < local_34) {
      local_2c = local_48[0];
    }
    FUN_00403c80(param_1,(uint *)local_2c,local_38);
  }
  FUN_0040459c(param_1,0x22);
  local_14 = 0xffffffff;
  FUN_0040230a((int *)local_48);
  FUN_0040230a((int *)local_60);
  ExceptionList = local_1c;
  return param_1;
}

