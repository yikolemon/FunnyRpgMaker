/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802220a8 */

longlong FUN_1802220a8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  puVar5 = (uint *)FUN_18022cb75(lVar6 + 6,param_3);
  if (puVar5 != (uint *)0x0) {
    uVar9 = *puVar5;
    uVar16 = puVar5[1];
    uVar17 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    if (uVar17 != 0 || uVar9 != 0) {
      if (uVar17 == 0) {
        lVar10 = lVar6 + (ulonglong)uVar9;
LAB_180222252:
        lVar6 = FUN_18022cd30(param_1,lVar10,param_2);
        return lVar6;
      }
      if (uVar9 == 0) {
        lVar18 = lVar6 + (ulonglong)uVar17;
      }
      else {
        lVar18 = lVar6 + (ulonglong)uVar17;
        uVar16 = *(uint *)(lVar6 + (ulonglong)uVar9);
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        iVar4 = FUN_18022ce4e(lVar18);
        if (uVar16 != 0) {
          lVar10 = (ulonglong)uVar9 + lVar6;
          if (iVar4 != 0) {
            uVar9 = *(uint *)(lVar6 + (ulonglong)uVar17);
            iVar4 = FUN_18022cc9f(param_1,iVar4 + uVar16 + 1,param_2);
            uVar7 = 0;
            if (iVar4 != 0) {
              return 0;
            }
            uVar17 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
            ;
            lVar6 = *(longlong *)(param_1 + 0x30);
            uVar12 = (uint)*(byte *)(lVar18 + 6) |
                     (uint)*(byte *)(lVar18 + 5) << 8 | (uint)*(byte *)(lVar18 + 4) << 0x10;
            uVar13 = (uint)*(byte *)(lVar18 + 7);
            pbVar8 = (byte *)(lVar18 + 8);
            uVar15 = (uint)*(byte *)(lVar10 + 6) |
                     (uint)*(byte *)(lVar10 + 5) << 8 | (uint)*(byte *)(lVar10 + 4) << 0x10;
            pbVar11 = (byte *)(lVar10 + 9);
            uVar9 = 1;
            uVar14 = 1;
            while( true ) {
              while (iVar4 = (int)uVar7, uVar15 <= uVar13 + uVar12) {
                if (uVar15 < uVar12) {
                  uVar7 = (ulonglong)(iVar4 + 1);
                  *(uint *)(lVar6 + (longlong)iVar4 * 4) = uVar15;
                }
                iVar4 = (int)uVar7;
                uVar14 = uVar14 + 1;
                if (uVar16 < uVar14) goto LAB_1802222a0;
                bVar3 = *pbVar11;
                pbVar1 = pbVar11 + 1;
                pbVar2 = pbVar11 + 2;
                pbVar11 = pbVar11 + 5;
                uVar15 = (uint)*pbVar2 | (uint)*pbVar1 << 8 | (uint)bVar3 << 0x10;
              }
              lVar10 = 0;
              do {
                *(uint *)(lVar6 + (longlong)iVar4 * 4 + lVar10 * 4) = (int)lVar10 + uVar12;
                lVar10 = lVar10 + 1;
              } while (uVar13 + 1 != (int)lVar10);
              uVar9 = uVar9 + 1;
              if (uVar17 < uVar9) break;
              uVar7 = (uVar7 & 0xffffffff) + lVar10;
              uVar12 = (uint)pbVar8[2] | (uint)pbVar8[1] << 8 | (uint)*pbVar8 << 0x10;
              uVar13 = (uint)pbVar8[3];
              pbVar8 = pbVar8 + 4;
            }
            iVar4 = iVar4 + (int)lVar10;
LAB_1802222a0:
            if (uVar16 < uVar14) {
              if (uVar9 <= uVar17) {
                lVar10 = (longlong)iVar4;
                uVar16 = 0;
                do {
                  *(uint *)(lVar6 + lVar10 * 4) = uVar12;
                  lVar10 = lVar10 + 1;
                  uVar16 = uVar16 - 1;
                  uVar12 = uVar12 + 1;
                } while (~uVar13 != uVar16);
                if (uVar9 < uVar17) {
                  do {
                    uVar14 = (uint)pbVar8[2] | (uint)pbVar8[1] << 8 | (uint)*pbVar8 << 0x10;
                    bVar3 = pbVar8[3];
                    iVar4 = (int)lVar10;
                    lVar10 = (longlong)iVar4;
                    uVar16 = 0;
                    do {
                      *(uint *)(lVar6 + lVar10 * 4) = uVar14;
                      lVar10 = lVar10 + 1;
                      uVar16 = uVar16 - 1;
                      uVar14 = uVar14 + 1;
                    } while (~(uint)bVar3 != uVar16);
                    pbVar8 = pbVar8 + 4;
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar17);
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
          goto LAB_180222252;
        }
      }
      lVar6 = FUN_18022cda0(param_1,lVar18,param_2);
      return lVar6;
    }
  }
  return 0;
}

