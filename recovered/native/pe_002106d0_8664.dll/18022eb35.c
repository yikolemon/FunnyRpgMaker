/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022eb35 */

int FUN_18022eb35(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_c8;
  local_44 = 0;
  lVar2 = param_2 + 0x98;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  iVar6 = 6;
  if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x20)) {
LAB_18022ebdd:
    iVar7 = 0;
    iVar8 = 0;
    local_44 = iVar6;
    goto LAB_18022ebe9;
  }
  iVar6 = 0x13;
  if (param_3 != 2) goto LAB_18022ec36;
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_1801c9b65(uVar3,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  cVar4 = FUN_1801ca70d(param_2,2,param_4);
  iVar6 = 0x62;
  if (cVar4 != '\0') goto LAB_18022ebdd;
  local_a0 = &local_44;
  local_a8 = 0;
  iVar7 = 0;
  uVar5 = FUN_1801c9c3f(uVar3,*(undefined4 *)(param_2 + 0x70),0,*(undefined4 *)(param_2 + 0x68));
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  iVar8 = 0;
  if (local_44 == 0) {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar1 = *puVar1 | 1;
    iVar8 = *(int *)(param_2 + 0x90) * -0x40;
    iVar7 = (*(int *)(param_2 + 0x68) - *(int *)(param_2 + 0x94)) * 0x40;
    if (param_4 != (int *)0x0) {
      iVar8 = iVar8 + *param_4;
      iVar7 = iVar7 + param_4[1];
    }
    if (iVar8 != 0 || iVar7 != 0) {
      FUN_1801cb5a0(lVar2,iVar8,iVar7);
    }
    local_88 = 0;
    local_98 = param_2 + 0x68;
    local_90 = lVar2;
    local_44 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60));
    if (local_44 != 0) goto LAB_18022ebe9;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
  }
  else {
LAB_18022ebe9:
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_1801c9b65(uVar3,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  iVar6 = local_44;
  if (iVar8 != 0 || iVar7 != 0) {
    FUN_1801cb5a0(lVar2,-iVar8,-iVar7);
    iVar6 = local_44;
  }
LAB_18022ec36:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_c8);
  }
  return iVar6;
}

