/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006e2cb */

longlong *
FUN_14006e2cb(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  sbyte sVar13;
  byte *pbVar14;
  uint uVar15;
  uint *puVar16;
  byte *pbVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  byte *pbVar25;
  
  puVar1 = (uint *)*param_2;
  lVar2 = param_2[1];
  puVar3 = (uint *)*param_3;
  lVar4 = param_3[1];
  if (lVar4 == lVar2 && puVar1 == puVar3) {
    lVar2 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = lVar2;
  }
  else {
    puVar18 = (uint *)*param_4;
    uVar8 = *(undefined4 *)((longlong)param_4 + 4);
    lVar10 = param_4[1];
    uVar9 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(int *)param_1 = (int)*param_4;
    *(undefined4 *)((longlong)param_1 + 4) = uVar8;
    *(int *)(param_1 + 1) = (int)lVar10;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
    FUN_140069cf4(param_1,(lVar4 - lVar2) + ((longlong)puVar3 - (longlong)puVar1) * 8);
    uVar11 = param_2[1];
    bVar12 = (byte)uVar11;
    uVar15 = -1 << (bVar12 & 0x1f);
    uVar5 = param_4[1];
    cVar7 = (char)uVar5;
    uVar20 = 0xffffffff >> (-cVar7 & 0x1fU);
    if (uVar5 == 0) {
      uVar20 = 0;
    }
    uVar6 = param_3[1];
    bVar23 = (byte)uVar6;
    uVar19 = 0xffffffff >> (-bVar23 & 0x1f);
    uVar22 = uVar19;
    if (uVar6 == 0) {
      uVar22 = 0;
    }
    lVar2 = param_1[1];
    uVar24 = -1 << ((byte)lVar2 & 0x1f);
    puVar16 = (uint *)((ulonglong)(lVar2 == 0) * -4 + *param_1);
    if (puVar3 == puVar1) {
      uVar21 = *puVar1 & uVar22 & uVar15;
      uVar19 = uVar21 << (cVar7 - bVar12 & 0x1f);
      if (uVar5 < uVar11) {
        uVar19 = uVar21 >> (bVar12 - cVar7 & 0x1f);
      }
      if (puVar18 == puVar16) {
        if (lVar2 == 0) {
          uVar24 = 0;
        }
        *puVar18 = (uVar24 | uVar20) & *puVar18 | uVar19;
      }
      else {
        *puVar18 = uVar20 & *puVar18 | uVar19;
        puVar18[1] = uVar24 & puVar18[1] |
                     (uVar22 & uVar15 & *puVar1) >>
                     ((char)*(undefined4 *)(param_3 + 1) - (char)(int)param_1[1] & 0x1fU);
      }
    }
    else if (puVar18 == puVar16) {
      uVar22 = (uVar15 & *puVar1) << (cVar7 - bVar12 & 0x1f);
      if (uVar5 < uVar11) {
        uVar22 = (uVar15 & *puVar1) >> (bVar12 - cVar7 & 0x1f);
      }
      if (lVar2 == 0) {
        uVar24 = 0;
      }
      if (uVar6 == 0) {
        uVar20 = (uVar24 | uVar20) & *puVar18;
      }
      else {
        bVar12 = 0;
        if (lVar2 != 0) {
          bVar12 = (byte)lVar2;
        }
        uVar20 = (uVar24 | uVar20) & *puVar18 | (uVar19 & *puVar3) << (bVar12 - bVar23 & 0x1f);
      }
      *puVar18 = uVar20 | uVar22;
    }
    else {
      uVar19 = (uint)uVar11 & 7;
      if (uVar19 == ((uint)uVar5 & 7)) {
        bVar23 = bVar23 & 7;
        pbVar25 = (byte *)((longlong)puVar1 + (uVar11 >> 3));
        pbVar14 = (byte *)((longlong)puVar3 + (uVar6 >> 3));
        pbVar17 = (byte *)((longlong)puVar18 + (uVar5 >> 3));
        if ((uVar11 & 7) != 0) {
          sVar13 = (sbyte)uVar19;
          *pbVar17 = (byte)(0xff >> (8U - sVar13 & 0x1f)) & *pbVar17 |
                     (*pbVar25 >> sVar13) << sVar13;
          pbVar25 = pbVar25 + 1;
          pbVar17 = pbVar17 + 1;
        }
        pbVar17 = (byte *)thunk_FUN_1400498e2(pbVar25,pbVar14,pbVar17);
        if ((uVar6 & 7) != 0) {
          *pbVar17 = (byte)(0xff >> (8 - bVar23 & 0x1f)) & *pbVar14 | (*pbVar17 >> bVar23) << bVar23
          ;
        }
      }
      else {
        puVar16 = puVar1 + 1;
        if (uVar5 < uVar11) {
          uVar11 = uVar11 - uVar5;
          bVar12 = (byte)uVar11;
          uVar19 = 0xffffffff >> (bVar12 & 0x1f);
          uVar20 = uVar20 & *puVar18 | (uVar15 & *puVar1) >> (bVar12 & 0x1f);
          *puVar18 = uVar20;
          if (puVar16 != puVar3) {
            do {
              *puVar18 = uVar20 & uVar19 | *puVar16 << (0x20 - bVar12 & 0x1f);
              uVar20 = puVar18[1] & ~uVar19 | *puVar16 >> (bVar12 & 0x1f);
              puVar18[1] = uVar20;
              puVar18 = puVar18 + 1;
              puVar16 = puVar16 + 1;
            } while (puVar16 != puVar3);
          }
          if (param_3[1] != 0) {
            uVar15 = (*puVar16 & uVar22) << (0x20 - bVar12 & 0x1f);
            if ((ulonglong)param_3[1] < uVar11) {
              *puVar18 = uVar20 & (uVar19 | uVar24) | uVar15;
            }
            else {
              *puVar18 = uVar20 & uVar19 | uVar15;
              if (param_3[1] != uVar11) {
                puVar18[1] = uVar24 & puVar18[1] | (uVar22 & *puVar16) >> (bVar12 & 0x1f);
              }
            }
          }
        }
        else {
          bVar12 = (byte)(uVar5 - uVar11);
          uVar11 = 0x20 - (uVar5 - uVar11);
          *puVar18 = uVar20 & *puVar18 | (uVar15 & *puVar1) << (bVar12 & 0x1f);
          uVar20 = *puVar1 >> (-bVar12 & 0x1f);
          for (; puVar1 = puVar18 + 1, puVar16 != puVar3; puVar16 = puVar16 + 1) {
            *puVar1 = *puVar16 << (bVar12 & 0x1f) | uVar20;
            uVar20 = *puVar16 >> ((byte)uVar11 & 0x1f);
            puVar18 = puVar1;
          }
          if ((ulonglong)param_3[1] < uVar11) {
            if (param_3[1] == 0) {
              uVar20 = uVar24 & *puVar1 | uVar20;
            }
            else {
              uVar20 = uVar24 & *puVar1 | uVar20 | (uVar22 & *puVar16) << (bVar12 & 0x1f);
            }
            *puVar1 = uVar20;
          }
          else {
            *puVar1 = *puVar16 << (bVar12 & 0x1f) | uVar20;
            if (param_3[1] != uVar11) {
              uVar20 = *puVar16 >> ((byte)uVar11 & 0x1f);
              puVar18[2] = (puVar18[2] ^ uVar20) & uVar24 ^ uVar20;
            }
          }
        }
      }
    }
  }
  return param_1;
}

