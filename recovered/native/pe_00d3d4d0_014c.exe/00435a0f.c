/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00435a0f */

void __fastcall FUN_00435a0f(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
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
  uVar20 = 0;
  if (uVar5 != 0) {
    uVar20 = *(int *)(param_2 * 0x544 + param_1 + 0x40) * 0x2c + uVar5;
  }
  if (param_2 == 0) {
    bVar28 = true;
  }
  else {
    bVar28 = (&PTR_DAT_004df518)[*(int *)(**(int **)(param_1 + 0xac4) + 8)][0xc] == '\0';
    if (uVar5 < uVar20) {
      uVar26 = 0;
      uVar27 = uVar5;
      do {
        bVar3 = *(byte *)(uVar27 + 0xc);
        if ((bVar3 & 4) == 0) {
          iVar12 = *(int *)(uVar27 + 0x14);
          uVar24 = *(uint *)(uVar27 + 0x18);
          if (uVar24 == 0 || iVar12 == 0) {
LAB_00435adc:
            bVar29 = iVar12 == 0;
            if (uVar24 == 0 || !bVar29) goto LAB_00435b08;
            if (*(int *)(uVar24 + 0x14) == 0) goto LAB_00435b48;
            *(undefined4 *)(uVar24 + 8) = *(undefined4 *)(*(int *)(uVar24 + 0x14) + 8);
            *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
            uVar21 = uVar24;
            uVar24 = uVar27;
LAB_00435b28:
            if (*(int *)(uVar24 + 0x14) == 0) {
              FUN_00436c26(param_1,1,uVar21,uVar24);
              *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
            }
          }
          else {
            if (*(int *)(uVar24 + 0x14) != 0) {
              if ((*(byte *)(uVar24 + 0xc) & 8) == 0) {
                bVar29 = false;
                if ((bVar3 & 8) == 0) goto LAB_00435b08;
                *(undefined4 *)(uVar27 + 0x14) = 0;
                *(byte *)(uVar27 + 0xc) = bVar3 & 0xf3;
                iVar12 = 0;
              }
              else {
                *(undefined4 *)(uVar24 + 0x14) = 0;
                *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) & 0xf7;
                iVar12 = *(int *)(uVar27 + 0x14);
              }
              goto LAB_00435adc;
            }
            bVar29 = false;
LAB_00435b08:
            if (bVar29) goto LAB_00435b48;
            *(undefined4 *)(uVar27 + 8) = *(undefined4 *)(iVar12 + 8);
            *(byte *)(uVar27 + 0xc) = *(byte *)(uVar27 + 0xc) | 4;
            uVar21 = uVar27;
            if (uVar24 != 0) goto LAB_00435b28;
          }
          if (uVar26 == 0) {
            uVar26 = uVar27;
          }
        }
LAB_00435b48:
        uVar27 = uVar27 + 0x2c;
      } while (uVar27 < uVar20);
    }
  }
  if (uVar5 < uVar20) {
    bVar3 = 0;
    uVar27 = uVar5;
    do {
      bVar19 = *(byte *)(uVar27 + 0xc);
      if ((bVar19 & 4) == 0) {
        uVar24 = *(uint *)(uVar27 + 0x18);
        if (uVar24 == 0) {
          bVar3 = 1;
        }
        else if (*(int *)(uVar24 + 0x14) == 0) {
          iVar12 = *(int *)(uVar27 + 4);
          if (uVar26 == 0) {
            uVar21 = *(int *)(uVar24 + 4) - iVar12;
            uVar26 = FUN_00436c67(param_1,param_2,uVar21,0,(uint)bVar19,
                                  (uint)*(byte *)(uVar24 + 0xc));
            if ((int)uVar26 < 0x60) {
              iVar12 = ((int)uVar21 >> 1) + iVar12;
              uVar21 = iVar12 + 0x20U & 0xffffffc0;
              iVar9 = 0x1a;
              iVar22 = uVar21 - 0x26;
              if ((int)uVar26 < 0x41) {
                iVar9 = 0x20;
                iVar22 = uVar21 - 0x20;
              }
              uVar18 = iVar22 - iVar12;
              if (iVar22 < iVar12) {
                uVar18 = iVar12 - iVar22;
              }
              iVar9 = iVar9 + uVar21;
              uVar21 = iVar9 - iVar12;
              if (iVar9 < iVar12) {
                uVar21 = iVar12 - iVar9;
              }
              if (uVar21 <= uVar18) {
                iVar22 = iVar9;
              }
              iVar22 = iVar22 - (int)uVar26 / 2;
              *(int *)(uVar27 + 8) = iVar22;
              *(uint *)(uVar24 + 8) = iVar22 + uVar26;
              bVar19 = *(byte *)(uVar27 + 0xc);
            }
            else {
              *(uint *)(uVar27 + 8) = iVar12 + 0x20U & 0xffffffc0;
            }
            *(byte *)(uVar27 + 0xc) = bVar19 | 4;
            FUN_00436c26(param_1,param_2,uVar27,uVar24);
            uVar26 = uVar27;
          }
          else {
            iVar9 = (iVar12 - *(int *)(uVar26 + 4)) + *(int *)(uVar26 + 8);
            uVar18 = *(int *)(uVar24 + 4) - iVar12;
            bVar4 = *(byte *)(uVar24 + 0xc);
            uVar21 = FUN_00436c67(param_1,param_2,uVar18,0,(uint)bVar19,(uint)bVar4);
            if ((bVar4 & 4) == 0) {
              iVar12 = ((int)uVar18 >> 1) + iVar9;
              uVar16 = uVar24;
              if ((int)uVar21 < 0x60) {
                uVar13 = iVar12 + 0x20U & 0xffffffc0;
                uVar18 = 0x1a;
                uVar14 = uVar13 - 0x26;
                if ((int)uVar21 < 0x41) {
                  uVar18 = 0x20;
                  uVar14 = uVar13 - 0x20;
                }
                uVar15 = uVar14 - iVar12;
                if ((int)uVar14 < iVar12) {
                  uVar15 = iVar12 - uVar14;
                }
                uVar18 = uVar18 | uVar13;
                uVar13 = uVar18 - iVar12;
                if ((int)uVar18 < iVar12) {
                  uVar13 = iVar12 - uVar18;
                }
                if (uVar13 <= uVar15) {
                  uVar14 = uVar18;
                }
                *(uint *)(uVar27 + 8) = uVar14 - (int)uVar21 / 2;
                iVar12 = (int)uVar21 / 2 + uVar14;
              }
              else {
                uVar14 = iVar9 + 0x20U & 0xffffffc0;
                uVar15 = (uVar14 + (uVar21 >> 1)) - iVar12;
                uVar13 = -uVar15;
                if ((int)uVar13 < 0) {
                  uVar13 = uVar15;
                }
                uVar15 = (iVar9 + uVar18 + 0x20 & 0xffffffc0) - uVar21;
                uVar23 = ((uVar21 >> 1) - iVar12) + uVar15;
                uVar18 = -uVar23;
                if ((int)uVar18 < 0) {
                  uVar18 = uVar23;
                }
                if (uVar18 <= uVar13) {
                  uVar14 = uVar15;
                }
                *(uint *)(uVar27 + 8) = uVar14;
                iVar12 = uVar21 + uVar14;
              }
            }
            else {
              iVar12 = *(int *)(uVar24 + 8) - uVar21;
              uVar16 = uVar27;
            }
            *(int *)(uVar16 + 8) = iVar12;
            *(byte *)(uVar27 + 0xc) = *(byte *)(uVar27 + 0xc) | 4;
            *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
            if (uVar5 < uVar27) {
              iVar12 = *(int *)(uVar27 - 0x24);
              if (bVar28) {
                if (*(int *)(uVar27 + 8) < iVar12) {
LAB_00435def:
                  if (*(int *)(uVar27 + 0x18) != 0) {
                    iVar9 = *(int *)(*(int *)(uVar27 + 0x18) + 8);
                    uVar24 = iVar12 - iVar9;
                    if (iVar12 < iVar9) {
                      uVar24 = iVar9 - iVar12;
                    }
                    if (0x10 < uVar24) {
                      *(int *)(uVar27 + 8) = iVar12;
                    }
                  }
                }
              }
              else if (iVar12 < *(int *)(uVar27 + 8)) goto LAB_00435def;
            }
          }
        }
        else {
          FUN_00436c26(param_1,param_2,uVar24,uVar27);
          *(byte *)(uVar27 + 0xc) = *(byte *)(uVar27 + 0xc) | 4;
        }
      }
      uVar27 = uVar27 + 0x2c;
    } while (uVar27 < uVar20);
  }
  else {
    bVar3 = 0;
  }
  if (param_2 == 0) {
    iVar12 = uVar20 - uVar5;
    if (iVar12 == 0x108) {
      local_54 = 0xb0;
      iVar9 = 0x58;
      uVar27 = uVar5;
    }
    else {
      if (iVar12 != 0x210) goto LAB_00435e34;
      local_54 = 0x18c;
      iVar9 = 0xdc;
      uVar27 = uVar5 + 0x2c;
    }
    uVar21 = *(int *)(uVar5 + 4 + iVar9) * 2 -
             (*(int *)(uVar27 + 4) + *(int *)(uVar5 + 4 + local_54));
    uVar24 = -uVar21;
    if ((int)uVar24 < 0) {
      uVar24 = uVar21;
    }
    if (uVar24 < 8) {
      iVar22 = *(int *)(uVar5 + 8 + iVar9) * 2 - *(int *)(uVar27 + 8);
      iVar9 = *(int *)(uVar5 + 0x18 + local_54);
      iVar25 = *(int *)(uVar5 + 8 + local_54) - iVar22;
      *(int *)(uVar5 + 8 + local_54) = iVar22;
      if (iVar9 != 0) {
        piVar1 = (int *)(iVar9 + 8);
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
LAB_00435e34:
  if (((bool)(bVar3 | uVar26 == 0)) && (uVar5 < uVar20)) {
    uVar27 = uVar5 - 0x2c;
    uVar24 = uVar5;
    do {
      if ((*(byte *)(uVar24 + 0xc) & 4) == 0) {
        uVar21 = *(uint *)(uVar24 + 0x1c);
        if (uVar21 != 0) {
          iVar12 = *(int *)(uVar21 + 4);
          iVar9 = *(int *)(uVar24 + 4);
          uVar16 = uVar24;
          uVar18 = uVar21;
          if (iVar12 - iVar9 < 0) {
            uVar16 = uVar21;
            uVar18 = uVar24;
          }
          uVar14 = iVar9 - iVar12;
          if (iVar9 < iVar12) {
            uVar14 = iVar12 - iVar9;
          }
          if (uVar14 < 0x60) {
            iVar12 = *(int *)(*(int *)(*(int *)(uVar18 + 0x24) + 0x24) + 0x1c);
            iVar9 = *(int *)(*(int *)(*(int *)(uVar18 + 0x24) + 0x28) + 0x1c);
            iVar22 = iVar9;
            if (iVar12 < iVar9) {
              iVar22 = iVar12;
            }
            iVar25 = *(int *)(*(int *)(*(int *)(uVar18 + 0x28) + 0x24) + 0x1c);
            iVar11 = *(int *)(*(int *)(*(int *)(uVar18 + 0x28) + 0x28) + 0x1c);
            iVar7 = iVar11;
            if (iVar25 < iVar11) {
              iVar7 = iVar25;
            }
            if (iVar22 < iVar7) {
              iVar7 = iVar22;
            }
            iVar22 = *(int *)(*(int *)(*(int *)(uVar16 + 0x24) + 0x24) + 0x1c);
            iVar8 = *(int *)(*(int *)(*(int *)(uVar16 + 0x24) + 0x28) + 0x1c);
            iVar10 = iVar8;
            if (iVar22 < iVar8) {
              iVar10 = iVar22;
            }
            iVar6 = *(int *)(*(int *)(*(int *)(uVar16 + 0x28) + 0x24) + 0x1c);
            iVar17 = *(int *)(*(int *)(*(int *)(uVar16 + 0x28) + 0x28) + 0x1c);
            local_44 = iVar17;
            if (iVar6 < iVar17) {
              local_44 = iVar6;
            }
            if (iVar10 < local_44) {
              local_44 = iVar10;
            }
            if (iVar7 < local_44) {
              local_44 = iVar7;
            }
            if (iVar9 < iVar12) {
              iVar9 = iVar12;
            }
            if (iVar11 < iVar25) {
              iVar11 = iVar25;
            }
            if (iVar11 < iVar9) {
              iVar11 = iVar9;
            }
            if (iVar8 < iVar22) {
              iVar8 = iVar22;
            }
            if (iVar17 < iVar6) {
              iVar17 = iVar6;
            }
            if (iVar17 < iVar8) {
              iVar17 = iVar8;
            }
            if (iVar17 < iVar11) {
              iVar17 = iVar11;
            }
            do {
              uVar13 = uVar16 + 0x2c;
              if (uVar18 <= uVar13) {
                if (0x4f < uVar14) goto LAB_00436019;
                FUN_0043353f(uVar21,uVar24);
                goto LAB_004360c1;
              }
              iVar12 = *(int *)(*(int *)(*(int *)(uVar16 + 0x50) + 0x24) + 0x1c);
              iVar9 = *(int *)(*(int *)(*(int *)(uVar16 + 0x50) + 0x28) + 0x1c);
              iVar22 = *(int *)(*(int *)(*(int *)(uVar16 + 0x54) + 0x24) + 0x1c);
              iVar25 = *(int *)(*(int *)(*(int *)(uVar16 + 0x54) + 0x28) + 0x1c);
              iVar11 = iVar25;
              if (iVar22 < iVar25) {
                iVar11 = iVar22;
              }
              if (iVar25 < iVar22) {
                iVar25 = iVar22;
              }
              iVar22 = iVar9;
              if (iVar12 < iVar9) {
                iVar22 = iVar12;
              }
              if (iVar9 < iVar12) {
                iVar9 = iVar12;
              }
              if (iVar11 <= iVar22) {
                iVar22 = iVar11;
              }
              if (iVar9 <= iVar25) {
                iVar9 = iVar25;
              }
              uVar16 = uVar13;
            } while ((iVar9 < local_44) || (iVar17 < iVar22));
            goto LAB_0043614f;
          }
        }
LAB_00436019:
        uVar21 = uVar27;
        if (uVar26 == 0) {
          *(uint *)(uVar24 + 8) = *(int *)(uVar24 + 4) + 0x20U & 0xffffffc0;
          uVar26 = uVar24;
        }
        else {
          do {
            uVar16 = uVar21;
            uVar18 = uVar24;
            if (uVar16 < uVar5) break;
            uVar21 = uVar16 - 0x2c;
          } while ((*(byte *)(uVar16 + 0xc) & 4) == 0);
          do {
            uVar21 = uVar18;
            uVar18 = uVar21 + 0x2c;
            if (uVar20 <= uVar18) goto LAB_00436064;
          } while ((*(byte *)(uVar21 + 0x38) & 4) == 0);
          if (((uVar16 < uVar5) || (uVar24 <= uVar16)) || (uVar18 <= uVar24)) {
LAB_00436064:
            *(uint *)(uVar24 + 8) =
                 ((*(int *)(uVar24 + 4) - *(int *)(uVar26 + 4)) + 0x10U & 0xffffffe0) +
                 *(int *)(uVar26 + 8);
          }
          else {
            iVar12 = *(int *)(uVar16 + 8);
            uVar18 = *(int *)(uVar21 + 0x30) - *(int *)(uVar16 + 4);
            if (uVar18 == 0) {
              *(int *)(uVar24 + 8) = iVar12;
            }
            else {
              iVar9 = FUN_0041dcda(*(int *)(uVar24 + 4) - *(int *)(uVar16 + 4),
                                   *(int *)(uVar21 + 0x34) - iVar12,uVar18);
              *(int *)(uVar24 + 8) = iVar9 + iVar12;
            }
          }
        }
LAB_004360c1:
        *(byte *)(uVar24 + 0xc) = *(byte *)(uVar24 + 0xc) | 4;
        if (uVar5 < uVar24) {
          iVar12 = *(int *)(uVar24 - 0x24);
          if (bVar28) {
            if (*(int *)(uVar24 + 8) < iVar12) {
LAB_004360e0:
              if (*(int *)(uVar24 + 0x18) != 0) {
                iVar9 = *(int *)(*(int *)(uVar24 + 0x18) + 8);
                uVar21 = iVar12 - iVar9;
                if (iVar12 < iVar9) {
                  uVar21 = iVar9 - iVar12;
                }
                if (0x10 < uVar21) {
                  *(int *)(uVar24 + 8) = iVar12;
                }
              }
            }
          }
          else if (iVar12 < *(int *)(uVar24 + 8)) goto LAB_004360e0;
        }
        if ((uVar24 + 0x2c < uVar20) && ((*(byte *)(uVar24 + 0x38) & 4) != 0)) {
          iVar12 = *(int *)(uVar24 + 0x34);
          if (bVar28) {
            if (iVar12 < *(int *)(uVar24 + 8)) {
LAB_00436129:
              if (*(int *)(uVar24 + 0x18) != 0) {
                iVar9 = *(int *)(*(int *)(uVar24 + 0x18) + 8);
                iVar22 = *(int *)(uVar24 - 0x24);
                uVar21 = iVar22 - iVar9;
                if (iVar22 < iVar9) {
                  uVar21 = iVar9 - iVar22;
                }
                if (0x10 < uVar21) {
                  *(int *)(uVar24 + 8) = iVar12;
                }
              }
            }
          }
          else if (*(int *)(uVar24 + 8) < iVar12) goto LAB_00436129;
        }
      }
LAB_0043614f:
      uVar24 = uVar24 + 0x2c;
      uVar27 = uVar27 + 0x2c;
    } while (uVar24 < uVar20);
  }
  return;
}

