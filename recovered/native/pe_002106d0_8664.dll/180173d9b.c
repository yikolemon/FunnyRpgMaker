/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173d9b */

longlong FUN_180173d9b(uint *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 auStack_4f8 [32];
  uint local_4d8;
  int local_4d4;
  int local_4d0;
  uint local_4cc;
  int local_4c8;
  uint local_4c4;
  ulonglong local_4c0;
  ulonglong local_4b8;
  undefined4 local_4b0;
  uint local_4ac;
  int local_4a8;
  uint local_4a4;
  uint local_4a0;
  uint local_49c;
  longlong local_498;
  uint local_490;
  int local_48c;
  uint *local_488;
  uint *local_480;
  longlong local_478;
  int local_46c;
  uint local_468;
  int local_464;
  undefined4 local_460;
  uint local_45c;
  uint local_458;
  int local_454;
  uint local_450;
  int local_44c;
  undefined1 auStack_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_4f8;
  local_450 = 0xff;
  lVar9 = FUN_180179225();
  uVar18 = local_450;
  if (lVar9 != 0) {
    uVar5 = param_1[1];
    uVar7 = -uVar5;
    if ((int)-uVar5 < 0) {
      uVar7 = uVar5;
    }
    param_1[1] = uVar7;
    if ((uVar7 < 0x1000001) && (*param_1 < 0x1000001)) {
      local_4d8 = local_458;
      local_4c0 = CONCAT44(local_4c0._4_4_,local_454);
      local_490 = uVar5;
      if (local_464 == 0xc) {
        if (0x17 < local_46c) goto LAB_180173f98;
        uVar5 = (int)((local_468 - local_44c) + -0x18) / 3;
LAB_180173edf:
        if (uVar5 == 0) goto LAB_180173f98;
        local_4cc = local_45c;
        local_4b8 = CONCAT44(local_4b8._4_4_,local_460);
        local_4d4 = CONCAT31(local_4d4._1_3_,local_454 == -0x1000000);
        bVar3 = false;
LAB_180173f05:
        bVar2 = bVar3;
        uVar7 = uVar5;
        local_4c8 = local_46c;
        uVar5 = 4 - (local_454 == 0);
LAB_180173f1a:
        param_1[2] = uVar5;
        uVar5 = *param_1;
        uVar21 = param_1[1];
        local_488 = param_2;
        local_480 = param_3;
        iVar6 = FUN_180178f1f(4,uVar5,uVar21,0);
        if (iVar6 == 0) goto LAB_180173dfe;
        lVar9 = FUN_180178ee1(4,uVar5,uVar21,0);
        iVar6 = local_4c8;
        if (lVar9 == 0) {
          pcVar13 = "outofmem";
          goto LAB_180173e05;
        }
        local_498 = lVar9;
        if (local_4c8 < 0x10) {
          if (bVar2 || 0x100 < (int)uVar7) {
            thunk_FUN_180290e40(lVar9);
            pcVar13 = "invalid";
            goto LAB_180173e05;
          }
          local_4c0 = (ulonglong)local_468;
          if (0 < (int)uVar7) {
            puVar10 = *(undefined1 **)(param_1 + 0x30);
            uVar27 = 0;
            puVar14 = puVar10;
            do {
              puVar16 = *(undefined1 **)(param_1 + 0x32);
              if (puVar14 < puVar16) {
LAB_1801740f8:
                puVar10 = puVar14 + 1;
                *(undefined1 **)(param_1 + 0x30) = puVar10;
                uVar4 = *puVar14;
                puVar14 = puVar10;
              }
              else {
                if (param_1[0xc] != 0) {
                  FUN_180176673(param_1);
                  puVar14 = *(undefined1 **)(param_1 + 0x30);
                  puVar16 = *(undefined1 **)(param_1 + 0x32);
                  goto LAB_1801740f8;
                }
                uVar4 = 0;
              }
              auStack_448[uVar27 * 4 + 2] = uVar4;
              if (puVar14 < puVar16) {
LAB_180174136:
                puVar10 = puVar14 + 1;
                *(undefined1 **)(param_1 + 0x30) = puVar10;
                uVar4 = *puVar14;
                puVar14 = puVar10;
              }
              else {
                if (param_1[0xc] != 0) {
                  FUN_180176673(param_1);
                  puVar14 = *(undefined1 **)(param_1 + 0x30);
                  puVar16 = *(undefined1 **)(param_1 + 0x32);
                  goto LAB_180174136;
                }
                uVar4 = 0;
              }
              auStack_448[uVar27 * 4 + 1] = uVar4;
              if (puVar14 < puVar16) {
LAB_18017416d:
                puVar10 = puVar14 + 1;
                *(undefined1 **)(param_1 + 0x30) = puVar10;
                uVar4 = *puVar14;
                puVar14 = puVar10;
              }
              else {
                if (param_1[0xc] != 0) {
                  FUN_180176673(param_1);
                  puVar14 = *(undefined1 **)(param_1 + 0x30);
                  goto LAB_18017416d;
                }
                uVar4 = 0;
              }
              auStack_448[uVar27 * 4] = uVar4;
              if (local_464 != 0xc) {
                if (*(undefined1 **)(param_1 + 0x32) <= puVar10) {
                  puVar14 = puVar10;
                  if (param_1[0xc] == 0) goto LAB_1801741b8;
                  FUN_180176673(param_1);
                  puVar10 = *(undefined1 **)(param_1 + 0x30);
                }
                puVar10 = puVar10 + 1;
                *(undefined1 **)(param_1 + 0x30) = puVar10;
                puVar14 = puVar10;
              }
LAB_1801741b8:
              auStack_448[uVar27 * 4 + 3] = 0xff;
              uVar27 = uVar27 + 1;
            } while (uVar7 != uVar27);
          }
          FUN_180177488(param_1);
          if (iVar6 == 1) {
            uVar5 = param_1[1];
            if (0 < (int)uVar5) {
              iVar6 = 0;
              iVar19 = 0;
              do {
                pbVar12 = *(byte **)(param_1 + 0x30);
                if (pbVar12 < *(byte **)(param_1 + 0x32)) {
LAB_180174813:
                  *(byte **)(param_1 + 0x30) = pbVar12 + 1;
                  uVar5 = (uint)*pbVar12;
                  pbVar12 = pbVar12 + 1;
                }
                else {
                  if (param_1[0xc] != 0) {
                    FUN_180176673(param_1);
                    pbVar12 = *(byte **)(param_1 + 0x30);
                    goto LAB_180174813;
                  }
                  uVar5 = 0;
                }
                uVar7 = *param_1;
                if (0 < (int)uVar7) {
                  lVar25 = lVar9 + 3 + (longlong)iVar6;
                  uVar21 = 7;
                  lVar28 = 0;
                  do {
                    iVar6 = iVar6 + 4;
                    uVar27 = (ulonglong)((uVar5 >> (uVar21 & 0x1f) & 1) != 0);
                    *(undefined1 *)(lVar25 + -3 + lVar28 * 4) = auStack_448[uVar27 * 4];
                    *(undefined1 *)(lVar25 + -2 + lVar28 * 4) = auStack_448[uVar27 * 4 + 1];
                    *(undefined1 *)(lVar25 + -1 + lVar28 * 4) = auStack_448[uVar27 * 4 + 2];
                    *(undefined1 *)(lVar25 + lVar28 * 4) = 0xff;
                    if ((int)lVar28 + 1U == uVar7) break;
                    if ((int)uVar21 < 1) {
                      if (pbVar12 < *(byte **)(param_1 + 0x32)) {
                        *(byte **)(param_1 + 0x30) = pbVar12 + 1;
                        bVar20 = *pbVar12;
                        pbVar12 = pbVar12 + 1;
                      }
                      else if (param_1[0xc] == 0) {
                        bVar20 = 0;
                      }
                      else {
                        FUN_180176673(param_1);
                        pbVar15 = *(byte **)(param_1 + 0x30);
                        pbVar12 = pbVar15 + 1;
                        *(byte **)(param_1 + 0x30) = pbVar12;
                        bVar20 = *pbVar15;
                        uVar7 = *param_1;
                      }
                      uVar5 = (uint)bVar20;
                      uVar21 = 7;
                    }
                    else {
                      uVar21 = uVar21 - 1;
                    }
                    lVar28 = lVar28 + 1;
                  } while ((int)lVar28 < (int)uVar7);
                }
                FUN_180177488(param_1);
                iVar19 = iVar19 + 1;
                uVar5 = param_1[1];
              } while (iVar19 < (int)uVar5);
            }
          }
          else {
            if (iVar6 == 8) {
              uVar7 = *param_1;
            }
            else {
              if (iVar6 != 4) {
                thunk_FUN_180290e40(lVar9);
                pcVar13 = "bad bpp";
                goto LAB_180173e05;
              }
              uVar7 = *param_1 + 1 >> 1;
            }
            uVar5 = param_1[1];
            if (0 < (int)uVar5) {
              local_4d8 = -uVar7 & 3;
              local_4b8 = lVar9 + 7;
              iVar19 = 0;
              iVar26 = 0;
              do {
                uVar5 = *param_1;
                if (0 < (int)uVar5) {
                  local_4c0 = CONCAT44(local_4c0._4_4_,iVar19);
                  lVar9 = (longlong)iVar19 + local_4b8;
                  pbVar12 = *(byte **)(param_1 + 0x30);
                  iVar19 = 0;
                  lVar25 = 0;
                  pbVar15 = pbVar12;
                  do {
                    if (pbVar15 < *(byte **)(param_1 + 0x32)) {
                      pbVar12 = pbVar15 + 1;
                      *(byte **)(param_1 + 0x30) = pbVar12;
                      bVar20 = *pbVar15;
                      pbVar15 = pbVar12;
                    }
                    else if (param_1[0xc] == 0) {
                      bVar20 = 0;
                    }
                    else {
                      FUN_180176673(param_1);
                      pbVar15 = *(byte **)(param_1 + 0x30);
                      pbVar12 = pbVar15 + 1;
                      *(byte **)(param_1 + 0x30) = pbVar12;
                      bVar20 = *pbVar15;
                      uVar5 = *param_1;
                      pbVar15 = pbVar12;
                    }
                    bVar1 = bVar20 >> 4;
                    if (iVar6 != 4) {
                      bVar1 = bVar20;
                    }
                    uVar27 = (ulonglong)bVar1;
                    *(undefined1 *)(lVar9 + -7 + lVar25 * 4) = auStack_448[uVar27 * 4];
                    *(undefined1 *)(lVar9 + -6 + lVar25 * 4) = auStack_448[uVar27 * 4 + 1];
                    *(undefined1 *)(lVar9 + -5 + lVar25 * 4) = auStack_448[uVar27 * 4 + 2];
                    *(undefined1 *)(lVar9 + -4 + lVar25 * 4) = 0xff;
                    if ((int)lVar25 + 1U == uVar5) {
                      iVar19 = ((uint)local_4c0 - iVar19) + 4;
                      goto LAB_1801747a6;
                    }
                    uVar7 = bVar20 & 0xf;
                    if (iVar6 != 4) {
                      uVar7 = 0;
                    }
                    if (iVar6 == 8) {
                      if (pbVar12 < *(byte **)(param_1 + 0x32)) {
                        *(byte **)(param_1 + 0x30) = pbVar12 + 1;
                        bVar20 = *pbVar12;
                        pbVar12 = pbVar12 + 1;
                      }
                      else if (param_1[0xc] == 0) {
                        bVar20 = 0;
                      }
                      else {
                        FUN_180176673(param_1);
                        pbVar15 = *(byte **)(param_1 + 0x30);
                        pbVar12 = pbVar15 + 1;
                        *(byte **)(param_1 + 0x30) = pbVar12;
                        bVar20 = *pbVar15;
                        uVar5 = *param_1;
                      }
                      uVar7 = (uint)bVar20;
                      pbVar15 = pbVar12;
                    }
                    uVar27 = (ulonglong)uVar7;
                    *(undefined1 *)(lVar9 + -3 + lVar25 * 4) = auStack_448[uVar27 * 4];
                    *(undefined1 *)(lVar9 + -2 + lVar25 * 4) = auStack_448[uVar27 * 4 + 1];
                    *(undefined1 *)(lVar9 + -1 + lVar25 * 4) = auStack_448[uVar27 * 4 + 2];
                    *(undefined1 *)(lVar9 + lVar25 * 4) = 0xff;
                    iVar19 = iVar19 + -8;
                    lVar25 = lVar25 + 2;
                  } while ((int)lVar25 < (int)uVar5);
                  iVar19 = (uint)local_4c0 - iVar19;
                }
LAB_1801747a6:
                FUN_180177488(param_1,local_4d8);
                iVar26 = iVar26 + 1;
                uVar5 = param_1[1];
              } while (iVar26 < (int)uVar5);
            }
          }
        }
        else {
          FUN_180177488(param_1,local_468 - (local_464 + local_44c));
          uVar27 = local_4b8;
          uVar5 = local_4cc;
          uVar7 = (uint)local_4b8;
          if (iVar6 == 0x10) {
            local_4c4 = *param_1 * 2 & 2;
LAB_1801742bd:
            if ((local_4cc != 0 && (uint)local_4b8 != 0) && local_4d8 != 0) {
              local_4d0 = FUN_18017953e(local_4b8 & 0xffffffff);
              local_4b8 = CONCAT44(local_4b8._4_4_,uVar7);
              uVar21 = FUN_1801795a4(uVar27 & 0xffffffff);
              local_4d4 = FUN_18017953e(uVar5);
              uVar7 = local_4d8;
              local_4cc = uVar5;
              uVar5 = FUN_1801795a4(uVar5);
              iVar6 = FUN_18017953e(uVar7);
              uVar7 = FUN_1801795a4(uVar7);
              uVar27 = local_4c0;
              local_4a8 = FUN_18017953e(local_4c0 & 0xffffffff);
              uVar11 = FUN_1801795a4(uVar27 & 0xffffffff);
              local_4ac = (uint)uVar11;
              local_4a4 = uVar7;
              local_4a0 = uVar5;
              local_49c = uVar21;
              if ((local_4ac < 9 && uVar7 < 9) && (uVar5 < 9 && uVar21 < 9)) {
                iVar26 = local_4d0 + -7;
                iVar24 = local_4d4 + -7;
                iVar6 = iVar6 + -7;
                iVar19 = local_4a8 + -7;
                local_4b0 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
                local_4d0 = 0;
                goto LAB_1801743b8;
              }
            }
            thunk_FUN_180290e40(lVar9);
            pcVar13 = "bad masks";
            goto LAB_180173e05;
          }
          if (iVar6 == 0x20) {
            uVar21 = (uint)local_4b8 ^ 0xff0000 | local_4cc ^ 0xff00 | local_4d8 ^ 0xff;
            local_4c4 = 0;
            if (((byte)local_4d4 & uVar21 == 0) != 0) {
              local_4d0 = (int)CONCAT71((uint7)(uint3)(uVar21 >> 8),1);
              goto LAB_18017426d;
            }
            goto LAB_1801742bd;
          }
          local_4c4 = 0;
          if (iVar6 != 0x18) goto LAB_1801742bd;
          local_4c4 = *param_1 & 3;
          local_4d0 = 0;
LAB_18017426d:
          local_4b0 = 0;
          iVar26 = 0;
          iVar24 = 0;
          iVar6 = 0;
          iVar19 = 0;
          local_49c = 0;
          local_4a0 = 0;
          local_4a4 = 0;
          local_4ac = 0;
LAB_1801743b8:
          uVar5 = param_1[1];
          if (0 < (int)uVar5) {
            local_478 = local_498 + 3;
            iVar29 = 0;
            iVar8 = 0;
            local_4d4 = iVar24;
            local_4a8 = iVar19;
            do {
              local_48c = iVar8;
              if ((char)local_4b0 == '\0') {
                if (0 < (int)*param_1) {
                  pbVar12 = *(byte **)(param_1 + 0x30);
                  lVar9 = iVar29 + local_478;
                  lVar25 = 0;
                  pbVar15 = pbVar12;
                  do {
                    pbVar17 = *(byte **)(param_1 + 0x32);
                    if (pbVar15 < pbVar17) {
LAB_1801744f9:
                      pbVar12 = pbVar15 + 1;
                      *(byte **)(param_1 + 0x30) = pbVar12;
                      bVar20 = *pbVar15;
                      pbVar15 = pbVar12;
                    }
                    else {
                      if (param_1[0xc] != 0) {
                        FUN_180176673(param_1);
                        pbVar15 = *(byte **)(param_1 + 0x30);
                        pbVar17 = *(byte **)(param_1 + 0x32);
                        goto LAB_1801744f9;
                      }
                      bVar20 = 0;
                    }
                    *(byte *)(lVar9 + -1 + lVar25 * 4) = bVar20;
                    if (pbVar15 < pbVar17) {
LAB_180174534:
                      pbVar12 = pbVar15 + 1;
                      *(byte **)(param_1 + 0x30) = pbVar12;
                      bVar20 = *pbVar15;
                      pbVar15 = pbVar12;
                    }
                    else {
                      if (param_1[0xc] != 0) {
                        FUN_180176673(param_1);
                        pbVar15 = *(byte **)(param_1 + 0x30);
                        pbVar17 = *(byte **)(param_1 + 0x32);
                        goto LAB_180174534;
                      }
                      bVar20 = 0;
                    }
                    *(byte *)(lVar9 + -2 + lVar25 * 4) = bVar20;
                    if (pbVar15 < pbVar17) {
LAB_180174568:
                      pbVar12 = pbVar15 + 1;
                      *(byte **)(param_1 + 0x30) = pbVar12;
                      bVar20 = *pbVar15;
                      pbVar15 = pbVar12;
                    }
                    else {
                      if (param_1[0xc] != 0) {
                        FUN_180176673(param_1);
                        pbVar15 = *(byte **)(param_1 + 0x30);
                        goto LAB_180174568;
                      }
                      bVar20 = 0;
                    }
                    *(byte *)(lVar9 + -3 + lVar25 * 4) = bVar20;
                    bVar20 = 0xff;
                    if ((char)local_4d0 != '\0') {
                      if (*(byte **)(param_1 + 0x32) <= pbVar12) {
                        if (param_1[0xc] == 0) {
                          bVar20 = 0;
                          pbVar15 = pbVar12;
                          goto LAB_1801745b4;
                        }
                        FUN_180176673(param_1);
                        pbVar12 = *(byte **)(param_1 + 0x30);
                      }
                      pbVar15 = pbVar12 + 1;
                      *(byte **)(param_1 + 0x30) = pbVar15;
                      bVar20 = *pbVar12;
                      pbVar12 = pbVar15;
                    }
LAB_1801745b4:
                    uVar18 = uVar18 | bVar20;
                    *(byte *)(lVar9 + lVar25 * 4) = bVar20;
                    lVar25 = lVar25 + 1;
                    iVar29 = iVar29 + 4;
                  } while ((int)lVar25 < (int)*param_1);
                }
              }
              else if (0 < (int)*param_1) {
                lVar9 = iVar29 + local_478;
                lVar25 = 0;
                do {
                  if (local_4c8 == 0x10) {
                    uVar5 = FUN_18017918c(param_1);
                  }
                  else {
                    uVar5 = FUN_180179168(param_1);
                  }
                  uVar4 = FUN_1801795e1(uVar5 & (uint)local_4b8,iVar26,local_49c);
                  *(undefined1 *)(lVar9 + -3 + lVar25 * 4) = uVar4;
                  uVar4 = FUN_1801795e1(uVar5 & local_4cc,local_4d4,local_4a0);
                  *(undefined1 *)(lVar9 + -2 + lVar25 * 4) = uVar4;
                  uVar4 = FUN_1801795e1(uVar5 & local_4d8,iVar6);
                  *(undefined1 *)(lVar9 + -1 + lVar25 * 4) = uVar4;
                  if ((uint)local_4c0 == 0) {
                    uVar5 = 0xff;
                  }
                  else {
                    uVar5 = FUN_1801795e1(uVar5 & (uint)local_4c0,local_4a8);
                  }
                  uVar18 = uVar18 | uVar5;
                  *(char *)(lVar9 + lVar25 * 4) = (char)uVar5;
                  lVar25 = lVar25 + 1;
                  iVar29 = iVar29 + 4;
                } while ((int)lVar25 < (int)*param_1);
              }
              FUN_180177488(param_1,local_4c4);
              iVar8 = local_48c + 1;
              uVar5 = param_1[1];
            } while (iVar8 < (int)uVar5);
          }
        }
        if ((uVar18 == 0) && (iVar6 = *param_1 * uVar5 * 4, -1 < iVar6 + -1)) {
          uVar27 = (ulonglong)(iVar6 - 4) + 7;
          do {
            *(undefined1 *)(local_498 + -4 + uVar27) = 0xff;
            uVar27 = uVar27 - 4;
          } while (3 < uVar27);
        }
        if ((int)local_490 < 1) {
          uVar18 = *param_1;
        }
        else {
          uVar18 = *param_1;
          if (0 < (int)uVar5 >> 1) {
            uVar7 = uVar18 * 4;
            uVar27 = 1;
            if (1 < (int)uVar7) {
              uVar27 = (ulonglong)uVar7;
            }
            uVar21 = (uVar5 - 1) * uVar18 * 4;
            uVar22 = 0;
            uVar23 = 0;
            do {
              if (0 < (int)uVar18) {
                uVar30 = 0;
                do {
                  uVar4 = *(undefined1 *)(uVar23 + local_498 + uVar30);
                  *(undefined1 *)(uVar23 + local_498 + uVar30) =
                       *(undefined1 *)((ulonglong)uVar21 + local_498 + uVar30);
                  *(undefined1 *)((ulonglong)uVar21 + local_498 + uVar30) = uVar4;
                  uVar30 = uVar30 + 1;
                } while (uVar27 != uVar30);
              }
              uVar22 = uVar22 + 1;
              uVar21 = uVar21 + uVar18 * -4;
              uVar23 = (ulonglong)((int)uVar23 + uVar7);
            } while (uVar22 != (uint)((int)uVar5 >> 1));
          }
        }
        *local_488 = uVar18;
        *local_480 = param_1[1];
        lVar9 = local_498;
        goto LAB_180173e0c;
      }
      if (local_46c < 0x10) {
        uVar5 = (int)(local_468 - (local_44c + local_464)) >> 2;
        goto LAB_180173edf;
      }
LAB_180173f98:
      iVar6 = (param_1[0x30] - param_1[0x34]) + param_1[0x2e];
      if (iVar6 - 0x401U < 0xfffffc00) {
        pcVar13 = "bad header";
      }
      else {
        if ((iVar6 <= (int)local_468) && ((int)(local_468 - iVar6) < 0x401)) {
          local_4cc = local_45c;
          local_4b8 = CONCAT44(local_4b8._4_4_,local_460);
          FUN_180177488(param_1);
          bVar2 = true;
          uVar7 = 0;
          local_4d4 = CONCAT31(local_4d4._1_3_,(uint)local_4c0 == -0x1000000);
          local_454 = (uint)local_4c0;
          uVar5 = 0;
          bVar3 = true;
          if (local_46c != 0x18 || (uint)local_4c0 != -0x1000000) goto LAB_180173f05;
          uVar5 = 3;
          local_4c8 = 0x18;
          goto LAB_180173f1a;
        }
        pcVar13 = "bad offset";
      }
    }
    else {
LAB_180173dfe:
      pcVar13 = "too large";
    }
LAB_180173e05:
    FUN_1801765d0(pcVar13);
  }
  lVar9 = 0;
LAB_180173e0c:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_4f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_4f8);
  }
  return lVar9;
}

