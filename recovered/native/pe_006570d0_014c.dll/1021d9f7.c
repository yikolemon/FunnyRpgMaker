/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021d9f7 */

int __fastcall FUN_1021d9f7(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_4c;
  undefined4 local_48;
  uint *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  local_4c = param_3[2];
  iVar1 = *(int *)(param_1 + 4);
  local_44 = param_3;
  local_3c = 1;
  param_3[2] = local_4c * 3;
  *param_3 = *param_3 / 3;
  local_48 = param_2;
  local_40 = param_2;
  FUN_101c1818(param_2,-*(int *)(iVar1 + 0xb8),*(undefined4 *)(iVar1 + 0xb4));
  iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_44);
  if (iVar2 == 0) {
    param_3[3] = param_3[3] + local_4c;
    FUN_101c1818(local_48,*(int *)(iVar1 + 0xb8) - *(int *)(iVar1 + 0xc0),
                 *(int *)(iVar1 + 0xbc) - *(int *)(iVar1 + 0xb4));
    iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_44);
    iVar3 = *(int *)(iVar1 + 0xbc);
    uVar4 = *(undefined4 *)(iVar1 + 0xc0);
    uVar5 = param_3[3] - local_4c;
    param_3[3] = uVar5;
    if (iVar2 == 0) {
      iVar2 = local_4c * 2;
      local_4c = local_4c * 2;
      param_3[3] = uVar5 + iVar2;
      FUN_101c1818(local_48,*(int *)(iVar1 + 0xc0) - *(int *)(iVar1 + 200),
                   *(int *)(iVar1 + 0xc4) - *(int *)(iVar1 + 0xbc));
      iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_44);
      iVar3 = *(int *)(iVar1 + 0xc4);
      uVar4 = *(undefined4 *)(iVar1 + 200);
      param_3[3] = param_3[3] - local_4c;
    }
  }
  else {
    iVar3 = *(int *)(iVar1 + 0xb4);
    uVar4 = *(undefined4 *)(iVar1 + 0xb8);
  }
  FUN_101c1818(local_48,uVar4,-iVar3);
  param_3[2] = (int)param_3[2] / 3;
  *param_3 = *param_3 * 3;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_4c)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

