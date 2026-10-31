/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802323ab */

int FUN_1802323ab(int *param_1,longlong *param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  uint local_c4;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  int *local_a8;
  int local_9c;
  uint local_98;
  uint local_94;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  uVar17 = (ulonglong)param_3;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_4c = 0;
  if ((param_3 - 0x21 < 0xffffffe1 || (param_4 == (uint *)0x0 || param_2 == (longlong *)0x0)) ||
     (lVar16 = *param_2, lVar16 == 0)) {
    piVar6 = (int *)0x0;
    lVar16 = 0;
    iVar11 = 6;
  }
  else {
    piVar6 = (int *)0x0;
    if ((uint)(0x7fffffff / (ulonglong)param_4[1]) < *param_4) {
      iVar11 = 10;
    }
    else {
      local_e0 = &local_4c;
      local_e8 = 0;
      piVar6 = (int *)FUN_1801c9c3f(lVar16,0xc,0,param_4[1] * *param_4);
      iVar11 = local_4c;
      if (local_4c == 0) {
        uVar2 = param_4[1];
        uVar19 = (ulonglong)uVar2;
        iVar11 = 0x13;
        if ((uVar19 != 0) && (local_c0 = (ulonglong)*param_4, *param_4 != 0)) {
          iVar12 = param_3 * 0x10000;
          lVar21 = *(longlong *)(param_4 + 4);
          lVar10 = param_2[1];
          local_d0 = piVar6;
          local_b8 = lVar16;
          local_a8 = param_1;
          if (lVar10 != 0) {
            local_9c = param_3 * -0x40 + 0x20;
            local_90 = uVar17;
            do {
              piVar3 = *(int **)(lVar10 + 8);
              local_88 = lVar10;
              piVar6 = local_d8;
              while (local_d8 = piVar3, local_d8 != (int *)0x0) {
                FUN_180232ca0(&local_5c);
                iVar11 = local_5c + -0x3f;
                if (local_5c + -0x3f < 0) {
                  iVar11 = local_5c;
                }
                iVar18 = local_54 + 0x7e;
                if (-1 < local_54 + 0x3f) {
                  iVar18 = local_54 + 0x3f;
                }
                iVar14 = iStack_58 + -0x3f;
                if (iStack_58 + -0x3f < 0) {
                  iVar14 = iStack_58;
                }
                uVar15 = (iVar14 >> 6) - (int)uVar17;
                iVar14 = local_50 + 0x7e;
                if (-1 < local_50 + 0x3f) {
                  iVar14 = local_50 + 0x3f;
                }
                uVar8 = (iVar14 >> 6) + (int)uVar17;
                local_80 = (ulonglong)uVar8;
                if ((int)uVar15 < (int)uVar8) {
                  local_c4 = (iVar11 >> 6) - (int)local_90;
                  iVar18 = (iVar18 >> 6) + (int)local_90;
                  local_98 = (iVar11 >> 6) * 0x40 + local_9c;
                  do {
                    if ((int)local_c4 < iVar18) {
                      local_b0 = (ulonglong)(uVar15 << 6 | 0x20) << 0x20;
                      local_94 = ~uVar15 + (int)local_c0;
                      uVar20 = local_c4;
                      uVar8 = local_98;
                      do {
                        local_60 = 0;
                        local_68 = 0x7fffffff;
                        if (((int)uVar20 < (int)uVar2 && (int)uVar15 < (int)local_c0) &&
                            -1 < (int)(uVar15 | uVar20)) {
                          local_4c = FUN_180232d60(local_d8,uVar8 | local_b0,&local_68);
                          lVar16 = local_b8;
                          piVar6 = local_d0;
                          iVar11 = local_4c;
                          if (local_4c != 0) goto LAB_18023243b;
                          if (*local_a8 == 1) {
                            local_60 = CONCAT31(local_60._1_3_,-(char)local_60);
                          }
                          if ((int)local_68 <= iVar12) {
                            uVar9 = local_94;
                            if (*(char *)((longlong)local_a8 + 5) != '\0') {
                              uVar9 = uVar15;
                            }
                            uVar17 = (ulonglong)(uVar2 * uVar9 + uVar20);
                            piVar6 = local_d0 + uVar17 * 3;
                            if ((char)local_d0[uVar17 * 3 + 2] == '\0') {
LAB_180232705:
                              piVar6[2] = local_60;
                              uVar7 = local_68;
                            }
                            else {
                              iVar11 = *piVar6;
                              uVar9 = (int)local_68 - iVar11;
                              if ((int)local_68 < iVar11) {
                                uVar9 = iVar11 - (int)local_68;
                              }
                              if (0x20 < uVar9) {
                                if (iVar11 <= (int)local_68) goto LAB_18023271d;
                                goto LAB_180232705;
                              }
                              local_70 = piVar6[2];
                              local_78 = *(undefined8 *)piVar6;
                              FUN_180232d99(&local_5c,&local_78,&local_68);
                              piVar6[2] = local_54;
                              uVar7 = CONCAT44(iStack_58,local_5c);
                            }
                            *(undefined8 *)piVar6 = uVar7;
                          }
                        }
LAB_18023271d:
                        uVar20 = uVar20 + 1;
                        uVar8 = uVar8 + 0x40;
                      } while ((int)uVar20 < iVar18);
                    }
                    uVar15 = uVar15 + 1;
                  } while ((int)uVar15 < (int)local_80);
                }
                uVar17 = local_90;
                piVar6 = local_d8;
                piVar3 = *(int **)(local_d8 + 10);
              }
              lVar10 = *(longlong *)(local_88 + 0x10);
              local_d8 = piVar6;
            } while (lVar10 != 0);
          }
          piVar3 = local_a8;
          lVar16 = local_b8;
          piVar6 = local_d0;
          iVar11 = local_4c;
          if (0 < (int)local_c0) {
            local_b0 = uVar19 * 0xc;
            uVar17 = 0;
            local_d8 = local_d0;
            do {
              if (0 < (int)uVar2) {
                iVar11 = piVar3[2];
                bVar4 = -(iVar11 == 0) | (byte)(iVar11 >> 0x1f) | 1;
                uVar13 = 0;
                piVar6 = local_d8;
                do {
                  bVar1 = *(byte *)(piVar6 + 2);
                  if ((bVar1 == 0) || (bVar4 = bVar1, iVar11 = *piVar6, iVar12 < *piVar6)) {
                    *piVar6 = iVar12;
                    iVar11 = iVar12;
                  }
                  iVar18 = -(int)(char)bVar4;
                  if ((char)piVar3[1] == '\0') {
                    iVar18 = (int)(char)bVar4;
                  }
                  *piVar6 = iVar18 * iVar11;
                  uVar5 = FUN_1802316ef(iVar18 * iVar11,iVar12);
                  *(undefined1 *)(lVar21 + uVar13) = uVar5;
                  uVar13 = uVar13 + 1;
                  piVar6 = piVar6 + 3;
                } while (uVar19 != uVar13);
              }
              uVar17 = uVar17 + 1;
              local_d8 = (int *)((longlong)local_d8 + local_b0);
              lVar21 = lVar21 + uVar19;
              lVar16 = local_b8;
              piVar6 = local_d0;
              iVar11 = local_4c;
            } while (uVar17 != local_c0);
          }
        }
      }
    }
  }
LAB_18023243b:
  local_4c = iVar11;
  FUN_1801c9b65(lVar16,piVar6);
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_108)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_108);
}

