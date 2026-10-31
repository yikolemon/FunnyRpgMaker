/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021c6b9 */

void FUN_18021c6b9(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  
  cVar8 = FUN_18021cde8(param_2);
  bVar7 = true;
  puVar15 = param_3;
  if ((cVar8 != '\0') && (cVar8 = FUN_18021cde8(param_3), puVar15 = param_2, cVar8 != '\0')) {
    if (*(int *)(param_3 + 2) < *(int *)(param_2 + 2)) {
      return;
    }
    bVar7 = false;
  }
  uVar16 = *(uint *)(param_1 + 0x20);
  if ((ulonglong)uVar16 == 0) {
    uVar17 = 0;
  }
  else {
    lVar11 = param_1 + 0x28;
    uVar17 = 0;
    do {
      if (*(int *)(puVar15 + 2) <= *(int *)(lVar11 + 0x10)) {
        if (*(int *)(lVar11 + 0x10) == *(int *)(puVar15 + 2)) {
          return;
        }
        if ((!bVar7) && (*(int *)(lVar11 + 0x10) <= *(int *)(param_3 + 2))) {
          return;
        }
        cVar8 = FUN_18021cdef();
        if (cVar8 != '\0') {
          return;
        }
        goto LAB_18021c727;
      }
      uVar17 = uVar17 + 1;
      lVar11 = lVar11 + 0x20;
    } while (uVar16 != uVar17);
    uVar17 = (ulonglong)uVar16;
  }
LAB_18021c727:
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar8 = FUN_18000d3bc(uVar3);
  if ((cVar8 != '\0') && (cVar8 = FUN_18021ca1c(puVar15), cVar8 == '\0')) {
    iVar9 = *(int *)(puVar15 + 2);
    if (bVar7) {
      iVar9 = FUN_18021c296(uVar3,iVar9);
      puVar12 = puVar15;
    }
    else {
      iVar9 = FUN_18021c296(uVar3,(*(int *)(param_3 + 2) - iVar9) / 2 + iVar9);
      lVar11 = (longlong)((*(int *)(param_3 + 2) - *(int *)(puVar15 + 2)) / 2) *
               (longlong)*(int *)(param_1 + 0x1c);
      iVar10 = (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
      *(int *)((longlong)puVar15 + 0x14) = iVar9 - iVar10;
      iVar9 = iVar9 + iVar10;
      puVar12 = param_3;
    }
    *(int *)((longlong)puVar12 + 0x14) = iVar9;
  }
  uVar16 = (uint)uVar17;
  if ((uVar16 == 0) ||
     (*(int *)(param_1 + 0x3c + (ulonglong)(uVar16 - 1) * 0x20) <=
      *(int *)((longlong)puVar15 + 0x14))) {
    uVar2 = *(uint *)(param_1 + 0x20);
    if (uVar16 < uVar2) {
      if (bVar7) {
        iVar9 = *(int *)((longlong)puVar15 + 0x14);
      }
      else {
        iVar9 = *(int *)((longlong)param_3 + 0x14);
      }
      if (*(int *)(param_1 + 0x3c + (uVar17 & 0xffffffff) * 0x20) < iVar9) {
        return;
      }
    }
    uVar13 = uVar2 + 1;
    if (bVar7) {
      uVar13 = uVar2;
    }
    if (uVar13 < 0xc0) {
      if (uVar2 != uVar16) {
        uVar4 = uVar2;
        do {
          uVar4 = uVar4 - 1;
          uVar14 = (ulonglong)uVar13;
          uVar13 = uVar13 - 1;
          puVar12 = (undefined8 *)(param_1 + 0x28 + (ulonglong)uVar4 * 0x20);
          uVar3 = *puVar12;
          uVar5 = puVar12[1];
          puVar12 = (undefined8 *)(param_1 + 0x38 + (ulonglong)uVar4 * 0x20);
          uVar6 = puVar12[1];
          puVar1 = (undefined8 *)(param_1 + 0x38 + uVar14 * 0x20);
          *puVar1 = *puVar12;
          puVar1[1] = uVar6;
          puVar12 = (undefined8 *)(param_1 + 0x28 + uVar14 * 0x20);
          *puVar12 = uVar3;
          puVar12[1] = uVar5;
        } while (uVar4 != uVar16);
      }
      lVar11 = (uVar17 & 0xffffffff) * 0x20;
      uVar3 = *puVar15;
      uVar5 = puVar15[1];
      uVar6 = puVar15[3];
      puVar12 = (undefined8 *)(param_1 + 0x38 + lVar11);
      *puVar12 = puVar15[2];
      puVar12[1] = uVar6;
      puVar15 = (undefined8 *)(param_1 + 0x28 + lVar11);
      *puVar15 = uVar3;
      puVar15[1] = uVar5;
      *(uint *)(param_1 + 0x20) = uVar2 + 1;
      if (!bVar7) {
        lVar11 = (ulonglong)(uVar16 + 1) * 0x20;
        uVar3 = *param_3;
        uVar5 = param_3[1];
        uVar6 = param_3[3];
        puVar15 = (undefined8 *)(param_1 + 0x38 + lVar11);
        *puVar15 = param_3[2];
        puVar15[1] = uVar6;
        puVar15 = (undefined8 *)(param_1 + 0x28 + lVar11);
        *puVar15 = uVar3;
        puVar15[1] = uVar5;
        *(uint *)(param_1 + 0x20) = uVar2 + 2;
      }
    }
  }
  return;
}

