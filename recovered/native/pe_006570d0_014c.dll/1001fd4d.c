/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001fd4d */

int * FUN_1001fd4d(int *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6,
                  uint param_7)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  sbyte sVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint *local_20;
  
  if (param_5 == param_3 && param_2 == param_4) {
    *param_1 = (int)param_6;
    param_1[1] = param_7;
  }
  else {
    *param_1 = (int)param_6;
    param_1[1] = param_7;
    FUN_1001fd02((param_5 - param_3) + ((int)param_4 - (int)param_2) * 8);
    bVar5 = (byte)param_3;
    uVar11 = -1 << (bVar5 & 0x1f);
    cVar6 = (char)param_7;
    uVar16 = 0xffffffff >> (-cVar6 & 0x1fU);
    if (param_7 == 0) {
      uVar16 = 0;
    }
    cVar7 = (char)param_5;
    uVar12 = 0xffffffff >> (-cVar7 & 0x1fU);
    iVar2 = param_1[1];
    uVar3 = -1 << ((byte)iVar2 & 0x1f);
    puVar17 = (uint *)((uint)(iVar2 == 0) * -4 + *param_1);
    if (param_4 == param_2) {
      if (param_5 == 0) {
        uVar12 = 0;
      }
      uVar4 = *param_2 & uVar12 & uVar11;
      uVar8 = uVar4 << (cVar6 - bVar5 & 0x1f);
      if (param_7 < param_3) {
        uVar8 = uVar4 >> (-(cVar6 - bVar5) & 0x1f);
      }
      if (param_6 == puVar17) {
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        *param_6 = (uVar3 | uVar16) & *param_6 | uVar8;
      }
      else {
        *param_6 = uVar16 & *param_6 | uVar8;
        param_6[1] = uVar3 & param_6[1] |
                     (uVar12 & uVar11 & *param_2) >> (cVar7 - (byte)iVar2 & 0x1f);
      }
    }
    else if (param_6 == puVar17) {
      uVar8 = (uVar11 & *param_2) << (cVar6 - bVar5 & 0x1f);
      if (param_7 < param_3) {
        uVar8 = (uVar11 & *param_2) >> (-(cVar6 - bVar5) & 0x1f);
      }
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      if (param_5 == 0) {
        uVar16 = (uVar3 | uVar16) & *param_6;
      }
      else {
        iVar9 = 0;
        if (iVar2 != 0) {
          iVar9 = iVar2;
        }
        uVar16 = (uVar3 | uVar16) & *param_6 | (uVar12 & *param_4) << ((char)iVar9 - cVar7 & 0x1fU);
      }
      *param_6 = uVar16 | uVar8;
    }
    else {
      uVar8 = param_3 & 7;
      if (uVar8 == (param_7 & 7)) {
        pbVar14 = (byte *)((int)param_2 + (param_3 >> 3));
        pbVar1 = (byte *)((int)param_4 + (param_5 >> 3));
        pbVar13 = (byte *)((int)param_6 + (param_7 >> 3));
        if (uVar8 != 0) {
          *pbVar13 = *pbVar14 & (byte)(0xff << (sbyte)uVar8) |
                     *pbVar13 & (byte)(0xff >> (8U - (sbyte)uVar8 & 0x1f));
          pbVar14 = pbVar14 + 1;
          pbVar13 = pbVar13 + 1;
        }
        pbVar13 = (byte *)thunk_FUN_1000b6c9(pbVar14,pbVar1,pbVar13);
        if ((param_5 & 7) != 0) {
          sVar10 = (sbyte)(param_5 & 7);
          *pbVar13 = *pbVar1 & (byte)(0xff >> (8U - sVar10 & 0x1f)) |
                     *pbVar13 & (byte)(0xff << sVar10);
        }
      }
      else if (param_7 < param_3) {
        param_3 = param_3 - param_7;
        bVar5 = (byte)param_3;
        uVar8 = 0xffffffff >> (bVar5 & 0x1f);
        uVar16 = uVar16 & *param_6 | (uVar11 & *param_2) >> (bVar5 & 0x1f);
        *param_6 = uVar16;
        param_2 = param_2 + 1;
        if (param_2 != param_4) {
          do {
            *param_6 = uVar16 & uVar8 | *param_2 << (0x20 - bVar5 & 0x1f);
            uVar16 = param_6[1] & ~uVar8 | *param_2 >> (bVar5 & 0x1f);
            param_6[1] = uVar16;
            param_6 = param_6 + 1;
            param_2 = param_2 + 1;
          } while (param_2 != param_4);
        }
        if (param_5 != 0) {
          uVar11 = (*param_2 & uVar12) << (0x20 - bVar5 & 0x1f);
          if (param_5 < param_3) {
            *param_6 = uVar16 & (uVar3 | uVar8) | uVar11;
          }
          else {
            *param_6 = uVar16 & uVar8 | uVar11;
            if (param_5 != param_3) {
              param_6[1] = uVar3 & param_6[1] | (uVar12 & *param_2) >> (bVar5 & 0x1f);
            }
          }
        }
      }
      else {
        bVar5 = (byte)(param_7 - param_3);
        uVar8 = 0x20 - (param_7 - param_3);
        *param_6 = uVar16 & *param_6 | (uVar11 & *param_2) << (bVar5 & 0x1f);
        puVar17 = param_6 + 1;
        puVar15 = param_2 + 1;
        uVar16 = *param_2 >> (-bVar5 & 0x1f);
        if (puVar15 == param_4) {
          local_20 = param_6;
        }
        else {
          do {
            local_20 = puVar17;
            *local_20 = (*puVar15 << (bVar5 & 0x1f)) + uVar16;
            puVar17 = local_20 + 1;
            uVar16 = *puVar15;
            puVar15 = puVar15 + 1;
            uVar16 = uVar16 >> ((byte)uVar8 & 0x1f);
          } while (puVar15 != param_4);
        }
        if (param_5 < uVar8) {
          if (param_5 == 0) {
            uVar16 = uVar3 & *puVar17 | uVar16;
          }
          else {
            uVar16 = uVar3 & *puVar17 | uVar16 | (uVar12 & *puVar15) << (bVar5 & 0x1f);
          }
          *puVar17 = uVar16;
        }
        else {
          *puVar17 = (*puVar15 << (bVar5 & 0x1f)) + uVar16;
          if (param_5 != uVar8) {
            uVar16 = *puVar15 >> ((byte)uVar8 & 0x1f);
            local_20[2] = (local_20[2] ^ uVar16) & uVar3 ^ uVar16;
          }
        }
      }
    }
  }
  return param_1;
}

