/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013643f */

undefined8 FUN_14013643f(undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  bool bVar40;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  uint local_2f4;
  uint local_2f0;
  uint local_2ec;
  longlong local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  undefined1 *local_2d0;
  longlong local_2c8;
  int local_2bc;
  int *local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  undefined8 *local_290;
  undefined8 local_288;
  ulonglong local_280;
  int local_278;
  uint local_274;
  uint local_270;
  int local_26c;
  char *local_268;
  ulonglong local_260;
  uint *local_258;
  longlong local_250;
  ulonglong local_248;
  ulonglong local_240;
  ulonglong local_238;
  int local_230;
  undefined1 local_22c [4];
  undefined8 local_228;
  longlong local_220 [7];
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_328;
  puVar8 = (uint *)*param_1;
  local_2b8 = (int *)(&DAT_140e96660 + (longlong)(int)puVar8[3] * 8);
  uVar36 = *(uint *)(param_1 + 8);
  uVar15 = param_1[6];
  cVar10 = FUN_140131e22(uVar15);
  local_258 = puVar8;
  if (cVar10 == '\0') {
    puVar14 = local_22c;
  }
  else {
    puVar14 = (undefined1 *)FUN_1401323e0(uVar15);
  }
  iVar27 = *local_2b8;
  if (iVar27 != 0x159b) {
    local_238 = (ulonglong)(uVar36 >> 1) / 7;
    local_250 = (longlong)param_1 + 0x324;
    local_2d0 = puVar14;
    local_2c8 = param_2;
    local_290 = param_1;
    do {
      cVar10 = (&DAT_140e950c0)[iVar27];
      iVar35 = 0;
      iVar23 = 0;
      local_298 = 0;
      uVar37 = 0;
      if (cVar10 != '\0') {
        pcVar20 = &DAT_140e950c0 + iVar27;
        uVar37 = 0;
        local_298 = 0;
        iVar23 = 0;
        iVar27 = 0;
        iVar35 = 0;
joined_r0x00014013655d:
        while (cVar10 == ' ') {
          pcVar1 = pcVar20 + 1;
          pcVar20 = pcVar20 + 1;
          cVar10 = *pcVar1;
        }
        pcVar20 = (char *)FUN_140132454(pcVar20,param_1);
        if (local_230 != 0) {
          uVar4 = *(ushort *)(local_2b8 + 1);
          local_2dc = (uint)uVar4;
          local_2b0 = (ulonglong)((uVar4 & 1) + 0x7fffffff);
          local_274 = uVar4 & 4;
          local_2ec = 0;
          local_2bc = local_230;
          iVar18 = local_230;
          local_2a0 = uVar37;
          local_268 = pcVar20;
          iVar11 = 0;
LAB_1401365d0:
          local_26c = iVar11;
          local_308 = &local_228;
          iVar11 = FUN_14013280c(param_1,puVar14);
          if (((iVar11 != 0) && (iVar11 = FUN_140129ec5(param_2,iVar11), iVar11 == 0)) &&
             (lVar16 = *(longlong *)(param_2 + 0x78), 2 < *(ushort *)(lVar16 + 0x9a))) {
            uVar37 = local_2a0;
            if ((ulonglong)*(ushort *)(lVar16 + 0x98) == 0) {
              uVar36 = 0;
              goto LAB_14013694a;
            }
            local_2e8 = *(longlong *)(lVar16 + 0xa0);
            local_2a8 = *(longlong *)(lVar16 + 0xa8);
            local_2d8 = local_2e8 + 0xc;
            uVar36 = 0;
            uVar32 = 0xffffffff;
            uVar39 = 0;
            local_300 = 0xffffffff;
            local_2fc = 0xffffffff;
            uVar19 = 0xffffffff;
            do {
              uVar22 = uVar19 + 1;
              uVar4 = *(ushort *)(*(longlong *)(lVar16 + 0xb0) + uVar39 * 2);
              if ((int)uVar22 < (int)(uint)uVar4) {
                if ((local_2dc & 3) == 0) {
                  lVar28 = 0;
                  do {
                    uVar13 = *(uint *)(local_2d8 + (longlong)(int)uVar19 * 8 + lVar28 * 8);
                    iVar18 = (int)local_228 + uVar13;
                    if (((int)uVar32 < 0) || ((int)uVar13 < (int)uVar36)) {
                      bVar40 = iVar18 <= iVar35;
                      iVar35 = iVar27;
                      if (bVar40) {
                        iVar35 = iVar18;
                      }
                      uVar32 = uVar22 + (int)lVar28;
                      uVar36 = uVar13;
                      iVar27 = iVar35;
                    }
                    else if (iVar23 <= iVar18) {
                      iVar23 = iVar18;
                    }
                    lVar2 = ((longlong)(int)uVar22 - (ulonglong)uVar4) + lVar28;
                    lVar28 = lVar28 + 1;
                  } while (lVar2 != 0);
                }
                else {
                  lVar28 = 0;
                  do {
                    uVar13 = *(uint *)(local_2d8 + (longlong)(int)uVar19 * 8 + lVar28 * 8);
                    iVar18 = (int)local_228 + uVar13;
                    if (((int)uVar32 < 0) || ((int)uVar36 < (int)uVar13)) {
                      if (iVar23 <= iVar18) {
                        iVar23 = iVar18;
                      }
                      uVar32 = uVar22 + (int)lVar28;
                      uVar36 = uVar13;
                    }
                    else {
                      iVar27 = iVar35;
                      if (iVar18 <= iVar35) {
                        iVar35 = iVar18;
                        iVar27 = iVar18;
                      }
                    }
                    lVar2 = ((longlong)(int)uVar22 - (ulonglong)uVar4) + lVar28;
                    lVar28 = lVar28 + 1;
                  } while (lVar2 != 0);
                }
                if ((int)local_2fc < (int)uVar32) {
                  local_2fc = (uint)uVar4;
                  local_300 = uVar22;
                }
              }
              uVar39 = uVar39 + 1;
              uVar19 = (uint)uVar4;
            } while (uVar39 != *(ushort *)(lVar16 + 0x98));
            puVar14 = local_2d0;
            param_2 = local_2c8;
            param_1 = local_290;
            iVar18 = local_2bc;
            if (-1 < (int)uVar32) {
              iVar11 = *(int *)(local_2e8 + (ulonglong)uVar32 * 8);
              uVar22 = uVar32;
              uVar19 = 0xffffffff;
              uVar13 = 0xffffffff;
              if ((*(byte *)(local_2a8 + (ulonglong)uVar32) & 3) == 1) {
                uVar19 = uVar32;
                uVar13 = uVar32;
              }
              do {
                uVar12 = uVar22 - 1;
                if ((int)uVar22 <= (int)local_300) {
                  uVar12 = local_2fc;
                }
                lVar16 = (longlong)(int)uVar12;
                iVar5 = *(int *)(local_2e8 + 4 + lVar16 * 8);
                uVar24 = uVar36 - iVar5;
                if ((int)uVar36 < iVar5) {
                  uVar24 = iVar5 - uVar36;
                }
                uVar25 = uVar32;
                if (5 < uVar24) {
                  iVar5 = *(int *)(local_2e8 + lVar16 * 8);
                  uVar34 = iVar11 - iVar5;
                  if (iVar11 < iVar5) {
                    uVar34 = iVar5 - iVar11;
                  }
                  uVar38 = uVar22;
                  if (uVar34 <= uVar24 * 0x14) break;
                }
                uVar22 = uVar13;
                if ((int)uVar13 < 0) {
                  uVar22 = uVar12;
                }
                if ((*(byte *)(local_2a8 + lVar16) & 3) == 1) {
                  uVar13 = uVar22;
                  uVar19 = uVar12;
                }
                uVar22 = uVar12;
                uVar38 = uVar32;
              } while (uVar12 != uVar32);
              do {
                uVar22 = uVar25 + 1;
                if ((int)local_2fc <= (int)uVar25) {
                  uVar22 = local_300;
                }
                lVar16 = (longlong)(int)uVar22;
                iVar5 = *(int *)(local_2e8 + 4 + lVar16 * 8);
                uVar12 = uVar36 - iVar5;
                if ((int)uVar36 < iVar5) {
                  uVar12 = iVar5 - uVar36;
                }
                if (5 < uVar12) {
                  iVar5 = *(int *)(local_2e8 + lVar16 * 8);
                  uVar24 = iVar11 - iVar5;
                  if (iVar11 < iVar5) {
                    uVar24 = iVar5 - iVar11;
                  }
                  uVar34 = uVar25;
                  if (uVar24 <= uVar12 * 0x14) break;
                }
                uVar12 = uVar19;
                if ((int)uVar19 < 0) {
                  uVar12 = uVar22;
                }
                if ((*(byte *)(local_2a8 + lVar16) & 3) == 1) {
                  uVar13 = uVar22;
                  uVar19 = uVar12;
                }
                uVar25 = uVar22;
                uVar34 = uVar32;
              } while (uVar22 != uVar32);
              uVar39 = (ulonglong)uVar34;
              uVar22 = uVar38;
              if ((local_2dc & 0x10) != 0) {
                uVar12 = *(uint *)(local_290 + 8);
                local_280 = (ulonglong)uVar12;
                uVar29 = local_280 / 0x19;
                iVar5 = *(int *)(local_2e8 + (longlong)(int)uVar34 * 8);
                iVar6 = *(int *)(local_2e8 + (longlong)(int)uVar38 * 8);
                uVar24 = iVar6 - iVar5;
                if (iVar6 < iVar5) {
                  uVar24 = iVar5 - iVar6;
                }
                if ((uVar24 < uVar12 / 0x19) &&
                   (uVar24 = uVar32, (int)((uVar34 - uVar38) + 2) <= (int)(local_2fc - local_300)))
                {
                  do {
                    uVar25 = uVar24 - 1;
                    if ((int)uVar24 <= (int)local_300) {
                      uVar25 = local_2fc;
                    }
                    iVar5 = *(int *)(local_2e8 + (longlong)(int)uVar25 * 8);
                  } while ((iVar5 == iVar11) && (uVar24 = uVar25, uVar25 != uVar32));
                  if (uVar25 == uVar32) goto LAB_140136c0f;
                  local_280 = (ulonglong)(uVar12 >> 2);
                  local_2f8 = 0;
                  bVar40 = false;
                  local_2f0 = 0;
                  uVar33 = uVar39;
                  do {
                    uVar32 = (uint)uVar33;
                    if (bVar40) {
                      lVar28 = (longlong)(int)uVar39;
                    }
                    else {
                      lVar28 = (longlong)(int)uVar32;
                      uVar39 = uVar33;
                      local_2f8 = 0xffffffff;
                      local_2f0 = 0xffffffff;
                      if ((*(byte *)(local_2a8 + lVar28) & 3) == 1) {
                        local_2f8 = uVar32;
                        local_2f0 = uVar32;
                      }
                    }
                    uVar24 = uVar32 + 1;
                    if ((int)local_2fc <= (int)uVar32) {
                      uVar24 = local_300;
                    }
                    uVar33 = (ulonglong)uVar24;
                    uVar32 = *(uint *)(local_2e8 + 4 + lVar28 * 8);
                    uVar25 = uVar32 - uVar36;
                    if ((int)uVar32 < (int)uVar36) {
                      uVar25 = uVar36 - uVar32;
                    }
                    local_2d8 = lVar28;
                    local_278 = iVar5;
                    local_248 = uVar29;
                    if (uVar12 >> 2 < uVar25) {
                      bVar40 = false;
                    }
                    else {
                      local_2f4 = (uint)uVar39;
                      local_288 = (longlong)(int)uVar24;
                      iVar6 = *(int *)(local_2e8 + local_288 * 8);
                      iVar7 = *(int *)(local_2e8 + 4 + local_288 * 8);
                      uVar25 = uVar32 - iVar7;
                      if ((int)uVar32 < iVar7) {
                        uVar25 = iVar7 - uVar32;
                      }
                      iVar7 = *(int *)(local_2e8 + lVar28 * 8);
                      uVar30 = iVar7 - iVar6;
                      if (iVar7 < iVar6) {
                        uVar30 = iVar6 - iVar7;
                      }
                      uVar21 = (ulonglong)(uVar25 * 4);
                      local_270 = uVar32;
                      local_260 = uVar33;
                      if ((uVar25 < 6) || (uVar25 * 0x14 < uVar30)) {
                        local_2d8 = CONCAT71((int7)((ulonglong)lVar28 >> 8),iVar5 < iVar11);
                        pbVar3 = (byte *)(local_2a8 + local_288);
                        local_288 = CONCAT44((int)uVar24 >> 0x1f,iVar6);
                        uVar26 = local_2f8;
                        if ((int)local_2f8 < 0) {
                          uVar26 = uVar24;
                        }
                        if ((*pbVar3 & 3) == 1) {
                          local_2f0 = uVar24;
                          local_2f8 = uVar26;
                        }
                        bVar40 = true;
                        local_240 = uVar21;
                        if ((iVar7 < iVar6 == iVar5 < iVar11) &&
                           (local_248._0_4_ = (uint)uVar29, (uint)local_248 <= uVar30)) {
                          local_2d8 = CONCAT44((int)((ulonglong)lVar28 >> 0x20),iVar7);
                          goto LAB_140136c56;
                        }
                      }
                      else {
                        bVar40 = false;
                      }
                    }
                  } while (uVar24 != uVar38);
                }
              }
              goto LAB_140136b44;
            }
            bVar40 = false;
            goto LAB_140136bbe;
          }
          goto LAB_140136c0f;
        }
        goto LAB_140136d64;
      }
LAB_140136d71:
      uVar19 = (uint)uVar37;
      uVar36 = (uint)local_298;
      if (uVar19 != 0 || uVar36 != 0) {
        FUN_14013471f(local_298 & 0xffffffff,local_1e8);
        FUN_14013471f(uVar37 & 0xffffffff,local_118);
        piVar17 = (int *)(local_250 + (ulonglong)*(uint *)(param_1 + 100) * 0x24);
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + 1;
        if (uVar19 == 0) {
          iVar27 = local_1e8[uVar36 >> 1];
LAB_140136e2b:
          piVar17[3] = iVar27;
          *piVar17 = iVar27;
LAB_140136e30:
          uVar36 = (uint)*(ushort *)(local_2b8 + 1);
        }
        else {
          iVar27 = local_118[uVar19 >> 1];
          if (uVar36 == 0) goto LAB_140136e2b;
          *piVar17 = iVar27;
          iVar18 = local_1e8[uVar36 >> 1];
          piVar17[3] = iVar18;
          if (iVar18 == iVar27) goto LAB_140136e30;
          uVar4 = *(ushort *)(local_2b8 + 1);
          uVar36 = (uint)uVar4;
          if (iVar18 <= iVar27 == ((uVar4 & 3) != 0)) {
            iVar27 = (iVar27 + iVar18) / 2;
            piVar17[3] = iVar27;
            *piVar17 = iVar27;
            uVar36 = (uint)uVar4;
          }
        }
        piVar17[6] = iVar23;
        piVar17[7] = iVar35;
        uVar19 = (uVar36 & 0x60) + (uVar36 & 7) * 2;
        piVar17[8] = uVar19;
        if ((uVar36 & 8) != 0) {
          piVar17[8] = uVar19 | 0x10;
        }
      }
      iVar27 = local_2b8[2];
      local_2b8 = local_2b8 + 2;
    } while (iVar27 != 0x159b);
  }
  FUN_140132415(param_1[6],puVar14);
  uVar36 = *(uint *)(param_1 + 100);
  uVar37 = (ulonglong)uVar36;
  if (uVar37 == 0) {
    lVar16 = param_1[6];
    uVar36 = *(uint *)(lVar16 + 8);
    uVar15 = 1;
    if (uVar36 != 0) {
      lVar28 = *(longlong *)(lVar16 + 0x10);
      uVar37 = 0;
      do {
        if (*local_258 == (*(ushort *)(lVar28 + uVar37 * 2) & 0x1fff)) {
          *(undefined2 *)(lVar28 + uVar37 * 2) = 0x42;
          uVar36 = *(uint *)(lVar16 + 8);
        }
        uVar37 = uVar37 + 1;
      } while (uVar37 < uVar36);
    }
  }
  else {
    lVar16 = (longlong)param_1 + 0x324;
    uVar39 = 0;
    do {
      local_220[uVar39 - 1] = lVar16;
      uVar39 = uVar39 + 1;
      lVar16 = lVar16 + 0x24;
    } while (uVar37 != uVar39);
    FUN_1401372f0(uVar37,&local_228);
    if (uVar36 != 1) {
      uVar39 = 0;
      piVar17 = (int *)CONCAT44(local_228._4_4_,(int)local_228);
      do {
        if ((*(byte *)(piVar17 + 8) & 6) == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0xc;
        }
        piVar9 = (int *)local_220[uVar39];
        piVar31 = piVar9 + 3;
        if ((*(byte *)(piVar9 + 8) & 6) == 0) {
          piVar31 = piVar9;
        }
        if (*piVar31 < *(int *)((longlong)piVar17 + lVar16)) {
          *(int *)((longlong)piVar17 + lVar16) = *piVar31;
          uVar37 = (ulonglong)*(uint *)(param_1 + 100);
        }
        uVar39 = uVar39 + 1;
        piVar17 = piVar9;
      } while (uVar39 < (int)uVar37 - 1);
    }
    uVar15 = 0;
  }
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_328)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_328);
  }
  return uVar15;
