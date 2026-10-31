/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017e217 */

undefined8
FUN_18017e217(longlong param_1,short *param_2,longlong param_3,longlong param_4,longlong param_5,
             int param_6,short *param_7)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  
  if ((*(int *)(param_1 + 0x4824) < 0x10) &&
     (FUN_18017e6a8(param_1), *(int *)(param_1 + 0x4824) < 0x10)) {
    FUN_18017e6a8(param_1);
  }
  uVar15 = *(uint *)(param_1 + 0x4820);
  uVar5 = (ulonglong)*(byte *)(param_3 + (ulonglong)(uVar15 >> 0x17));
  if (uVar5 == 0xff) {
    lVar12 = 0;
    do {
      lVar11 = lVar12;
      lVar12 = lVar11 + 1;
    } while (*(uint *)(param_3 + 0x62c + lVar11 * 4) <= uVar15 >> 0x10);
    iVar8 = *(int *)(param_1 + 0x4824);
    if (lVar12 != 8) {
      pcVar13 = "bad huffman code";
      if ((iVar8 < (int)(lVar11 + 10)) ||
         (uVar6 = (uVar15 >> (0x17U - (char)lVar12 & 0x1f) & *(uint *)(&UNK_1802e0d84 + lVar12 * 4))
                  + *(int *)(param_3 + 0x670 + lVar12 * 4), 0xff < uVar6)) goto LAB_18017e621;
      *(int *)(param_1 + 0x4824) = (iVar8 - (int)lVar12) + -9;
      *(uint *)(param_1 + 0x4820) = uVar15 << ((byte)(lVar11 + 10) & 0x1f);
      uVar5 = (ulonglong)uVar6;
      goto LAB_18017e29a;
    }
LAB_18017e611:
    *(int *)(param_1 + 0x4824) = iVar8 + -0x10;
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x500 + uVar5);
    if ((int)(uint)bVar1 <= *(int *)(param_1 + 0x4824)) {
      *(uint *)(param_1 + 0x4820) = uVar15 << (bVar1 & 0x1f);
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar1;
LAB_18017e29a:
      bVar1 = *(byte *)(uVar5 + param_3 + 0x400);
      pcVar13 = "bad huffman code";
      if (bVar1 < 0x10) {
        param_2[0x38] = 0;
        param_2[0x39] = 0;
        param_2[0x3a] = 0;
        param_2[0x3b] = 0;
        param_2[0x3c] = 0;
        param_2[0x3d] = 0;
        param_2[0x3e] = 0;
        param_2[0x3f] = 0;
        param_2[0x30] = 0;
        param_2[0x31] = 0;
        param_2[0x32] = 0;
        param_2[0x33] = 0;
        param_2[0x34] = 0;
        param_2[0x35] = 0;
        param_2[0x36] = 0;
        param_2[0x37] = 0;
        param_2[0x28] = 0;
        param_2[0x29] = 0;
        param_2[0x2a] = 0;
        param_2[0x2b] = 0;
        param_2[0x2c] = 0;
        param_2[0x2d] = 0;
        param_2[0x2e] = 0;
        param_2[0x2f] = 0;
        param_2[0x20] = 0;
        param_2[0x21] = 0;
        param_2[0x22] = 0;
        param_2[0x23] = 0;
        param_2[0x24] = 0;
        param_2[0x25] = 0;
        param_2[0x26] = 0;
        param_2[0x27] = 0;
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        iVar8 = 0;
        if (bVar1 != 0) {
          iVar14 = *(int *)(param_1 + 0x4824);
          if (iVar14 < (int)(uint)bVar1) {
            FUN_18017e6a8(param_1);
            iVar14 = *(int *)(param_1 + 0x4824);
          }
          iVar8 = 0;
          if ((int)(uint)bVar1 <= iVar14) {
            uVar15 = *(uint *)(param_1 + 0x4820);
            uVar7 = uVar15 << (bVar1 & 0x1f) | uVar15 >> 0x20 - (bVar1 & 0x1f);
            uVar6 = *(uint *)(&DAT_1802e0d60 + (ulonglong)bVar1 * 4);
            *(uint *)(param_1 + 0x4820) = ~uVar6 & uVar7;
            *(uint *)(param_1 + 0x4824) = iVar14 - (uint)bVar1;
            iVar8 = 0;
            if (-1 < (int)uVar15) {
              iVar8 = *(int *)(&DAT_1802e0db0 + (ulonglong)bVar1 * 4);
            }
            iVar8 = iVar8 + (uVar7 & uVar6);
          }
        }
        iVar14 = *(int *)(param_1 + 0x46b8 + (longlong)param_6 * 0x60);
        iVar4 = FUN_18017f0cf(iVar14,iVar8);
        if (iVar4 == 0) {
          pcVar13 = "bad delta";
        }
        else {
          iVar14 = iVar14 + iVar8;
          *(int *)((longlong)param_6 * 0x60 + param_1 + 0x46b8) = iVar14;
          sVar3 = *param_7;
          iVar8 = FUN_18017f0fa(iVar14,sVar3);
          if (iVar8 != 0) {
            *param_2 = sVar3 * (short)iVar14;
            iVar14 = 1;
            do {
              if (*(int *)(param_1 + 0x4824) < 0x10) {
                FUN_18017e6a8(param_1);
              }
              uVar15 = *(uint *)(param_1 + 0x4820);
              uVar5 = (ulonglong)(uVar15 >> 0x17);
              uVar2 = *(ushort *)(param_5 + uVar5 * 2);
              if (uVar2 == 0) {
                if (*(int *)(param_1 + 0x4824) < 0x10) {
                  FUN_18017e6a8(param_1);
                  uVar15 = *(uint *)(param_1 + 0x4820);
                  uVar5 = (ulonglong)(uVar15 >> 0x17);
                }
                uVar5 = (ulonglong)*(byte *)(param_4 + uVar5);
                if (uVar5 == 0xff) {
                  lVar12 = 0;
                  do {
                    lVar11 = lVar12;
                    lVar12 = lVar11 + 1;
                  } while (*(uint *)(param_4 + 0x62c + lVar11 * 4) <= uVar15 >> 0x10);
                  iVar8 = *(int *)(param_1 + 0x4824);
                  if (lVar12 == 8) goto LAB_18017e611;
                  if ((iVar8 < (int)(lVar11 + 10)) ||
                     (uVar6 = (uVar15 >> (0x17U - (char)lVar12 & 0x1f) &
                              *(uint *)(&UNK_1802e0d84 + lVar12 * 4)) +
                              *(int *)(param_4 + 0x670 + lVar12 * 4), 0xff < uVar6))
                  goto LAB_18017e621;
                  iVar4 = (iVar8 - (int)lVar12) + -9;
                  *(int *)(param_1 + 0x4824) = (iVar8 - (int)lVar12) + -9;
                  *(uint *)(param_1 + 0x4820) = uVar15 << ((byte)(lVar11 + 10) & 0x1f);
                  uVar5 = (ulonglong)uVar6;
                }
                else {
                  bVar1 = *(byte *)(param_4 + 0x500 + uVar5);
                  iVar4 = *(int *)(param_1 + 0x4824) - (uint)bVar1;
                  if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar1) goto LAB_18017e621;
                  *(uint *)(param_1 + 0x4820) = uVar15 << (bVar1 & 0x1f);
                  *(int *)(param_1 + 0x4824) = iVar4;
                }
                bVar1 = *(byte *)(param_4 + 0x400 + uVar5);
                uVar15 = bVar1 & 0xf;
                if ((bVar1 & 0xf) == 0) {
                  if (bVar1 != 0xf0) {
                    return 1;
                  }
                  iVar14 = iVar14 + 0x10;
                }
                else {
                  lVar12 = (longlong)iVar14 + (ulonglong)(bVar1 >> 4);
                  bVar1 = (&DAT_1802e0d00)[lVar12];
                  if (iVar4 < (int)uVar15) {
                    FUN_18017e6a8(param_1);
                    iVar4 = *(int *)(param_1 + 0x4824);
                  }
                  sVar3 = 0;
                  sVar9 = 0;
                  if ((int)uVar15 <= iVar4) {
                    uVar6 = *(uint *)(param_1 + 0x4820);
                    uVar10 = uVar6 << (sbyte)uVar15 | uVar6 >> 0x20 - (sbyte)uVar15;
                    uVar7 = *(uint *)(&DAT_1802e0d60 + (uVar15 << 2));
                    *(uint *)(param_1 + 0x4820) = ~uVar7 & uVar10;
                    *(uint *)(param_1 + 0x4824) = iVar4 - uVar15;
                    if (-1 < (int)uVar6) {
                      sVar3 = (short)*(undefined4 *)(&DAT_1802e0db0 + (uVar15 << 2));
                    }
                    sVar9 = ((ushort)uVar10 & (ushort)uVar7) + sVar3;
                  }
                  iVar14 = (int)lVar12 + 1;
                  *(short *)((longlong)param_2 + (ulonglong)((uint)bVar1 * 2)) =
                       sVar9 * *(short *)((longlong)param_7 + (ulonglong)((uint)bVar1 * 2));
                }
              }
              else {
                uVar6 = uVar2 & 0xf;
                if (*(int *)(param_1 + 0x4824) < (int)uVar6) goto LAB_18017e621;
                lVar12 = (longlong)iVar14 + (ulonglong)(uVar2 >> 4 & 0xf);
                *(uint *)(param_1 + 0x4820) = uVar15 << (sbyte)uVar6;
                *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar6;
                iVar14 = (int)lVar12 + 1;
                *(short *)((longlong)param_2 + (ulonglong)((uint)(byte)(&DAT_1802e0d00)[lVar12] * 2)
                          ) = (short)(char)(uVar2 >> 8) *
                              *(short *)((longlong)param_7 +
                                        (ulonglong)((uint)(byte)(&DAT_1802e0d00)[lVar12] * 2));
              }
              if (0x3f < iVar14) {
                return 1;
              }
            } while( true );
          }
          pcVar13 = "can\'t merge dc and ac";
        }
      }
      goto LAB_18017e621;
    }
  }
  pcVar13 = "bad huffman code";
LAB_18017e621:
  FUN_1801765d0(pcVar13);
  return 0;
}

