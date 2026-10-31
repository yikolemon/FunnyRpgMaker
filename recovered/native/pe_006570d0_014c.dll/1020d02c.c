/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020d02c */

void __fastcall FUN_1020d02c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  cVar8 = FUN_1020d6f3();
  bVar7 = true;
  puVar13 = param_3;
  if ((cVar8 != '\0') && (cVar8 = FUN_1020d6f3(), puVar13 = param_2, cVar8 != '\0')) {
    if ((int)param_3[2] < (int)param_2[2]) {
      return;
    }
    bVar7 = false;
  }
  uVar16 = *(uint *)(param_1 + 0x14);
  if (uVar16 == 0) {
    uVar16 = 0;
  }
  else {
    iVar10 = param_1 + 0x1c;
    uVar15 = 0;
    do {
      iVar9 = *(int *)(iVar10 + 8);
      if ((int)puVar13[2] <= iVar9) {
        if (iVar9 == puVar13[2]) {
          return;
        }
        if ((!bVar7) && (iVar9 <= (int)param_3[2])) {
          return;
        }
        cVar8 = FUN_1020d6fa();
        uVar16 = uVar15;
        if (cVar8 != '\0') {
          return;
        }
        break;
      }
      uVar15 = uVar15 + 1;
      iVar10 = iVar10 + 0x14;
    } while (uVar16 != uVar15);
  }
  cVar8 = FUN_1000e094();
  if ((cVar8 != '\0') && (cVar8 = FUN_1020d348(), cVar8 == '\0')) {
    if (bVar7) {
      iVar9 = FUN_1020cc02();
      puVar11 = puVar13;
    }
    else {
      iVar9 = FUN_1020cc02();
      lVar3 = (longlong)((int)(param_3[2] - puVar13[2]) / 2) * (longlong)*(int *)(param_1 + 0x10);
      iVar10 = (int)(lVar3 >> 0x3f);
      lVar3 = lVar3 + CONCAT44(iVar10,iVar10) + 0x8000;
      uVar15 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
      puVar13[3] = iVar9 - uVar15;
      iVar9 = uVar15 + iVar9;
      puVar11 = param_3;
    }
    puVar11[3] = iVar9;
  }
  if ((uVar16 == 0) || (*(int *)(param_1 + 0x14 + uVar16 * 0x14) <= (int)puVar13[3])) {
    uVar15 = *(uint *)(param_1 + 0x14);
    iVar10 = uVar16 - uVar15;
    if (uVar16 < uVar15) {
      puVar11 = param_3;
      if (bVar7) {
        puVar11 = puVar13;
      }
      if (*(int *)(param_1 + 0x28 + uVar16 * 0x14) < (int)puVar11[3]) {
        return;
      }
    }
    uVar12 = uVar15 + 1;
    if (bVar7) {
      uVar12 = uVar15;
    }
    if (uVar12 < 0xc0) {
      if (uVar15 != uVar16) {
        iVar9 = uVar12 * 0x14 + 0x1c;
        iVar2 = uVar15 * 0x14 + 8;
        iVar14 = param_1;
        do {
          *(undefined4 *)(iVar14 + 0x10 + iVar9) = *(undefined4 *)(iVar14 + 0x10 + iVar2);
          puVar11 = (undefined4 *)(iVar14 + iVar2);
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puVar1 = (undefined4 *)(iVar14 + iVar9);
          *puVar1 = *puVar11;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          iVar14 = iVar14 + -0x14;
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
      }
      *(undefined4 *)(param_1 + 0x2c + uVar16 * 0x14) = puVar13[4];
      uVar4 = puVar13[1];
      uVar5 = puVar13[2];
      uVar6 = puVar13[3];
      puVar11 = (undefined4 *)(param_1 + 0x1c + uVar16 * 0x14);
      *puVar11 = *puVar13;
      puVar11[1] = uVar4;
      puVar11[2] = uVar5;
      puVar11[3] = uVar6;
      *(uint *)(param_1 + 0x14) = uVar15 + 1;
      if (!bVar7) {
        iVar10 = param_1 + uVar16 * 0x14;
        *(undefined4 *)(iVar10 + 0x40) = param_3[4];
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        *(undefined4 *)(iVar10 + 0x30) = *param_3;
        *(undefined4 *)(iVar10 + 0x34) = uVar4;
        *(undefined4 *)(iVar10 + 0x38) = uVar5;
        *(undefined4 *)(iVar10 + 0x3c) = uVar6;
        *(uint *)(param_1 + 0x14) = uVar15 + 2;
      }
    }
  }
  return;
}

