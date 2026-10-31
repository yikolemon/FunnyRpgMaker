/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f6e8 */

longlong FUN_14006f6e8(longlong param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  puVar5 = (uint *)FUN_14007a1b5((uint *)(lVar6 + 6),param_3);
  if (puVar5 != (uint *)0x0) {
    uVar10 = *puVar5;
    uVar16 = puVar5[1];
    uVar17 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar10 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    if (uVar17 != 0 || uVar10 != 0) {
      if (uVar17 == 0) {
        puVar5 = (uint *)(lVar6 + (ulonglong)uVar10);
LAB_14006f892:
        lVar6 = FUN_14007a370(param_1,puVar5,param_2);
        return lVar6;
      }
      if (uVar10 == 0) {
        pbVar9 = (byte *)(lVar6 + (ulonglong)uVar17);
      }
      else {
        pbVar9 = (byte *)(lVar6 + (ulonglong)uVar17);
        uVar16 = *(uint *)(lVar6 + (ulonglong)uVar10);
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        iVar4 = FUN_14007a48e(pbVar9);
        if (uVar16 != 0) {
          puVar5 = (uint *)((ulonglong)uVar10 + lVar6);
          if (iVar4 != 0) {
            uVar10 = *(uint *)(lVar6 + (ulonglong)uVar17);
            iVar4 = FUN_14007a2df(param_1,iVar4 + uVar16 + 1,param_2);
            uVar7 = 0;
            if (iVar4 != 0) {
              return 0;
            }
            uVar17 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            lVar6 = *(longlong *)(param_1 + 0x30);
            uVar12 = (uint)pbVar9[6] | (uint)pbVar9[5] << 8 | (uint)pbVar9[4] << 0x10;
            uVar13 = (uint)pbVar9[7];
            pbVar9 = pbVar9 + 8;
            uVar15 = (uint)*(byte *)((longlong)puVar5 + 6) |
                     (uint)*(byte *)((longlong)puVar5 + 5) << 8 | (uint)(byte)puVar5[1] << 0x10;
            pbVar11 = (byte *)((longlong)puVar5 + 9);
            uVar10 = 1;
            uVar14 = 1;
            while( true ) {
              while (iVar4 = (int)uVar7, uVar15 <= uVar13 + uVar12) {
                if (uVar15 < uVar12) {
                  uVar7 = (ulonglong)(iVar4 + 1);
                  *(uint *)(lVar6 + (longlong)iVar4 * 4) = uVar15;
                }
                iVar4 = (int)uVar7;
                uVar14 = uVar14 + 1;
                if (uVar16 < uVar14) goto LAB_14006f8e0;
                bVar3 = *pbVar11;
                pbVar1 = pbVar11 + 1;
                pbVar2 = pbVar11 + 2;
                pbVar11 = pbVar11 + 5;
                uVar15 = (uint)*pbVar2 | (uint)*pbVar1 << 8 | (uint)bVar3 << 0x10;
              }
              lVar8 = 0;
              do {
                *(uint *)(lVar6 + (longlong)iVar4 * 4 + lVar8 * 4) = (int)lVar8 + uVar12;
                lVar8 = lVar8 + 1;
              } while (uVar13 + 1 != (int)lVar8);
              uVar10 = uVar10 + 1;
              if (uVar17 < uVar10) break;
              uVar7 = (uVar7 & 0xffffffff) + lVar8;
              uVar12 = (uint)pbVar9[2] | (uint)pbVar9[1] << 8 | (uint)*pbVar9 << 0x10;
              uVar13 = (uint)pbVar9[3];
              pbVar9 = pbVar9 + 4;
            }
            iVar4 = iVar4 + (int)lVar8;
LAB_14006f8e0:
            if (uVar16 < uVar14) {
              if (uVar10 <= uVar17) {
                lVar8 = (longlong)iVar4;
                uVar16 = 0;
                do {
                  *(uint *)(lVar6 + lVar8 * 4) = uVar12;
                  lVar8 = lVar8 + 1;
                  uVar16 = uVar16 - 1;
                  uVar12 = uVar12 + 1;
                } while (~uVar13 != uVar16);
                if (uVar10 < uVar17) {
                  do {
                    uVar14 = (uint)pbVar9[2] | (uint)pbVar9[1] << 8 | (uint)*pbVar9 << 0x10;
                    bVar3 = pbVar9[3];
                    iVar4 = (int)lVar8;
                    lVar8 = (longlong)iVar4;
                    uVar16 = 0;
                    do {
                      *(uint *)(lVar6 + lVar8 * 4) = uVar14;
                      lVar8 = lVar8 + 1;
                      uVar16 = uVar16 - 1;
                      uVar14 = uVar14 + 1;
                    } while (~(uint)bVar3 != uVar16);
                    pbVar9 = pbVar9 + 4;
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar17);
                  iVar4 = iVar4 - uVar16;
                }
                else {
                  iVar4 = iVar4 - uVar16;
                }
              }
            }
            else {
              *(uint *)(lVar6 + (longlong)iVar4 * 4) = uVar15;
              iVar4 = iVar4 + 1;
              if (uVar14 < uVar16) {
                puVar5 = (uint *)(lVar6 + (longlong)iVar4 * 4);
                do {
                  *puVar5 = (uint)pbVar11[2] | (uint)pbVar11[1] << 8 | (uint)*pbVar11 << 0x10;
                  pbVar11 = pbVar11 + 5;
                  uVar14 = uVar14 + 1;
                  puVar5 = puVar5 + 1;
                  iVar4 = iVar4 + 1;
                } while (uVar14 < uVar16);
              }
            }
            *(undefined4 *)(lVar6 + (longlong)iVar4 * 4) = 0;
            return lVar6;
          }
          goto LAB_14006f892;
        }
      }
      lVar6 = FUN_14007a3e0(param_1,pbVar9,param_2);
      return lVar6;
    }
  }
  return 0;
}

