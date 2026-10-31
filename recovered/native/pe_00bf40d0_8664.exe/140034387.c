/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140034387 */

undefined8 FUN_140034387(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  int *piVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  byte *pbVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  int *piVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  ulonglong uVar45;
  bool bVar46;
  undefined1 auStackY_328 [32];
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  uint local_2f0;
  int *local_2b8;
  uint local_248;
  uint local_238;
  uint local_230;
  uint local_22c;
  undefined8 local_228;
  longlong local_220 [7];
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_328;
  puVar9 = (uint *)*param_1;
  local_2b8 = (int *)(&DAT_1400ef420 + (longlong)(int)puVar9[3] * 8);
  local_238 = *(uint *)(param_1 + 8);
  lVar24 = param_1[6];
  uVar20 = FUN_14002fd6a(lVar24);
  if ((char)uVar20 == '\0') {
    puVar21 = &local_22c;
  }
  else {
    puVar21 = (uint *)FUN_140030328(lVar24);
  }
  iVar37 = *local_2b8;
  if (iVar37 != 0x159b) {
    local_238 = local_238 / 0xe;
    do {
      bVar2 = (&DAT_1400ede80)[iVar37];
      iVar43 = 0;
      iVar32 = 0;
      uVar23 = 0;
      uVar28 = 0;
      if (bVar2 != 0) {
        pbVar29 = &DAT_1400ede80 + iVar37;
        uVar23 = 0;
        iVar32 = 0;
        iVar37 = 0;
        iVar43 = 0;
        uVar19 = 0;
joined_r0x0001400344a5:
        while (bVar2 == 0x20) {
          pbVar1 = pbVar29 + 1;
          pbVar29 = pbVar29 + 1;
          bVar2 = *pbVar1;
        }
        pbVar29 = (byte *)FUN_14003039c(pbVar29,param_1,puVar21,&local_230);
        uVar14 = local_230;
        uVar28 = uVar19;
        if (local_230 != 0) {
          uVar3 = *(ushort *)(local_2b8 + 1);
          iVar15 = (uVar3 & 1) + 0x7fffffff;
          uVar36 = 0;
          bVar13 = false;
LAB_140034518:
          iVar16 = FUN_140030754((longlong)param_1,puVar21,uVar36,(undefined4 *)0x0,
                                 (undefined4 *)&local_228);
          if (((iVar16 != 0) && (iVar16 = FUN_14001d8c9(param_2,iVar16,1), iVar16 == 0)) &&
             (lVar24 = *(longlong *)(param_2 + 0x78), 2 < *(ushort *)(lVar24 + 0x9a))) {
            if ((ulonglong)*(ushort *)(lVar24 + 0x98) == 0) {
              iVar16 = 0;
              goto LAB_140034892;
            }
            lVar10 = *(longlong *)(lVar24 + 0xa0);
            lVar11 = *(longlong *)(lVar24 + 0xa8);
            iVar16 = 0;
            uVar41 = 0xffffffff;
            uVar45 = 0;
            local_300 = 0xffffffff;
            local_2fc = 0xffffffff;
            uVar22 = 0xffffffff;
            do {
              uVar31 = uVar22 + 1;
              uVar4 = *(ushort *)(*(longlong *)(lVar24 + 0xb0) + uVar45 * 2);
              if ((int)uVar31 < (int)(uint)uVar4) {
                if ((uVar3 & 3) == 0) {
                  lVar38 = 0;
                  do {
                    iVar5 = *(int *)(lVar10 + 0xc + (longlong)(int)uVar22 * 8 + lVar38 * 8);
                    iVar27 = (int)local_228 + iVar5;
                    if (((int)uVar41 < 0) || (iVar5 < iVar16)) {
                      bVar46 = iVar27 <= iVar43;
                      iVar43 = iVar37;
                      if (bVar46) {
                        iVar43 = iVar27;
                      }
                      uVar41 = uVar31 + (int)lVar38;
                      iVar16 = iVar5;
                      iVar37 = iVar43;
                    }
                    else if (iVar32 <= iVar27) {
                      iVar32 = iVar27;
                    }
                    lVar30 = ((longlong)(int)uVar31 - (ulonglong)uVar4) + lVar38;
                    lVar38 = lVar38 + 1;
                  } while (lVar30 != 0);
                }
                else {
                  lVar38 = 0;
                  do {
                    iVar5 = *(int *)(lVar10 + 0xc + (longlong)(int)uVar22 * 8 + lVar38 * 8);
                    iVar27 = (int)local_228 + iVar5;
                    if (((int)uVar41 < 0) || (iVar16 < iVar5)) {
                      if (iVar32 <= iVar27) {
                        iVar32 = iVar27;
                      }
                      uVar41 = uVar31 + (int)lVar38;
                      iVar16 = iVar5;
                    }
                    else {
                      iVar37 = iVar43;
                      if (iVar27 <= iVar43) {
                        iVar43 = iVar27;
                        iVar37 = iVar27;
                      }
                    }
                    lVar30 = ((longlong)(int)uVar31 - (ulonglong)uVar4) + lVar38;
                    lVar38 = lVar38 + 1;
                  } while (lVar30 != 0);
                }
                if ((int)local_2fc < (int)uVar41) {
                  local_2fc = (uint)uVar4;
                  local_300 = uVar31;
                }
              }
              uVar45 = uVar45 + 1;
              uVar22 = (uint)uVar4;
            } while (uVar45 != *(ushort *)(lVar24 + 0x98));
            if (-1 < (int)uVar41) {
              iVar5 = *(int *)(lVar10 + (ulonglong)uVar41 * 8);
              uVar31 = uVar41;
              uVar22 = 0xffffffff;
              uVar18 = 0xffffffff;
              if ((*(byte *)(lVar11 + (ulonglong)uVar41) & 3) == 1) {
                uVar22 = uVar41;
                uVar18 = uVar41;
              }
              do {
                uVar17 = uVar31 - 1;
                if ((int)uVar31 <= (int)local_300) {
                  uVar17 = local_2fc;
                }
                lVar24 = (longlong)(int)uVar17;
                iVar27 = *(int *)(lVar10 + 4 + lVar24 * 8);
                uVar33 = iVar16 - iVar27;
                if (iVar16 < iVar27) {
                  uVar33 = iVar27 - iVar16;
                }
                uVar34 = uVar41;
                if (5 < uVar33) {
                  iVar27 = *(int *)(lVar10 + lVar24 * 8);
                  uVar42 = iVar5 - iVar27;
                  if (iVar5 < iVar27) {
                    uVar42 = iVar27 - iVar5;
                  }
                  uVar44 = uVar31;
                  if (uVar42 <= uVar33 * 0x14) break;
                }
                uVar31 = uVar18;
                if ((int)uVar18 < 0) {
                  uVar31 = uVar17;
                }
                if ((*(byte *)(lVar11 + lVar24) & 3) == 1) {
                  uVar18 = uVar31;
                  uVar22 = uVar17;
                }
                uVar31 = uVar17;
                uVar44 = uVar41;
              } while (uVar17 != uVar41);
              do {
                uVar31 = uVar34 + 1;
                if ((int)local_2fc <= (int)uVar34) {
                  uVar31 = local_300;
                }
                lVar24 = (longlong)(int)uVar31;
                iVar27 = *(int *)(lVar10 + 4 + lVar24 * 8);
                uVar17 = iVar16 - iVar27;
                if (iVar16 < iVar27) {
                  uVar17 = iVar27 - iVar16;
                }
                if (5 < uVar17) {
                  iVar27 = *(int *)(lVar10 + lVar24 * 8);
                  uVar33 = iVar5 - iVar27;
                  if (iVar5 < iVar27) {
                    uVar33 = iVar27 - iVar5;
                  }
                  uVar42 = uVar34;
                  if (uVar33 <= uVar17 * 0x14) break;
                }
                uVar17 = uVar22;
                if ((int)uVar22 < 0) {
                  uVar17 = uVar31;
                }
                if ((*(byte *)(lVar11 + lVar24) & 3) == 1) {
                  uVar18 = uVar31;
                  uVar22 = uVar17;
                }
                uVar34 = uVar31;
                uVar42 = uVar41;
              } while (uVar31 != uVar41);
              uVar31 = uVar44;
              if ((uVar3 & 0x10) != 0) {
                uVar17 = *(uint *)(param_1 + 8);
                local_248 = uVar17 / 0x19;
                iVar27 = *(int *)(lVar10 + (longlong)(int)uVar42 * 8);
                iVar6 = *(int *)(lVar10 + (longlong)(int)uVar44 * 8);
                uVar33 = iVar6 - iVar27;
                if (iVar6 < iVar27) {
                  uVar33 = iVar27 - iVar6;
                }
                if ((uVar33 < uVar17 / 0x19) &&
                   (uVar33 = uVar41, (int)((uVar42 - uVar44) + 2) <= (int)(local_2fc - local_300)))
                {
                  do {
                    uVar34 = uVar33 - 1;
                    if ((int)uVar33 <= (int)local_300) {
                      uVar34 = local_2fc;
                    }
                    iVar27 = *(int *)(lVar10 + (longlong)(int)uVar34 * 8);
                  } while ((iVar27 == iVar5) && (uVar33 = uVar34, uVar34 != uVar41));
                  if (uVar34 == uVar41) goto LAB_140034b57;
                  local_2f8 = 0;
                  bVar46 = false;
                  local_2f0 = 0;
                  uVar33 = uVar42;
                  uVar41 = uVar42;
                  do {
                    if (bVar46) {
                      lVar38 = (longlong)(int)uVar33;
                    }
                    else {
                      lVar38 = (longlong)(int)uVar41;
                      local_2f8 = 0xffffffff;
                      local_2f0 = 0xffffffff;
                      uVar33 = uVar41;
                      if ((*(byte *)(lVar11 + lVar38) & 3) == 1) {
                        local_2f8 = uVar41;
                        local_2f0 = uVar41;
                      }
                    }
                    bVar46 = (int)local_2fc <= (int)uVar41;
                    uVar41 = uVar41 + 1;
                    if (bVar46) {
                      uVar41 = local_300;
                    }
                    iVar6 = *(int *)(lVar10 + 4 + lVar38 * 8);
                    uVar34 = iVar6 - iVar16;
                    if (iVar6 < iVar16) {
                      uVar34 = iVar16 - iVar6;
                    }
                    if (uVar17 >> 2 < uVar34) {
                      bVar46 = false;
                    }
                    else {
                      lVar30 = (longlong)(int)uVar41;
                      iVar7 = *(int *)(lVar10 + lVar30 * 8);
                      iVar8 = *(int *)(lVar10 + 4 + lVar30 * 8);
                      uVar34 = iVar6 - iVar8;
                      if (iVar6 < iVar8) {
                        uVar34 = iVar8 - iVar6;
                      }
                      iVar8 = *(int *)(lVar10 + lVar38 * 8);
                      uVar39 = iVar8 - iVar7;
                      if (iVar8 < iVar7) {
                        uVar39 = iVar7 - iVar8;
                      }
                      if ((uVar34 < 6) || (uVar34 * 0x14 < uVar39)) {
                        uVar35 = local_2f8;
                        if ((int)local_2f8 < 0) {
                          uVar35 = uVar41;
                        }
                        if ((*(byte *)(lVar11 + lVar30) & 3) == 1) {
                          local_2f0 = uVar41;
                          local_2f8 = uVar35;
                        }
                        bVar46 = true;
                        if ((iVar8 < iVar7 == iVar27 < iVar5) && (local_248 <= uVar39)) {
                          goto LAB_140034b9e;
                        }
                      }
                      else {
                        bVar46 = false;
                      }
                    }
                  } while (uVar41 != uVar44);
                }
              }
              goto LAB_140034a8c;
            }
            bVar46 = false;
            goto LAB_140034b06;
          }
          goto LAB_140034b57;
        }
        goto LAB_140034cac;
      }
LAB_140034cb9:
      if (uVar28 != 0 || uVar23 != 0) {
        FUN_140032667(uVar23,(longlong)local_1e8);
        FUN_140032667(uVar28,(longlong)local_118);
        piVar25 = (int *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 100) * 0x24 + 0x324);
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + 1;
        if (uVar28 == 0) {
          iVar37 = local_1e8[uVar23 >> 1];
LAB_140034d73:
          piVar25[3] = iVar37;
          *piVar25 = iVar37;
LAB_140034d78:
          uVar23 = (uint)*(ushort *)(local_2b8 + 1);
        }
        else {
          iVar37 = local_118[uVar28 >> 1];
          if (uVar23 == 0) goto LAB_140034d73;
          *piVar25 = iVar37;
          iVar15 = local_1e8[uVar23 >> 1];
          piVar25[3] = iVar15;
          if (iVar15 == iVar37) goto LAB_140034d78;
          uVar3 = *(ushort *)(local_2b8 + 1);
          uVar23 = (uint)uVar3;
          if (iVar15 <= iVar37 == ((uVar3 & 3) != 0)) {
            iVar37 = (iVar37 + iVar15) / 2;
            piVar25[3] = iVar37;
            *piVar25 = iVar37;
            uVar23 = (uint)uVar3;
          }
        }
        piVar25[6] = iVar32;
        piVar25[7] = iVar43;
        uVar28 = (uVar23 & 0x60) + (uVar23 & 7) * 2;
        piVar25[8] = uVar28;
        if ((uVar23 & 8) != 0) {
          piVar25[8] = uVar28 | 0x10;
        }
      }
      iVar37 = local_2b8[2];
      local_2b8 = local_2b8 + 2;
    } while (iVar37 != 0x159b);
  }
  FUN_14003035d(param_1[6],puVar21);
  uVar23 = *(uint *)(param_1 + 100);
  uVar45 = (ulonglong)uVar23;
  if (uVar45 == 0) {
    lVar24 = param_1[6];
    uVar23 = *(uint *)(lVar24 + 8);
    uVar20 = 1;
    if (uVar23 != 0) {
      lVar10 = *(longlong *)(lVar24 + 0x10);
      uVar45 = 0;
      do {
        if (*puVar9 == (*(ushort *)(lVar10 + uVar45 * 2) & 0x1fff)) {
          *(undefined2 *)(lVar10 + uVar45 * 2) = 0x42;
          uVar23 = *(uint *)(lVar24 + 8);
        }
        uVar45 = uVar45 + 1;
      } while (uVar45 < uVar23);
    }
  }
  else {
    lVar24 = (longlong)param_1 + 0x324;
    uVar26 = 0;
    do {
      local_220[uVar26 - 1] = lVar24;
      uVar26 = uVar26 + 1;
      lVar24 = lVar24 + 0x24;
    } while (uVar45 != uVar26);
    FUN_140035238(uVar23,(longlong)&local_228);
    if (uVar23 != 1) {
      uVar26 = 0;
      piVar25 = (int *)CONCAT44(local_228._4_4_,(int)local_228);
      do {
        if ((*(byte *)(piVar25 + 8) & 6) == 0) {
          lVar24 = 0;
        }
        else {
          lVar24 = 0xc;
        }
        piVar12 = (int *)local_220[uVar26];
        piVar40 = piVar12 + 3;
        if ((*(byte *)(piVar12 + 8) & 6) == 0) {
          piVar40 = piVar12;
        }
        if (*piVar40 < *(int *)((longlong)piVar25 + lVar24)) {
          *(int *)((longlong)piVar25 + lVar24) = *piVar40;
          uVar45 = (ulonglong)*(uint *)(param_1 + 100);
        }
        uVar26 = uVar26 + 1;
        piVar25 = piVar12;
      } while (uVar26 < (int)uVar45 - 1);
    }
    uVar20 = 0;
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_328)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_328);
  while( true ) {
    if ((int)local_2f8 < 0) {
      local_2f8 = uVar41;
    }
    if ((*(byte *)(lVar11 + (int)uVar41) & 3) == 1) {
      uVar22 = local_2f8;
    }
    uVar18 = uVar44;
    uVar42 = uVar44;
    local_2f8 = uVar22;
    local_2f0 = uVar41;
    if (uVar41 == uVar44) break;
LAB_140034b9e:
    bVar46 = (int)local_2fc <= (int)uVar41;
    uVar41 = uVar41 + 1;
    if (bVar46) {
      uVar41 = local_300;
    }
    iVar16 = *(int *)(lVar10 + 4 + (longlong)(int)uVar41 * 8);
    uVar18 = iVar6 - iVar16;
    if (iVar6 < iVar16) {
      uVar18 = iVar16 - iVar6;
    }
    iVar16 = iVar6;
    uVar22 = local_2f8;
    uVar31 = uVar33;
    if (5 < uVar18) {
      iVar5 = *(int *)(lVar10 + lVar24 * 8);
      uVar18 = iVar8 - iVar5;
      if (iVar8 < iVar5) {
        uVar18 = iVar5 - iVar8;
      }
      if (uVar18 <= uVar34 * 0x14) {
        uVar18 = local_2f0;
        uVar42 = local_2fc;
        if ((int)local_300 < (int)uVar41) {
          uVar42 = uVar41 - 1;
        }
        break;
      }
    }
  }
