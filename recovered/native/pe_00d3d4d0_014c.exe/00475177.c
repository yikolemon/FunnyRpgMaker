/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00475177 */

int __fastcall FUN_00475177(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_4c;
  int local_48;
  uint *local_44;
  int local_40;
  undefined4 local_3c;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_4c;
  local_4c = param_3[2];
  iVar1 = *(int *)(param_1 + 4);
  local_44 = param_3;
  local_3c = 1;
  param_3[2] = local_4c * 3;
  *param_3 = *param_3 / 3;
  local_48 = param_2;
  local_40 = param_2;
  FUN_0041de08(param_2,-*(int *)(iVar1 + 0xb8),*(int *)(iVar1 + 0xb4));
  iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_44);
  if (iVar2 == 0) {
    param_3[3] = param_3[3] + local_4c;
    FUN_0041de08(local_48,*(int *)(iVar1 + 0xb8) - *(int *)(iVar1 + 0xc0),
                 *(int *)(iVar1 + 0xbc) - *(int *)(iVar1 + 0xb4));
    iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_44);
    iVar3 = *(int *)(iVar1 + 0xbc);
    iVar4 = *(int *)(iVar1 + 0xc0);
    uVar5 = param_3[3] - local_4c;
    param_3[3] = uVar5;
    if (iVar2 == 0) {
      iVar2 = local_4c * 2;
      local_4c = local_4c * 2;
      param_3[3] = uVar5 + iVar2;
      FUN_0041de08(local_48,*(int *)(iVar1 + 0xc0) - *(int *)(iVar1 + 200),
                   *(int *)(iVar1 + 0xc4) - *(int *)(iVar1 + 0xbc));
      iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_44);
      iVar3 = *(int *)(iVar1 + 0xc4);
      iVar4 = *(int *)(iVar1 + 200);
      param_3[3] = param_3[3] - local_4c;
    }
  }
  else {
    iVar3 = *(int *)(iVar1 + 0xb4);
    iVar4 = *(int *)(iVar1 + 0xb8);
  }
  FUN_0041de08(local_48,iVar4,-iVar3);
  param_3[2] = (int)param_3[2] / 3;
  *param_3 = *param_3 * 3;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_4c)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_4c);
}