LAB_140136c56:
  do {
    uVar12 = (int)uVar33 + 1;
    if ((int)local_2fc <= (int)uVar33) {
      uVar12 = local_300;
    }
    uVar33 = (ulonglong)uVar12;
    iVar11 = *(int *)(local_2e8 + 4 + (longlong)(int)uVar12 * 8);
    uVar13 = uVar32 - iVar11;
    if ((int)uVar32 < iVar11) {
      uVar13 = iVar11 - uVar32;
    }
    uVar36 = uVar32;
    uVar19 = local_2f8;
    uVar22 = local_2f4;
    if (5 < uVar13) {
      iVar11 = *(int *)(local_2e8 + lVar16 * 8);
      uVar13 = iVar7 - iVar11;
      if (iVar7 < iVar11) {
        uVar13 = iVar11 - iVar7;
      }
      if (uVar13 <= uVar25 * 0x14) {
        uVar13 = local_2f0;
        uVar34 = local_2fc;
        if ((int)local_300 < (int)uVar12) {
          uVar34 = uVar12 - 1;
        }
        break;
      }
    }
    if ((int)local_2f8 < 0) {
      local_2f8 = uVar12;
    }
    if ((*(byte *)(local_2a8 + (int)uVar12) & 3) == 1) {
      uVar19 = local_2f8;
    }
    uVar13 = uVar38;
    uVar34 = uVar38;
    local_2f8 = uVar19;
    local_2f0 = uVar12;
  } while (uVar12 != uVar38);
