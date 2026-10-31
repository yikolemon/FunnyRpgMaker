/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022e4fe */

int FUN_18022e4fe(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_88;
  longlong *local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  longlong local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 8);
  local_90 = 3;
  local_88 = &LAB_18022e8be;
  local_68 = &local_50;
  local_60 = 0;
  local_58 = (uint)param_3[1] / 3;
  local_54 = *param_3;
  local_48 = param_3[2];
  uVar2 = (local_54 + -1) * local_48;
  if (local_48 < 0) {
    uVar2 = 0;
  }
  local_50 = (ulonglong)uVar2 + *(longlong *)(param_3 + 4);
  local_98 = param_2;
  FUN_1801cb5a0(param_2,-*(int *)(lVar1 + 0x158),-*(int *)(lVar1 + 0x15c));
  iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_a0);
  if (iVar3 == 0) {
    local_50 = local_50 + 1;
    FUN_1801cb5a0(param_2,*(int *)(lVar1 + 0x158) - *(int *)(lVar1 + 0x160),
                  *(int *)(lVar1 + 0x15c) - *(int *)(lVar1 + 0x164));
    iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_a0);
    if (iVar3 == 0) {
      local_50 = local_50 + 1;
      puVar5 = (undefined4 *)(lVar1 + 0x168);
      puVar4 = (undefined4 *)(lVar1 + 0x16c);
      FUN_1801cb5a0(param_2,*(int *)(lVar1 + 0x160) - *(int *)(lVar1 + 0x168),
                    *(int *)(lVar1 + 0x164) - *(int *)(lVar1 + 0x16c));
      iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_a0);
    }
    else {
      puVar5 = (undefined4 *)(lVar1 + 0x160);
      puVar4 = (undefined4 *)(lVar1 + 0x164);
    }
  }
  else {
    puVar5 = (undefined4 *)(lVar1 + 0x158);
    puVar4 = (undefined4 *)(lVar1 + 0x15c);
  }
  FUN_1801cb5a0(param_2,*puVar5,*puVar4);
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_c8)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_c8);
}

