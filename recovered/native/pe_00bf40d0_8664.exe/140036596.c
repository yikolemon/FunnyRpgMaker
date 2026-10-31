/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140036596 */

void FUN_140036596(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  byte bVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  ulonglong uVar22;
  
  uVar9 = *(ulonglong *)(param_1 + 0x60 + (ulonglong)param_2 * 0x898);
  if (uVar9 == 0) {
    uVar31 = 0;
  }
  else {
    uVar31 = uVar9 + (ulonglong)*(uint *)((ulonglong)param_2 * 0x898 + param_1 + 0x58) * 0x48;
  }
  if (param_2 == 0) {
    bVar35 = true;
LAB_1400366f6:
    uVar34 = 0;
  }
  else {
    bVar35 = (&PTR_DAT_1400f0d50)[*(int *)(**(longlong **)(param_1 + 0x1180) + 8)][0x18] == '\0';
    if (uVar31 <= uVar9) goto LAB_1400366f6;
    uVar34 = 0;
    uVar33 = uVar9;
    do {
      bVar4 = *(byte *)(uVar33 + 0xc);
      if ((bVar4 & 4) == 0) {
        lVar12 = *(longlong *)(uVar33 + 0x18);
        uVar17 = *(ulonglong *)(uVar33 + 0x20);
        if (uVar17 == 0 || lVar12 == 0) {
LAB_140036678:
          bVar36 = lVar12 == 0;
          if (uVar17 == 0 || !bVar36) goto LAB_1400366a5;
          if (*(longlong *)(uVar17 + 0x18) == 0) goto LAB_1400366e2;
          *(undefined4 *)(uVar17 + 8) = *(undefined4 *)(*(longlong *)(uVar17 + 0x18) + 8);
          *(byte *)(uVar17 + 0xc) = *(byte *)(uVar17 + 0xc) | 4;
          uVar13 = uVar33;
LAB_1400366c0:
          if (*(longlong *)(uVar13 + 0x18) == 0) {
            FUN_140037858(param_1,1,uVar17,uVar13);
            *(byte *)(uVar13 + 0xc) = *(byte *)(uVar13 + 0xc) | 4;
          }
        }
        else {
          if (*(longlong *)(uVar17 + 0x18) != 0) {
            if ((*(byte *)(uVar17 + 0xc) & 8) == 0) {
              if ((bVar4 & 8) == 0) goto LAB_14003664e;
              *(undefined8 *)(uVar33 + 0x18) = 0;
              *(byte *)(uVar33 + 0xc) = bVar4 & 0xf3;
              lVar12 = 0;
            }
            else {
              *(undefined8 *)(uVar17 + 0x18) = 0;
              *(byte *)(uVar17 + 0xc) = *(byte *)(uVar17 + 0xc) & 0xf7;
              lVar12 = *(longlong *)(uVar33 + 0x18);
            }
            goto LAB_140036678;
          }
LAB_14003664e:
          bVar36 = false;
LAB_1400366a5:
          if (bVar36) goto LAB_1400366e2;
          *(undefined4 *)(uVar33 + 8) = *(undefined4 *)(lVar12 + 8);
          *(byte *)(uVar33 + 0xc) = *(byte *)(uVar33 + 0xc) | 4;
          bVar36 = uVar17 != 0;
          uVar13 = uVar17;
          uVar17 = uVar33;
          if (bVar36) goto LAB_1400366c0;
        }
        if (uVar34 == 0) {
          uVar34 = uVar33;
        }
      }
LAB_1400366e2:
      uVar33 = uVar33 + 0x48;
    } while (uVar33 < uVar31);
  }
  if (uVar9 < uVar31) {
    bVar4 = 0;
    uVar33 = uVar9;
    do {
      bVar16 = *(byte *)(uVar33 + 0xc);
      if ((bVar16 & 4) == 0) {
        uVar17 = *(ulonglong *)(uVar33 + 0x20);
        if (uVar17 == 0) {
          bVar4 = 1;
        }
        else if (*(longlong *)(uVar17 + 0x18) == 0) {
          iVar11 = *(int *)(uVar33 + 4);
          if (uVar34 == 0) {
            uVar28 = *(int *)(uVar17 + 4) - iVar11;
            uVar20 = FUN_14003789e(param_1,param_2,uVar28,0,(uint)bVar16,*(byte *)(uVar17 + 0xc));
            if ((int)uVar20 < 0x60) {
              iVar11 = ((int)uVar28 >> 1) + iVar11;
              uVar23 = iVar11 + 0x20U & 0xffffffc0;
              uVar28 = uVar23 - 0x26;
              uVar18 = 0x1a;
              if ((int)uVar20 < 0x41) {
                uVar18 = 0x20;
                uVar28 = uVar23 - 0x20;
              }
              uVar19 = uVar28 - iVar11;
              if ((int)uVar28 < iVar11) {
                uVar19 = iVar11 - uVar28;
              }
              uVar18 = uVar18 | uVar23;
              uVar23 = uVar18 - iVar11;
              if ((int)uVar18 < iVar11) {
                uVar23 = iVar11 - uVar18;
              }
              if (uVar23 <= uVar19) {
                uVar28 = uVar18;
              }
              iVar11 = uVar28 - (int)uVar20 / 2;
              *(int *)(uVar33 + 8) = iVar11;
              *(uint *)(uVar17 + 8) = iVar11 + uVar20;
              bVar16 = *(byte *)(uVar33 + 0xc);
            }
            else {
              *(uint *)(uVar33 + 8) = iVar11 + 0x20U & 0xffffffc0;
            }
            *(byte *)(uVar33 + 0xc) = bVar16 | 4;
            FUN_140037858(param_1,param_2,uVar33,uVar17);
            uVar34 = uVar33;
          }
          else {
            iVar29 = (iVar11 - *(int *)(uVar34 + 4)) + *(int *)(uVar34 + 8);
            uVar28 = *(int *)(uVar17 + 4) - iVar11;
            bVar5 = *(byte *)(uVar17 + 0xc);
            uVar20 = FUN_14003789e(param_1,param_2,uVar28,0,(uint)bVar16,bVar5);
            if ((bVar5 & 4) == 0) {
              iVar11 = ((int)uVar28 >> 1) + iVar29;
              uVar13 = uVar17;
              if ((int)uVar20 < 0x60) {
                uVar23 = iVar11 + 0x20U & 0xffffffc0;
                uVar28 = uVar23 - 0x26;
                uVar18 = 0x1a;
                if ((int)uVar20 < 0x41) {
                  uVar18 = 0x20;
                  uVar28 = uVar23 - 0x20;
                }
                uVar19 = uVar28 - iVar11;
                if ((int)uVar28 < iVar11) {
                  uVar19 = iVar11 - uVar28;
                }
                uVar18 = uVar18 | uVar23;
                uVar23 = uVar18 - iVar11;
                if ((int)uVar18 < iVar11) {
                  uVar23 = iVar11 - uVar18;
                }
                if (uVar23 <= uVar19) {
                  uVar28 = uVar18;
                }
                *(uint *)(uVar33 + 8) = uVar28 - (int)uVar20 / 2;
                iVar11 = (int)uVar20 / 2 + uVar28;
              }
              else {
                uVar23 = iVar29 + 0x20U & 0xffffffc0;
                uVar19 = (uVar23 + (uVar20 >> 1)) - iVar11;
                uVar18 = -uVar19;
                if ((int)uVar18 < 0) {
                  uVar18 = uVar19;
                }
                uVar19 = (iVar29 + uVar28 + 0x20 & 0xffffffc0) - uVar20;
                uVar24 = ((uVar20 >> 1) - iVar11) + uVar19;
                uVar28 = -uVar24;
                if ((int)uVar28 < 0) {
                  uVar28 = uVar24;
                }
                if (uVar28 <= uVar18) {
                  uVar23 = uVar19;
                }
                *(uint *)(uVar33 + 8) = uVar23;
                iVar11 = uVar20 + uVar23;
              }
            }
            else {
              iVar11 = *(int *)(uVar17 + 8) - uVar20;
              uVar13 = uVar33;
            }
            *(int *)(uVar13 + 8) = iVar11;
            *(byte *)(uVar33 + 0xc) = *(byte *)(uVar33 + 0xc) | 4;
            *(byte *)(uVar17 + 0xc) = *(byte *)(uVar17 + 0xc) | 4;
            if (uVar9 < uVar33) {
              iVar11 = *(int *)(uVar33 - 0x40);
              if (bVar35) {
                if (*(int *)(uVar33 + 8) < iVar11) {
LAB_1400369a7:
                  if (*(longlong *)(uVar33 + 0x20) != 0) {
                    iVar29 = *(int *)(*(longlong *)(uVar33 + 0x20) + 8);
                    uVar20 = iVar11 - iVar29;
                    if (iVar11 < iVar29) {
                      uVar20 = iVar29 - iVar11;
                    }
                    if (0x10 < uVar20) {
                      *(int *)(uVar33 + 8) = iVar11;
                    }
                  }
                }
              }
              else if (iVar11 < *(int *)(uVar33 + 8)) goto LAB_1400369a7;
            }
          }
        }
        else {
          FUN_140037858(param_1,param_2,uVar17,uVar33);
          *(byte *)(uVar33 + 0xc) = *(byte *)(uVar33 + 0xc) | 4;
        }
      }
      uVar33 = uVar33 + 0x48;
    } while (uVar33 < uVar31);
  }
  else {
    bVar4 = 0;
  }
  if (param_2 == 0) {
    lVar12 = uVar31 - uVar9;
    if (lVar12 == 0x1b0) {
      lVar14 = 0x120;
      lVar27 = 0x90;
      uVar33 = uVar9;
    }
    else {
      if (lVar12 != 0x360) goto LAB_1400369eb;
      lVar14 = 0x288;
      lVar27 = 0x168;
      uVar33 = uVar9 + 0x48;
    }
    uVar28 = *(int *)(uVar9 + 4 + lVar27) * 2 -
             (*(int *)(uVar33 + 4) + *(int *)(uVar9 + 4 + lVar14));
    uVar20 = -uVar28;
    if ((int)uVar20 < 0) {
      uVar20 = uVar28;
    }
    if (uVar20 < 8) {
      iVar11 = *(int *)(uVar9 + 8 + lVar27) * 2 - *(int *)(uVar33 + 8);
      iVar29 = *(int *)(uVar9 + 8 + lVar14) - iVar11;
      *(int *)(uVar9 + 8 + lVar14) = iVar11;
      lVar27 = *(longlong *)(uVar9 + 0x20 + lVar14);
      if (lVar27 != 0) {
        piVar2 = (int *)(lVar27 + 8);
        *piVar2 = *piVar2 - iVar29;
      }
      if (lVar12 == 0x360) {
        *(int *)(uVar9 + 0x248) = *(int *)(uVar9 + 0x248) - iVar29;
        *(int *)(uVar9 + 800) = *(int *)(uVar9 + 800) - iVar29;
      }
      pbVar3 = (byte *)(uVar9 + 0xc + lVar14);
      *pbVar3 = *pbVar3 | 4;
      lVar12 = *(longlong *)(uVar9 + 0x20 + lVar14);
      if (lVar12 != 0) {
        pbVar3 = (byte *)(lVar12 + 0xc);
        *pbVar3 = *pbVar3 | 4;
      }
    }
  }
LAB_1400369eb:
  if (((bool)(bVar4 | uVar34 == 0)) && (uVar9 < uVar31)) {
    uVar33 = uVar9 - 0x48;
    uVar17 = uVar9;
    do {
      if ((*(byte *)(uVar17 + 0xc) & 4) == 0) {
        uVar13 = *(ulonglong *)(uVar17 + 0x28);
        if (uVar13 != 0) {
          iVar11 = *(int *)(uVar13 + 4);
          iVar29 = *(int *)(uVar17 + 4);
          uVar22 = uVar17;
          uVar1 = uVar13;
          if (iVar11 - iVar29 < 0) {
            uVar22 = uVar13;
            uVar1 = uVar17;
          }
          uVar20 = iVar29 - iVar11;
          if (iVar29 < iVar11) {
            uVar20 = iVar11 - iVar29;
          }
          if (uVar20 < 0x60) {
            iVar11 = *(int *)(*(longlong *)(*(longlong *)(uVar1 + 0x38) + 0x38) + 0x1c);
            iVar29 = *(int *)(*(longlong *)(*(longlong *)(uVar1 + 0x38) + 0x40) + 0x1c);
            iVar26 = iVar29;
            if (iVar11 < iVar29) {
              iVar26 = iVar11;
            }
            iVar6 = *(int *)(*(longlong *)(*(longlong *)(uVar1 + 0x40) + 0x38) + 0x1c);
            iVar15 = *(int *)(*(longlong *)(*(longlong *)(uVar1 + 0x40) + 0x40) + 0x1c);
            iVar30 = iVar15;
            if (iVar6 < iVar15) {
              iVar30 = iVar6;
            }
            if (iVar26 < iVar30) {
              iVar30 = iVar26;
            }
            iVar26 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x38) + 0x38) + 0x1c);
            iVar7 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x38) + 0x40) + 0x1c);
            iVar10 = iVar7;
            if (iVar26 < iVar7) {
              iVar10 = iVar26;
            }
            iVar8 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x40) + 0x38) + 0x1c);
            iVar32 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x40) + 0x40) + 0x1c);
            iVar25 = iVar32;
            if (iVar8 < iVar32) {
              iVar25 = iVar8;
            }
            if (iVar10 < iVar25) {
              iVar25 = iVar10;
            }
            if (iVar30 < iVar25) {
              iVar25 = iVar30;
            }
            if (iVar29 < iVar11) {
              iVar29 = iVar11;
            }
            if (iVar15 < iVar6) {
              iVar15 = iVar6;
            }
            if (iVar15 < iVar29) {
              iVar15 = iVar29;
            }
            if (iVar7 < iVar26) {
              iVar7 = iVar26;
            }
            if (iVar32 < iVar8) {
              iVar32 = iVar8;
            }
            if (iVar32 < iVar7) {
              iVar32 = iVar7;
            }
            if (iVar32 < iVar15) {
              iVar32 = iVar15;
            }
            do {
              uVar21 = uVar22 + 0x48;
              if (uVar1 <= uVar21) {
                if (0x4f < uVar20) goto LAB_140036bbe;
                FUN_140033d59(uVar13,uVar17);
                goto LAB_140036c3a;
              }
              iVar11 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x80) + 0x38) + 0x1c);
              iVar29 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x80) + 0x40) + 0x1c);
              iVar26 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x88) + 0x38) + 0x1c);
              iVar6 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x88) + 0x40) + 0x1c);
              iVar15 = iVar6;
              if (iVar26 < iVar6) {
                iVar15 = iVar26;
              }
              if (iVar6 < iVar26) {
                iVar6 = iVar26;
              }
              iVar26 = iVar29;
              if (iVar11 < iVar29) {
                iVar26 = iVar11;
              }
              if (iVar29 < iVar11) {
                iVar29 = iVar11;
              }
              if (iVar15 <= iVar26) {
                iVar26 = iVar15;
              }
              if (iVar29 <= iVar6) {
                iVar29 = iVar6;
              }
              uVar22 = uVar21;
            } while ((iVar29 < iVar25) || (iVar32 < iVar26));
            goto LAB_140036c8c;
          }
        }
