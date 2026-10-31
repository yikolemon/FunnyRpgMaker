/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013864e */

void FUN_14013864e(longlong param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  byte bVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  ulonglong uVar22;
  
  uVar8 = *(ulonglong *)(param_1 + 0x60 + (ulonglong)param_2 * 0x898);
  if (uVar8 == 0) {
    uVar31 = 0;
  }
  else {
    uVar31 = uVar8 + (ulonglong)*(uint *)((ulonglong)param_2 * 0x898 + param_1 + 0x58) * 0x48;
  }
  if (param_2 == 0) {
    bVar35 = true;
LAB_1401387ae:
    uVar34 = 0;
  }
  else {
    bVar35 = (&PTR_DAT_140e97f90)[*(int *)(**(longlong **)(param_1 + 0x1180) + 8)][0x18] == '\0';
    if (uVar31 <= uVar8) goto LAB_1401387ae;
    uVar34 = 0;
    uVar33 = uVar8;
    do {
      bVar3 = *(byte *)(uVar33 + 0xc);
      if ((bVar3 & 4) == 0) {
        lVar13 = *(longlong *)(uVar33 + 0x18);
        uVar18 = *(ulonglong *)(uVar33 + 0x20);
        if (uVar18 == 0 || lVar13 == 0) {
LAB_140138730:
          bVar36 = lVar13 == 0;
          if (uVar18 == 0 || !bVar36) goto LAB_14013875d;
          if (*(longlong *)(uVar18 + 0x18) == 0) goto LAB_14013879a;
          *(undefined4 *)(uVar18 + 8) = *(undefined4 *)(*(longlong *)(uVar18 + 0x18) + 8);
          *(byte *)(uVar18 + 0xc) = *(byte *)(uVar18 + 0xc) | 4;
          uVar11 = uVar33;
LAB_140138778:
          if (*(longlong *)(uVar11 + 0x18) == 0) {
            FUN_140139910(param_1,1,uVar18,uVar11);
            *(byte *)(uVar11 + 0xc) = *(byte *)(uVar11 + 0xc) | 4;
          }
        }
        else {
          if (*(longlong *)(uVar18 + 0x18) != 0) {
            if ((*(byte *)(uVar18 + 0xc) & 8) == 0) {
              if ((bVar3 & 8) == 0) goto LAB_140138706;
              *(undefined8 *)(uVar33 + 0x18) = 0;
              *(byte *)(uVar33 + 0xc) = bVar3 & 0xf3;
              lVar13 = 0;
            }
            else {
              *(undefined8 *)(uVar18 + 0x18) = 0;
              *(byte *)(uVar18 + 0xc) = *(byte *)(uVar18 + 0xc) & 0xf7;
              lVar13 = *(longlong *)(uVar33 + 0x18);
            }
            goto LAB_140138730;
          }
LAB_140138706:
          bVar36 = false;
LAB_14013875d:
          if (bVar36) goto LAB_14013879a;
          *(undefined4 *)(uVar33 + 8) = *(undefined4 *)(lVar13 + 8);
          *(byte *)(uVar33 + 0xc) = *(byte *)(uVar33 + 0xc) | 4;
          bVar36 = uVar18 != 0;
          uVar11 = uVar18;
          uVar18 = uVar33;
          if (bVar36) goto LAB_140138778;
        }
        if (uVar34 == 0) {
          uVar34 = uVar33;
        }
      }
LAB_14013879a:
      uVar33 = uVar33 + 0x48;
    } while (uVar33 < uVar31);
  }
  if (uVar8 < uVar31) {
    bVar3 = 0;
    uVar33 = uVar8;
    do {
      bVar17 = *(byte *)(uVar33 + 0xc);
      if ((bVar17 & 4) == 0) {
        uVar18 = *(ulonglong *)(uVar33 + 0x20);
        if (uVar18 == 0) {
          bVar3 = 1;
        }
        else if (*(longlong *)(uVar18 + 0x18) == 0) {
          iVar10 = *(int *)(uVar33 + 4);
          if (uVar34 == 0) {
            iVar12 = *(int *)(uVar18 + 4) - iVar10;
            iVar28 = FUN_140139956(param_1,param_2,iVar12,0,bVar17,*(undefined1 *)(uVar18 + 0xc));
            if (iVar28 < 0x60) {
              iVar10 = (iVar12 >> 1) + iVar10;
              uVar19 = iVar10 + 0x20U & 0xffffffc0;
              uVar30 = uVar19 - 0x26;
              uVar27 = 0x1a;
              if (iVar28 < 0x41) {
                uVar27 = 0x20;
                uVar30 = uVar19 - 0x20;
              }
              uVar23 = uVar30 - iVar10;
              if ((int)uVar30 < iVar10) {
                uVar23 = iVar10 - uVar30;
              }
              uVar27 = uVar27 | uVar19;
              uVar19 = uVar27 - iVar10;
              if ((int)uVar27 < iVar10) {
                uVar19 = iVar10 - uVar27;
              }
              if (uVar19 <= uVar23) {
                uVar30 = uVar27;
              }
              iVar10 = uVar30 - iVar28 / 2;
              *(int *)(uVar33 + 8) = iVar10;
              *(int *)(uVar18 + 8) = iVar10 + iVar28;
              bVar17 = *(byte *)(uVar33 + 0xc);
            }
            else {
              *(uint *)(uVar33 + 8) = iVar10 + 0x20U & 0xffffffc0;
            }
            *(byte *)(uVar33 + 0xc) = bVar17 | 4;
            FUN_140139910(param_1,param_2,uVar33);
            uVar34 = uVar33;
          }
          else {
            iVar28 = (iVar10 - *(int *)(uVar34 + 4)) + *(int *)(uVar34 + 8);
            iVar10 = *(int *)(uVar18 + 4) - iVar10;
            bVar4 = *(byte *)(uVar18 + 0xc);
            uVar11 = FUN_140139956(param_1,param_2,iVar10,0,bVar17,bVar4);
            uVar30 = (uint)uVar11;
            if ((bVar4 & 4) == 0) {
              iVar12 = (iVar10 >> 1) + iVar28;
              uVar14 = uVar18;
              if ((int)uVar30 < 0x60) {
                uVar23 = iVar12 + 0x20U & 0xffffffc0;
                uVar27 = uVar23 - 0x26;
                uVar19 = 0x1a;
                if ((int)uVar30 < 0x41) {
                  uVar19 = 0x20;
                  uVar27 = uVar23 - 0x20;
                }
                uVar20 = uVar27 - iVar12;
                if ((int)uVar27 < iVar12) {
                  uVar20 = iVar12 - uVar27;
                }
                uVar19 = uVar19 | uVar23;
                uVar23 = uVar19 - iVar12;
                if ((int)uVar19 < iVar12) {
                  uVar23 = iVar12 - uVar19;
                }
                if (uVar23 <= uVar20) {
                  uVar27 = uVar19;
                }
                iVar10 = (int)(((uint)(uVar11 >> 0x1f) & 1) + uVar30) >> 1;
                *(uint *)(uVar33 + 8) = uVar27 - iVar10;
                iVar10 = iVar10 + uVar27;
              }
              else {
                uVar19 = iVar28 + 0x20U & 0xffffffc0;
                uVar23 = (uVar19 + (uVar30 >> 1)) - iVar12;
                uVar27 = -uVar23;
                if ((int)uVar27 < 0) {
                  uVar27 = uVar23;
                }
                uVar20 = (iVar28 + iVar10 + 0x20U & 0xffffffc0) - uVar30;
                uVar24 = ((uVar30 >> 1) - iVar12) + uVar20;
                uVar23 = -uVar24;
                if ((int)uVar23 < 0) {
                  uVar23 = uVar24;
                }
                if (uVar23 <= uVar27) {
                  uVar19 = uVar20;
                }
                *(uint *)(uVar33 + 8) = uVar19;
                iVar10 = uVar30 + uVar19;
              }
            }
            else {
              iVar10 = *(int *)(uVar18 + 8) - uVar30;
              uVar14 = uVar33;
            }
            *(int *)(uVar14 + 8) = iVar10;
            *(byte *)(uVar33 + 0xc) = *(byte *)(uVar33 + 0xc) | 4;
            *(byte *)(uVar18 + 0xc) = *(byte *)(uVar18 + 0xc) | 4;
            if (uVar8 < uVar33) {
              iVar10 = *(int *)(uVar33 - 0x40);
              if (bVar35) {
                if (*(int *)(uVar33 + 8) < iVar10) {
LAB_140138a5f:
                  if (*(longlong *)(uVar33 + 0x20) != 0) {
                    iVar28 = *(int *)(*(longlong *)(uVar33 + 0x20) + 8);
                    uVar30 = iVar10 - iVar28;
                    if (iVar10 < iVar28) {
                      uVar30 = iVar28 - iVar10;
                    }
                    if (0x10 < uVar30) {
                      *(int *)(uVar33 + 8) = iVar10;
                    }
                  }
                }
              }
              else if (iVar10 < *(int *)(uVar33 + 8)) goto LAB_140138a5f;
            }
          }
        }
        else {
          FUN_140139910(param_1,param_2,uVar18);
          *(byte *)(uVar33 + 0xc) = *(byte *)(uVar33 + 0xc) | 4;
        }
      }
      uVar33 = uVar33 + 0x48;
    } while (uVar33 < uVar31);
  }
  else {
    bVar3 = 0;
  }
  if (param_2 == 0) {
    lVar13 = uVar31 - uVar8;
    if (lVar13 == 0x1b0) {
      lVar15 = 0x120;
      lVar26 = 0x90;
      uVar33 = uVar8;
    }
    else {
      if (lVar13 != 0x360) goto LAB_140138aa3;
      lVar15 = 0x288;
      lVar26 = 0x168;
      uVar33 = uVar8 + 0x48;
    }
    uVar27 = *(int *)(uVar8 + 4 + lVar26) * 2 -
             (*(int *)(uVar33 + 4) + *(int *)(uVar8 + 4 + lVar15));
    uVar30 = -uVar27;
    if ((int)uVar30 < 0) {
      uVar30 = uVar27;
    }
    if (uVar30 < 8) {
      iVar10 = *(int *)(uVar8 + 8 + lVar26) * 2 - *(int *)(uVar33 + 8);
      iVar28 = *(int *)(uVar8 + 8 + lVar15) - iVar10;
      *(int *)(uVar8 + 8 + lVar15) = iVar10;
      lVar26 = *(longlong *)(uVar8 + 0x20 + lVar15);
      if (lVar26 != 0) {
        piVar1 = (int *)(lVar26 + 8);
        *piVar1 = *piVar1 - iVar28;
      }
      if (lVar13 == 0x360) {
        *(int *)(uVar8 + 0x248) = *(int *)(uVar8 + 0x248) - iVar28;
        *(int *)(uVar8 + 800) = *(int *)(uVar8 + 800) - iVar28;
      }
      pbVar2 = (byte *)(uVar8 + 0xc + lVar15);
      *pbVar2 = *pbVar2 | 4;
      lVar13 = *(longlong *)(uVar8 + 0x20 + lVar15);
      if (lVar13 != 0) {
        pbVar2 = (byte *)(lVar13 + 0xc);
        *pbVar2 = *pbVar2 | 4;
      }
    }
  }
LAB_140138aa3:
  if (((bool)(bVar3 | uVar34 == 0)) && (uVar8 < uVar31)) {
    uVar33 = uVar8 - 0x48;
    uVar18 = uVar8;
    do {
      if ((*(byte *)(uVar18 + 0xc) & 4) == 0) {
        uVar11 = *(ulonglong *)(uVar18 + 0x28);
        if (uVar11 != 0) {
          iVar10 = *(int *)(uVar11 + 4);
          iVar28 = *(int *)(uVar18 + 4);
          uVar22 = uVar18;
          uVar14 = uVar11;
          if (iVar10 - iVar28 < 0) {
            uVar22 = uVar11;
            uVar14 = uVar18;
          }
          uVar30 = iVar28 - iVar10;
          if (iVar28 < iVar10) {
            uVar30 = iVar10 - iVar28;
          }
          if (uVar30 < 0x60) {
            iVar10 = *(int *)(*(longlong *)(*(longlong *)(uVar14 + 0x38) + 0x38) + 0x1c);
            iVar28 = *(int *)(*(longlong *)(*(longlong *)(uVar14 + 0x38) + 0x40) + 0x1c);
            iVar12 = iVar28;
            if (iVar10 < iVar28) {
              iVar12 = iVar10;
            }
            iVar5 = *(int *)(*(longlong *)(*(longlong *)(uVar14 + 0x40) + 0x38) + 0x1c);
            iVar16 = *(int *)(*(longlong *)(*(longlong *)(uVar14 + 0x40) + 0x40) + 0x1c);
            iVar29 = iVar16;
            if (iVar5 < iVar16) {
              iVar29 = iVar5;
            }
            if (iVar12 < iVar29) {
              iVar29 = iVar12;
            }
            iVar12 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x38) + 0x38) + 0x1c);
            iVar6 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x38) + 0x40) + 0x1c);
            iVar9 = iVar6;
            if (iVar12 < iVar6) {
              iVar9 = iVar12;
            }
            iVar7 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x40) + 0x38) + 0x1c);
            iVar32 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x40) + 0x40) + 0x1c);
            iVar25 = iVar32;
            if (iVar7 < iVar32) {
              iVar25 = iVar7;
            }
            if (iVar9 < iVar25) {
              iVar25 = iVar9;
            }
            if (iVar29 < iVar25) {
              iVar25 = iVar29;
            }
            if (iVar28 < iVar10) {
              iVar28 = iVar10;
            }
            if (iVar16 < iVar5) {
              iVar16 = iVar5;
            }
            if (iVar16 < iVar28) {
              iVar16 = iVar28;
            }
            if (iVar6 < iVar12) {
              iVar6 = iVar12;
            }
            if (iVar32 < iVar7) {
              iVar32 = iVar7;
            }
            if (iVar32 < iVar6) {
              iVar32 = iVar6;
            }
            if (iVar32 < iVar16) {
              iVar32 = iVar16;
            }
            do {
              uVar21 = uVar22 + 0x48;
              if (uVar14 <= uVar21) {
                if (0x4f < uVar30) goto LAB_140138c76;
                FUN_140135e11(uVar11,uVar18);
                goto LAB_140138cf2;
              }
              iVar10 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x80) + 0x38) + 0x1c);
              iVar28 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x80) + 0x40) + 0x1c);
              iVar12 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x88) + 0x38) + 0x1c);
              iVar5 = *(int *)(*(longlong *)(*(longlong *)(uVar22 + 0x88) + 0x40) + 0x1c);
              iVar16 = iVar5;
              if (iVar12 < iVar5) {
                iVar16 = iVar12;
              }
              if (iVar5 < iVar12) {
                iVar5 = iVar12;
              }
              iVar12 = iVar28;
              if (iVar10 < iVar28) {
                iVar12 = iVar10;
              }
              if (iVar28 < iVar10) {
                iVar28 = iVar10;
              }
              if (iVar16 <= iVar12) {
                iVar12 = iVar16;
              }
              if (iVar28 <= iVar5) {
                iVar28 = iVar5;
              }
              uVar22 = uVar21;
            } while ((iVar28 < iVar25) || (iVar32 < iVar12));
            goto LAB_140138d44;
          }
        }
