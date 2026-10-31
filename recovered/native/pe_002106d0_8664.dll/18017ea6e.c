/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017ea6e */

undefined8 FUN_18017ea6e(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint local_48;
  
  uVar16 = (ulonglong)*(int *)(param_1 + 0x4834);
  if (uVar16 != 0) {
    iVar20 = *(int *)(param_1 + 0x4844);
    bVar9 = (byte)*(undefined4 *)(param_1 + 0x4840);
    if (*(int *)(param_1 + 0x483c) == 0) {
      if (iVar20 == 0) {
        do {
          if (*(int *)(param_1 + 0x4824) < 0x10) {
            FUN_18017e6a8(param_1);
          }
          uVar17 = *(uint *)(param_1 + 0x4820);
          uVar8 = (ulonglong)(uVar17 >> 0x17);
          sVar2 = *(short *)(param_4 + uVar8 * 2);
          uVar18 = (uint)sVar2;
          iVar20 = (int)uVar16;
          if (sVar2 == 0) {
            if (*(int *)(param_1 + 0x4824) < 0x10) {
              FUN_18017e6a8(param_1);
              uVar17 = *(uint *)(param_1 + 0x4820);
              uVar8 = (ulonglong)(uVar17 >> 0x17);
            }
            uVar16 = (ulonglong)*(byte *)(param_3 + uVar8);
            if (uVar16 == 0xff) {
              lVar10 = 0;
              do {
                lVar15 = lVar10;
                lVar10 = lVar15 + 1;
              } while (*(uint *)(param_3 + 0x62c + lVar15 * 4) <= uVar17 >> 0x10);
              iVar12 = *(int *)(param_1 + 0x4824);
              if (lVar10 == 8) goto LAB_18017f02a;
              if ((iVar12 < (int)(lVar15 + 10)) ||
                 (uVar18 = (uVar17 >> (0x17U - (char)lVar10 & 0x1f) &
                           *(uint *)(&UNK_1802e0d84 + lVar10 * 4)) +
                           *(int *)(param_3 + 0x670 + lVar10 * 4), 0xff < uVar18))
              goto LAB_18017f033;
              iVar12 = (iVar12 - (int)lVar10) + -9;
              *(int *)(param_1 + 0x4824) = iVar12;
              *(uint *)(param_1 + 0x4820) = uVar17 << ((byte)(lVar15 + 10) & 0x1f);
              uVar16 = (ulonglong)uVar18;
            }
            else {
              bVar1 = *(byte *)(param_3 + 0x500 + uVar16);
              iVar12 = *(int *)(param_1 + 0x4824) - (uint)bVar1;
              if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar1) goto LAB_18017f033;
              *(uint *)(param_1 + 0x4820) = uVar17 << (bVar1 & 0x1f);
              *(int *)(param_1 + 0x4824) = iVar12;
            }
            bVar1 = *(byte *)(param_3 + 0x400 + uVar16);
            uVar17 = bVar1 & 0xf;
            bVar4 = bVar1 >> 4;
            uVar18 = (uint)bVar4;
            if ((bVar1 & 0xf) == 0) {
              if (bVar1 < 0xf0) {
                *(int *)(param_1 + 0x4844) = 1 << bVar4;
                if (uVar18 == 0) {
                  iVar20 = 0 << bVar4;
                }
                else {
                  if (iVar12 < (int)uVar18) {
                    FUN_18017e6a8(param_1);
                    iVar12 = *(int *)(param_1 + 0x4824);
                  }
                  uVar17 = 0;
                  if ((int)uVar18 <= iVar12) {
                    uVar17 = *(uint *)(param_1 + 0x4820) << bVar4 |
                             *(uint *)(param_1 + 0x4820) >> 0x20 - bVar4;
                    uVar6 = *(uint *)(&DAT_1802e0d60 + (ulonglong)uVar18 * 4);
                    *(uint *)(param_1 + 0x4820) = ~uVar6 & uVar17;
                    uVar17 = uVar17 & uVar6;
                    *(uint *)(param_1 + 0x4824) = iVar12 - uVar18;
                  }
                  iVar20 = uVar17 + *(int *)(param_1 + 0x4844) + -1;
                }
                *(int *)(param_1 + 0x4844) = iVar20;
                return 1;
              }
              uVar16 = (ulonglong)(iVar20 + 0x10);
            }
            else {
              lVar10 = (longlong)iVar20 + (ulonglong)uVar18;
              bVar1 = (&DAT_1802e0d00)[lVar10];
              if (iVar12 < (int)uVar17) {
                FUN_18017e6a8(param_1);
                iVar12 = *(int *)(param_1 + 0x4824);
              }
              iVar20 = 0;
              if ((int)uVar17 <= iVar12) {
                uVar18 = *(uint *)(param_1 + 0x4820);
                uVar7 = uVar18 << (sbyte)uVar17 | uVar18 >> 0x20 - (sbyte)uVar17;
                uVar6 = *(uint *)(&DAT_1802e0d60 + uVar17 * 4);
                *(uint *)(param_1 + 0x4820) = ~uVar6 & uVar7;
                *(uint *)(param_1 + 0x4824) = iVar12 - uVar17;
                iVar20 = 0;
                if (-1 < (int)uVar18) {
                  iVar20 = *(int *)(&DAT_1802e0db0 + uVar17 * 4);
                }
                iVar20 = (uVar7 & uVar6) + iVar20;
              }
              uVar16 = (ulonglong)((int)lVar10 + 1);
              *(short *)(param_2 + (ulonglong)bVar1 * 2) = (short)(iVar20 << (bVar9 & 0x1f));
            }
          }
          else {
            uVar6 = uVar18 & 0xf;
            if (*(int *)(param_1 + 0x4824) < (int)uVar6) goto LAB_18017f033;
            lVar10 = (longlong)iVar20 + (ulonglong)(uVar18 >> 4 & 0xf);
            *(uint *)(param_1 + 0x4820) = uVar17 << (sbyte)uVar6;
            *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar6;
            uVar16 = (ulonglong)((int)lVar10 + 1);
            *(short *)(param_2 + (ulonglong)(byte)(&DAT_1802e0d00)[lVar10] * 2) =
                 (short)((uVar18 >> 8) << (bVar9 & 0x1f));
          }
        } while ((int)uVar16 <= *(int *)(param_1 + 0x4838));
      }
      else {
        *(int *)(param_1 + 0x4844) = iVar20 + -1;
      }
    }
    else {
      if (iVar20 != 0) {
        *(int *)(param_1 + 0x4844) = iVar20 + -1;
        if (*(int *)(param_1 + 0x4838) < *(int *)(param_1 + 0x4834)) {
          return 1;
        }
        uVar17 = (0x10000 << (bVar9 & 0x1f)) >> 0x10;
        do {
          uVar8 = (ulonglong)(byte)(&DAT_1802e0d00)[uVar16];
          if (*(short *)(param_2 + uVar8 * 2) != 0) {
            iVar20 = *(int *)(param_1 + 0x4824);
            if (iVar20 < 1) {
              FUN_18017e6a8(param_1);
              iVar20 = *(int *)(param_1 + 0x4824);
              if (iVar20 < 1) goto LAB_18017eb4c;
            }
            iVar12 = *(int *)(param_1 + 0x4820);
            *(int *)(param_1 + 0x4820) = iVar12 * 2;
            *(int *)(param_1 + 0x4824) = iVar20 + -1;
            if ((iVar12 < 0) &&
               (sVar2 = *(short *)(param_2 + uVar8 * 2), (uVar17 & (int)sVar2) == 0)) {
              uVar18 = -uVar17;
              if (0 < sVar2) {
                uVar18 = uVar17;
              }
              *(short *)(param_2 + uVar8 * 2) = (short)uVar18 + sVar2;
            }
          }
LAB_18017eb4c:
          bVar3 = (longlong)*(int *)(param_1 + 0x4838) <= (longlong)uVar16;
          uVar16 = uVar16 + 1;
          if (bVar3) {
            return 1;
          }
        } while( true );
      }
      iVar20 = 0x10000 << (bVar9 & 0x1f);
      uVar17 = iVar20 >> 0x10;
      do {
        if (*(int *)(param_1 + 0x4824) < 0x10) {
          FUN_18017e6a8(param_1);
        }
        uVar18 = *(uint *)(param_1 + 0x4820);
        uVar8 = (ulonglong)*(byte *)(param_3 + (ulonglong)(uVar18 >> 0x17));
        if (uVar8 == 0xff) {
          lVar10 = 0;
          do {
            lVar15 = lVar10;
            lVar10 = lVar15 + 1;
          } while (*(uint *)(param_3 + 0x62c + lVar15 * 4) <= uVar18 >> 0x10);
          iVar12 = *(int *)(param_1 + 0x4824);
          if (lVar10 == 8) goto LAB_18017f02a;
          if ((iVar12 < (int)(lVar15 + 10)) ||
             (uVar6 = (uVar18 >> (0x17U - (char)lVar10 & 0x1f) &
                      *(uint *)(&UNK_1802e0d84 + lVar10 * 4)) +
                      *(int *)(param_3 + 0x670 + lVar10 * 4), 0xff < uVar6)) goto LAB_18017f033;
          iVar14 = uVar18 << ((byte)(lVar15 + 10) & 0x1f);
          iVar12 = (iVar12 - (int)lVar10) + -9;
          *(int *)(param_1 + 0x4824) = iVar12;
          *(int *)(param_1 + 0x4820) = iVar14;
          uVar8 = (ulonglong)uVar6;
        }
        else {
          bVar9 = *(byte *)(param_3 + 0x500 + uVar8);
          iVar12 = *(int *)(param_1 + 0x4824) - (uint)bVar9;
          if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar9) goto LAB_18017f033;
          iVar14 = uVar18 << (bVar9 & 0x1f);
          *(int *)(param_1 + 0x4820) = iVar14;
          *(int *)(param_1 + 0x4824) = iVar12;
        }
        bVar9 = *(byte *)(param_3 + 0x400 + uVar8);
        bVar1 = bVar9 >> 4;
        uVar18 = (uint)bVar1;
        uVar8 = (ulonglong)uVar18;
        if ((bVar9 & 0xf) == 1) {
          uVar13 = uVar8;
          if (iVar12 < 1) {
            FUN_18017e6a8(param_1);
            iVar12 = *(int *)(param_1 + 0x4824);
            if (0 < iVar12) {
              iVar14 = *(int *)(param_1 + 0x4820);
              goto LAB_18017ed3f;
            }
          }
          else {
LAB_18017ed3f:
            *(int *)(param_1 + 0x4820) = iVar14 * 2;
            *(int *)(param_1 + 0x4824) = iVar12 + -1;
            local_48 = uVar17;
            if (iVar14 < 0) goto LAB_18017ed6b;
          }
          local_48 = -uVar17;
        }
        else {
          if ((bVar9 & 0xf) != 0) goto LAB_18017f033;
          local_48 = 0;
          uVar13 = 0xf;
          if (bVar9 < 0xf0) {
            *(int *)(param_1 + 0x4844) = ~(-1 << bVar1);
            uVar13 = 0x40;
            if (bVar1 != 0) {
              if (iVar12 < (int)uVar18) {
                FUN_18017e6a8(param_1);
                iVar12 = *(int *)(param_1 + 0x4824);
              }
              local_48 = 0;
              uVar6 = 0;
              if ((int)uVar18 <= iVar12) {
                uVar6 = *(uint *)(param_1 + 0x4820) << bVar1 |
                        *(uint *)(param_1 + 0x4820) >> 0x20 - bVar1;
                uVar7 = *(uint *)(&DAT_1802e0d60 + uVar8 * 4);
                *(uint *)(param_1 + 0x4820) = ~uVar7 & uVar6;
                uVar6 = uVar6 & uVar7;
                *(uint *)(param_1 + 0x4824) = iVar12 - uVar18;
              }
              *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + uVar6;
            }
          }
        }
LAB_18017ed6b:
        iVar12 = *(int *)(param_1 + 0x4838);
        if ((int)uVar16 <= iVar12) {
          uVar8 = (longlong)(int)uVar16;
          do {
            uVar19 = (ulonglong)(byte)(&DAT_1802e0d00)[uVar8];
            if (*(short *)(param_2 + uVar19 * 2) == 0) {
              if ((int)uVar13 == 0) {
                uVar16 = (ulonglong)((int)uVar8 + 1);
                *(short *)(param_2 + uVar19 * 2) = (short)local_48;
                iVar12 = *(int *)(param_1 + 0x4838);
                break;
              }
              uVar13 = (ulonglong)((int)uVar13 - 1);
            }
            else {
              iVar12 = *(int *)(param_1 + 0x4824);
              if (iVar12 < 1) {
                FUN_18017e6a8(param_1);
                iVar12 = *(int *)(param_1 + 0x4824);
                if (iVar12 < 1) goto LAB_18017eddc;
              }
              iVar14 = *(int *)(param_1 + 0x4820);
              *(int *)(param_1 + 0x4820) = iVar14 * 2;
              *(int *)(param_1 + 0x4824) = iVar12 + -1;
              if ((iVar14 < 0) &&
                 (sVar2 = *(short *)(param_2 + uVar19 * 2), (uVar17 & (int)sVar2) == 0)) {
                sVar5 = (short)((uint)iVar20 >> 0x10);
                if (sVar2 < 1) {
                  sVar5 = -sVar5;
                }
                *(short *)(param_2 + uVar19 * 2) = sVar2 + sVar5;
              }
            }
LAB_18017eddc:
            uVar16 = uVar8 + 1;
            iVar12 = *(int *)(param_1 + 0x4838);
            bVar3 = (longlong)uVar8 < (longlong)iVar12;
            uVar8 = uVar16;
          } while (bVar3);
        }
      } while ((int)uVar16 <= iVar12);
    }
    return 1;
  }
  pcVar11 = "can\'t merge dc and ac";
LAB_18017f03a:
  FUN_1801765d0(pcVar11);
  return 0;
LAB_18017f02a:
  *(int *)(param_1 + 0x4824) = iVar12 + -0x10;
LAB_18017f033:
  pcVar11 = "bad huffman code";
  goto LAB_18017f03a;
}

