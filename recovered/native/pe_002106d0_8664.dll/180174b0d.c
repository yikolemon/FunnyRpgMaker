/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180174b0d */

longlong FUN_180174b0d(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar14;
  undefined1 extraout_AH;
  undefined1 *puVar15;
  undefined1 uVar16;
  char *pcVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  longlong local_90;
  ulonglong uVar13;
  
  iVar5 = FUN_1801774e1();
  if (iVar5 == 0x38425053) {
    iVar5 = FUN_180177505(param_1);
    if (iVar5 == 1) {
      FUN_180177488(param_1,6);
      uVar6 = FUN_180177505(param_1);
      if (uVar6 < 0x11) {
        iVar5 = FUN_1801774e1(param_1);
        iVar7 = FUN_1801774e1(param_1);
        if ((iVar5 < 0x1000001) && (iVar7 < 0x1000001)) {
          iVar8 = FUN_180177505(param_1);
          if ((iVar8 != 8) && (iVar8 != 0x10)) {
            pcVar17 = "unsupported bit depth";
            goto LAB_180174ba9;
          }
          iVar9 = FUN_180177505(param_1);
          if (iVar9 != 3) {
            pcVar17 = "wrong color format";
            goto LAB_180174ba9;
          }
          uVar10 = FUN_1801774e1(param_1);
          FUN_180177488(param_1,uVar10);
          uVar10 = FUN_1801774e1(param_1);
          FUN_180177488(param_1,uVar10);
          uVar10 = FUN_1801774e1(param_1);
          FUN_180177488(param_1,uVar10);
          uVar11 = FUN_180177505(param_1);
          if (1 < uVar11) {
            pcVar17 = "bad compression";
            goto LAB_180174ba9;
          }
          iVar9 = FUN_180178f1f(4,iVar7,iVar5,0);
          if (iVar9 != 0) {
            uVar12 = iVar7 * iVar5;
            uVar13 = (ulonglong)uVar12;
            lVar14 = FUN_18012be7d();
            if (lVar14 != 0) {
              if (uVar11 == 0) {
                uVar19 = 0;
                lVar20 = lVar14;
                local_90 = lVar14;
                do {
                  if (uVar19 < uVar6) {
                    if (*param_4 == 0x10) {
                      if (0 < (int)uVar12) {
                        lVar18 = 0;
                        do {
                          uVar4 = FUN_180177505(param_1);
                          *(undefined2 *)(local_90 + lVar18 * 8) = uVar4;
                          lVar18 = lVar18 + 1;
                        } while (uVar12 != (uint)lVar18);
                      }
                    }
                    else if (iVar8 == 0x10) {
                      if (0 < (int)uVar12) {
                        lVar18 = 0;
                        do {
                          FUN_180177505();
                          *(undefined1 *)(lVar20 + lVar18 * 4) = extraout_AH;
                          lVar18 = lVar18 + 1;
                        } while (uVar12 != (uint)lVar18);
                      }
                    }
                    else if (0 < (int)uVar12) {
                      puVar15 = *(undefined1 **)(param_1 + 0xc0);
                      lVar18 = 0;
                      do {
                        if (puVar15 < *(undefined1 **)(param_1 + 200)) {
LAB_180174ec7:
                          *(undefined1 **)(param_1 + 0xc0) = puVar15 + 1;
                          uVar16 = *puVar15;
                          puVar15 = puVar15 + 1;
                        }
                        else {
                          if (*(int *)(param_1 + 0x30) != 0) {
                            FUN_180176673(param_1);
                            puVar15 = *(undefined1 **)(param_1 + 0xc0);
                            goto LAB_180174ec7;
                          }
                          uVar16 = 0;
                        }
                        *(undefined1 *)(lVar20 + lVar18 * 4) = uVar16;
                        lVar18 = lVar18 + 1;
                      } while (uVar12 != (uint)lVar18);
                    }
                  }
                  else if (0 < (int)uVar12) {
                    lVar18 = 0;
                    do {
                      *(char *)(lVar20 + lVar18 * 4) = -(uVar19 == 3);
                      lVar18 = lVar18 + 1;
                    } while (uVar12 != (uint)lVar18);
                  }
                  uVar19 = uVar19 + 1;
                  lVar20 = lVar20 + 1;
                  local_90 = local_90 + 2;
                } while (uVar19 != 4);
              }
              else {
                FUN_180177488(param_1,iVar5 * uVar6 * 2);
                uVar19 = 0;
                lVar20 = lVar14;
                do {
                  if (uVar19 < uVar6) {
                    iVar8 = FUN_18017a492(param_1,lVar14 + uVar19,uVar13);
                    if (iVar8 == 0) {
                      thunk_FUN_180290e40(lVar14);
                      pcVar17 = "corrupt";
                      goto LAB_180174ba9;
                    }
                  }
                  else if (0 < (int)uVar12) {
                    lVar18 = 0;
                    do {
                      *(char *)(lVar20 + lVar18 * 4) = -(uVar19 == 3);
                      lVar18 = lVar18 + 1;
                    } while (uVar12 != (uint)lVar18);
                  }
                  uVar19 = uVar19 + 1;
                  lVar20 = lVar20 + 1;
                } while (uVar19 != 4);
              }
              fVar21 = DAT_1802e12b0;
              fVar22 = DAT_1802dc270;
              fVar3 = DAT_1802ac570;
              if (3 < uVar6) {
                if (*param_4 == 0x10) {
                  if (0 < (int)uVar12) {
                    uVar19 = 0;
                    do {
                      uVar2 = *(ushort *)(lVar14 + 6 + uVar19 * 8);
                      if ((ushort)(uVar2 - 1) < 0xfffe) {
                        fVar23 = fVar3 / ((float)uVar2 / fVar21);
                        fVar22 = (fVar3 - fVar23) * fVar21;
                        uVar6 = *(uint *)(lVar14 + uVar19 * 8);
                        auVar24._0_4_ = (int)(fVar22 + fVar23 * (float)(uVar6 & 0xffff));
                        auVar24._4_4_ = (int)(fVar22 + fVar23 * (float)(uVar6 >> 0x10));
                        auVar24._8_4_ = (int)(fVar22 + fVar23 * 0.0);
                        auVar24._12_4_ = (int)(fVar22 + fVar23 * 0.0);
                        auVar24 = pshuflw(auVar24,auVar24,0xe8);
                        *(int *)(lVar14 + uVar19 * 8) = auVar24._0_4_;
                        *(short *)(lVar14 + 4 + uVar19 * 8) =
                             (short)(int)((float)*(ushort *)(lVar14 + 4 + uVar19 * 8) * fVar23 +
                                         fVar22);
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar13 != uVar19);
                  }
                }
                else if (0 < (int)uVar12) {
                  uVar19 = 0;
                  do {
                    bVar1 = *(byte *)(lVar14 + 3 + uVar19 * 4);
                    if ((byte)(bVar1 - 1) < 0xfe) {
                      fVar23 = fVar3 / ((float)bVar1 / fVar22);
                      fVar21 = (fVar3 - fVar23) * fVar22;
                      *(char *)(lVar14 + uVar19 * 4) =
                           (char)(int)((float)*(byte *)(lVar14 + uVar19 * 4) * fVar23 + fVar21);
                      *(char *)(lVar14 + 1 + uVar19 * 4) =
                           (char)(int)((float)*(byte *)(lVar14 + 1 + uVar19 * 4) * fVar23 + fVar21);
                      *(char *)(lVar14 + 2 + uVar19 * 4) =
                           (char)(int)((float)*(byte *)(lVar14 + 2 + uVar19 * 4) * fVar23 + fVar21);
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar13 != uVar19);
                }
              }
              *param_3 = iVar5;
              *param_2 = iVar7;
              return lVar14;
            }
            pcVar17 = "outofmem";
            goto LAB_180174ba9;
          }
        }
        pcVar17 = "too large";
      }
      else {
        pcVar17 = "wrong channel count";
      }
    }
    else {
      pcVar17 = "wrong version";
    }
  }
  else {
    pcVar17 = "not PSD";
  }
LAB_180174ba9:
  FUN_1801765d0(pcVar17);
  return 0;
}