LAB_140138c76:
        uVar11 = uVar33;
        if (uVar34 == 0) {
          *(uint *)(uVar18 + 8) = *(int *)(uVar18 + 4) + 0x20U & 0xffffffc0;
          uVar34 = uVar18;
        }
        else {
          do {
            uVar22 = uVar11;
            uVar14 = uVar18;
            if (uVar22 < uVar8) break;
            uVar11 = uVar22 - 0x48;
          } while ((*(byte *)(uVar22 + 0xc) & 4) == 0);
          do {
            uVar11 = uVar14;
            uVar14 = uVar11 + 0x48;
            if (uVar31 <= uVar14) goto LAB_140138ccd;
          } while ((*(byte *)(uVar11 + 0x54) & 4) == 0);
          if (((uVar22 < uVar8) || (uVar18 <= uVar22)) || (uVar14 <= uVar18)) {
LAB_140138ccd:
            iVar10 = ((*(int *)(uVar18 + 4) - *(int *)(uVar34 + 4)) + 0x10U & 0xffffffe0) +
                     *(int *)(uVar34 + 8);
          }
          else {
            iVar28 = *(int *)(uVar22 + 8);
            if (*(int *)(uVar11 + 0x4c) == *(int *)(uVar22 + 4)) {
              *(int *)(uVar18 + 8) = iVar28;
              goto LAB_140138cf2;
            }
            iVar10 = FUN_14012a478(*(int *)(uVar18 + 4) - *(int *)(uVar22 + 4),
                                   *(int *)(uVar11 + 0x50) - iVar28);
            iVar10 = iVar10 + iVar28;
          }
          *(int *)(uVar18 + 8) = iVar10;
        }
