/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d974 */

ulonglong FUN_14007d974(longlong param_1,longlong *param_2,int param_3,uint *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStackY_d8 [32];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_d8;
  local_4c = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar4 = 0x12;
  if (((int)param_2[0xc] == *(int *)(param_1 + 0x20)) && (uVar4 = 0x13, param_3 == 5)) {
    if ((*(byte *)(param_2[0x1e] + 8) & 1) != 0) {
      FUN_14001c53d(lVar1,param_2[0xf]);
      param_2[0xf] = 0;
      *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) & 0xfffffffe;
    }
    cVar2 = FUN_14001d0e5(param_2,0,param_4);
    uVar4 = 0x62;
    if (cVar2 != '\0') goto LAB_14007da0d;
    if (((int)param_2[0xd] == 0) || ((int)param_2[0xe] == 0)) {
LAB_14007dbb3:
      *(undefined4 *)(param_2 + 0xc) = 0x62697473;
      uVar4 = 0;
      goto LAB_14007da47;
    }
    iVar8 = *(int *)(param_1 + 0x78);
    uVar7 = (int)param_2[0xd] + iVar8 * 2;
    *(uint *)(param_2 + 0xd) = uVar7;
    uVar6 = iVar8 * 2 + *(int *)((longlong)param_2 + 0x6c);
    *(uint *)((longlong)param_2 + 0x6c) = uVar6;
    *(undefined1 *)((longlong)param_2 + 0x82) = 2;
    *(uint *)(param_2 + 0xe) = uVar6;
    *(undefined2 *)(param_2 + 0x10) = 0xff;
    lVar5 = FUN_14001c617(lVar1,uVar6,0,uVar7,0,(int *)&local_4c);
    param_2[0xf] = lVar5;
    uVar4 = (ulonglong)local_4c;
    if (local_4c == 0) {
      *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) | 1;
      iVar3 = *(int *)((longlong)param_2 + 0x94) + iVar8;
      *(int *)((longlong)param_2 + 0x94) = iVar3;
      iVar8 = (int)param_2[0x12] - iVar8;
      *(int *)(param_2 + 0x12) = iVar8;
      iVar8 = iVar8 * -0x40;
      iVar3 = ((int)param_2[0xd] - iVar3) * 0x40;
      if (param_4 != (uint *)0x0) {
        iVar8 = iVar8 + *param_4;
        iVar3 = iVar3 + param_4[1];
      }
      if (iVar8 != 0 || iVar3 != 0) {
        FUN_14001df78((longlong)(param_2 + 0x13),iVar8,iVar3);
      }
      uVar4 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60));
      local_4c = (uint)uVar4;
      if (iVar8 != 0 || iVar3 != 0) {
        FUN_14001df78((longlong)(param_2 + 0x13),-iVar8,-iVar3);
        uVar4 = (ulonglong)local_4c;
      }
      if ((int)uVar4 == 0) goto LAB_14007dbb3;
    }
  }
  else {
LAB_14007da0d:
    local_4c = (uint)uVar4;
  }
  if ((*(byte *)(param_2[0x1e] + 8) & 1) != 0) {
    FUN_14001c53d(lVar1,param_2[0xf]);
    param_2[0xf] = 0;
    *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) & 0xfffffffe;
    uVar4 = (ulonglong)local_4c;
  }
LAB_14007da47:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_d8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_d8);
}