LAB_140034a8c:
  iVar16 = iVar16 + (int)local_228;
  if (((int)uVar22 < 0) || ((int)uVar18 < 0)) {
LAB_140034acd:
    if ((*(byte *)(lVar11 + (int)uVar31) & 3) == 1) {
      bVar46 = (*(byte *)(lVar11 + (int)uVar42) & 3) != 1;
      if (!bVar46) goto LAB_140034b06;
    }
    else {
      bVar46 = true;
    }
    if ((uVar3 & 4) != 0) goto LAB_140034b57;
  }
  else {
    iVar5 = *(int *)(lVar10 + (ulonglong)uVar18 * 8);
    iVar27 = *(int *)(lVar10 + (ulonglong)uVar22 * 8);
    uVar22 = iVar27 - iVar5;
    if (iVar27 < iVar5) {
      uVar22 = iVar5 - iVar27;
    }
    if (uVar22 <= local_238) goto LAB_140034acd;
LAB_140034892:
    bVar46 = false;
  }
LAB_140034b06:
  if ((uVar3 & 1) == 0) {
    if (iVar16 < iVar15) {
      iVar15 = iVar16;
      bVar13 = bVar46;
    }
  }
  else if (iVar15 < iVar16) {
    iVar15 = iVar16;
    bVar13 = bVar46;
  }
LAB_140034b57:
  uVar36 = uVar36 + 1;
  if (uVar36 == uVar14) goto LAB_140034c55;
  goto LAB_140034518;
LAB_140034c55:
  if (1 < iVar15 + 0x80000001U) {
    if (bVar13) {
      piVar25 = local_1e8;
      uVar19 = uVar23;
      uVar23 = uVar23 + 1;
    }
    else {
      uVar28 = uVar19 + 1;
      piVar25 = local_118;
    }
    piVar25[uVar19] = iVar15;
  }
LAB_140034cac:
  bVar2 = *pbVar29;
  uVar19 = uVar28;
  if (bVar2 == 0) goto LAB_140034cb9;
  goto joined_r0x0001400344a5;
}