LAB_140138cf2:
        *(byte *)(uVar18 + 0xc) = *(byte *)(uVar18 + 0xc) | 4;
        if (uVar8 < uVar18) {
          iVar10 = *(int *)(uVar18 - 0x40);
          if (bVar35) {
            if (*(int *)(uVar18 + 8) < iVar10) {
LAB_140138d12:
              if (*(longlong *)(uVar18 + 0x20) != 0) {
                iVar28 = *(int *)(*(longlong *)(uVar18 + 0x20) + 8);
                uVar30 = iVar10 - iVar28;
                if (iVar10 < iVar28) {
                  uVar30 = iVar28 - iVar10;
                }
                if (0x10 < uVar30) {
                  *(int *)(uVar18 + 8) = iVar10;
                }
              }
            }
          }
          else if (iVar10 < *(int *)(uVar18 + 8)) goto LAB_140138d12;
        }
        if ((uVar18 + 0x48 < uVar31) && ((*(byte *)(uVar18 + 0x54) & 4) != 0)) {
          iVar10 = *(int *)(uVar18 + 0x50);
          if (bVar35) {
            if (iVar10 < *(int *)(uVar18 + 8)) {
LAB_140138d6e:
              if (*(longlong *)(uVar18 + 0x20) != 0) {
                iVar28 = *(int *)(*(longlong *)(uVar18 + 0x20) + 8);
                iVar12 = *(int *)(uVar18 - 0x40);
                uVar30 = iVar12 - iVar28;
                if (iVar12 < iVar28) {
                  uVar30 = iVar28 - iVar12;
                }
                if (0x10 < uVar30) {
                  *(int *)(uVar18 + 8) = iVar10;
                }
              }
            }
          }
          else if (*(int *)(uVar18 + 8) < iVar10) goto LAB_140138d6e;
        }
      }
LAB_140138d44:
      uVar18 = uVar18 + 0x48;
      uVar33 = uVar33 + 0x48;
    } while (uVar18 < uVar31);
  }
  return;
}

