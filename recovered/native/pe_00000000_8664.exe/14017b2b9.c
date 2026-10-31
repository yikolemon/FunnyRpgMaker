/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017b2b9 */

uint FUN_14017b2b9(longlong *param_1,uint *param_2,byte param_3)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  
  lVar3 = param_1[3];
  uVar6 = *(ushort *)(lVar3 + 6) << 8 | *(ushort *)(lVar3 + 6) >> 8;
  uVar12 = (uint)(uVar6 >> 1);
  if (uVar12 != 0) {
    lVar4 = *param_1;
    puVar11 = (ushort *)((ulonglong)*(uint *)(lVar4 + 0x298) + *(longlong *)(lVar4 + 0x290));
    uVar16 = (uint)param_3 + *param_2;
    uVar15 = (ulonglong)(uVar6 & 0xfffffffe);
    puVar14 = (ushort *)(lVar3 + 0xe);
    uVar21 = 0;
    puVar18 = (ushort *)(lVar3 + uVar15 + 0x10);
    while( true ) {
      uVar6 = *puVar18 << 8 | *puVar18 >> 8;
      if (uVar16 < uVar6 && param_3 == 0) break;
      uVar2 = *puVar14;
      puVar14 = puVar14 + 1;
      uVar13 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      uVar10 = (uint)uVar6;
      if (uVar16 < uVar6 || uVar16 == uVar10) {
        uVar16 = uVar10;
      }
      pbVar19 = (byte *)((longlong)puVar18 + uVar15);
      puVar1 = (ushort *)(pbVar19 + uVar15);
      bVar22 = uVar12 - 1 <= uVar21;
      while (uVar17 = uVar16, uVar16 <= uVar13) {
        uVar20 = (int)(short)((ushort)*pbVar19 << 8) | (uint)pbVar19[1];
        uVar6 = *puVar1 << 8 | *puVar1 >> 8;
        bVar5 = puVar11 < (ushort *)((longlong)puVar1 + (ulonglong)uVar6 + 2);
        uVar7 = (uint)uVar6;
        if ((uVar6 != 0 && ((uVar13 == 0xffff && uVar10 == 0xffff) && bVar22)) && bVar5) {
          uVar7 = 0;
        }
        if ((uVar6 != 0 && ((uVar13 == 0xffff && uVar10 == 0xffff) && bVar22)) && bVar5) {
          uVar20 = 1;
        }
        if (uVar7 == 0) {
          uVar7 = uVar20 + uVar16;
          uVar8 = uVar7 & 0xffff;
          if (param_3 == 0) {
            return uVar8;
          }
          if (*(uint *)(lVar4 + 0x10) <= uVar8) {
            if (((int)uVar7 < 0) && (-1 < (int)(uVar20 + uVar13))) {
              uVar17 = -uVar20;
              uVar8 = 0;
            }
            else {
              if ((0xffff < (int)uVar7) || ((int)(uVar20 + uVar13) < 0x10000)) break;
              uVar17 = 0x10000 - uVar20;
              uVar8 = 0;
            }
          }
        }
        else {
          if ((uVar7 == 0xffff) ||
             ((puVar9 = (ushort *)((ulonglong)(uVar7 + (uVar16 - uVar10) * 2) + (longlong)puVar1),
              param_3 != 0 && (puVar11 < puVar9)))) break;
          uVar6 = *puVar9;
          uVar6 = uVar6 << 8 | uVar6 >> 8;
          if (uVar6 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = uVar6 + uVar20 & 0xffff;
            if (*(uint *)(lVar4 + 0x10) <= uVar8) {
              uVar8 = 0;
            }
          }
        }
        if ((param_3 == 0) || (uVar8 != 0)) goto LAB_14017b4cc;
        uVar16 = uVar17 + 1;
        if (0xfffe < uVar17) {
          uVar8 = 0;
          goto LAB_14017b4da;
        }
      }
      uVar21 = uVar21 + 1;
      puVar18 = puVar18 + 1;
      if (uVar21 == uVar12) {
        uVar8 = 0;
LAB_14017b4cc:
        if (param_3 == 0) {
          return uVar8;
        }
LAB_14017b4da:
        *param_2 = uVar17;
        return uVar8;
      }
    }
  }
  return 0;
}

