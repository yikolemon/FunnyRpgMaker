/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101de29f */

void __fastcall FUN_101de29f(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  int local_54;
  int local_44;
  
  uVar5 = *(uint *)(param_1 + 0x48 + param_2 * 0x544);
  uVar26 = 0;
  uVar18 = 0;
  if (uVar5 != 0) {
    uVar18 = *(int *)(param_2 * 0x544 + param_1 + 0x40) * 0x2c + uVar5;
  }
  if (param_2 == 0) {
    bVar28 = true;
  }
  else {
    bVar28 = (&PTR_DAT_1030af74)[*(int *)(**(int **)(param_1 + 0xac4) + 8)][0xc] == '\0';
    if (uVar5 < uVar18) {
      uVar26 = 0;
      uVar27 = uVar5;
      do {
        bVar3 = *(byte *)(uVar27 + 0xc);
        if ((bVar3 & 4) == 0) {
          iVar12 = *(int *)(uVar27 + 0x14);
          uVar24 = *(uint *)(uVar27 + 0x18);
          if (uVar24 == 0 || iVar12 == 0) {
LAB_101de36c:
            bVar29 = iVar12 == 0;
            if (uVar24 == 0 || !bVar29) goto LAB_101de398;
            if (*(int *)(uVar24 + 0x14) == 0) goto LAB_101de3d8;
            *(undefined4 *)(uVar24 + 8) = *(undefined4 *)(*(int *)(uVar24 + 0x14) + 8);
            *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
            uVar21 = uVar24;
            uVar24 = uVar27;
LAB_101de3b8:
            if (*(int *)(uVar24 + 0x14) == 0) {
              FUN_101df4b6(uVar21,uVar24);
              *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
            }
          }
          else {
            if (*(int *)(uVar24 + 0x14) != 0) {
              if ((*(byte *)(uVar24 + 0xc) & 8) == 0) {
                bVar29 = false;
                if ((bVar3 & 8) == 0) goto LAB_101de398;
                *(undefined4 *)(uVar27 + 0x14) = 0;
                *(byte *)(uVar27 + 0xc) = bVar3 & 0xf3;
                iVar12 = 0;
              }
              else {
                *(undefined4 *)(uVar24 + 0x14) = 0;
                *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) & 0xf7;
                iVar12 = *(int *)(uVar27 + 0x14);
              }
              goto LAB_101de36c;
            }
            bVar29 = false;
LAB_101de398:
            if (bVar29) goto LAB_101de3d8;
            *(undefined4 *)(uVar27 + 8) = *(undefined4 *)(iVar12 + 8);
            *(byte *)(uVar27 + 0xc) = *(byte *)(uVar27 + 0xc) | 4;
            uVar21 = uVar27;
            if (uVar24 != 0) goto LAB_101de3b8;
          }
          if (uVar26 == 0) {
            uVar26 = uVar27;
          }
        }
LAB_101de3d8:
        uVar27 = uVar27 + 0x2c;
      } while (uVar27 < uVar18);
    }
  }
  if (uVar5 < uVar18) {
    bVar3 = 0;
    uVar27 = uVar5;
    do {
      bVar17 = *(byte *)(uVar27 + 0xc);
      if ((bVar17 & 4) == 0) {
        uVar24 = *(uint *)(uVar27 + 0x18);
        if (uVar24 == 0) {
          bVar3 = 1;
        }
        else if (*(int *)(uVar24 + 0x14) == 0) {
          iVar12 = *(int *)(uVar27 + 4);
          if (uVar26 == 0) {
            iVar22 = *(int *)(uVar24 + 4) - iVar12;
            iVar16 = FUN_101df4f7(iVar22,0,bVar17,*(undefined1 *)(uVar24 + 0xc));
            if (iVar16 < 0x60) {
              iVar12 = (iVar22 >> 1) + iVar12;
              uVar26 = iVar12 + 0x20U & 0xffffffc0;
              iVar22 = 0x1a;
              iVar25 = uVar26 - 0x26;
              if (iVar16 < 0x41) {
                iVar22 = 0x20;
                iVar25 = uVar26 - 0x20;
              }
              uVar21 = iVar25 - iVar12;
              if (iVar25 < iVar12) {
                uVar21 = iVar12 - iVar25;
              }
              iVar22 = iVar22 + uVar26;
              uVar26 = iVar22 - iVar12;
              if (iVar22 < iVar12) {
                uVar26 = iVar12 - iVar22;
              }
              if (uVar26 <= uVar21) {
                iVar25 = iVar22;
              }
              iVar25 = iVar25 - iVar16 / 2;
              *(int *)(uVar27 + 8) = iVar25;
              *(int *)(uVar24 + 8) = iVar25 + iVar16;
              bVar17 = *(byte *)(uVar27 + 0xc);
            }
            else {
              *(uint *)(uVar27 + 8) = iVar12 + 0x20U & 0xffffffc0;
            }
            *(byte *)(uVar27 + 0xc) = bVar17 | 4;
            FUN_101df4b6(uVar27,uVar24);
            uVar26 = uVar27;
          }
          else {
            iVar16 = (iVar12 - *(int *)(uVar26 + 4)) + *(int *)(uVar26 + 8);
            iVar12 = *(int *)(uVar24 + 4) - iVar12;
            bVar4 = *(byte *)(uVar24 + 0xc);
            uVar21 = FUN_101df4f7(iVar12,0,bVar17,bVar4);
            if ((bVar4 & 4) == 0) {
              iVar22 = (iVar12 >> 1) + iVar16;
              uVar14 = uVar24;
              if ((int)uVar21 < 0x60) {
                uVar13 = iVar22 + 0x20U & 0xffffffc0;
                uVar19 = 0x1a;
                uVar7 = uVar13 - 0x26;
                if ((int)uVar21 < 0x41) {
                  uVar19 = 0x20;
                  uVar7 = uVar13 - 0x20;
                }
                uVar20 = uVar7 - iVar22;
                if ((int)uVar7 < iVar22) {
                  uVar20 = iVar22 - uVar7;
                }
                uVar19 = uVar19 | uVar13;
                uVar13 = uVar19 - iVar22;
                if ((int)uVar19 < iVar22) {
                  uVar13 = iVar22 - uVar19;
                }
                if (uVar13 <= uVar20) {
                  uVar7 = uVar19;
                }
                *(uint *)(uVar27 + 8) = uVar7 - (int)uVar21 / 2;
                iVar12 = (int)uVar21 / 2 + uVar7;
              }
              else {
                uVar19 = iVar16 + 0x20U & 0xffffffc0;
                uVar13 = (uVar19 + (uVar21 >> 1)) - iVar22;
                uVar7 = -uVar13;
                if ((int)uVar7 < 0) {
                  uVar7 = uVar13;
                }
                uVar20 = (iVar16 + iVar12 + 0x20U & 0xffffffc0) - uVar21;
                uVar23 = ((uVar21 >> 1) - iVar22) + uVar20;
                uVar13 = -uVar23;
                if ((int)uVar13 < 0) {
                  uVar13 = uVar23;
                }
                if (uVar13 <= uVar7) {
                  uVar19 = uVar20;
                }
                *(uint *)(uVar27 + 8) = uVar19;
                iVar12 = uVar21 + uVar19;
              }
            }
            else {
              iVar12 = *(int *)(uVar24 + 8) - uVar21;
              uVar14 = uVar27;
            }
            *(int *)(uVar14 + 8) = iVar12;
            *(byte *)(uVar27 + 0xc) = *(byte *)(uVar27 + 0xc) | 4;
            *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
            if (uVar5 < uVar27) {
              iVar12 = *(int *)(uVar27 - 0x24);
              if (bVar28) {
                if (*(int *)(uVar27 + 8) < iVar12) {
LAB_101de67f:
                  if (*(int *)(uVar27 + 0x18) != 0) {
                    iVar16 = *(int *)(*(int *)(uVar27 + 0x18) + 8);
                    uVar24 = iVar12 - iVar16;
                    if (iVar12 < iVar16) {
                      uVar24 = iVar16 - iVar12;
                    }
                    if (0x10 < uVar24) {
                      *(int *)(uVar27 + 8) = iVar12;
                    }
                  }
                }
              }
              else if (iVar12 < *(int *)(uVar27 + 8)) goto LAB_101de67f;
            }
          }
        }
        else {
          FUN_101df4b6(uVar24,uVar27);
          *(byte *)(uVar27 + 0xc) = *(byte *)(uVar27 + 0xc) | 4;
        }
      }
      uVar27 = uVar27 + 0x2c;
    } while (uVar27 < uVar18);
  }
  else {
    bVar3 = 0;
  }
  if (param_2 == 0) {
    iVar12 = uVar18 - uVar5;
    if (iVar12 == 0x108) {
      local_54 = 0xb0;
      iVar16 = 0x58;
      uVar27 = uVar5;
    }
    else {
      if (iVar12 != 0x210) goto LAB_101de6c4;
      local_54 = 0x18c;
      iVar16 = 0xdc;
      uVar27 = uVar5 + 0x2c;
    }
    uVar21 = *(int *)(uVar5 + 4 + iVar16) * 2 -
             (*(int *)(uVar27 + 4) + *(int *)(uVar5 + 4 + local_54));
    uVar24 = -uVar21;
    if ((int)uVar24 < 0) {
      uVar24 = uVar21;
    }
    if (uVar24 < 8) {
      iVar22 = *(int *)(uVar5 + 8 + iVar16) * 2 - *(int *)(uVar27 + 8);
      iVar16 = *(int *)(uVar5 + 0x18 + local_54);
      iVar25 = *(int *)(uVar5 + 8 + local_54) - iVar22;
      *(int *)(uVar5 + 8 + local_54) = iVar22;
      if (iVar16 != 0) {
        piVar1 = (int *)(iVar16 + 8);
        *piVar1 = *piVar1 - iVar25;
      }
      if (iVar12 == 0x210) {
        *(int *)(uVar5 + 0x168) = *(int *)(uVar5 + 0x168) - iVar25;
        *(int *)(uVar5 + 0x1ec) = *(int *)(uVar5 + 0x1ec) - iVar25;
      }
      pbVar2 = (byte *)(uVar5 + 0xc + local_54);
      *pbVar2 = *pbVar2 | 4;
      iVar12 = *(int *)(uVar5 + 0x18 + local_54);
      if (iVar12 != 0) {
        pbVar2 = (byte *)(iVar12 + 0xc);
        *pbVar2 = *pbVar2 | 4;
      }
    }
  }
