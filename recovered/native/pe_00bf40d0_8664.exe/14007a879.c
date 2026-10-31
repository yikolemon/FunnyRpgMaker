/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a879 */

int FUN_14007a879(longlong param_1,longlong *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_d8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_d8;
  local_4c = 0;
  plVar2 = param_2 + 0x13;
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar7 = 6;
  if ((((int)param_2[0xc] == *(int *)(param_1 + 0x20)) && (iVar7 = 0x13, param_3 < 5)) &&
     (param_3 != 2)) {
    if ((*(byte *)(param_2[0x1e] + 8) & 1) != 0) {
      FUN_14001c53d(lVar3,param_2[0xf]);
      param_2[0xf] = 0;
      *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) & 0xfffffffe;
    }
    cVar4 = FUN_14001d0e5(param_2,param_3,param_4);
    iVar7 = 0x62;
    if (cVar4 != '\0') goto LAB_14007a926;
    puVar1 = (uint *)(param_2 + 0xd);
    iVar8 = 0;
    if (*puVar1 == 0) {
      iVar9 = 0;
LAB_14007aa94:
      *(undefined4 *)(param_2 + 0xc) = 0x62697473;
      goto LAB_14007a95e;
    }
    iVar9 = 0;
    iVar8 = 0;
    if (*(uint *)(param_2 + 0xe) == 0) goto LAB_14007aa94;
    iVar8 = 0;
    lVar5 = FUN_14001c617(lVar3,*(uint *)(param_2 + 0xe),0,*puVar1,0,&local_4c);
    param_2[0xf] = lVar5;
    iVar9 = 0;
    if (local_4c == 0) {
      *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) | 1;
      iVar9 = (int)param_2[0x12] * -0x40;
      iVar8 = (int)param_2[0xd] << 6;
      if (*(char *)((longlong)param_2 + 0x82) == '\x06') {
        iVar8 = iVar8 / 3;
      }
      iVar8 = iVar8 + *(int *)((longlong)param_2 + 0x94) * -0x40;
      if (iVar8 != 0 || iVar9 != 0) {
        FUN_14001df78((longlong)plVar2,iVar9,iVar8);
      }
      if (param_3 < 2) {
        if ((*(byte *)(param_2 + 0x17) & 0x40) == 0) {
          local_4c = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60));
        }
        else {
          uVar6 = FUN_14007ba05(param_1,(longlong)plVar2,(int *)puVar1);
          local_4c = (int)uVar6;
        }
      }
      else if (param_3 == 3) {
        local_4c = FUN_14007bb3e(param_1,(longlong)plVar2,(int *)puVar1);
      }
      else if (param_3 == 4) {
        local_4c = FUN_14007bce5(param_1,(longlong)plVar2,puVar1);
      }
      if (local_4c == 0) goto LAB_14007aa94;
    }
  }
  else {
LAB_14007a926:
    iVar8 = 0;
    iVar9 = 0;
    local_4c = iVar7;
  }
  if ((*(byte *)(param_2[0x1e] + 8) & 1) != 0) {
    FUN_14001c53d(lVar3,param_2[0xf]);
    param_2[0xf] = 0;
    *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) & 0xfffffffe;
  }
LAB_14007a95e:
  if (iVar9 != 0 || iVar8 != 0) {
    FUN_14001df78((longlong)plVar2,-iVar9,-iVar8);
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_d8);
  }
  return local_4c;
}

