/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101785ea */

undefined4 __fastcall FUN_101785ea(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined2 local_1c;
  int local_18;
  
  iVar12 = *(int *)(param_1 + 0x47d0);
  if (iVar12 != 0) {
    iVar13 = *(int *)(param_1 + 0x47e0);
    bVar8 = (byte)*(undefined4 *)(param_1 + 0x47dc);
    if (*(int *)(param_1 + 0x47d8) == 0) {
      if (iVar13 == 0) {
        do {
          if (*(int *)(param_1 + 0x47c0) < 0x10) {
            FUN_10178283();
          }
          uVar11 = *(uint *)(param_1 + 0x47bc);
          uVar14 = uVar11 >> 0x17;
          uVar15 = (uint)*(short *)(param_4 + uVar14 * 2);
          if (uVar15 == 0) {
            if (*(int *)(param_1 + 0x47c0) < 0x10) {
              FUN_10178283();
              uVar11 = *(uint *)(param_1 + 0x47bc);
              uVar14 = uVar11 >> 0x17;
            }
            uVar15 = (uint)*(byte *)(param_3 + uVar14);
            if (uVar15 == 0xff) {
              iVar13 = 0;
              do {
                iVar5 = iVar13;
                iVar13 = iVar5 + 1;
              } while (*(uint *)(param_3 + 0x62c + iVar5 * 4) <= uVar11 >> 0x10);
              iVar10 = *(int *)(param_1 + 0x47c0);
              if (iVar13 == 8) goto LAB_10178b59;
              if (iVar10 < iVar5 + 10) goto LAB_10178b67;
              uVar15 = (uVar11 >> (0x17U - (char)iVar13 & 0x1f) &
                       *(uint *)(&UNK_102bb078 + iVar13 * 4)) +
                       *(int *)(param_3 + 0x670 + iVar13 * 4);
              if (0xff < uVar15) goto LAB_10178b67;
              iVar13 = (iVar10 - iVar13) + -9;
              *(int *)(param_1 + 0x47c0) = iVar13;
              *(uint *)(param_1 + 0x47bc) = uVar11 << ((char)iVar5 + 10U & 0x1f);
            }
            else {
              bVar1 = *(byte *)(param_3 + 0x500 + uVar15);
              iVar13 = *(int *)(param_1 + 0x47c0) - (uint)bVar1;
              if (*(int *)(param_1 + 0x47c0) < (int)(uint)bVar1) goto LAB_10178b67;
              *(uint *)(param_1 + 0x47bc) = uVar11 << (bVar1 & 0x1f);
              *(int *)(param_1 + 0x47c0) = iVar13;
            }
            bVar1 = *(byte *)(param_3 + 0x400 + uVar15);
            bVar4 = bVar1 >> 4;
            uVar11 = (uint)bVar4;
            uVar15 = bVar1 & 0xf;
            if ((bVar1 & 0xf) == 0) {
              if (bVar1 < 0xf0) {
                *(int *)(param_1 + 0x47e0) = 1 << bVar4;
                if (uVar11 == 0) {
                  iVar12 = 0;
                }
                else {
                  if (iVar13 < (int)uVar11) {
                    FUN_10178283();
                    iVar13 = *(int *)(param_1 + 0x47c0);
                  }
                  uVar15 = 0;
                  if ((int)uVar11 <= iVar13) {
                    uVar15 = *(uint *)(param_1 + 0x47bc) << bVar4 |
                             *(uint *)(param_1 + 0x47bc) >> 0x20 - bVar4;
                    uVar14 = *(uint *)(&DAT_102bb054 + uVar11 * 4);
                    *(uint *)(param_1 + 0x47bc) = ~uVar14 & uVar15;
                    uVar15 = uVar15 & uVar14;
                    *(uint *)(param_1 + 0x47c0) = iVar13 - uVar11;
                  }
                  iVar12 = uVar15 + *(int *)(param_1 + 0x47e0) + -1;
                }
                *(int *)(param_1 + 0x47e0) = iVar12;
                return 1;
              }
              iVar12 = iVar12 + 0x10;
            }
            else {
              bVar1 = (&DAT_102baff4)[iVar12 + uVar11];
              if (iVar13 < (int)uVar15) {
                FUN_10178283();
                iVar13 = *(int *)(param_1 + 0x47c0);
              }
              iVar5 = 0;
              if ((int)uVar15 <= iVar13) {
                uVar14 = *(uint *)(param_1 + 0x47bc);
                uVar6 = uVar14 << (sbyte)uVar15 | uVar14 >> 0x20 - (sbyte)uVar15;
                uVar7 = *(uint *)(&DAT_102bb054 + uVar15 * 4);
                *(uint *)(param_1 + 0x47bc) = ~uVar7 & uVar6;
                *(uint *)(param_1 + 0x47c0) = iVar13 - uVar15;
                iVar5 = 0;
                if (-1 < (int)uVar14) {
                  iVar5 = *(int *)(&DAT_102bb098 + uVar15 * 4);
                }
                iVar5 = (uVar6 & uVar7) + iVar5;
              }
              iVar12 = iVar12 + uVar11 + 1;
              *(short *)(param_2 + (uint)bVar1 * 2) = (short)(iVar5 << (bVar8 & 0x1f));
            }
          }
          else {
            uVar14 = uVar15 & 0xf;
            if (*(int *)(param_1 + 0x47c0) < (int)uVar14) goto LAB_10178b67;
            *(uint *)(param_1 + 0x47bc) = uVar11 << (sbyte)uVar14;
            uVar11 = uVar15 >> 4 & 0xf;
            *(uint *)(param_1 + 0x47c0) = *(int *)(param_1 + 0x47c0) - uVar14;
            *(short *)(param_2 + (uint)(byte)(&DAT_102baff4)[iVar12 + uVar11] * 2) =
                 (short)((uVar15 >> 8) << (bVar8 & 0x1f));
            iVar12 = iVar12 + uVar11 + 1;
          }
        } while (iVar12 <= *(int *)(param_1 + 0x47d4));
      }
      else {
        *(int *)(param_1 + 0x47e0) = iVar13 + -1;
      }
    }
    else if (iVar13 == 0) {
      uVar11 = (0x10000 << (bVar8 & 0x1f)) >> 0x10;
      do {
        if (*(int *)(param_1 + 0x47c0) < 0x10) {
          FUN_10178283();
        }
        uVar15 = *(uint *)(param_1 + 0x47bc);
        uVar14 = (uint)*(byte *)(param_3 + (uVar15 >> 0x17));
        if (uVar14 == 0xff) {
          iVar13 = 0;
          do {
            iVar5 = iVar13;
            iVar13 = iVar5 + 1;
          } while (*(uint *)(param_3 + 0x62c + iVar5 * 4) <= uVar15 >> 0x10);
          iVar10 = *(int *)(param_1 + 0x47c0);
          if (iVar13 == 8) goto LAB_10178b59;
          if (iVar10 < iVar5 + 10) goto LAB_10178b67;
          uVar14 = (uVar15 >> (0x17U - (char)iVar13 & 0x1f) & *(uint *)(&UNK_102bb078 + iVar13 * 4))
                   + *(int *)(param_3 + 0x670 + iVar13 * 4);
          if (0xff < uVar14) goto LAB_10178b67;
          local_18 = (iVar10 - iVar13) + -9;
          *(int *)(param_1 + 0x47c0) = local_18;
          iVar13 = uVar15 << ((char)iVar5 + 10U & 0x1f);
          *(int *)(param_1 + 0x47bc) = iVar13;
        }
        else {
          bVar8 = *(byte *)(param_3 + 0x500 + uVar14);
          local_18 = *(int *)(param_1 + 0x47c0) - (uint)bVar8;
          if (*(int *)(param_1 + 0x47c0) < (int)(uint)bVar8) goto LAB_10178b67;
          iVar13 = uVar15 << (bVar8 & 0x1f);
          *(int *)(param_1 + 0x47bc) = iVar13;
          *(int *)(param_1 + 0x47c0) = local_18;
        }
        bVar8 = *(byte *)(param_3 + 0x400 + uVar14);
        bVar1 = bVar8 >> 4;
        uVar15 = (uint)bVar1;
        if ((bVar8 & 0xf) == 1) {
          if (local_18 < 1) {
            FUN_10178283();
            local_18 = *(int *)(param_1 + 0x47c0);
            if (0 < local_18) {
              iVar13 = *(int *)(param_1 + 0x47bc);
              goto LAB_10178a78;
            }
LAB_10178a8c:
            uVar14 = -uVar11;
          }
          else {
LAB_10178a78:
            *(int *)(param_1 + 0x47bc) = iVar13 * 2;
            *(int *)(param_1 + 0x47c0) = local_18 + -1;
            uVar14 = uVar11;
            if (-1 < iVar13) goto LAB_10178a8c;
          }
          local_1c = (undefined2)uVar14;
          uVar14 = uVar15;
        }
        else {
          if ((bVar8 & 0xf) != 0) goto LAB_10178b67;
          local_1c = 0;
          uVar14 = 0xf;
          if (bVar8 < 0xf0) {
            *(int *)(param_1 + 0x47e0) = ~(-1 << bVar1);
            uVar14 = 0x40;
            if (uVar15 != 0) {
              if (local_18 < (int)uVar15) {
                FUN_10178283();
                local_18 = *(int *)(param_1 + 0x47c0);
              }
              local_1c = 0;
              uVar7 = 0;
              if ((int)uVar15 <= local_18) {
                uVar7 = *(uint *)(param_1 + 0x47bc) << bVar1 |
                        *(uint *)(param_1 + 0x47bc) >> 0x20 - bVar1;
                uVar6 = *(uint *)(&DAT_102bb054 + uVar15 * 4);
                *(uint *)(param_1 + 0x47bc) = ~uVar6 & uVar7;
                uVar7 = uVar7 & uVar6;
                *(uint *)(param_1 + 0x47c0) = local_18 - uVar15;
              }
              *(int *)(param_1 + 0x47e0) = *(int *)(param_1 + 0x47e0) + uVar7;
            }
          }
        }
        iVar13 = *(int *)(param_1 + 0x47d4);
        if (iVar12 <= iVar13) {
          iVar5 = iVar12 + -1;
          do {
            iVar12 = iVar5;
            uVar15 = (uint)(byte)(&DAT_102baff5)[iVar12];
            if (*(short *)(param_2 + uVar15 * 2) == 0) {
              if (uVar14 == 0) {
                *(undefined2 *)(param_2 + uVar15 * 2) = local_1c;
                iVar13 = *(int *)(param_1 + 0x47d4);
                break;
              }
              uVar14 = uVar14 - 1;
            }
            else {
              iVar13 = *(int *)(param_1 + 0x47c0);
              if (iVar13 < 1) {
                FUN_10178283();
                iVar13 = *(int *)(param_1 + 0x47c0);
                if (iVar13 < 1) goto LAB_10178b15;
              }
              iVar5 = *(int *)(param_1 + 0x47bc);
              *(int *)(param_1 + 0x47bc) = iVar5 * 2;
              *(int *)(param_1 + 0x47c0) = iVar13 + -1;
              if ((iVar5 < 0) &&
                 (sVar3 = *(short *)(param_2 + uVar15 * 2), (uVar11 & (int)sVar3) == 0)) {
                uVar7 = uVar11;
                if (sVar3 < 1) {
                  uVar7 = -uVar11;
                }
                *(short *)(param_2 + uVar15 * 2) = sVar3 + (short)uVar7;
              }
            }
LAB_10178b15:
            iVar13 = *(int *)(param_1 + 0x47d4);
            iVar5 = iVar12 + 1;
          } while (iVar12 + 1 < iVar13);
          iVar12 = iVar12 + 2;
        }
      } while (iVar12 <= iVar13);
    }
    else {
      *(int *)(param_1 + 0x47e0) = iVar13 + -1;
      if (*(int *)(param_1 + 0x47d4) < iVar12) {
        return 1;
      }
      iVar13 = 0x10000 << (bVar8 & 0x1f);
      sVar3 = (short)((uint)iVar13 >> 0x10);
      iVar12 = iVar12 + -1;
      do {
        uVar11 = (uint)(byte)(&DAT_102baff5)[iVar12];
        if (*(short *)(param_2 + uVar11 * 2) != 0) {
          iVar5 = *(int *)(param_1 + 0x47c0);
          if (iVar5 < 1) {
            FUN_10178283();
            iVar5 = *(int *)(param_1 + 0x47c0);
            if (iVar5 < 1) goto LAB_101786be;
          }
          iVar10 = *(int *)(param_1 + 0x47bc);
          *(int *)(param_1 + 0x47bc) = iVar10 * 2;
          *(int *)(param_1 + 0x47c0) = iVar5 + -1;
          if ((iVar10 < 0) &&
             (sVar2 = *(short *)(param_2 + uVar11 * 2), (iVar13 >> 0x10 & (int)sVar2) == 0)) {
            sVar9 = -sVar3;
            if (0 < sVar2) {
              sVar9 = sVar3;
            }
            *(short *)(param_2 + uVar11 * 2) = sVar9 + sVar2;
          }
        }
LAB_101786be:
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x47d4));
    }
    return 1;
  }
LAB_10178b67:
  FUN_10170e07();
  return 0;
LAB_10178b59:
  *(int *)(param_1 + 0x47c0) = iVar10 + -0x10;
  goto LAB_10178b67;
}

