/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016f648 */

int __fastcall FUN_1016f648(int param_1,int *param_2,int *param_3,int *param_4)

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
  uint uVar10;
  int iVar11;
  undefined1 extraout_AH;
  undefined1 *puVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  int local_2c;
  
  iVar5 = FUN_10171b1f();
  if ((iVar5 == 0x38425053) && (iVar5 = FUN_10171b39(), iVar5 == 1)) {
    FUN_10171ace();
    uVar6 = FUN_10171b39();
    if (uVar6 < 0x11) {
      iVar5 = FUN_10171b1f();
      iVar7 = FUN_10171b1f();
      if ((((iVar5 < 0x1000001) && (iVar7 < 0x1000001)) &&
          ((iVar8 = FUN_10171b39(), iVar8 == 8 || (iVar8 == 0x10)))) &&
         (iVar9 = FUN_10171b39(), iVar9 == 3)) {
        FUN_10171b1f();
        FUN_10171ace();
        FUN_10171b1f();
        FUN_10171ace();
        FUN_10171b1f();
        FUN_10171ace();
        uVar10 = FUN_10171b39();
        if ((uVar10 < 2) && (iVar9 = FUN_1017315f(iVar5,0), iVar9 != 0)) {
          iVar14 = iVar7 * iVar5;
          iVar9 = FUN_1017207d();
          if (iVar9 != 0) {
            if (uVar10 == 0) {
              uVar10 = 0;
              iVar11 = iVar9;
              local_2c = iVar9;
              do {
                if (uVar10 < uVar6) {
                  if (*param_4 == 0x10) {
                    if (0 < iVar14) {
                      iVar15 = 0;
                      do {
                        uVar4 = FUN_10171b39();
                        *(undefined2 *)(local_2c + iVar15 * 8) = uVar4;
                        iVar15 = iVar15 + 1;
                      } while (iVar14 != iVar15);
                    }
                  }
                  else if (iVar8 == 0x10) {
                    if (0 < iVar14) {
                      iVar15 = 0;
                      do {
                        FUN_10171b39();
                        *(undefined1 *)(iVar11 + iVar15 * 4) = extraout_AH;
                        iVar15 = iVar15 + 1;
                      } while (iVar14 != iVar15);
                    }
                  }
                  else if (0 < iVar14) {
                    puVar12 = *(undefined1 **)(param_1 + 0xac);
                    iVar15 = 0;
                    do {
                      if (puVar12 < *(undefined1 **)(param_1 + 0xb0)) {
LAB_1016f97e:
                        *(undefined1 **)(param_1 + 0xac) = puVar12 + 1;
                        uVar13 = *puVar12;
                        puVar12 = puVar12 + 1;
                      }
                      else {
                        if (*(int *)(param_1 + 0x20) != 0) {
                          FUN_10170e8c();
                          puVar12 = *(undefined1 **)(param_1 + 0xac);
                          goto LAB_1016f97e;
                        }
                        uVar13 = 0;
                      }
                      *(undefined1 *)(iVar11 + iVar15 * 4) = uVar13;
                      iVar15 = iVar15 + 1;
                    } while (iVar14 != iVar15);
                  }
                }
                else if (0 < iVar14) {
                  iVar15 = 0;
                  do {
                    *(char *)(iVar11 + iVar15 * 4) = -(uVar10 == 3);
                    iVar15 = iVar15 + 1;
                  } while (iVar14 != iVar15);
                }
                uVar10 = uVar10 + 1;
                iVar11 = iVar11 + 1;
                local_2c = local_2c + 2;
              } while (uVar10 != 4);
            }
            else {
              FUN_10171ace();
              uVar10 = 0;
              iVar8 = iVar9;
              do {
                if (uVar10 < uVar6) {
                  iVar11 = FUN_101744a4(iVar14);
                  if (iVar11 == 0) {
                    thunk_FUN_10274120(iVar9);
                    goto LAB_1016f6c2;
                  }
                }
                else if (0 < iVar14) {
                  iVar11 = 0;
                  do {
                    *(char *)(iVar8 + iVar11 * 4) = -(uVar10 == 3);
                    iVar11 = iVar11 + 1;
                  } while (iVar14 != iVar11);
                }
                uVar10 = uVar10 + 1;
                iVar8 = iVar8 + 1;
              } while (uVar10 != 4);
            }
            fVar16 = DAT_102bb450;
            fVar17 = DAT_102b7090;
            fVar3 = DAT_1028b430;
            if (3 < uVar6) {
              if (*param_4 == 0x10) {
                if (0 < iVar14) {
                  iVar8 = 0;
                  do {
                    uVar2 = *(ushort *)(iVar9 + 6 + iVar8 * 8);
                    if ((ushort)(uVar2 - 1) < 0xfffe) {
                      fVar17 = fVar3 / ((float)uVar2 / fVar16);
                      fVar18 = (fVar3 - fVar17) * fVar16;
                      uVar6 = *(uint *)(iVar9 + iVar8 * 8);
                      auVar19._0_4_ = (int)(fVar18 + fVar17 * (float)(uVar6 & 0xffff));
                      auVar19._4_4_ = (int)(fVar18 + fVar17 * (float)(uVar6 >> 0x10));
                      auVar19._8_4_ = (int)(fVar18 + fVar17 * 0.0);
                      auVar19._12_4_ = (int)(fVar18 + fVar17 * 0.0);
                      auVar19 = pshuflw(auVar19,auVar19,0xe8);
                      *(int *)(iVar9 + iVar8 * 8) = auVar19._0_4_;
                      *(short *)(iVar9 + 4 + iVar8 * 8) =
                           (short)(int)((float)*(ushort *)(iVar9 + 4 + iVar8 * 8) * fVar17 + fVar18)
                      ;
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar14 != iVar8);
                }
              }
              else if (0 < iVar14) {
                iVar8 = 0;
                do {
                  bVar1 = *(byte *)(iVar9 + 3 + iVar8 * 4);
                  if ((byte)(bVar1 - 1) < 0xfe) {
                    fVar16 = fVar3 / ((float)bVar1 / fVar17);
                    fVar18 = (fVar3 - fVar16) * fVar17;
                    *(char *)(iVar9 + iVar8 * 4) =
                         (char)(int)((float)*(byte *)(iVar9 + iVar8 * 4) * fVar16 + fVar18);
                    *(char *)(iVar9 + 1 + iVar8 * 4) =
                         (char)(int)((float)*(byte *)(iVar9 + 1 + iVar8 * 4) * fVar16 + fVar18);
                    *(char *)(iVar9 + 2 + iVar8 * 4) =
                         (char)(int)((float)*(byte *)(iVar9 + 2 + iVar8 * 4) * fVar16 + fVar18);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar14 != iVar8);
              }
            }
            *param_3 = iVar5;
            *param_2 = iVar7;
            return iVar9;
          }
        }
      }
    }
  }
LAB_1016f6c2:
  FUN_10170e07();
  return 0;
}

