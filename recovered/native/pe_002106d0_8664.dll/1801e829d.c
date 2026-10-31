/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e829d */

void FUN_1801e829d(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  
  iVar12 = *(int *)(param_2 + 8 + (ulonglong)(param_3 != 0) * 4);
  iVar3 = *(int *)(param_2 + 0x10 + (ulonglong)(param_3 != 0) * 4);
  lVar2 = (ulonglong)param_3 * 0x204;
  lVar1 = param_1 + lVar2;
  if ((*(int *)(lVar1 + 0x240) != iVar12) || (*(int *)(lVar1 + 0x244) != iVar3)) {
    *(int *)(lVar1 + 0x240) = iVar12;
    *(int *)(lVar1 + 0x244) = iVar3;
    if ((ulonglong)*(uint *)(param_1 + 800) != 0) {
      lVar8 = 0;
LAB_1801e8319:
      if ((*(byte *)(param_1 + 0x344 + lVar8) & 0x10) == 0) goto code_r0x0001801e8323;
      uVar13 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x40);
      if (uVar13 == 0) {
        iVar9 = 0x28;
      }
      else {
        uVar18 = (uint)*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x18);
        iVar9 = 0x34;
        if (uVar13 < uVar18) {
          iVar9 = 0x28;
        }
        if (uVar18 < 6) {
          iVar9 = 0x28;
        }
      }
      if ((param_3 != 0) &&
         (lVar8 = (longlong)*(int *)(param_1 + 0x330 + lVar8) * (longlong)iVar12,
         uVar13 = (uint)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10),
         (iVar9 + uVar13 & 0xffffffc0) != uVar13)) {
        iVar6 = FUN_1801cb4a4(iVar12);
        iVar9 = *(int *)(param_1 + 0x40);
        if ((ulonglong)*(uint *)(param_1 + 800) != 0) {
          lVar8 = 0;
          do {
            iVar4 = *(int *)(param_1 + 0x33c + lVar8);
            if (iVar4 < iVar9) {
              iVar4 = iVar9;
            }
            iVar9 = -*(int *)(param_1 + 0x340 + lVar8);
            if (iVar9 < iVar4) {
              iVar9 = iVar4;
            }
            lVar8 = lVar8 + 0x24;
          } while ((ulonglong)*(uint *)(param_1 + 800) * 0x24 != lVar8);
        }
        lVar8 = (longlong)(iVar6 - iVar12) * (longlong)iVar9;
        if ((int)((ulonglong)((lVar8 >> 0x3f) + lVar8 + 0x8000) >> 0x10) + 0x7fU < 0xff) {
          iVar12 = iVar6;
        }
        *(int *)(lVar1 + 0x44) = iVar12;
        *(int *)(lVar1 + 0x48) = iVar3;
        goto LAB_1801e8433;
      }
    }
LAB_1801e8428:
    *(int *)(lVar1 + 0x44) = iVar12;
    *(int *)(lVar1 + 0x48) = iVar3;
    if (param_3 == 0) {
      *(int *)(param_1 + 0x10) = iVar12;
      *(int *)(param_1 + 0x18) = iVar3;
    }
    else {
LAB_1801e8433:
      *(int *)(param_1 + 0x14) = iVar12;
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    uVar13 = *(uint *)(lVar1 + 0x4c);
    lVar8 = (longlong)iVar12;
    if ((ulonglong)uVar13 != 0) {
      puVar10 = (undefined4 *)(param_1 + lVar2 + 0x58);
      uVar14 = 0;
      do {
        uVar15 = (undefined4)
                 ((ulonglong)
                  ((int)puVar10[-2] * lVar8 + ((int)puVar10[-2] * lVar8 >> 0x3f) + 0x8000) >> 0x10);
        puVar10[-1] = uVar15;
        *puVar10 = uVar15;
        uVar14 = uVar14 + 1;
        puVar10 = puVar10 + 3;
      } while (uVar14 < uVar13);
    }
    lVar7 = *(int *)(lVar1 + 0x114) * lVar8;
    *(bool *)(lVar1 + 0x118) = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10) < 0x28;
    if ((param_3 != 0) && (uVar14 = (ulonglong)*(uint *)(lVar1 + 0x11c), uVar14 != 0)) {
      puVar11 = (uint *)(param_1 + lVar2 + 0x140);
      uVar16 = 0;
      do {
        lVar7 = lVar8 * (int)puVar11[-8];
        uVar17 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + iVar3;
        puVar11[-7] = uVar17;
        puVar11[-6] = uVar17;
        lVar7 = lVar8 * (int)puVar11[-5];
        uVar13 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + iVar3;
        puVar11[-4] = uVar13;
        puVar11[-3] = uVar13;
        uVar13 = *puVar11;
        *puVar11 = uVar13 & 0xfffffffe;
        lVar7 = ((longlong)(int)puVar11[-8] - (longlong)(int)puVar11[-5]) * lVar8;
        uVar18 = (uint)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
        if (uVar18 + 0x30 < 0x61) {
          uVar5 = -uVar18;
          if ((int)-uVar18 < 0) {
            uVar5 = uVar18;
          }
          iVar12 = (uint)(0x2f < uVar5) * 0x20 + 0x20;
          if (uVar5 < 0x20) {
            iVar12 = 0;
          }
          iVar9 = -iVar12;
          if ((int)uVar18 < 0) {
            iVar9 = iVar12;
          }
          uVar18 = uVar17 + 0x20 & 0xffffffc0;
          puVar11[-6] = uVar18;
          puVar11[-3] = uVar18 + iVar9;
          *puVar11 = uVar13 | 1;
        }
        uVar16 = uVar16 + 1;
        puVar11 = puVar11 + 9;
      } while (uVar16 < uVar14);
      param_1 = param_1 + lVar2;
      uVar16 = 0;
      do {
        uVar13 = *(uint *)(lVar1 + 0x140 + uVar16 * 0x24);
        if ((~uVar13 & 5) == 0) {
          lVar2 = lVar1 + 0x120 + uVar16 * 0x24;
          lVar8 = 0;
          do {
            if ((((*(uint *)(param_1 + 0x140 + lVar8) & 5) == 1) &&
                (*(int *)(param_1 + 0x128 + lVar8) <= *(int *)(lVar2 + 0x14))) &&
               (*(int *)(lVar2 + 8) <= *(int *)(param_1 + 0x134 + lVar8))) {
              *(uint *)(lVar2 + 0x20) = uVar13 & 0xfffffffe;
              break;
            }
            lVar8 = lVar8 + 0x24;
          } while (uVar14 * 0x24 != lVar8);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar14);
    }
  }
  return;
code_r0x0001801e8323:
  lVar8 = lVar8 + 0x24;
  if ((ulonglong)*(uint *)(param_1 + 800) * 0x24 == lVar8) goto LAB_1801e8428;
  goto LAB_1801e8319;
}

