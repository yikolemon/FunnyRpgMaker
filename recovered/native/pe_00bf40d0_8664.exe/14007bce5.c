/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007bce5 */

int FUN_14007bce5(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  uint *local_90;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_b8;
  uVar1 = param_3[2];
  lVar2 = *(longlong *)(param_1 + 8);
  local_80 = 1;
  param_3[2] = uVar1 * 3;
  *param_3 = *param_3 / 3;
  local_90 = param_3;
  local_88 = param_2;
  FUN_14001df78(param_2,-*(int *)(lVar2 + 0x15c),*(int *)(lVar2 + 0x158));
  iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_90);
  if (iVar3 == 0) {
    *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + (longlong)(int)uVar1;
    FUN_14001df78(param_2,*(int *)(lVar2 + 0x15c) - *(int *)(lVar2 + 0x164),
                  *(int *)(lVar2 + 0x160) - *(int *)(lVar2 + 0x158));
    iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_90);
    iVar6 = *(int *)(lVar2 + 0x160);
    iVar5 = *(int *)(lVar2 + 0x164);
    lVar4 = *(longlong *)(param_3 + 4) - (longlong)(int)uVar1;
    *(longlong *)(param_3 + 4) = lVar4;
    if (iVar3 == 0) {
      *(longlong *)(param_3 + 4) = lVar4 + (int)(uVar1 * 2);
      FUN_14001df78(param_2,*(int *)(lVar2 + 0x164) - *(int *)(lVar2 + 0x16c),
                    *(int *)(lVar2 + 0x168) - *(int *)(lVar2 + 0x160));
      iVar3 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_90);
      iVar6 = *(int *)(lVar2 + 0x168);
      iVar5 = *(int *)(lVar2 + 0x16c);
      *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) - (longlong)(int)(uVar1 * 2);
    }
  }
  else {
    iVar6 = *(int *)(lVar2 + 0x158);
    iVar5 = *(int *)(lVar2 + 0x15c);
  }
  FUN_14001df78(param_2,iVar5,-iVar6);
  param_3[2] = (int)param_3[2] / 3;
  *param_3 = *param_3 * 3;
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_b8)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_b8);
}

