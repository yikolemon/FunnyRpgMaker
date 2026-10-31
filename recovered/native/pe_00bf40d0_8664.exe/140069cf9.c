/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140069cf9 */

void FUN_140069cf9(longlong param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint uVar15;
  longlong lVar16;
  byte *pbVar17;
  uint uVar18;
  ulonglong uVar19;
  
  bVar9 = FUN_14006a428((int *)param_2);
  bVar8 = true;
  pbVar17 = param_3;
  if ((bVar9) && (bVar9 = FUN_14006a428((int *)param_3), pbVar17 = param_2, bVar9)) {
    if (*(int *)(param_3 + 0x10) < *(int *)(param_2 + 0x10)) {
      return;
    }
    bVar8 = false;
  }
  uVar18 = *(uint *)(param_1 + 0x20);
  if ((ulonglong)uVar18 == 0) {
    uVar19 = 0;
  }
  else {
    pbVar14 = (byte *)(param_1 + 0x28);
    uVar19 = 0;
    do {
      if (*(int *)(pbVar17 + 0x10) <= *(int *)(pbVar14 + 0x10)) {
        if (*(int *)(pbVar14 + 0x10) == *(int *)(pbVar17 + 0x10)) {
          return;
        }
        if ((!bVar8) && (*(int *)(pbVar14 + 0x10) <= *(int *)(param_3 + 0x10))) {
          return;
        }
        bVar11 = FUN_14006a42f(pbVar14);
        if (bVar11 != 0) {
          return;
        }
        goto LAB_140069d67;
      }
      uVar19 = uVar19 + 1;
      pbVar14 = pbVar14 + 0x20;
    } while (uVar18 != uVar19);
    uVar19 = (ulonglong)uVar18;
  }
LAB_140069d67:
  lVar16 = *(longlong *)(param_1 + 8);
  cVar10 = FUN_1400692c6(lVar16);
  if ((cVar10 != '\0') && (bVar11 = FUN_14006a05c(pbVar17), bVar11 == 0)) {
    iVar12 = *(int *)(pbVar17 + 0x10);
    if (bVar8) {
      uVar13 = FUN_1400698d6(lVar16,iVar12);
      iVar12 = (int)uVar13;
      pbVar14 = pbVar17;
    }
    else {
      uVar13 = FUN_1400698d6(lVar16,(*(int *)(param_3 + 0x10) - iVar12) / 2 + iVar12);
      lVar16 = (longlong)((*(int *)(param_3 + 0x10) - *(int *)(pbVar17 + 0x10)) / 2) *
               (longlong)*(int *)(param_1 + 0x1c);
      iVar12 = (int)((ulonglong)(lVar16 + (lVar16 >> 0x3f) + 0x8000) >> 0x10);
      *(int *)(pbVar17 + 0x14) = (int)uVar13 - iVar12;
      iVar12 = (int)uVar13 + iVar12;
      pbVar14 = param_3;
    }
    *(int *)(pbVar14 + 0x14) = iVar12;
  }
  uVar18 = (uint)uVar19;
  if ((uVar18 == 0) ||
     (*(int *)(param_1 + 0x3c + (ulonglong)(uVar18 - 1) * 0x20) <= *(int *)(pbVar17 + 0x14))) {
    uVar3 = *(uint *)(param_1 + 0x20);
    if (uVar18 < uVar3) {
      if (bVar8) {
        iVar12 = *(int *)(pbVar17 + 0x14);
      }
      else {
        iVar12 = *(int *)(param_3 + 0x14);
      }
      if (*(int *)(param_1 + 0x3c + (uVar19 & 0xffffffff) * 0x20) < iVar12) {
        return;
      }
    }
    uVar15 = uVar3 + 1;
    if (bVar8) {
      uVar15 = uVar3;
    }
    if (uVar15 < 0xc0) {
      if (uVar3 != uVar18) {
        uVar4 = uVar3;
        do {
          uVar4 = uVar4 - 1;
          uVar13 = (ulonglong)uVar15;
          uVar15 = uVar15 - 1;
          puVar1 = (undefined8 *)(param_1 + 0x28 + (ulonglong)uVar4 * 0x20);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(param_1 + 0x38 + (ulonglong)uVar4 * 0x20);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(param_1 + 0x38 + uVar13 * 0x20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(param_1 + 0x28 + uVar13 * 0x20);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
        } while (uVar4 != uVar18);
      }
      lVar16 = (uVar19 & 0xffffffff) * 0x20;
      uVar5 = *(undefined8 *)pbVar17;
      uVar6 = *(undefined8 *)(pbVar17 + 8);
      uVar7 = *(undefined8 *)(pbVar17 + 0x18);
      puVar1 = (undefined8 *)(param_1 + 0x38 + lVar16);
      *puVar1 = *(undefined8 *)(pbVar17 + 0x10);
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(param_1 + 0x28 + lVar16);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(uint *)(param_1 + 0x20) = uVar3 + 1;
      if (!bVar8) {
        lVar16 = (ulonglong)(uVar18 + 1) * 0x20;
        uVar5 = *(undefined8 *)param_3;
        uVar6 = *(undefined8 *)(param_3 + 8);
        uVar7 = *(undefined8 *)(param_3 + 0x18);
        puVar1 = (undefined8 *)(param_1 + 0x38 + lVar16);
        *puVar1 = *(undefined8 *)(param_3 + 0x10);
        puVar1[1] = uVar7;
        puVar1 = (undefined8 *)(param_1 + 0x28 + lVar16);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        *(uint *)(param_1 + 0x20) = uVar3 + 2;
      }
    }
  }
  return;
}

