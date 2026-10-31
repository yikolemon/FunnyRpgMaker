/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802287c6 */

undefined8 FUN_1802287c6(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  sbyte sVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if (*(longlong *)(puVar4 + 4) != 0) {
    if ((int)param_4 < 0) {
      return 3;
    }
    if (param_5 < 0) {
      return 3;
    }
    uVar12 = (uint)(*(ushort **)(param_1 + 0x18))[1];
    if (puVar4[1] < param_4 + uVar12) {
      return 3;
    }
    uVar2 = **(ushort **)(param_1 + 0x18);
    uVar10 = (uint)uVar2;
    if (*puVar4 < param_5 + uVar10) {
      return 3;
    }
    uVar12 = *(byte *)(param_1 + 0x22) * uVar12;
    if (param_3 < param_2 + (uVar12 + 7 >> 3) * uVar10) {
      return 3;
    }
    uVar3 = puVar4[2];
    pbVar9 = (byte *)(*(longlong *)(puVar4 + 4) + (longlong)(int)((param_4 >> 3) + param_5 * uVar3))
    ;
    param_4 = param_4 & 7;
    if (param_4 == 0) {
      if (uVar2 != 0) {
        do {
          pbVar7 = pbVar9;
          uVar8 = uVar12;
          uVar11 = uVar12;
          if (7 < uVar12) {
            do {
              bVar1 = *param_2;
              param_2 = param_2 + 1;
              *pbVar7 = *pbVar7 | bVar1;
              pbVar7 = pbVar7 + 1;
              uVar11 = uVar8 - 8;
              bVar5 = 0xf < (int)uVar8;
              uVar8 = uVar11;
            } while (bVar5);
          }
          if (0 < (int)uVar11) {
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            *pbVar7 = *pbVar7 | (byte)(0xff00 >> ((byte)uVar11 & 0x1f)) & bVar1;
          }
          pbVar9 = pbVar9 + (int)uVar3;
          uVar11 = uVar10 - 1;
          bVar5 = 0 < (int)uVar10;
          uVar10 = uVar11;
        } while (uVar11 != 0 && bVar5);
      }
    }
    else {
      if (uVar2 == 0) {
        return 0;
      }
      do {
        uVar8 = 0;
        sVar6 = (sbyte)param_4;
        pbVar7 = pbVar9;
        uVar11 = uVar12;
        if (7 < uVar12) {
          uVar8 = 0;
          uVar13 = uVar12;
          do {
            bVar1 = *param_2;
            *pbVar7 = *pbVar7 | (byte)((bVar1 | uVar8) >> sVar6);
            param_2 = param_2 + 1;
            pbVar7 = pbVar7 + 1;
            uVar8 = (bVar1 | uVar8) << 8;
            uVar11 = uVar13 - 8;
            bVar5 = 0xf < (int)uVar13;
            uVar13 = uVar11;
          } while (bVar5);
        }
        if (0 < (int)uVar11) {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar8 = uVar8 | 0xff00U >> ((byte)uVar11 & 0x1f) & (uint)bVar1;
        }
        *pbVar7 = *pbVar7 | (byte)(uVar8 >> sVar6);
        if ((int)(8 - param_4) < (int)uVar11) {
          pbVar7[1] = pbVar7[1] | (byte)((uVar8 << 8) >> sVar6);
        }
        pbVar9 = pbVar9 + (int)uVar3;
        uVar11 = uVar10 - 1;
        bVar5 = 0 < (int)uVar10;
        uVar10 = uVar11;
      } while (uVar11 != 0 && bVar5);
    }
  }
  return 0;
}

