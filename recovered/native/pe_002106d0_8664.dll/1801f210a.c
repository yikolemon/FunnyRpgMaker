/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f210a */

int FUN_1801f210a(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_4c = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  puVar11 = *(uint **)(param_1 + 0x408);
  if (puVar11 == (uint *)0x0) {
    *(undefined1 *)(param_1 + 0x401) = 0;
    iVar12 = local_4c;
    if (param_2 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(param_3 + uVar8 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x401) = 1;
          local_4c = FUN_1801f0731();
          iVar12 = local_4c;
          if (local_4c == 0) {
            puVar11 = *(uint **)(param_1 + 0x408);
            goto LAB_1801f2154;
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (param_2 != uVar8);
    }
  }
  else {
LAB_1801f2154:
    puVar3 = *(uint **)(puVar11 + 6);
    uVar8 = (ulonglong)*puVar3;
    if (param_2 < *puVar3) {
      uVar8 = (ulonglong)param_2;
    }
    uVar9 = (uint)uVar8;
    if (uVar9 != 0) {
      uVar7 = 0;
      do {
        if (*(int *)(param_3 + uVar7 * 4) - 0x10001U < 0xfffdffff) {
          local_4c = 6;
          iVar12 = local_4c;
          goto LAB_1801f248f;
        }
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    if ((*(char *)(param_1 + 0x400) == '\0') && (*(longlong *)(puVar11 + 0x22) == 0)) {
      local_4c = FUN_1801f24cb(param_1);
      if ((local_4c != 0x8e) && (iVar12 = local_4c, local_4c != 0)) goto LAB_1801f248f;
      local_4c = 0;
    }
    local_58 = *(longlong *)(puVar11 + 2);
    if (local_58 == 0) {
      local_60 = &local_4c;
      local_68 = 0;
      uVar5 = FUN_1801c9c3f(uVar2,4,0);
      *(undefined8 *)(puVar11 + 2) = uVar5;
      iVar12 = local_4c;
      if (local_4c != 0) goto LAB_1801f248f;
    }
    lVar6 = *(longlong *)(puVar11 + 4);
    if (lVar6 == 0) {
      local_60 = &local_4c;
      local_68 = 0;
      lVar6 = FUN_1801c9c3f(uVar2,4,0,*puVar3);
      *(longlong *)(puVar11 + 4) = lVar6;
      iVar12 = local_4c;
      if (local_4c != 0) goto LAB_1801f248f;
      uVar9 = *puVar3;
      iVar12 = 1;
    }
    else {
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          if (*(int *)(lVar6 + uVar7 * 4) != *(int *)(param_3 + uVar7 * 4)) {
            iVar12 = 2;
            goto LAB_1801f2380;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
      }
      uVar1 = *puVar3;
      iVar12 = -1;
      if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
        if (uVar1 <= uVar9) goto LAB_1801f248f;
        bVar4 = false;
        uVar7 = uVar8;
        do {
          if (*(int *)(lVar6 + uVar7 * 4) != 0) {
            bVar4 = true;
          }
          uVar7 = uVar7 + 1;
        } while (uVar1 != (uint)uVar7);
      }
      else {
        if (uVar1 <= uVar9) goto LAB_1801f248f;
        bVar4 = false;
        uVar7 = uVar8;
        do {
          if (*(int *)(lVar6 + uVar7 * 4) !=
              *(int *)((ulonglong)(((*(uint *)(param_1 + 4) >> 0x10) - 1) * uVar1) * 4 +
                       *(longlong *)(puVar11 + 10) + uVar7 * 4)) {
            bVar4 = true;
          }
          uVar7 = uVar7 + 1;
        } while (uVar1 != (uint)uVar7);
      }
      iVar12 = 0;
      uVar7 = uVar8;
      if (!bVar4) {
        iVar12 = -1;
        goto LAB_1801f248f;
      }
LAB_1801f2380:
      uVar9 = *puVar3;
      if ((uint)uVar7 < uVar9) {
        lVar10 = 0;
        do {
          if (*(int *)(lVar6 + (uVar7 & 0xffffffff) * 4 + lVar10 * 4) != 0) {
            iVar12 = 2;
            break;
          }
          lVar10 = lVar10 + 1;
        } while (uVar9 - (uint)uVar7 != (int)lVar10);
      }
    }
    *puVar11 = uVar9;
    if (param_3 != 0) {
      FUN_1802a82f0(lVar6,param_3,uVar8 << 2);
    }
    if (param_4 != '\0') {
      if (local_58 == 0) {
        uVar8 = (ulonglong)*puVar11;
      }
      FUN_1801f28a3(param_1,uVar8,*(undefined8 *)(puVar11 + 4),*(undefined8 *)(puVar11 + 2));
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
        local_4c = FUN_1801f2b37(param_1,*(undefined8 *)(param_1 + 0xa0));
      }
      else if (iVar12 == 2) {
        FUN_1801c9b65(uVar2);
        *(undefined8 *)(param_1 + 0x3d8) = 0;
        local_4c = FUN_1801f2a0b(param_1,*(undefined8 *)(param_1 + 0xa0));
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
LAB_1801f248f:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar12;
}

