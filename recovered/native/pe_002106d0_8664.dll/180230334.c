/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180230334 */

ulonglong FUN_180230334(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint *local_b0;
  int *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  local_4c = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = 0x12;
  if ((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) && (uVar5 = 0x13, param_3 == 5)) {
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_1801c9b65(uVar3,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    cVar4 = FUN_1801ca70d(param_2,0,param_4);
    uVar5 = 0x62;
    if (cVar4 != '\0') goto LAB_1802303cd;
    iVar7 = *(int *)(param_2 + 0x68);
    if ((iVar7 == 0) || (*(int *)(param_2 + 0x70) == 0)) {
LAB_180230573:
      *(undefined4 *)(param_2 + 0x60) = 0x62697473;
      uVar5 = 0;
      goto LAB_180230407;
    }
    iVar8 = *(int *)(param_1 + 0x78);
    *(int *)(param_2 + 0x68) = iVar7 + iVar8 * 2;
    iVar7 = iVar8 * 2 + *(int *)(param_2 + 0x6c);
    *(int *)(param_2 + 0x6c) = iVar7;
    *(undefined1 *)(param_2 + 0x82) = 2;
    *(int *)(param_2 + 0x70) = iVar7;
    *(undefined2 *)(param_2 + 0x80) = 0xff;
    local_b0 = &local_4c;
    local_b8 = 0;
    uVar6 = FUN_1801c9c3f(uVar3,iVar7,0);
    *(undefined8 *)(param_2 + 0x78) = uVar6;
    uVar5 = (ulonglong)local_4c;
    if (local_4c == 0) {
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
      iVar7 = *(int *)(param_2 + 0x94) + iVar8;
      *(int *)(param_2 + 0x94) = iVar7;
      iVar8 = *(int *)(param_2 + 0x90) - iVar8;
      *(int *)(param_2 + 0x90) = iVar8;
      iVar8 = iVar8 * -0x40;
      iVar7 = (*(int *)(param_2 + 0x68) - iVar7) * 0x40;
      if (param_4 != (int *)0x0) {
        iVar8 = iVar8 + *param_4;
        iVar7 = iVar7 + param_4[1];
      }
      lVar2 = param_2 + 0x98;
      if (iVar8 != 0 || iVar7 != 0) {
        FUN_1801cb5a0(lVar2,iVar8,iVar7);
      }
      local_98 = 8;
      local_58 = *(undefined4 *)(param_1 + 0x78);
      local_54 = *(undefined1 *)(param_1 + 0x7c);
      local_53 = *(undefined1 *)(param_1 + 0x7d);
      local_52 = *(undefined1 *)(param_1 + 0x7e);
      local_a8 = (int *)(param_2 + 0x68);
      local_a0 = lVar2;
      uVar5 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60));
      local_4c = (uint)uVar5;
      if (iVar8 != 0 || iVar7 != 0) {
        FUN_1801cb5a0(lVar2,-iVar8,-iVar7);
        uVar5 = (ulonglong)local_4c;
      }
      if ((int)uVar5 == 0) goto LAB_180230573;
    }
  }
  else {
LAB_1802303cd:
    local_4c = (uint)uVar5;
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_1801c9b65(uVar3,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    uVar5 = (ulonglong)local_4c;
  }
LAB_180230407:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_d8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
}

