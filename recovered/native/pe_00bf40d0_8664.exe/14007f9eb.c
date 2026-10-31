/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f9eb */

int FUN_14007f9eb(int *param_1,longlong *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 auStackY_108 [32];
  uint *local_d8;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  uint local_60;
  int local_5c;
  int iStack_58;
  uint local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_108;
  local_4c = 0;
  if ((param_3 - 0x21U < 0xffffffe1 || (param_4 == (uint *)0x0 || param_2 == (longlong *)0x0)) ||
     (lVar18 = *param_2, lVar18 == 0)) {
    puVar6 = (uint *)0x0;
    lVar18 = 0;
    iVar11 = 6;
  }
  else {
    puVar6 = (uint *)0x0;
    if ((uint)(0x7fffffff / (ulonglong)param_4[1]) < *param_4) {
      iVar11 = 10;
    }
    else {
      puVar6 = (uint *)FUN_14001c617(lVar18,0xc,0,param_4[1] * *param_4,0,&local_4c);
      iVar11 = local_4c;
      if (local_4c == 0) {
        uVar2 = param_4[1];
        uVar23 = (ulonglong)uVar2;
        iVar11 = 0x13;
        if (uVar23 != 0) {
          uVar3 = *param_4;
          if (uVar3 != 0) {
            uVar14 = param_3 * 0x10000;
            lVar25 = *(longlong *)(param_4 + 4);
            lVar12 = param_2[1];
            if (lVar12 != 0) {
              do {
                for (piVar4 = *(int **)(lVar12 + 8); piVar4 != (int *)0x0;
                    piVar4 = *(int **)(piVar4 + 10)) {
                  FUN_1400802e0(&local_5c,piVar4);
                  iVar13 = local_5c + -0x3f;
                  if (local_5c + -0x3f < 0) {
                    iVar13 = local_5c;
                  }
                  iVar11 = local_54 + 0x7e;
                  if (-1 < (int)(local_54 + 0x3f)) {
                    iVar11 = local_54 + 0x3f;
                  }
                  iVar8 = iStack_58 + -0x3f;
                  if (iStack_58 + -0x3f < 0) {
                    iVar8 = iStack_58;
                  }
                  uVar17 = (iVar8 >> 6) - param_3;
                  iVar8 = local_50 + 0x7e;
                  if (-1 < local_50 + 0x3f) {
                    iVar8 = local_50 + 0x3f;
                  }
                  iVar8 = (iVar8 >> 6) + param_3;
                  if ((int)uVar17 < iVar8) {
                    uVar9 = (iVar13 >> 6) - param_3;
                    iVar21 = (iVar11 >> 6) + param_3;
                    do {
                      if ((int)uVar9 < iVar21) {
                        uVar24 = uVar9;
                        iVar15 = (iVar13 >> 6) * 0x40 + param_3 * -0x40 + 0x20;
                        do {
                          local_60 = 0;
                          local_68 = 0x7fffffff;
                          if (((int)uVar24 < (int)uVar2 && (int)uVar17 < (int)uVar3) &&
                              -1 < (int)(uVar17 | uVar24)) {
                            uVar7 = FUN_1400803a0(piVar4,CONCAT44(uVar17 << 6,iVar15) | 0x2000000000
                                                  ,(int *)&local_68);
                            local_4c = (int)uVar7;
                            iVar11 = local_4c;
                            if (local_4c != 0) goto LAB_14007fa7b;
                            if (*param_1 == 1) {
                              local_60 = CONCAT31(local_60._1_3_,-(char)local_60);
                            }
                            if ((int)local_68 <= (int)uVar14) {
                              uVar10 = ~uVar17 + uVar3;
                              if (*(char *)((longlong)param_1 + 5) != '\0') {
                                uVar10 = uVar17;
                              }
                              uVar19 = (ulonglong)(uVar2 * uVar10 + uVar24);
                              puVar22 = puVar6 + uVar19 * 3;
                              if ((char)puVar6[uVar19 * 3 + 2] == '\0') {
LAB_14007fd45:
                                puVar22[2] = local_60;
                                uVar7 = local_68;
                              }
                              else {
                                uVar10 = *puVar22;
                                uVar20 = (int)local_68 - uVar10;
                                if ((int)local_68 < (int)uVar10) {
                                  uVar20 = uVar10 - (int)local_68;
                                }
                                if (0x20 < uVar20) {
                                  if ((int)uVar10 <= (int)local_68) goto LAB_14007fd5d;
                                  goto LAB_14007fd45;
                                }
                                local_70 = puVar22[2];
                                local_78 = *(undefined8 *)puVar22;
                                FUN_1400803d9((undefined8 *)&local_5c,&local_78,&local_68);
                                puVar22[2] = local_54;
                                uVar7 = CONCAT44(iStack_58,local_5c);
                              }
                              *(undefined8 *)puVar22 = uVar7;
                            }
                          }
LAB_14007fd5d:
                          uVar24 = uVar24 + 1;
                          iVar15 = iVar15 + 0x40;
                        } while ((int)uVar24 < iVar21);
                      }
                      uVar17 = uVar17 + 1;
                    } while ((int)uVar17 < iVar8);
                  }
                }
                lVar12 = *(longlong *)(lVar12 + 0x10);
              } while (lVar12 != 0);
            }
            iVar11 = local_4c;
            if (0 < (int)uVar3) {
              uVar19 = 0;
              local_d8 = puVar6;
              do {
                if (0 < (int)uVar2) {
                  bVar5 = -(param_1[2] == 0) | (byte)(param_1[2] >> 0x1f) | 1;
                  uVar16 = 0;
                  puVar22 = local_d8;
                  do {
                    bVar1 = (byte)puVar22[2];
                    if ((bVar1 == 0) ||
                       (bVar5 = bVar1, uVar17 = *puVar22, (int)uVar14 < (int)*puVar22)) {
                      *puVar22 = uVar14;
                      uVar17 = uVar14;
                    }
                    iVar11 = -(int)(char)bVar5;
                    if ((char)param_1[1] == '\0') {
                      iVar11 = (int)(char)bVar5;
                    }
                    *puVar22 = iVar11 * uVar17;
                    uVar7 = FUN_14007ed2f(iVar11 * uVar17,uVar14);
                    *(char *)(lVar25 + uVar16) = (char)uVar7;
                    uVar16 = uVar16 + 1;
                    puVar22 = puVar22 + 3;
                  } while (uVar23 != uVar16);
                }
                uVar19 = uVar19 + 1;
                local_d8 = local_d8 + uVar23 * 3;
                lVar25 = lVar25 + uVar23;
                iVar11 = local_4c;
              } while (uVar19 != uVar3);
            }
          }
        }
      }
    }
  }
LAB_14007fa7b:
  local_4c = iVar11;
  FUN_14001c53d(lVar18,(longlong)puVar6);
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_108)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_108);
}

