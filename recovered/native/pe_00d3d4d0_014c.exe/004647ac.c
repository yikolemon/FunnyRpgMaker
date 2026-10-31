/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004647ac */

void __fastcall FUN_004647ac(int param_1,byte *param_2,byte *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  bVar10 = FUN_00464e73((int *)param_2);
  bVar9 = true;
  pbVar16 = param_3;
  if ((bVar10) && (bVar10 = FUN_00464e73((int *)param_3), pbVar16 = param_2, bVar10)) {
    if (*(int *)(param_3 + 8) < *(int *)(param_2 + 8)) {
      return;
    }
    bVar9 = false;
  }
  uVar19 = *(uint *)(param_1 + 0x14);
  if (uVar19 == 0) {
    uVar19 = 0;
  }
  else {
    pbVar14 = (byte *)(param_1 + 0x1c);
    uVar18 = 0;
    do {
      iVar15 = *(int *)(pbVar14 + 8);
      if (*(int *)(pbVar16 + 8) <= iVar15) {
        if (iVar15 == *(int *)(pbVar16 + 8)) {
          return;
        }
        if ((!bVar9) && (iVar15 <= *(int *)(param_3 + 8))) {
          return;
        }
        bVar12 = FUN_00464e7a(pbVar14);
        uVar19 = uVar18;
        if (bVar12 != 0) {
          return;
        }
        break;
      }
      uVar18 = uVar18 + 1;
      pbVar14 = pbVar14 + 0x14;
    } while (uVar19 != uVar18);
  }
  iVar15 = *(int *)(param_1 + 4);
  cVar11 = FUN_00463d78(iVar15);
  if ((cVar11 != '\0') && (bVar12 = FUN_00464ac8(pbVar16), bVar12 == 0)) {
    iVar4 = *(int *)(pbVar16 + 8);
    if (bVar9) {
      uVar13 = FUN_00464382(iVar15,iVar4);
      pbVar14 = pbVar16;
    }
    else {
      uVar18 = FUN_00464382(iVar15,(*(int *)(param_3 + 8) - iVar4) / 2 + iVar4);
      lVar5 = (longlong)((*(int *)(param_3 + 8) - *(int *)(pbVar16 + 8)) / 2) *
              (longlong)*(int *)(param_1 + 0x10);
      iVar15 = (int)(lVar5 >> 0x3f);
      lVar5 = lVar5 + CONCAT44(iVar15,iVar15) + 0x8000;
      uVar13 = (int)((ulonglong)lVar5 >> 0x20) << 0x10 | (uint)lVar5 >> 0x10;
      *(uint *)(pbVar16 + 0xc) = uVar18 - uVar13;
      uVar13 = uVar13 + uVar18;
      pbVar14 = param_3;
    }
    *(uint *)(pbVar14 + 0xc) = uVar13;
  }
  if ((uVar19 == 0) || (*(int *)(param_1 + 0x14 + uVar19 * 0x14) <= *(int *)(pbVar16 + 0xc))) {
    uVar18 = *(uint *)(param_1 + 0x14);
    iVar15 = uVar19 - uVar18;
    if (uVar19 < uVar18) {
      pbVar14 = param_3;
      if (bVar9) {
        pbVar14 = pbVar16;
      }
      if (*(int *)(param_1 + 0x28 + uVar19 * 0x14) < *(int *)(pbVar14 + 0xc)) {
        return;
      }
    }
    uVar13 = uVar18 + 1;
    if (bVar9) {
      uVar13 = uVar18;
    }
    if (uVar13 < 0xc0) {
      if (uVar18 != uVar19) {
        iVar4 = uVar13 * 0x14 + 0x1c;
        iVar3 = uVar18 * 0x14 + 8;
        iVar17 = param_1;
        do {
          *(undefined4 *)(iVar17 + 0x10 + iVar4) = *(undefined4 *)(iVar17 + 0x10 + iVar3);
          puVar1 = (undefined4 *)(iVar17 + iVar3);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)(iVar17 + iVar4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          iVar17 = iVar17 + -0x14;
          iVar15 = iVar15 + 1;
        } while (iVar15 != 0);
      }
      *(undefined4 *)(param_1 + 0x2c + uVar19 * 0x14) = *(undefined4 *)(pbVar16 + 0x10);
      uVar6 = *(undefined4 *)(pbVar16 + 4);
      uVar7 = *(undefined4 *)(pbVar16 + 8);
      uVar8 = *(undefined4 *)(pbVar16 + 0xc);
      puVar1 = (undefined4 *)(param_1 + 0x1c + uVar19 * 0x14);
      *puVar1 = *(undefined4 *)pbVar16;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(uint *)(param_1 + 0x14) = uVar18 + 1;
      if (!bVar9) {
        iVar15 = param_1 + uVar19 * 0x14;
        *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(param_3 + 0x10);
        uVar6 = *(undefined4 *)(param_3 + 4);
        uVar7 = *(undefined4 *)(param_3 + 8);
        uVar8 = *(undefined4 *)(param_3 + 0xc);
        *(undefined4 *)(iVar15 + 0x30) = *(undefined4 *)param_3;
        *(undefined4 *)(iVar15 + 0x34) = uVar6;
        *(undefined4 *)(iVar15 + 0x38) = uVar7;
        *(undefined4 *)(iVar15 + 0x3c) = uVar8;
        *(uint *)(param_1 + 0x14) = uVar18 + 2;
      }
    }
  }
  return;
}