LAB_140036bbe:
        uVar13 = uVar33;
        if (uVar34 == 0) {
          *(uint *)(uVar17 + 8) = *(int *)(uVar17 + 4) + 0x20U & 0xffffffc0;
          uVar34 = uVar17;
        }
        else {
          do {
            uVar22 = uVar13;
            uVar1 = uVar17;
            if (uVar22 < uVar9) break;
            uVar13 = uVar22 - 0x48;
          } while ((*(byte *)(uVar22 + 0xc) & 4) == 0);
          do {
            uVar13 = uVar1;
            uVar1 = uVar13 + 0x48;
            if (uVar31 <= uVar1) goto LAB_140036c15;
          } while ((*(byte *)(uVar13 + 0x54) & 4) == 0);
          if (((uVar22 < uVar9) || (uVar17 <= uVar22)) || (uVar1 <= uVar17)) {
LAB_140036c15:
            iVar11 = ((*(int *)(uVar17 + 4) - *(int *)(uVar34 + 4)) + 0x10U & 0xffffffe0) +
                     *(int *)(uVar34 + 8);
          }
          else {
            iVar29 = *(int *)(uVar22 + 8);
            uVar20 = *(int *)(uVar13 + 0x4c) - *(int *)(uVar22 + 4);
            if (uVar20 == 0) {
              *(int *)(uVar17 + 8) = iVar29;
              goto LAB_140036c3a;
            }
            iVar11 = FUN_14001de7c(*(int *)(uVar17 + 4) - *(int *)(uVar22 + 4),
                                   *(int *)(uVar13 + 0x50) - iVar29,uVar20);
            iVar11 = iVar11 + iVar29;
          }
          *(int *)(uVar17 + 8) = iVar11;
        }
