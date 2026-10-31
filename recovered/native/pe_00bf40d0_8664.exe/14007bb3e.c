/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007bb3e */

int FUN_14007bb3e(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined4 local_90;
  undefined1 *local_88;
  longlong *local_68;
  undefined8 local_60;
  uint local_58;
  int local_54;
  longlong local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 8);
  local_90 = 3;
  local_88 = &LAB_14007befe;
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
  FUN_14001df78(param_2,-*(int *)(lVar1 + 0x158),-*(int *)(lVar1 + 0x15c));
  iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_a0);
  if (iVar3 == 0) {
    local_50 = local_50 + 1;
    FUN_14001df78(param_2,*(int *)(lVar1 + 0x158) - *(int *)(lVar1 + 0x160),
                  *(int *)(lVar1 + 0x15c) - *(int *)(lVar1 + 0x164));
    iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_a0);
    if (iVar3 == 0) {
      local_50 = local_50 + 1;
      piVar5 = (int *)(lVar1 + 0x168);
      piVar4 = (int *)(lVar1 + 0x16c);
      FUN_14001df78(param_2,*(int *)(lVar1 + 0x160) - *(int *)(lVar1 + 0x168),
                    *(int *)(lVar1 + 0x164) - *(int *)(lVar1 + 0x16c));
      iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_a0);
    }
    else {
      piVar5 = (int *)(lVar1 + 0x160);
      piVar4 = (int *)(lVar1 + 0x164);
    }
  }
  else {
    piVar5 = (int *)(lVar1 + 0x158);
    piVar4 = (int *)(lVar1 + 0x15c);
  }
  FUN_14001df78(param_2,*piVar5,*piVar4);
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_c8)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_c8);
}

