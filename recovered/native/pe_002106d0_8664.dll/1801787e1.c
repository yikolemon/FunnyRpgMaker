/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801787e1 */

undefined8
FUN_1801787e1(longlong *param_1,byte *param_2,uint param_3,int param_4,uint param_5,uint param_6,
             int param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong lVar15;
  byte bVar16;
  char *pcVar17;
  byte *pbVar18;
  longlong lVar19;
  longlong lVar20;
  byte *pbVar21;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte *pbVar27;
  uint uVar28;
  byte *pbVar30;
  ulonglong uVar31;
  uint uVar32;
  bool bVar34;
  byte local_105;
  ulonglong uVar29;
  ulonglong uVar33;
  
  bVar34 = param_7 == 0x10;
  iVar9 = param_5 * param_4 << bVar34;
  iVar2 = *(int *)(*param_1 + 8);
  uVar12 = (ulonglong)(uint)(iVar2 << bVar34);
  lVar13 = FUN_180178ee1(param_5,param_6,param_4 << bVar34,0);
  param_1[3] = lVar13;
  if (lVar13 == 0) {
LAB_180178e89:
    FUN_1801765d0("outofmem");
    return 0;
  }
  iVar10 = FUN_180178f1f(iVar2,param_5,param_7,7);
  if (iVar10 != 0) {
    iVar10 = iVar2 * param_5;
    uVar28 = iVar10 * param_7 + 7U >> 3;
    uVar29 = (ulonglong)uVar28;
    iVar11 = FUN_180178f69(uVar29,param_6,uVar28);
    if (iVar11 != 0) {
      if ((uVar28 + 1) * param_6 <= param_3) {
        lVar13 = FUN_180178f9d(uVar29,2,0);
        sVar7 = DAT_1802e1300._6_2_;
        sVar6 = DAT_1802e1300._4_2_;
        sVar5 = DAT_1802e1300._2_2_;
        sVar4 = (short)DAT_1802e1300;
        if (lVar13 != 0) {
          if (param_6 != 0) {
            uVar23 = param_5;
            if (param_7 < 8) {
              uVar12 = 1;
              uVar23 = uVar28;
            }
            iVar11 = (int)uVar12;
            uVar23 = uVar23 * iVar11;
            lVar25 = (longlong)iVar11;
            lVar19 = (longlong)(int)uVar23;
            pbVar27 = param_2 + lVar25 + 1;
            local_105 = 1;
            uVar31 = 0;
            uVar32 = 0;
            do {
              uVar33 = (ulonglong)uVar32;
              uVar24 = 0;
              if ((uVar31 & 1) != 0) {
                uVar24 = uVar29;
              }
              bVar16 = *param_2;
              if (4 < (ulonglong)bVar16) {
                FUN_1801765d0("invalid filter");
                thunk_FUN_180290e40(lVar13);
                return 0;
              }
              if (uVar31 == 0) {
                bVar16 = (&DAT_1802e0c8c)[bVar16];
              }
              pbVar30 = (byte *)(uVar24 + lVar13);
              lVar3 = param_1[3];
              pbVar1 = param_2 + 1;
              if (bVar16 < 6) {
                lVar15 = lVar13 + (ulonglong)(local_105 * uVar28);
                switch(bVar16) {
                case 0:
                  FUN_1802a82f0(pbVar30,pbVar1);
                  break;
                case 1:
                  FUN_1802a82f0(pbVar30,pbVar1);
                  if (iVar11 < (int)uVar23) {
                    lVar15 = 0;
                    do {
                      pbVar30[lVar15 + lVar25] = pbVar30[lVar15] + pbVar27[lVar15];
                      lVar15 = lVar15 + 1;
                    } while ((lVar25 - lVar19) + lVar15 != 0);
                  }
                  break;
                case 2:
                  if (0 < (int)uVar23) {
                    uVar24 = 0;
                    do {
                      pbVar30[uVar24] = *(char *)(lVar15 + uVar24) + param_2[uVar24 + 1];
                      uVar24 = uVar24 + 1;
                    } while (uVar23 != uVar24);
                  }
                  break;
                case 3:
                  if (0 < iVar11) {
                    uVar24 = 0;
                    do {
                      pbVar30[uVar24] = (*(byte *)(lVar15 + uVar24) >> 1) + param_2[uVar24 + 1];
                      uVar24 = uVar24 + 1;
                    } while (uVar12 != uVar24);
                  }
                  if (iVar11 < (int)uVar23) {
                    pbVar14 = (byte *)((ulonglong)(local_105 * uVar28) + lVar13 + lVar25);
                    lVar15 = lVar19;
                    pbVar18 = pbVar27;
                    pbVar21 = pbVar30;
                    do {
                      pbVar21[lVar25] = (char)((uint)*pbVar21 + (uint)*pbVar14 >> 1) + *pbVar18;
                      pbVar21 = pbVar21 + 1;
                      pbVar18 = pbVar18 + 1;
                      pbVar14 = pbVar14 + 1;
                      lVar15 = lVar15 + -1;
                    } while (lVar25 != lVar15);
                  }
                  break;
                case 4:
                  if (0 < iVar11) {
                    uVar24 = 0;
                    do {
                      pbVar30[uVar24] = *(char *)(lVar15 + uVar24) + param_2[uVar24 + 1];
                      uVar24 = uVar24 + 1;
                    } while (uVar12 != uVar24);
                  }
                  pbVar18 = pbVar30;
                  lVar20 = lVar19;
                  pbVar21 = pbVar27;
                  if (iVar11 < (int)uVar23) {
                    do {
                      bVar16 = *pbVar21;
                      cVar8 = FUN_180178fd2(*pbVar18,*(undefined1 *)(lVar15 + lVar25));
                      pbVar18[lVar25] = cVar8 + bVar16;
                      lVar15 = lVar15 + 1;
                      pbVar18 = pbVar18 + 1;
                      pbVar21 = pbVar21 + 1;
                      lVar20 = lVar20 + -1;
                    } while (lVar25 != lVar20);
                  }
                  break;
                case 5:
                  FUN_1802a82f0(pbVar30,pbVar1);
                  if (iVar11 < (int)uVar23) {
                    lVar15 = 0;
                    do {
                      pbVar30[lVar15 + lVar25] = (pbVar30[lVar15] >> 1) + pbVar27[lVar15];
                      lVar15 = lVar15 + 1;
                    } while ((lVar25 - lVar19) + lVar15 != 0);
                  }
                }
              }
              pbVar18 = (byte *)((ulonglong)(uint)(iVar9 * (int)uVar31) + lVar3);
              if (param_7 < 8) {
                bVar16 = 1;
                if (param_8 == 0) {
                  bVar16 = (&DAT_1802e0898)[param_7];
                }
                if (param_7 == 4) {
                  if (iVar10 != 0) {
                    uVar24 = 0;
                    uVar26 = 0;
                    do {
                      if ((uVar24 & 1) == 0) {
                        uVar26 = (ulonglong)*pbVar30;
                        pbVar30 = pbVar30 + 1;
                      }
                      *(byte *)(lVar3 + uVar33 + uVar24) = (char)(uVar26 >> 4) * bVar16;
                      uVar26 = (ulonglong)(byte)((char)uVar26 << 4);
                      uVar24 = uVar24 + 1;
                    } while (iVar10 != (int)uVar24);
                  }
                }
                else if (param_7 == 2) {
                  if (iVar10 != 0) {
                    uVar24 = 0;
                    uVar26 = 0;
                    do {
                      if ((uVar24 & 3) == 0) {
                        uVar26 = (ulonglong)*pbVar30;
                        pbVar30 = pbVar30 + 1;
                      }
                      *(byte *)(lVar3 + uVar33 + uVar24) = (char)(uVar26 >> 6) * bVar16;
                      uVar26 = (ulonglong)(byte)((char)uVar26 << 2);
                      uVar24 = uVar24 + 1;
                    } while (iVar10 != (int)uVar24);
                  }
                }
                else if (iVar10 != 0) {
                  uVar24 = 0;
                  bVar22 = 0;
                  do {
                    if ((uVar24 & 7) == 0) {
                      bVar22 = *pbVar30;
                      pbVar30 = pbVar30 + 1;
                    }
                    *(byte *)(lVar3 + uVar33 + uVar24) = (char)bVar22 >> 7 & bVar16;
                    bVar22 = bVar22 * '\x02';
                    uVar24 = uVar24 + 1;
                  } while (iVar10 != (int)uVar24);
                }
                pbVar30 = pbVar18;
                if (iVar2 != param_4) {
LAB_180178da0:
                  FUN_180178ff9(pbVar18,pbVar30);
                }
              }
              else if (param_7 == 8) {
                if (iVar2 != param_4) goto LAB_180178da0;
                FUN_1802a82f0(pbVar18,pbVar30);
              }
              else if (param_7 == 0x10) {
                if (iVar2 == param_4) {
                  if (iVar10 != 0) {
                    lVar15 = 0;
                    do {
                      *(ushort *)(lVar3 + uVar33 + lVar15 * 2) =
                           *(ushort *)(pbVar30 + lVar15 * 2) << 8 |
                           *(ushort *)(pbVar30 + lVar15 * 2) >> 8;
                      lVar15 = lVar15 + 1;
                    } while (iVar10 != (int)lVar15);
                  }
                }
                else if (iVar2 == 1) {
                  if (param_5 != 0) {
                    lVar15 = 0;
                    do {
                      *(ushort *)(lVar3 + uVar33 + lVar15 * 4) =
                           *(ushort *)(pbVar30 + lVar15 * 2) << 8 |
                           *(ushort *)(pbVar30 + lVar15 * 2) >> 8;
                      *(undefined2 *)(lVar3 + uVar33 + 2 + lVar15 * 4) = 0xffff;
                      lVar15 = lVar15 + 1;
                    } while (param_5 != (uint)lVar15);
                  }
                }
                else if (param_5 != 0) {
                  lVar15 = 0;
                  do {
                    *(ulonglong *)(lVar3 + uVar33 + lVar15 * 8) =
                         (ulonglong)pbVar30[1] | (ulonglong)pbVar30[3] << 0x10 |
                         (ulonglong)pbVar30[5] << 0x20 |
                         CONCAT26(-sVar7,CONCAT24((ushort)pbVar30[4] * sVar6,
                                                  CONCAT22((ushort)pbVar30[2] * sVar5,
                                                           (ushort)*pbVar30 * sVar4)));
                    pbVar30 = pbVar30 + 6;
                    lVar15 = lVar15 + 1;
                  } while (param_5 != (uint)lVar15);
                }
              }
              param_2 = pbVar1 + lVar19;
              uVar31 = uVar31 + 1;
              pbVar27 = pbVar27 + lVar19 + 1;
              local_105 = local_105 ^ 1;
              uVar32 = uVar32 + iVar9;
            } while (uVar31 != param_6);
          }
          thunk_FUN_180290e40(lVar13);
          return 1;
        }
        goto LAB_180178e89;
      }
      pcVar17 = "not enough pixels";
      goto LAB_1801788d1;
    }
  }
  pcVar17 = "too large";
LAB_1801788d1:
  FUN_1801765d0(pcVar17);
  return 0;
}

