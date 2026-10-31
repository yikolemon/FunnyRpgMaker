/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140075f82 */

undefined8 FUN_140075f82(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  
  uVar8 = 3;
  if ((-1 < (int)param_4) && (-1 < param_5)) {
    puVar5 = *(uint **)(param_1 + 0x10);
    uVar2 = (*(ushort **)(param_1 + 0x18))[1];
    if (param_4 + uVar2 <= puVar5[1]) {
      uVar3 = **(ushort **)(param_1 + 0x18);
      uVar11 = (uint)uVar3;
      if ((param_5 + uVar11 <= *puVar5) &&
         (uVar12 = (uint)*(byte *)(param_1 + 0x22) * (uint)uVar2,
         param_2 + (uVar12 * uVar11 + 7 >> 3) <= param_3)) {
        if (uVar3 != 0 && uVar12 != 0) {
          uVar4 = puVar5[2];
          pbVar9 = (byte *)((longlong)(int)((param_4 >> 3) + param_5 * uVar4) +
                           *(longlong *)(puVar5 + 4));
          uVar13 = param_4 & 7;
          uVar7 = 8 - uVar13;
          if (uVar12 < 8 - uVar13) {
            uVar7 = uVar12;
          }
          uVar15 = 0;
          uVar14 = 0;
          uVar16 = uVar11;
          do {
            pbVar18 = pbVar9;
            uVar17 = uVar12;
            if (uVar13 != 0) {
              if (uVar16 == uVar11) {
                uVar15 = (uint)*param_2;
                param_2 = param_2 + 1;
                uVar14 = uVar13;
              }
              else if ((int)uVar14 < (int)uVar7) {
                if (param_2 < param_3) {
                  bVar10 = *param_2;
                  param_2 = param_2 + 1;
                  uVar15 = uVar15 | bVar10;
                }
                uVar14 = (uVar14 - uVar7) + 8;
              }
              else {
                uVar15 = (uVar15 & 0xffff) >> 8;
                uVar14 = uVar14 - uVar7;
              }
              *pbVar9 = *pbVar9 | (byte)((uVar15 & 0xffff) >> ((byte)uVar14 & 0x1f)) &
                                  (byte)(~(0xff << ((byte)uVar7 & 0x1f)) <<
                                        (8 - ((char)uVar13 + (byte)uVar7) & 0x1f));
              uVar15 = uVar15 << 8;
              pbVar18 = pbVar9 + 1;
              uVar17 = uVar12 - uVar7;
            }
            bVar10 = (byte)uVar14;
            uVar19 = uVar17;
            if (7 < (int)uVar17) {
              do {
                bVar1 = *param_2;
                param_2 = param_2 + 1;
                uVar15 = uVar15 & 0xffff | (uint)bVar1;
                *pbVar18 = *pbVar18 | (byte)(uVar15 >> (bVar10 & 0x1f));
                pbVar18 = pbVar18 + 1;
                uVar15 = uVar15 << 8;
                uVar17 = uVar19 - 8;
                bVar6 = 0xf < uVar19;
                uVar19 = uVar17;
              } while (bVar6);
            }
            if (0 < (int)uVar17) {
              if ((int)uVar14 < (int)uVar17) {
                if (param_2 < param_3) {
                  bVar1 = *param_2;
                  param_2 = param_2 + 1;
                  uVar15 = uVar15 | bVar1;
                }
                *pbVar18 = *pbVar18 |
                           (byte)(0xff00 >> ((byte)uVar17 & 0x1f)) &
                           (byte)((uVar15 & 0xffff) >> (bVar10 & 0x1f));
                uVar14 = (uVar14 - uVar17) + 8;
                uVar15 = uVar15 << 8;
              }
              else {
                *pbVar18 = *pbVar18 |
                           (byte)(0xff00 >> ((byte)uVar17 & 0x1f)) &
                           (byte)((uVar15 & 0xffff) >> (bVar10 & 0x1f));
                uVar14 = uVar14 - uVar17;
              }
            }
            pbVar9 = pbVar9 + (int)uVar4;
            uVar17 = uVar16 - 1;
            bVar6 = 0 < (int)uVar16;
            uVar16 = uVar17;
          } while (uVar17 != 0 && bVar6);
        }
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}

