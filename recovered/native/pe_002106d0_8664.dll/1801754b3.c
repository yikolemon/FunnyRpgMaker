/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801754b3 */

longlong FUN_1801754b3(longlong param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  longlong lVar35;
  undefined1 uVar36;
  byte bVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  longlong lVar41;
  longlong lVar42;
  byte *pbVar43;
  undefined1 *puVar44;
  char *pcVar45;
  char *pcVar46;
  byte *pbVar47;
  ulonglong uVar48;
  uint uVar49;
  longlong lVar50;
  byte bVar51;
  int iVar52;
  uint uVar53;
  byte bVar54;
  longlong lVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auStack_4e8 [40];
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  ulonglong local_4a8;
  longlong local_4a0;
  ulonglong local_498;
  longlong local_490;
  char *local_488;
  byte local_480;
  byte local_47f;
  byte local_47e;
  byte local_47d;
  undefined1 local_47c [4];
  char local_478;
  char cStack_477;
  char cStack_476;
  char cStack_475;
  char cStack_474;
  char cStack_473;
  char cStack_472;
  char cStack_471;
  char cStack_470;
  char cStack_46f;
  char cStack_46e;
  char cStack_46d;
  char cStack_46c;
  char cStack_46b;
  char cStack_46a;
  char cStack_469;
  char cStack_468;
  char cStack_467;
  char cStack_466;
  char cStack_465;
  char cStack_464;
  char cStack_463;
  char cStack_462;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_4e8;
  FUN_18017f678(param_1,&local_478);
  if ((CONCAT17(cStack_46e,
                CONCAT16(cStack_46f,
                         CONCAT15(cStack_470,
                                  CONCAT14(cStack_471,
                                           CONCAT13(cStack_472,
                                                    CONCAT12(cStack_473,
                                                             CONCAT11(cStack_474,cStack_475)))))))
       == 0x45434e41494441 &&
       CONCAT17(cStack_471,
                CONCAT16(cStack_472,
                         CONCAT15(cStack_473,
                                  CONCAT14(cStack_474,
                                           CONCAT13(cStack_475,
                                                    CONCAT12(cStack_476,
                                                             CONCAT11(cStack_477,local_478))))))) ==
       0x4e41494441523f23) ||
     (CONCAT13(cStack_472,CONCAT12(cStack_473,CONCAT11(cStack_474,cStack_475))) == 0x454247 &&
      CONCAT13(cStack_475,CONCAT12(cStack_476,CONCAT11(cStack_477,local_478))) == 0x47523f23)) {
    FUN_18017f678(param_1,&local_478);
    cVar34 = UNK_1802e12df;
    cVar33 = UNK_1802e12de;
    cVar32 = UNK_1802e12dd;
    cVar31 = UNK_1802e12dc;
    cVar30 = UNK_1802e12db;
    cVar29 = UNK_1802e12da;
    cVar28 = UNK_1802e12d9;
    cVar27 = UNK_1802e12d8;
    cVar26 = UNK_1802e12d7;
    cVar25 = UNK_1802e12d6;
    cVar24 = UNK_1802e12d5;
    cVar23 = UNK_1802e12d4;
    cVar22 = UNK_1802e12d3;
    cVar21 = UNK_1802e12d2;
    cVar20 = UNK_1802e12d1;
    cVar19 = DAT_1802e12d0;
    cVar18 = s_32_bit_rle_rgbe_1802e12c0[0xf];
    cVar17 = s_32_bit_rle_rgbe_1802e12c0[0xe];
    cVar16 = s_32_bit_rle_rgbe_1802e12c0[0xd];
    cVar15 = s_32_bit_rle_rgbe_1802e12c0[0xc];
    cVar14 = s_32_bit_rle_rgbe_1802e12c0[0xb];
    cVar13 = s_32_bit_rle_rgbe_1802e12c0[10];
    cVar12 = s_32_bit_rle_rgbe_1802e12c0[9];
    cVar11 = s_32_bit_rle_rgbe_1802e12c0[8];
    cVar10 = s_32_bit_rle_rgbe_1802e12c0[7];
    cVar9 = s_32_bit_rle_rgbe_1802e12c0[6];
    cVar8 = s_32_bit_rle_rgbe_1802e12c0[5];
    cVar7 = s_32_bit_rle_rgbe_1802e12c0[4];
    cVar6 = s_32_bit_rle_rgbe_1802e12c0[3];
    cVar5 = s_32_bit_rle_rgbe_1802e12c0[2];
    cVar4 = s_32_bit_rle_rgbe_1802e12c0[1];
    cVar3 = s_32_bit_rle_rgbe_1802e12c0[0];
    if (local_478 != '\0') {
      bVar2 = false;
      do {
        auVar56[0] = -(cStack_471 == cVar3);
        auVar56[1] = -(cStack_470 == cVar4);
        auVar56[2] = -(cStack_46f == cVar5);
        auVar56[3] = -(cStack_46e == cVar6);
        auVar56[4] = -(cStack_46d == cVar7);
        auVar56[5] = -(cStack_46c == cVar8);
        auVar56[6] = -(cStack_46b == cVar9);
        auVar56[7] = -(cStack_46a == cVar10);
        auVar56[8] = -(cStack_469 == cVar11);
        auVar56[9] = -(cStack_468 == cVar12);
        auVar56[10] = -(cStack_467 == cVar13);
        auVar56[0xb] = -(cStack_466 == cVar14);
        auVar56[0xc] = -(cStack_465 == cVar15);
        auVar56[0xd] = -(cStack_464 == cVar16);
        auVar56[0xe] = -(cStack_463 == cVar17);
        auVar56[0xf] = -(cStack_462 == cVar18);
        auVar57[0] = -(local_478 == cVar19);
        auVar57[1] = -(cStack_477 == cVar20);
        auVar57[2] = -(cStack_476 == cVar21);
        auVar57[3] = -(cStack_475 == cVar22);
        auVar57[4] = -(cStack_474 == cVar23);
        auVar57[5] = -(cStack_473 == cVar24);
        auVar57[6] = -(cStack_472 == cVar25);
        auVar57[7] = -(cStack_471 == cVar26);
        auVar57[8] = -(cStack_470 == cVar27);
        auVar57[9] = -(cStack_46f == cVar28);
        auVar57[10] = -(cStack_46e == cVar29);
        auVar57[0xb] = -(cStack_46d == cVar30);
        auVar57[0xc] = -(cStack_46c == cVar31);
        auVar57[0xd] = -(cStack_46b == cVar32);
        auVar57[0xe] = -(cStack_46a == cVar33);
        auVar57[0xf] = -(cStack_469 == cVar34);
        auVar57 = auVar57 & auVar56;
        if ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) == 0xffff) {
          bVar2 = true;
        }
        FUN_18017f678(param_1,&local_478);
      } while (local_478 != '\0');
      if (bVar2) {
        FUN_18017f678(param_1,&local_478);
        if (cStack_476 == ' ' && CONCAT11(cStack_477,local_478) == 0x592d) {
          local_488 = &cStack_475;
          uVar38 = FUN_18028b370(local_488,&local_488,10);
          pcVar45 = local_488 + 2;
          do {
            pcVar46 = pcVar45;
            pcVar45 = pcVar46 + 1;
          } while (pcVar46[-2] == ' ');
          if (((pcVar46[-2] == '+') && (pcVar46[-1] == 'X')) && (*pcVar46 == ' ')) {
            local_488 = pcVar45;
            uVar39 = FUN_18028b370(pcVar45,0,10);
            if (((int)uVar38 < 0x1000001) && ((int)uVar39 < 0x1000001)) {
              *param_2 = uVar39;
              *param_3 = uVar38;
              iVar40 = FUN_18017f33a(uVar39,uVar38,4,4);
              if (iVar40 != 0) {
                lVar41 = FUN_18017f394(uVar39,uVar38,4,4);
                if (lVar41 != 0) {
                  iVar40 = 0;
                  if (uVar39 - 0x8000 < 0xffff8008) goto LAB_180175b0f;
                  if (0 < (int)uVar38) {
                    local_4a8 = (ulonglong)uVar38;
                    local_4a0 = (ulonglong)uVar39 << 2;
                    lVar42 = 0;
                    lVar50 = 0;
                    uVar48 = 0;
                    do {
                      pbVar43 = *(byte **)(param_1 + 0xc0);
                      pbVar47 = *(byte **)(param_1 + 200);
                      local_498 = uVar48;
                      local_490 = lVar50;
                      if (pbVar43 < pbVar47) {
                        *(byte **)(param_1 + 0xc0) = pbVar43 + 1;
                        bVar37 = *pbVar43;
                        pbVar43 = pbVar43 + 1;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bVar37 = 0;
                      }
                      else {
                        FUN_180176673(param_1);
                        pbVar1 = *(byte **)(param_1 + 0xc0);
                        pbVar47 = *(byte **)(param_1 + 200);
                        pbVar43 = pbVar1 + 1;
                        *(byte **)(param_1 + 0xc0) = pbVar43;
                        bVar37 = *pbVar1;
                      }
                      if (pbVar43 < pbVar47) {
                        *(byte **)(param_1 + 0xc0) = pbVar43 + 1;
                        bVar54 = *pbVar43;
                        pbVar43 = pbVar43 + 1;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bVar54 = 0;
                      }
                      else {
                        FUN_180176673(param_1);
                        pbVar1 = *(byte **)(param_1 + 0xc0);
                        pbVar47 = *(byte **)(param_1 + 200);
                        pbVar43 = pbVar1 + 1;
                        *(byte **)(param_1 + 0xc0) = pbVar43;
                        bVar54 = *pbVar1;
                      }
                      if (pbVar43 < pbVar47) {
LAB_180175795:
                        *(byte **)(param_1 + 0xc0) = pbVar43 + 1;
                        bVar51 = *pbVar43;
                        pbVar43 = pbVar43 + 1;
                      }
                      else {
                        if (*(int *)(param_1 + 0x30) != 0) {
                          FUN_180176673(param_1);
                          pbVar43 = *(byte **)(param_1 + 0xc0);
                          goto LAB_180175795;
                        }
                        bVar51 = 0;
                      }
                      if (((bVar37 != 2) || (bVar54 != 2)) || ((char)bVar51 < '\0')) {
                        local_480 = bVar37;
                        local_47f = bVar54;
                        local_47e = bVar51;
                        if (*(byte **)(param_1 + 200) <= pbVar43) {
                          if (*(int *)(param_1 + 0x30) == 0) {
                            local_47d = 0;
                            goto LAB_180175a9a;
                          }
                          FUN_180176673(param_1);
                          pbVar43 = *(byte **)(param_1 + 0xc0);
                        }
                        *(byte **)(param_1 + 0xc0) = pbVar43 + 1;
                        local_47d = *pbVar43;
LAB_180175a9a:
                        FUN_18017f7cf(lVar41);
                        thunk_FUN_180290e40(lVar42);
                        iVar40 = 0;
                        iVar52 = 1;
                        do {
                          FUN_18017759e(param_1,local_47c,4);
                          FUN_18017f7cf(lVar41 + (longlong)(int)(uVar39 * iVar40 * 4) * 4 +
                                        (longlong)(iVar52 * 4) * 4,local_47c);
                          iVar52 = iVar52 + 1;
                          while ((int)uVar39 <= iVar52) {
                            iVar40 = iVar40 + 1;
LAB_180175b0f:
                            iVar52 = 0;
                            if ((int)uVar38 <= iVar40) goto LAB_1801759fa;
                          }
                        } while( true );
                      }
                      if (pbVar43 < *(byte **)(param_1 + 200)) {
LAB_1801757e5:
                        *(byte **)(param_1 + 0xc0) = pbVar43 + 1;
                        uVar49 = (uint)*pbVar43;
                      }
                      else {
                        if (*(int *)(param_1 + 0x30) != 0) {
                          FUN_180176673(param_1);
                          pbVar43 = *(byte **)(param_1 + 0xc0);
                          goto LAB_1801757e5;
                        }
                        uVar49 = 0;
                      }
                      if (((uint)bVar51 << 8 | uVar49) != uVar39) {
                        thunk_FUN_180290e40(lVar41);
                        thunk_FUN_180290e40(lVar42);
                        pcVar45 = "invalid decoded scanline length";
                        goto LAB_1801759f3;
                      }
                      if (lVar42 == 0) {
                        lVar42 = FUN_180178f9d(uVar39,4,0);
                        if (lVar42 == 0) {
                          thunk_FUN_180290e40(lVar41);
                          goto LAB_180175ae0;
                        }
                      }
                      local_4b0 = 0;
                      local_4c0 = lVar42;
                      local_4b8 = lVar42;
                      do {
                        iVar40 = 0;
                        uVar49 = uVar39;
                        do {
                          pbVar43 = *(byte **)(param_1 + 0xc0);
                          if (*(byte **)(param_1 + 200) <= pbVar43) {
                            if (*(int *)(param_1 + 0x30) != 0) {
                              FUN_180176673(param_1);
                              pbVar43 = *(byte **)(param_1 + 0xc0);
                              goto LAB_180175868;
                            }
LAB_180175a45:
                            thunk_FUN_180290e40(lVar41);
                            thunk_FUN_180290e40(local_4c0);
                            pcVar45 = "corrupt";
                            goto LAB_1801759f3;
                          }
LAB_180175868:
                          *(byte **)(param_1 + 0xc0) = pbVar43 + 1;
                          bVar37 = *pbVar43;
                          uVar53 = (uint)bVar37;
                          if (bVar37 < 0x81) {
                            if ((bVar37 == 0) || (uVar49 < uVar53)) goto LAB_180175a45;
                            lVar42 = local_4b8 + (longlong)iVar40 * 4;
                            lVar50 = 0;
                            do {
                              puVar44 = *(undefined1 **)(param_1 + 0xc0);
                              if (puVar44 < *(undefined1 **)(param_1 + 200)) {
LAB_1801758e9:
                                *(undefined1 **)(param_1 + 0xc0) = puVar44 + 1;
                                uVar36 = *puVar44;
                              }
                              else {
                                if (*(int *)(param_1 + 0x30) != 0) {
                                  FUN_180176673(param_1);
                                  puVar44 = *(undefined1 **)(param_1 + 0xc0);
                                  goto LAB_1801758e9;
                                }
                                uVar36 = 0;
                              }
                              *(undefined1 *)(lVar42 + lVar50 * 4) = uVar36;
                              lVar50 = lVar50 + 1;
                            } while (uVar53 != (uint)lVar50);
                            iVar40 = iVar40 + (uint)lVar50;
                          }
                          else {
                            if (pbVar43 + 1 < *(byte **)(param_1 + 200)) {
                              *(byte **)(param_1 + 0xc0) = pbVar43 + 2;
                              bVar37 = pbVar43[1];
                            }
                            else if (*(int *)(param_1 + 0x30) == 0) {
                              bVar37 = 0;
                            }
                            else {
                              FUN_180176673(param_1);
                              pbVar43 = *(byte **)(param_1 + 0xc0);
                              *(byte **)(param_1 + 0xc0) = pbVar43 + 1;
                              bVar37 = *pbVar43;
                            }
                            uVar53 = uVar53 & 0x7f;
                            if (uVar49 < uVar53) goto LAB_180175a45;
                            if ((char)uVar53 != '\0') {
                              lVar42 = 0;
                              do {
                                *(byte *)(local_4b8 + (longlong)iVar40 * 4 + lVar42 * 4) = bVar37;
                                lVar42 = lVar42 + 1;
                              } while (uVar53 != (uint)lVar42);
                              iVar40 = iVar40 + (uint)lVar42;
                            }
                          }
                          lVar50 = local_490;
                          lVar35 = local_4a0;
                          lVar42 = local_4c0;
                          uVar49 = uVar39 - iVar40;
                        } while (uVar49 != 0 && iVar40 <= (int)uVar39);
                        local_4b0 = local_4b0 + 1;
                        local_4b8 = local_4b8 + 1;
                      } while (local_4b0 != 4);
                      lVar55 = 0;
                      do {
                        FUN_18017f7cf(lVar41 + (ulonglong)((int)lVar55 + (int)lVar50 & 0xfffffffc) *
                                               4,lVar55 + lVar42);
                        lVar55 = lVar55 + 4;
                      } while (lVar35 != lVar55);
                      uVar48 = local_498 + 1;
                      lVar50 = lVar50 + lVar35;
                    } while (uVar48 != local_4a8);
                    thunk_FUN_180290e40(lVar42);
                  }
                  goto LAB_1801759fa;
                }
LAB_180175ae0:
                pcVar45 = "outofmem";
                goto LAB_1801759f3;
              }
            }
            pcVar45 = "too large";
            goto LAB_1801759f3;
          }
        }
        pcVar45 = "unsupported data layout";
        goto LAB_1801759f3;
      }
    }
    pcVar45 = "unsupported format";
  }
  else {
    pcVar45 = "not HDR";
  }
LAB_1801759f3:
  FUN_1801765d0(pcVar45);
  lVar41 = 0;
LAB_1801759fa:
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_4e8)) {
    return lVar41;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_4e8);
}

