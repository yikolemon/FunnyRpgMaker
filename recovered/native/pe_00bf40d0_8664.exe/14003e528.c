/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003e528 */

int FUN_14003e528(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_4c = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  lVar13 = *(longlong *)(param_1 + 0x408);
  if (lVar13 == 0) {
    puVar7 = (undefined8 *)0x0;
    local_4c = FUN_14003dd65(param_1,(undefined8 *)0x0);
    if (local_4c == 0) {
      lVar13 = *(longlong *)(param_1 + 0x408);
      goto LAB_14003e56a;
    }
  }
  else {
LAB_14003e56a:
    piVar6 = *(int **)(lVar13 + 8);
    puVar2 = *(uint **)(lVar13 + 0x18);
    uVar10 = *puVar2;
    uVar3 = uVar10;
    if (param_2 < uVar10) {
      uVar3 = param_2;
    }
    if (piVar6 == (int *)0x0) {
      puVar7 = (undefined8 *)0x0;
      piVar6 = (int *)FUN_14001c617(lVar1,4,0,uVar10,0,&local_4c);
      *(int **)(lVar13 + 8) = piVar6;
      if (local_4c != 0) goto LAB_14003e769;
    }
    if (uVar3 == 0) {
      bVar4 = false;
    }
    else {
      if (uVar10 < param_2) {
        param_2 = uVar10;
      }
      lVar8 = 0;
      lVar11 = 0;
      bVar4 = false;
      do {
        iVar5 = *(int *)(param_3 + lVar11 * 4);
        if (piVar6[lVar11] != iVar5) {
          piVar6[lVar11] = iVar5;
          bVar4 = true;
        }
        lVar11 = lVar11 + 1;
        lVar8 = lVar8 + -4;
      } while (param_2 != (uint)lVar11);
      piVar6 = (int *)((longlong)piVar6 - lVar8);
    }
    uVar10 = *puVar2;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if (uVar3 < uVar10) {
        lVar8 = *(longlong *)(puVar2 + 4);
        lVar11 = 0;
        uVar12 = uVar3;
        do {
          iVar5 = *(int *)(lVar8 + (ulonglong)uVar3 * 0x20 + 0xc + lVar11 * 8);
          if (*(int *)((longlong)piVar6 + lVar11) != iVar5) {
            *(int *)((longlong)piVar6 + lVar11) = iVar5;
            uVar10 = *puVar2;
            bVar4 = true;
          }
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 4;
        } while (uVar12 < uVar10);
      }
    }
    else if (uVar3 < uVar10) {
      lVar8 = *(longlong *)
               (*(longlong *)(puVar2 + 6) + -0x10 +
               (ulonglong)(*(uint *)(param_1 + 4) >> 0xc & 0xfffffff0));
      uVar9 = (ulonglong)uVar3;
      do {
        iVar5 = *(int *)(lVar8 + uVar9 * 4);
        if (*piVar6 != iVar5) {
          *piVar6 = iVar5;
          uVar10 = *puVar2;
          bVar4 = true;
        }
        piVar6 = piVar6 + 1;
        uVar9 = uVar9 + 1;
      } while ((uint)uVar9 < uVar10);
    }
    if ((*(longlong *)(lVar13 + 0x10) != 0) && (iVar5 = -1, !bVar4)) goto LAB_14003e778;
    puVar7 = (undefined8 *)FUN_14001c617(lVar1,4,0,uVar10,0,&local_4c);
    if (local_4c == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0') {
        FUN_140040b36(param_1);
      }
      FUN_140040e11(param_1,uVar3,*(longlong *)(lVar13 + 8),(longlong)puVar7);
      local_4c = FUN_14003f73e(param_1,*puVar2,puVar7,'\0');
      if (uVar3 != 0 && local_4c == 0) {
        uVar9 = 0;
        do {
          if (*(int *)((longlong)puVar7 + uVar9 * 4) != 0) {
            local_4c = -2;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
      }
    }
  }
LAB_14003e769:
  FUN_14001c53d(lVar1,(longlong)puVar7);
  iVar5 = local_4c;
LAB_14003e778:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar5;
}

