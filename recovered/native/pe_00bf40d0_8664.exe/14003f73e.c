/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003f73e */

int FUN_14003f73e(longlong param_1,uint param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_4c = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  puVar11 = *(uint **)(param_1 + 0x408);
  if (puVar11 == (uint *)0x0) {
    *(undefined1 *)(param_1 + 0x401) = 0;
    iVar12 = local_4c;
    if (param_2 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)((longlong)param_3 + uVar8 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x401) = 1;
          local_4c = FUN_14003dd65(param_1,(undefined8 *)0x0);
          iVar12 = local_4c;
          if (local_4c == 0) {
            puVar11 = *(uint **)(param_1 + 0x408);
            goto LAB_14003f788;
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (param_2 != uVar8);
    }
  }
  else {
LAB_14003f788:
    puVar2 = *(uint **)(puVar11 + 6);
    uVar8 = (ulonglong)*puVar2;
    if (param_2 < *puVar2) {
      uVar8 = (ulonglong)param_2;
    }
    uVar9 = (uint)uVar8;
    if (uVar9 != 0) {
      uVar7 = 0;
      do {
        if (*(int *)((longlong)param_3 + uVar7 * 4) - 0x10001U < 0xfffdffff) {
          local_4c = 6;
          iVar12 = local_4c;
          goto LAB_14003fac3;
        }
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    if ((*(char *)(param_1 + 0x400) == '\0') && (*(longlong *)(puVar11 + 0x22) == 0)) {
      local_4c = FUN_14003faff(param_1);
      if ((local_4c != 0x8e) && (iVar12 = local_4c, local_4c != 0)) goto LAB_14003fac3;
      local_4c = 0;
    }
    lVar3 = *(longlong *)(puVar11 + 2);
    if (lVar3 == 0) {
      lVar10 = FUN_14001c617(lVar1,4,0,*puVar2,0,&local_4c);
      *(longlong *)(puVar11 + 2) = lVar10;
      iVar12 = local_4c;
      if (local_4c != 0) goto LAB_14003fac3;
    }
    puVar5 = *(undefined8 **)(puVar11 + 4);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_14001c617(lVar1,4,0,*puVar2,0,&local_4c);
      *(undefined8 **)(puVar11 + 4) = puVar5;
      iVar12 = local_4c;
      if (local_4c != 0) goto LAB_14003fac3;
      uVar6 = *puVar2;
      iVar12 = 1;
    }
    else {
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          if (*(int *)((longlong)puVar5 + uVar7 * 4) != *(int *)((longlong)param_3 + uVar7 * 4)) {
            iVar12 = 2;
            goto LAB_14003f9b4;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
      }
      uVar6 = *puVar2;
      iVar12 = -1;
      if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
        if (uVar6 <= uVar9) goto LAB_14003fac3;
        bVar4 = false;
        uVar7 = uVar8;
        do {
          if (*(int *)((longlong)puVar5 + uVar7 * 4) != 0) {
            bVar4 = true;
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 != (uint)uVar7);
      }
      else {
        if (uVar6 <= uVar9) goto LAB_14003fac3;
        bVar4 = false;
        uVar7 = uVar8;
        do {
          if (*(int *)((longlong)puVar5 + uVar7 * 4) !=
              *(int *)((ulonglong)(((*(uint *)(param_1 + 4) >> 0x10) - 1) * uVar6) * 4 +
                       *(longlong *)(puVar11 + 10) + uVar7 * 4)) {
            bVar4 = true;
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 != (uint)uVar7);
      }
      iVar12 = 0;
      uVar7 = uVar8;
      if (!bVar4) {
        iVar12 = -1;
        goto LAB_14003fac3;
      }
LAB_14003f9b4:
      uVar6 = *puVar2;
      if ((uint)uVar7 < uVar6) {
        lVar10 = 0;
        do {
          if (*(int *)((longlong)puVar5 + lVar10 * 4 + (uVar7 & 0xffffffff) * 4) != 0) {
            iVar12 = 2;
            break;
          }
          lVar10 = lVar10 + 1;
        } while (uVar6 - (uint)uVar7 != (int)lVar10);
      }
    }
    *puVar11 = uVar6;
    if (param_3 != (undefined8 *)0x0) {
      FUN_1400b3550(puVar5,param_3,uVar8 << 2);
    }
    if (param_4 != '\0') {
      if (lVar3 == 0) {
        uVar9 = *puVar11;
      }
      FUN_14003fed7(param_1,uVar9,*(longlong *)(puVar11 + 4),*(longlong *)(puVar11 + 2));
    }
    *(undefined1 *)(param_1 + 0x401) = 0;
    if ((ulonglong)*puVar11 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(puVar11 + 4) + uVar8 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x401) = 1;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (*puVar11 != uVar8);
    }
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      if (iVar12 == 1) {
        local_4c = FUN_14004016b(param_1,*(longlong **)(param_1 + 0xa0));
      }
      else if (iVar12 == 2) {
        FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x3d8));
        *(undefined8 *)(param_1 + 0x3d8) = 0;
        local_4c = FUN_14004003f(param_1,*(longlong **)(param_1 + 0xa0));
      }
    }
    iVar12 = local_4c;
    if (puVar11[0x1a] != 0) {
      uVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(puVar11 + 0x1e) + uVar8 * 4) = 0xfffe0000;
        uVar8 = uVar8 + 1;
      } while (uVar8 < puVar11[0x1a]);
    }
  }
LAB_14003fac3:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar12;
}