LAB_140136b44:
  uVar36 = uVar36 + (int)local_228;
  if (((int)uVar19 < 0) || ((int)uVar13 < 0)) {
LAB_140136b85:
    if ((*(byte *)(local_2a8 + (int)uVar22) & 3) == 1) {
      bVar40 = (*(byte *)(local_2a8 + (int)uVar34) & 3) != 1;
      if ((bVar40) && ((short)local_274 != 0)) goto LAB_140136c0f;
    }
    else {
      bVar40 = true;
      if ((local_2dc & 4) != 0) goto LAB_140136c0f;
    }
  }
  else {
    iVar11 = *(int *)(local_2e8 + (ulonglong)uVar13 * 8);
    iVar5 = *(int *)(local_2e8 + (ulonglong)uVar19 * 8);
    uVar19 = iVar5 - iVar11;
    if (iVar5 < iVar11) {
      uVar19 = iVar11 - iVar5;
    }
    if (uVar19 <= (uint)local_238) goto LAB_140136b85;
LAB_14013694a:
    bVar40 = false;
  }
LAB_140136bbe:
  iVar11 = (int)local_2b0;
  if ((local_2dc & 1) == 0) {
    local_2b0 = local_2b0 & 0xffffffff;
    if ((int)uVar36 < iVar11) {
      local_2b0 = (ulonglong)uVar36;
    }
    local_2ec = local_2ec & 0xff;
    if ((int)uVar36 < iVar11) {
      local_2ec = (uint)bVar40;
    }
  }
  else {
    local_2b0 = local_2b0 & 0xffffffff;
    if (iVar11 < (int)uVar36) {
      local_2b0 = (ulonglong)uVar36;
    }
    local_2ec = local_2ec & 0xff;
    if (iVar11 < (int)uVar36) {
      local_2ec = (uint)bVar40;
    }
  }
LAB_140136c0f:
  iVar11 = local_26c + 1;
  if (local_26c + 1 == iVar18) goto LAB_140136d0d;
  goto LAB_1401365d0;
LAB_140136d0d:
  pcVar20 = local_268;
  if (1 < (int)local_2b0 + 0x80000001U) {
    uVar36 = (uint)local_298;
    if ((char)local_2ec == '\0') {
      uVar36 = (uint)uVar37;
      piVar17 = local_118;
      uVar37 = (ulonglong)(uVar36 + 1);
    }
    else {
      local_298 = (ulonglong)(uVar36 + 1);
      piVar17 = local_1e8;
    }
    piVar17[uVar36] = (int)local_2b0;
  }
LAB_140136d64:
  cVar10 = *pcVar20;
  if (cVar10 == '\0') goto LAB_140136d71;
  goto joined_r0x00014013655d;
}