LAB_140036c3a:
        *(byte *)(uVar17 + 0xc) = *(byte *)(uVar17 + 0xc) | 4;
        if (uVar9 < uVar17) {
          iVar11 = *(int *)(uVar17 - 0x40);
          if (bVar35) {
            if (*(int *)(uVar17 + 8) < iVar11) {
LAB_140036c5a:
              if (*(longlong *)(uVar17 + 0x20) != 0) {
                iVar29 = *(int *)(*(longlong *)(uVar17 + 0x20) + 8);
                uVar20 = iVar11 - iVar29;
                if (iVar11 < iVar29) {
                  uVar20 = iVar29 - iVar11;
                }
                if (0x10 < uVar20) {
                  *(int *)(uVar17 + 8) = iVar11;
                }
              }
            }
          }
          else if (iVar11 < *(int *)(uVar17 + 8)) goto LAB_140036c5a;
        }
        if ((uVar17 + 0x48 < uVar31) && ((*(byte *)(uVar17 + 0x54) & 4) != 0)) {
          iVar11 = *(int *)(uVar17 + 0x50);
          if (bVar35) {
            if (iVar11 < *(int *)(uVar17 + 8)) {
LAB_140036cb6:
              if (*(longlong *)(uVar17 + 0x20) != 0) {
                iVar29 = *(int *)(*(longlong *)(uVar17 + 0x20) + 8);
                iVar26 = *(int *)(uVar17 - 0x40);
                uVar20 = iVar26 - iVar29;
                if (iVar26 < iVar29) {
                  uVar20 = iVar29 - iVar26;
                }
                if (0x10 < uVar20) {
                  *(int *)(uVar17 + 8) = iVar11;
                }
              }
            }
          }
          else if (*(int *)(uVar17 + 8) < iVar11) goto LAB_140036cb6;
        }
      }
LAB_140036c8c:
      uVar17 = uVar17 + 0x48;
      uVar33 = uVar33 + 0x48;
    } while (uVar17 < uVar31);
  }
  return;
}

