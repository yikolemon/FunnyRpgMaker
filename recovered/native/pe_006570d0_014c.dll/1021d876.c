/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021d876 */

int __fastcall FUN_1021d876(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_60;
  int local_5c;
  undefined4 *puStack_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  iVar1 = *(int *)(param_1 + 4);
  local_4c = 3;
  local_48 = &LAB_1021dbf5;
  local_38 = &local_24;
  local_34 = 0;
  local_30 = 0;
  local_2c = (uint)param_3[1] / 3;
  local_28 = *param_3;
  local_20 = param_3[2];
  local_24 = (local_28 + -1) * local_20;
  if (local_20 < 0) {
    local_24 = 0;
  }
  local_24 = local_24 + param_3[3];
  local_60 = param_2;
  local_50 = param_2;
  FUN_101c1818(param_2,-*(int *)(iVar1 + 0xb4),-*(int *)(iVar1 + 0xb8));
  local_5c = param_1;
  iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),local_54);
  if (iVar2 == 0) {
    local_24 = local_24 + 1;
    FUN_101c1818(local_60,*(int *)(iVar1 + 0xb4) - *(int *)(iVar1 + 0xbc),
                 *(int *)(iVar1 + 0xb8) - *(int *)(iVar1 + 0xc0));
    iVar2 = (**(code **)(local_5c + 0x38))(*(undefined4 *)(local_5c + 0x34),local_54);
    if (iVar2 == 0) {
      local_24 = local_24 + 1;
      puVar3 = (undefined4 *)(iVar1 + 0xc4);
      puStack_58 = (undefined4 *)(iVar1 + 200);
      FUN_101c1818(local_60,*(int *)(iVar1 + 0xbc) - *(int *)(iVar1 + 0xc4),
                   *(int *)(iVar1 + 0xc0) - *(int *)(iVar1 + 200));
      iVar2 = (**(code **)(local_5c + 0x38))(*(undefined4 *)(local_5c + 0x34),local_54);
      puVar4 = puStack_58;
    }
    else {
      puVar3 = (undefined4 *)(iVar1 + 0xbc);
      puVar4 = (undefined4 *)(iVar1 + 0xc0);
    }
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 0xb4);
    puVar4 = (undefined4 *)(iVar1 + 0xb8);
  }
  FUN_101c1818(local_60,*puVar3,*puVar4);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_60)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