LAB_101de6c4:
  if (((bool)(bVar3 | uVar26 == 0)) && (uVar5 < uVar18)) {
    uVar27 = uVar5 - 0x2c;
    uVar24 = uVar5;
    do {
      if ((*(byte *)(uVar24 + 0xc) & 4) == 0) {
        uVar21 = *(uint *)(uVar24 + 0x1c);
        if (uVar21 != 0) {
          iVar12 = *(int *)(uVar21 + 4);
          iVar16 = *(int *)(uVar24 + 4);
          uVar14 = uVar24;
          if (iVar12 - iVar16 < 0) {
            uVar14 = uVar21;
            uVar21 = uVar24;
          }
          uVar19 = iVar16 - iVar12;
          if (iVar16 < iVar12) {
            uVar19 = iVar12 - iVar16;
          }
          if (uVar19 < 0x60) {
            iVar12 = *(int *)(*(int *)(*(int *)(uVar21 + 0x24) + 0x24) + 0x1c);
            iVar16 = *(int *)(*(int *)(*(int *)(uVar21 + 0x24) + 0x28) + 0x1c);
            iVar22 = iVar16;
            if (iVar12 < iVar16) {
              iVar22 = iVar12;
            }
            iVar25 = *(int *)(*(int *)(*(int *)(uVar21 + 0x28) + 0x24) + 0x1c);
            iVar11 = *(int *)(*(int *)(*(int *)(uVar21 + 0x28) + 0x28) + 0x1c);
            iVar8 = iVar11;
            if (iVar25 < iVar11) {
              iVar8 = iVar25;
            }
            if (iVar22 < iVar8) {
              iVar8 = iVar22;
            }
            iVar22 = *(int *)(*(int *)(*(int *)(uVar14 + 0x24) + 0x24) + 0x1c);
            iVar9 = *(int *)(*(int *)(*(int *)(uVar14 + 0x24) + 0x28) + 0x1c);
            iVar10 = iVar9;
            if (iVar22 < iVar9) {
              iVar10 = iVar22;
            }
            iVar6 = *(int *)(*(int *)(*(int *)(uVar14 + 0x28) + 0x24) + 0x1c);
            iVar15 = *(int *)(*(int *)(*(int *)(uVar14 + 0x28) + 0x28) + 0x1c);
            local_44 = iVar15;
            if (iVar6 < iVar15) {
              local_44 = iVar6;
            }
            if (iVar10 < local_44) {
              local_44 = iVar10;
            }
            if (iVar8 < local_44) {
              local_44 = iVar8;
            }
            if (iVar16 < iVar12) {
              iVar16 = iVar12;
            }
            if (iVar11 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar11 < iVar16) {
              iVar11 = iVar16;
            }
            if (iVar9 < iVar22) {
              iVar9 = iVar22;
            }
            if (iVar15 < iVar6) {
              iVar15 = iVar6;
            }
            if (iVar15 < iVar9) {
              iVar15 = iVar9;
            }
            if (iVar15 < iVar11) {
              iVar15 = iVar11;
            }
            do {
              uVar7 = uVar14 + 0x2c;
              if (uVar21 <= uVar7) {
                if (0x4f < uVar19) goto LAB_101de8a9;
                FUN_101dbdcf();
                goto LAB_101de951;
              }
              iVar12 = *(int *)(*(int *)(*(int *)(uVar14 + 0x50) + 0x24) + 0x1c);
              iVar16 = *(int *)(*(int *)(*(int *)(uVar14 + 0x50) + 0x28) + 0x1c);
              iVar22 = *(int *)(*(int *)(*(int *)(uVar14 + 0x54) + 0x24) + 0x1c);
              iVar25 = *(int *)(*(int *)(*(int *)(uVar14 + 0x54) + 0x28) + 0x1c);
              iVar11 = iVar25;
              if (iVar22 < iVar25) {
                iVar11 = iVar22;
              }
              if (iVar25 < iVar22) {
                iVar25 = iVar22;
              }
              iVar22 = iVar16;
              if (iVar12 < iVar16) {
                iVar22 = iVar12;
              }
              if (iVar16 < iVar12) {
                iVar16 = iVar12;
              }
              if (iVar11 <= iVar22) {
                iVar22 = iVar11;
              }
              if (iVar16 <= iVar25) {
                iVar16 = iVar25;
              }
              uVar14 = uVar7;
            } while ((iVar16 < local_44) || (iVar15 < iVar22));
            goto LAB_101de9df;
          }
        }
LAB_101de8a9:
        uVar21 = uVar27;
        if (uVar26 == 0) {
          *(uint *)(uVar24 + 8) = *(int *)(uVar24 + 4) + 0x20U & 0xffffffc0;
          uVar26 = uVar24;
        }
        else {
          do {
            uVar19 = uVar21;
            uVar14 = uVar24;
            if (uVar19 < uVar5) break;
            uVar21 = uVar19 - 0x2c;
          } while ((*(byte *)(uVar19 + 0xc) & 4) == 0);
          do {
            uVar21 = uVar14;
            uVar14 = uVar21 + 0x2c;
            if (uVar18 <= uVar14) goto LAB_101de8f4;
          } while ((*(byte *)(uVar21 + 0x38) & 4) == 0);
          if (((uVar19 < uVar5) || (uVar24 <= uVar19)) || (uVar14 <= uVar24)) {
LAB_101de8f4:
            *(uint *)(uVar24 + 8) =
                 ((*(int *)(uVar24 + 4) - *(int *)(uVar26 + 4)) + 0x10U & 0xffffffe0) +
                 *(int *)(uVar26 + 8);
          }
          else {
            iVar12 = *(int *)(uVar19 + 8);
            iVar16 = *(int *)(uVar21 + 0x30) - *(int *)(uVar19 + 4);
            if (iVar16 == 0) {
              *(int *)(uVar24 + 8) = iVar12;
            }
            else {
              iVar16 = FUN_101c16ea(*(int *)(uVar24 + 4) - *(int *)(uVar19 + 4),
                                    *(int *)(uVar21 + 0x34) - iVar12,iVar16);
              *(int *)(uVar24 + 8) = iVar16 + iVar12;
            }
          }
        }
LAB_101de951:
        *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
        if (uVar5 < uVar24) {
          iVar12 = *(int *)(uVar24 - 0x24);
          if (bVar28) {
            if (*(int *)(uVar24 + 8) < iVar12) {
LAB_101de970:
              if (*(int *)(uVar24 + 0x18) != 0) {
                iVar16 = *(int *)(*(int *)(uVar24 + 0x18) + 8);
                uVar21 = iVar12 - iVar16;
                if (iVar12 < iVar16) {
                  uVar21 = iVar16 - iVar12;
                }
                if (0x10 < uVar21) {
                  *(int *)(uVar24 + 8) = iVar12;
                }
              }
            }
          }
          else if (iVar12 < *(int *)(uVar24 + 8)) goto LAB_101de970;
        }
        if ((uVar24 + 0x2c < uVar18) && ((*(byte *)(uVar24 + 0x38) & 4) != 0)) {
          iVar12 = *(int *)(uVar24 + 0x34);
          if (bVar28) {
            if (iVar12 < *(int *)(uVar24 + 8)) {
LAB_101de9b9:
              if (*(int *)(uVar24 + 0x18) != 0) {
                iVar16 = *(int *)(*(int *)(uVar24 + 0x18) + 8);
                iVar22 = *(int *)(uVar24 - 0x24);
                uVar21 = iVar22 - iVar16;
                if (iVar22 < iVar16) {
                  uVar21 = iVar16 - iVar22;
                }
                if (0x10 < uVar21) {
                  *(int *)(uVar24 + 8) = iVar12;
                }
              }
            }
          }
          else if (*(int *)(uVar24 + 8) < iVar12) goto LAB_101de9b9;
        }
      }
LAB_101de9df:
      uVar24 = uVar24 + 0x2c;
      uVar27 = uVar27 + 0x2c;
    } while (uVar24 < uVar18);
  }
  return;
}

