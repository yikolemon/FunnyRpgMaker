/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140075e06 */

undefined8 FUN_140075e06(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  sbyte sVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (*(longlong *)(puVar5 + 4) != 0) {
    if ((int)param_4 < 0) {
      return 3;
    }
    if (param_5 < 0) {
      return 3;
    }
    uVar2 = (*(ushort **)(param_1 + 0x18))[1];
    if (puVar5[1] < param_4 + uVar2) {
      return 3;
    }
    uVar3 = **(ushort **)(param_1 + 0x18);
    uVar13 = (uint)uVar3;
    if (*puVar5 < param_5 + uVar13) {
      return 3;
    }
    uVar10 = (uint)*(byte *)(param_1 + 0x22) * (uint)uVar2;
    if (param_3 < param_2 + (uVar10 + 7 >> 3) * uVar13) {
      return 3;
    }
    uVar4 = puVar5[2];
    pbVar12 = (byte *)(*(longlong *)(puVar5 + 4) + (longlong)(int)((param_4 >> 3) + param_5 * uVar4)
                      );
    uVar11 = param_4 & 7;
    if (uVar11 == 0) {
      if (uVar3 != 0) {
        do {
          pbVar8 = pbVar12;
          uVar14 = uVar10;
          uVar11 = uVar10;
          if (7 < uVar10) {
            do {
              bVar1 = *param_2;
              param_2 = param_2 + 1;
              *pbVar8 = *pbVar8 | bVar1;
              pbVar8 = pbVar8 + 1;
              uVar11 = uVar14 - 8;
              bVar6 = 0xf < (int)uVar14;
              uVar14 = uVar11;
            } while (bVar6);
          }
          if (0 < (int)uVar11) {
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            *pbVar8 = *pbVar8 | (byte)(0xff00 >> ((byte)uVar11 & 0x1f)) & bVar1;
          }
          pbVar12 = pbVar12 + (int)uVar4;
          uVar11 = uVar13 - 1;
          bVar6 = 0 < (int)uVar13;
          uVar13 = uVar11;
        } while (uVar11 != 0 && bVar6);
      }
    }
    else {
      if (uVar3 == 0) {
        return 0;
      }
      do {
        uVar9 = 0;
        sVar7 = (sbyte)uVar11;
        pbVar8 = pbVar12;
        uVar14 = uVar10;
        if (7 < uVar10) {
          uVar9 = 0;
          uVar15 = uVar10;
          do {
            bVar1 = *param_2;
            *pbVar8 = *pbVar8 | (byte)((bVar1 | uVar9) >> sVar7);
            param_2 = param_2 + 1;
            pbVar8 = pbVar8 + 1;
            uVar9 = (bVar1 | uVar9) << 8;
            uVar14 = uVar15 - 8;
            bVar6 = 0xf < (int)uVar15;
            uVar15 = uVar14;
          } while (bVar6);
        }
        if (0 < (int)uVar14) {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar9 = uVar9 | 0xff00U >> ((byte)uVar14 & 0x1f) & (uint)bVar1;
        }
        *pbVar8 = *pbVar8 | (byte)(uVar9 >> sVar7);
        if ((int)(8 - uVar11) < (int)uVar14) {
          pbVar8[1] = pbVar8[1] | (byte)((uVar9 << 8) >> sVar7);
        }
        pbVar12 = pbVar12 + (int)uVar4;
        uVar14 = uVar13 - 1;
        bVar6 = 0 < (int)uVar13;
        uVar13 = uVar14;
      } while (uVar14 != 0 && bVar6);
    }
  }
  return 0;
}

