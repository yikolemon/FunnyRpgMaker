/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180220cd6 */

uint FUN_180220cd6(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  byte *pbVar21;
  ushort *puVar22;
  longlong lVar23;
  uint uVar24;
  uint local_90;
  uint local_84;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_1801ca519(param_2,8);
  }
  uVar8 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  uVar18 = (uint)uVar8;
  iVar16 = (int)param_1;
  if (*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar8 + param_1) {
    if (0 < *(int *)(param_2 + 0x110)) {
      FUN_1801ca519(param_2,8);
    }
    uVar18 = (int)*(undefined8 *)(param_2 + 0x108) - iVar16;
  }
  if (uVar18 < (uint)((int)*(undefined8 *)(param_2 + 0x108) - iVar16)) {
    if (1 < *(int *)(param_2 + 0x110)) {
      FUN_1801ca519(param_2,8);
    }
    uVar18 = (int)*(undefined8 *)(param_2 + 0x108) - iVar16;
  }
  if (uVar18 < 0x10) {
    FUN_1801ca519(param_2,8);
  }
  bVar1 = *(byte *)(param_1 + 6);
  uVar6 = (uint)bVar1 * 0x100;
  bVar2 = *(byte *)(param_1 + 7);
  uVar15 = uVar6 + bVar2;
  if ((bVar2 & 1) != 0 && 1 < *(int *)(param_2 + 0x110)) {
    FUN_1801ca519(param_2,8);
  }
  uVar24 = uVar15 & 0xfffffffe;
  if (uVar18 < uVar24 * 4 + 0x10) {
    FUN_1801ca519(param_2,8);
  }
  uVar15 = uVar15 >> 1;
  if (1 < *(int *)(param_2 + 0x110)) {
    uVar8 = CONCAT11(*(undefined1 *)(param_1 + 8),*(byte *)(param_1 + 9));
    uVar5 = *(undefined2 *)(param_1 + 10);
    uVar3 = *(undefined1 *)(param_1 + 0xc);
    bVar4 = *(byte *)(param_1 + 0xd);
    if (((*(byte *)(param_1 + 9) | bVar4) & 1) != 0) {
      FUN_1801ca519(param_2,8);
    }
    uVar10 = (uint)(uVar8 >> 1);
    if ((((uVar15 < uVar10) || ((uVar8 & 0xfffffffe) < uVar15)) ||
        ((ushort)(CONCAT11(uVar3,bVar4) >> 1) + uVar10 != uVar15)) ||
       (uVar10 != 1 << ((byte)((ushort)uVar5 >> 8) & 0x1f))) {
      FUN_1801ca519(param_2,8);
    }
  }
  puVar13 = (ushort *)(param_1 + 0xe);
  if ((1 < *(int *)(param_2 + 0x110)) &&
     (uVar8 = *(ushort *)(param_1 + 0xe + (ulonglong)(uVar24 - 2)),
     (ushort)(uVar8 << 8 | uVar8 >> 8) != 0xffff)) {
    FUN_1801ca519(param_2,8);
  }
  if (uVar15 == 0) {
    local_84 = 0;
  }
  else {
    uVar19 = (ulonglong)uVar24;
    puVar14 = (ushort *)(uVar19 + param_1 + uVar19 + 0x10);
    pbVar21 = (byte *)((longlong)puVar14 + uVar19);
    puVar22 = (ushort *)(param_1 + uVar19 + 0x10);
    pbVar12 = pbVar21 + uVar19;
    lVar23 = param_1 + (ulonglong)(ushort)(CONCAT11(bVar1,bVar2) >> 1) * 6 + 0x11;
    local_90 = 0;
    uVar10 = 0;
    local_84 = 0;
    uVar24 = 0;
    do {
      uVar9 = *puVar22 << 8 | *puVar22 >> 8;
      uVar17 = (uint)(ushort)(*puVar13 << 8 | *puVar13 >> 8);
      uVar8 = *puVar14;
      bVar1 = *pbVar21;
      bVar4 = pbVar21[1];
      uVar20 = (uint)uVar9;
      iVar16 = uVar17 - uVar9;
      if (uVar17 < uVar20) {
        FUN_1801ca519(param_2,8);
      }
      if ((uVar10 != 0) && (uVar20 <= uVar24)) {
        if (*(int *)(param_2 + 0x110) < 1) {
          if ((uVar20 < local_90) || (uVar17 < uVar24)) {
            local_84 = local_84 | 1;
          }
          else {
            local_84 = local_84 | 2;
          }
        }
        else {
          FUN_1801ca519(param_2,8);
        }
      }
      uVar24 = (uint)bVar1 * 0x100 + (uint)bVar4;
      if (uVar24 != 0) {
        if (uVar24 == 0xffff) {
          if ((((1 < *(int *)(param_2 + 0x110)) || (uVar10 != uVar15 - 1)) || (uVar20 != 0xffff)) ||
             (uVar17 != 0xffff)) {
            FUN_1801ca519(param_2,8);
          }
        }
        else {
          pbVar11 = pbVar21 + uVar24;
          if (*(int *)(param_2 + 0x110) < 1) {
            if ((((uVar10 != uVar15 - 1) || (uVar20 != 0xffff)) || (uVar17 != 0xffff)) &&
               ((pbVar11 < pbVar12 || (*(byte **)(param_2 + 0x108) < pbVar11 + (iVar16 * 2 + 2)))))
            goto LAB_1802210af;
          }
          else if ((pbVar11 < pbVar12) ||
                  ((byte *)((ulonglong)uVar18 + param_1) < pbVar11 + (iVar16 * 2 + 2))) {
LAB_1802210af:
            FUN_1801ca519(param_2,8);
          }
          if ((0 < *(int *)(param_2 + 0x110)) && (uVar20 < uVar17)) {
            uVar19 = (ulonglong)CONCAT11(bVar1,bVar4);
            uVar24 = uVar20;
            do {
              sVar7 = CONCAT11(pbVar21[uVar19],*(undefined1 *)(lVar23 + uVar19));
              if ((sVar7 != 0) &&
                 (*(uint *)(param_2 + 0x120) <= (uint)(ushort)(sVar7 + (uVar8 << 8 | uVar8 >> 8))))
              {
                FUN_1801ca519(param_2,0x10);
              }
              uVar24 = uVar24 + 1;
              uVar19 = uVar19 + 2;
            } while (uVar24 < uVar17);
          }
        }
      }
      puVar22 = puVar22 + 1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
      pbVar21 = pbVar21 + 2;
      uVar10 = uVar10 + 1;
      lVar23 = lVar23 + 2;
      uVar24 = uVar17;
      local_90 = uVar20;
    } while (uVar10 != (uVar6 | bVar2) >> 1);
  }
  return local_84;
}

