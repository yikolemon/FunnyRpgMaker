/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017fa20 */

ulonglong FUN_14017fa20(longlong param_1,longlong param_2,int param_3,int *param_4)

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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  local_4c = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = 0x12;
  if ((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) && (uVar5 = 0x13, param_3 == 5)) {
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_140128b39(uVar3,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    cVar4 = FUN_1401296e1(param_2,0,param_4);
    uVar5 = 0x62;
    if (cVar4 != '\0') goto LAB_14017fab9;
    iVar7 = *(int *)(param_2 + 0x68);
    if ((iVar7 == 0) || (*(int *)(param_2 + 0x70) == 0)) {
LAB_14017fc5f:
      *(undefined4 *)(param_2 + 0x60) = 0x62697473;
      uVar5 = 0;
      goto LAB_14017faf3;
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
    uVar6 = FUN_140128c13(uVar3,iVar7,0);
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
        FUN_14012a574(lVar2,iVar8,iVar7);
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
        FUN_14012a574(lVar2,-iVar8,-iVar7);
        uVar5 = (ulonglong)local_4c;
      }
      if ((int)uVar5 == 0) goto LAB_14017fc5f;
    }
  }
  else {
LAB_14017fab9:
    local_4c = (uint)uVar5;
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_140128b39(uVar3,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    uVar5 = (ulonglong)local_4c;
  }
LAB_14017faf3:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_d8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_d8);
}

