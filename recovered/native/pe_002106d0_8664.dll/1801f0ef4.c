/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f0ef4 */

int FUN_1801f0ef4(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_4c = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar11 = *(longlong *)(param_1 + 0x408);
  if (lVar11 == 0) {
    lVar6 = 0;
    local_4c = FUN_1801f0731(param_1,0);
    if (local_4c == 0) {
      lVar11 = *(longlong *)(param_1 + 0x408);
      goto LAB_1801f0f36;
    }
  }
  else {
LAB_1801f0f36:
    piVar5 = *(int **)(lVar11 + 8);
    puVar2 = *(uint **)(lVar11 + 0x18);
    uVar8 = *puVar2;
    uVar12 = uVar8;
    if (param_2 < uVar8) {
      uVar12 = param_2;
    }
    if (piVar5 == (int *)0x0) {
      local_60 = &local_4c;
      local_68 = 0;
      lVar6 = 0;
      local_50 = uVar12;
      piVar5 = (int *)FUN_1801c9c3f(uVar1,4);
      *(int **)(lVar11 + 8) = piVar5;
      uVar12 = local_50;
      if (local_4c != 0) goto LAB_1801f1135;
    }
    if (uVar12 == 0) {
      bVar3 = false;
    }
    else {
      if (uVar8 < param_2) {
        param_2 = uVar8;
      }
      lVar6 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        iVar4 = *(int *)(param_3 + lVar9 * 4);
        if (piVar5[lVar9] != iVar4) {
          piVar5[lVar9] = iVar4;
          bVar3 = true;
        }
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + -4;
      } while (param_2 != (uint)lVar9);
      piVar5 = (int *)((longlong)piVar5 - lVar6);
    }
    uVar8 = *puVar2;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if (uVar12 < uVar8) {
        lVar6 = *(longlong *)(puVar2 + 4);
        lVar9 = 0;
        uVar10 = uVar12;
        do {
          iVar4 = *(int *)(lVar6 + (ulonglong)uVar12 * 0x20 + 0xc + lVar9 * 8);
          if (*(int *)((longlong)piVar5 + lVar9) != iVar4) {
            *(int *)((longlong)piVar5 + lVar9) = iVar4;
            uVar8 = *puVar2;
            bVar3 = true;
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 4;
        } while (uVar10 < uVar8);
      }
    }
    else if (uVar12 < uVar8) {
      lVar6 = *(longlong *)
               (*(longlong *)(puVar2 + 6) + -0x10 +
               (ulonglong)(*(uint *)(param_1 + 4) >> 0xc & 0xfffffff0));
      uVar7 = (ulonglong)uVar12;
      do {
        iVar4 = *(int *)(lVar6 + uVar7 * 4);
        if (*piVar5 != iVar4) {
          *piVar5 = iVar4;
          uVar8 = *puVar2;
          bVar3 = true;
        }
        piVar5 = piVar5 + 1;
        uVar7 = uVar7 + 1;
      } while ((uint)uVar7 < uVar8);
    }
    if ((*(longlong *)(lVar11 + 0x10) != 0) && (iVar4 = -1, !bVar3)) goto LAB_1801f1144;
    local_60 = &local_4c;
    local_68 = 0;
    lVar6 = FUN_1801c9c3f(uVar1,4,0);
    if (local_4c == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0') {
        FUN_1801f3502(param_1);
      }
      FUN_1801f37dd(param_1,uVar12,*(undefined8 *)(lVar11 + 8),lVar6);
      local_4c = FUN_1801f210a(param_1,*puVar2,lVar6,0);
      if (uVar12 != 0 && local_4c == 0) {
        uVar7 = 0;
        do {
          if (*(int *)(lVar6 + uVar7 * 4) != 0) {
            local_4c = -2;
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar12 != uVar7);
      }
    }
  }
LAB_1801f1135:
  FUN_1801c9b65(uVar1,lVar6);
  iVar4 = local_4c;
LAB_1801f1144:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar4;
}

