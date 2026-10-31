/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180228942 */

undefined8 FUN_180228942(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  
  uVar7 = 3;
  if ((-1 < (int)param_4) && (-1 < param_5)) {
    puVar4 = *(uint **)(param_1 + 0x10);
    uVar10 = (uint)(*(ushort **)(param_1 + 0x18))[1];
    if (param_4 + uVar10 <= puVar4[1]) {
      uVar2 = **(ushort **)(param_1 + 0x18);
      uVar11 = (uint)uVar2;
      if ((param_5 + uVar11 <= *puVar4) &&
         (uVar10 = *(byte *)(param_1 + 0x22) * uVar10,
         param_2 + (uVar10 * uVar11 + 7 >> 3) <= param_3)) {
        if (uVar2 != 0 && uVar10 != 0) {
          uVar3 = puVar4[2];
          pbVar8 = (byte *)((longlong)(int)((param_4 >> 3) + param_5 * uVar3) +
                           *(longlong *)(puVar4 + 4));
          param_4 = param_4 & 7;
          uVar6 = 8 - param_4;
          if (uVar10 < 8 - param_4) {
            uVar6 = uVar10;
          }
          uVar13 = 0;
          uVar12 = 0;
          uVar14 = uVar11;
          do {
            pbVar16 = pbVar8;
            uVar15 = uVar10;
            if (param_4 != 0) {
              if (uVar14 == uVar11) {
                uVar13 = (uint)*param_2;
                param_2 = param_2 + 1;
                uVar12 = param_4;
              }
              else if ((int)uVar12 < (int)uVar6) {
                if (param_2 < param_3) {
                  bVar9 = *param_2;
                  param_2 = param_2 + 1;
                  uVar13 = uVar13 | bVar9;
                }
                uVar12 = (uVar12 - uVar6) + 8;
              }
              else {
                uVar13 = (uVar13 & 0xffff) >> 8;
                uVar12 = uVar12 - uVar6;
              }
              *pbVar8 = *pbVar8 | (byte)((uVar13 & 0xffff) >> ((byte)uVar12 & 0x1f)) &
                                  (byte)(~(0xff << ((byte)uVar6 & 0x1f)) <<
                                        (8 - ((char)param_4 + (byte)uVar6) & 0x1f));
              uVar13 = uVar13 << 8;
              pbVar16 = pbVar8 + 1;
              uVar15 = uVar10 - uVar6;
            }
            bVar9 = (byte)uVar12;
            uVar17 = uVar15;
            if (7 < (int)uVar15) {
              do {
                bVar1 = *param_2;
                param_2 = param_2 + 1;
                uVar13 = uVar13 & 0xffff | (uint)bVar1;
                *pbVar16 = *pbVar16 | (byte)(uVar13 >> (bVar9 & 0x1f));
                pbVar16 = pbVar16 + 1;
                uVar13 = uVar13 << 8;
                uVar15 = uVar17 - 8;
                bVar5 = 0xf < uVar17;
                uVar17 = uVar15;
              } while (bVar5);
            }
            if (0 < (int)uVar15) {
              if ((int)uVar12 < (int)uVar15) {
                if (param_2 < param_3) {
                  bVar1 = *param_2;
                  param_2 = param_2 + 1;
                  uVar13 = uVar13 | bVar1;
                }
                *pbVar16 = *pbVar16 |
                           (byte)(0xff00 >> ((byte)uVar15 & 0x1f)) &
                           (byte)((uVar13 & 0xffff) >> (bVar9 & 0x1f));
                uVar12 = (uVar12 - uVar15) + 8;
                uVar13 = uVar13 << 8;
              }
              else {
                *pbVar16 = *pbVar16 |
                           (byte)(0xff00 >> ((byte)uVar15 & 0x1f)) &
                           (byte)((uVar13 & 0xffff) >> (bVar9 & 0x1f));
                uVar12 = uVar12 - uVar15;
              }
            }
            pbVar8 = pbVar8 + (int)uVar3;
            uVar15 = uVar14 - 1;
            bVar5 = 0 < (int)uVar14;
            uVar14 = uVar15;
          } while (uVar15 != 0 && bVar5);
        }
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}

