/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021cb71 */

void FUN_18021cb71(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [39];
  char local_71;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  FUN_18021b3ce(*(undefined8 *)(param_1 + 0x10));
  uVar16 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar8 = param_1 + 0x28;
    uVar12 = 0;
    local_70 = param_1;
    local_60 = lVar8;
    do {
      lVar15 = lVar8 + uVar12 * 0x20;
      local_71 = FUN_18021ce02(lVar15);
      local_68 = uVar12 + 1;
      uVar13 = uVar12;
      if (local_71 != '\0') {
        uVar13 = local_68;
      }
      uVar2 = *(uint *)(lVar8 + 0x14 + uVar12 * 0x20);
      lVar1 = lVar8 + uVar13 * 0x20;
      uVar3 = *(uint *)(lVar8 + 0x14 + uVar13 * 0x20);
      cVar5 = FUN_18021ca1c(lVar15);
      if (cVar5 == '\0') {
        uVar6 = uVar2 & 0xffff;
        uVar10 = uVar3 & 0xffff;
        uVar14 = 0x10000 - uVar6;
        if (0x10000 - uVar10 <= 0x10000 - uVar6) {
          uVar14 = 0x10000 - uVar10;
        }
        if (uVar10 == 0) {
          uVar14 = 0;
        }
        if (uVar6 == 0) {
          uVar14 = 0;
        }
        if (uVar10 <= uVar6) {
          uVar6 = uVar10;
        }
        uVar10 = -uVar6;
        if ((uVar13 < (int)uVar16 - 1) && (*(int *)(lVar1 + 0x34) < (int)(uVar14 + uVar3 + 0x8000)))
        {
          if ((((uVar12 != 0) &&
               (uVar11 = 0, (int)((uVar2 - uVar6) + -0x8000) < *(int *)(lVar15 + -0xc))) ||
              (uVar11 = uVar10, uVar14 < uVar6)) &&
             (cVar5 = FUN_18021ca1c(lVar1 + 0x20), cVar5 == '\0')) {
            local_50 = uVar14 - uVar11;
            local_58 = uVar13;
            FUN_18021bc3d(*(undefined8 *)(local_70 + 0x10),&local_58);
          }
        }
        else if (((uVar12 == 0) ||
                 (uVar11 = uVar14, *(int *)(lVar15 + -0xc) <= (int)((uVar2 - uVar6) + -0x8000))) &&
                (uVar11 = uVar10, uVar14 <= uVar6)) {
          uVar11 = uVar14;
        }
        *(uint *)(lVar15 + 0x14) = uVar2 + uVar11;
        lVar8 = local_60;
        if (local_71 != '\0') {
          *(uint *)(lVar1 + 0x14) = uVar11 + uVar3;
        }
      }
      if ((uVar12 != 0) && (*(int *)(lVar15 + 0x10) != *(int *)(lVar15 + -0x10))) {
        uVar7 = FUN_1801cc3a4(*(int *)(lVar15 + 0x14) - *(int *)(lVar15 + -0xc));
        *(undefined4 *)(lVar15 + -8) = uVar7;
      }
      param_1 = local_70;
      if ((local_71 != '\0') &&
         (uVar12 = local_68, *(int *)(lVar1 + 0x10) != *(int *)(lVar1 + -0x10))) {
        uVar7 = FUN_1801cc3a4(*(int *)(lVar1 + 0x14) - *(int *)(lVar1 + -0xc));
        *(undefined4 *)(lVar1 + -8) = uVar7;
        uVar12 = local_68;
      }
      uVar12 = uVar12 + 1;
      uVar16 = (ulonglong)*(uint *)(param_1 + 0x20);
    } while (uVar12 < uVar16);
  }
  lVar8 = FUN_18021b5f1(*(undefined8 *)(param_1 + 0x10));
  if (lVar8 != 0) {
    do {
      lVar8 = lVar8 + -1;
      plVar9 = (longlong *)FUN_18021ae88(*(undefined8 *)(param_1 + 0x10),lVar8);
      lVar15 = *plVar9 * 0x20;
      iVar4 = *(int *)(param_1 + 0x3c + lVar15);
      if ((int)plVar9[1] + iVar4 + 0x8000 <= *(int *)(param_1 + 0x5c + lVar15)) {
        lVar15 = lVar15 + param_1 + 0x28;
        *(int *)(lVar15 + 0x14) = (int)plVar9[1] + iVar4;
        cVar5 = FUN_18021ce02(lVar15);
        if (cVar5 != '\0') {
          *(int *)(lVar15 + -0xc) = *(int *)(lVar15 + -0xc) + (int)plVar9[1];
        }
      }
    } while (lVar8 != 0);
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

