/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004468b */

ulonglong FUN_14004468b(longlong *param_1,ushort *param_2,longlong param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  ushort uVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 extraout_var;
  undefined1 (*pauVar21) [32];
  longlong lVar22;
  ushort *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 (*pauVar28) [32];
  undefined1 *puVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 *puVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  ushort *puVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  undefined1 (*pauVar42) [32];
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  undefined1 auStackY_158 [32];
  uint local_120;
  longlong local_d8;
  longlong local_b0;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_158;
  uVar20 = 0;
  local_4c = 0;
  lVar11 = *param_1;
  plVar12 = *(longlong **)(lVar11 + 0xa0);
  lVar13 = plVar12[6];
  uVar33 = *(uint *)((longlong)param_1 + 0x24);
  uVar6 = param_2[1];
  uVar44 = (ulonglong)uVar6;
  uVar27 = uVar44 + 4;
  puVar14 = *(uint **)(lVar11 + 0x408);
  local_54 = 0;
  do {
    *(int *)(param_3 + uVar20 * 8) = *(int *)(*(longlong *)(param_2 + 4) + uVar20 * 8) << 6;
    *(int *)(param_3 + 4 + uVar20 * 8) = *(int *)(*(longlong *)(param_2 + 4) + 4 + uVar20 * 8) << 6;
    uVar20 = uVar20 + 1;
  } while (uVar27 != uVar20);
  if (*(char *)(lVar11 + 0x401) == '\0') {
    pauVar21 = (undefined1 (*) [32])0x0;
    local_b0 = 0;
LAB_1400447cf:
    FUN_14001c53d(lVar13,local_b0);
LAB_1400447d7:
    FUN_14001c53d(lVar13,(longlong)pauVar21);
  }
  else {
    if (puVar14 == (uint *)0x0) {
      uVar20 = 6;
      goto LAB_1400447f8;
    }
    uVar20 = 0;
    if (puVar14[0x20] <= uVar33) goto LAB_1400447f8;
    uVar34 = *(uint *)(*(longlong *)(puVar14 + 0x22) + (ulonglong)uVar33 * 4);
    uVar33 = *(int *)(*(longlong *)(puVar14 + 0x22) + 4 + (ulonglong)uVar33 * 4) - uVar34;
    if ((uVar33 == 0) || (uVar20 = FUN_140020a41((longlong)plVar12,uVar34), (int)uVar20 != 0))
    goto LAB_1400447f8;
    local_4c = FUN_140021063(plVar12,uVar33);
    uVar20 = CONCAT44(extraout_var,local_4c);
    if (local_4c != 0) goto LAB_1400447f8;
    lVar30 = plVar12[7];
    lVar15 = *plVar12;
    uVar16 = FUN_1400211ce((longlong)plVar12);
    uVar17 = FUN_1400211ce((longlong)plVar12);
    if (uVar17 <= uVar33) {
      if ((uVar16 & 0xfff) * 4 <= uVar33) {
        local_120 = (uint)uVar17 + ((int)lVar30 - (int)lVar15);
        if ((short)uVar16 < 0) {
          iVar18 = (int)*plVar12;
          uVar33 = (int)plVar12[7] - iVar18;
          lVar30 = (ulonglong)local_120 + *plVar12;
          if ((uint)((int)plVar12[8] - iVar18) <= local_120) {
            lVar30 = plVar12[8];
          }
          plVar12[7] = lVar30;
          local_b0 = FUN_14004075c((longlong)plVar12,&local_54);
          iVar18 = (int)*plVar12;
          local_120 = (int)plVar12[7] - iVar18;
          lVar30 = (ulonglong)uVar33 + *plVar12;
          if ((uint)((int)plVar12[8] - iVar18) <= uVar33) {
            lVar30 = plVar12[8];
          }
          plVar12[7] = lVar30;
        }
        else {
          local_b0 = 0;
        }
        uVar34 = *puVar14 * 0xc + 7 & 0xfffffff8;
        uVar33 = (uint)uVar27;
        pauVar21 = FUN_14001c423(lVar13,(uVar6 + 0xb & 0xfffffff8) + uVar33 * 0x18 + uVar34,
                                 (int *)&local_4c);
        if (local_4c == 0) {
          uVar41 = (ulonglong)(uVar33 * 8);
          uVar20 = (ulonglong)uVar34;
          pauVar28 = (undefined1 (*) [32])(*pauVar21 + uVar20);
          puVar2 = *pauVar28 + uVar41;
          uVar35 = 0;
          FUN_1400b3c00(pauVar28,0,uVar41);
          uVar34 = *puVar14;
          lVar30 = uVar20 + uVar44 * 8;
          do {
            *(int *)(pauVar21[1] + uVar35 * 8 + lVar30) =
                 *(int *)(*(longlong *)(param_2 + 4) + uVar35 * 8) << 0x10;
            *(int *)(pauVar21[1] + uVar35 * 8 + lVar30 + 4) =
                 *(int *)(*(longlong *)(param_2 + 4) + 4 + uVar35 * 8) << 0x10;
            uVar35 = uVar35 + 1;
          } while (uVar27 != uVar35);
          if ((uVar16 & 0xfff) != 0) {
            puVar32 = puVar2 + uVar41;
            puVar29 = puVar32 + uVar41;
            puVar3 = *pauVar21 + (ulonglong)uVar34 * 4;
            lVar22 = (ulonglong)uVar6 * 0x10 + uVar20;
            lVar30 = uVar20 + uVar44 * 8;
            lVar15 = uVar44 * 4 + 0x10;
            local_d8 = 0;
            uVar40 = 0;
            puVar36 = (ushort *)plVar12[7];
            do {
              if (plVar12[8] - (longlong)puVar36 < 4) {
LAB_1400450c7:
                local_4c = 8;
                goto LAB_1400450d2;
              }
              uVar17 = *puVar36;
              puVar23 = puVar36 + 2;
              bVar5 = (byte)puVar36[1];
              uVar38 = (uint)bVar5 << 8;
              uVar31 = (uint)CONCAT11(bVar5,*(byte *)((longlong)puVar36 + 3));
              lVar37 = 0;
              if ((uVar38 & 0x4000) == 0) {
                lVar37 = *(longlong *)(puVar14 + 0x1e);
              }
              if ((short)uVar38 < 0) {
                if ((uint)((int)plVar12[8] - (int)puVar23) < *puVar14 * 2) goto LAB_1400450c7;
                if (*puVar14 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar20 = 0;
                  do {
                    uVar7 = *puVar23;
                    pbVar1 = (byte *)((longlong)puVar23 + 1);
                    puVar23 = puVar23 + 1;
                    *(uint *)(*pauVar21 + uVar20 * 4) =
                         ((int)(short)((ushort)(byte)uVar7 << 8) | (uint)*pbVar1) << 2;
                    uVar20 = uVar20 + 1;
                    uVar19 = *puVar14;
                  } while (uVar20 < uVar19);
                }
                lVar37 = 0;
                pauVar42 = pauVar21;
LAB_140044b44:
                if ((uVar38 & 0x4000) != 0) {
                  if ((uint)((int)plVar12[8] - (int)puVar23) < uVar19 * 4) goto LAB_1400450c7;
                  if (uVar19 != 0) {
                    uVar20 = 0;
                    do {
                      uVar7 = *puVar23;
                      pbVar1 = (byte *)((longlong)puVar23 + 1);
                      puVar23 = puVar23 + 1;
                      *(uint *)(puVar3 + uVar20 * 4) =
                           ((int)(short)((ushort)(byte)uVar7 << 8) | (uint)*pbVar1) << 2;
                      uVar20 = uVar20 + 1;
                    } while (uVar20 < *puVar14);
                    if (*puVar14 != 0) {
                      uVar20 = 0;
                      do {
                        uVar7 = *puVar23;
                        pbVar1 = (byte *)((longlong)puVar23 + 1);
                        puVar23 = puVar23 + 1;
                        *(uint *)(puVar3 + (ulonglong)uVar34 * 4 + uVar20 * 4) =
                             ((int)(short)((ushort)(byte)uVar7 << 8) | (uint)*pbVar1) << 2;
                        uVar20 = uVar20 + 1;
                      } while (uVar20 < *puVar14);
                    }
                  }
                }
                uVar19 = FUN_1400408de(puVar14,uVar31,(longlong)pauVar42,(longlong)puVar3,
                                       (longlong)(puVar3 + (ulonglong)uVar34 * 4));
                if (lVar37 != 0) {
                  *(uint *)(lVar37 + (ulonglong)(uVar31 & 0xfff) * 4) = uVar19;
                }
              }
              else {
                uVar39 = (uint)*(byte *)((longlong)puVar36 + 3) | uVar38 & 0xfff;
                if (puVar14[0x1a] <= uVar39) goto LAB_1400450c7;
                if ((lVar37 == 0) ||
                   (uVar19 = *(uint *)(*(longlong *)(puVar14 + 0x1e) + (ulonglong)uVar39 * 4),
                   uVar19 == 0xfffe0000)) {
                  uVar19 = *puVar14;
                  pauVar42 = (undefined1 (*) [32])
                             ((ulonglong)(uVar39 * uVar19) * 4 + *(longlong *)(puVar14 + 0x1c));
                  goto LAB_140044b44;
                }
              }
              if (uVar19 != 0) {
                lVar37 = plVar12[7];
                iVar18 = (int)*plVar12;
                lVar26 = (ulonglong)local_120 + *plVar12;
                if ((uint)((int)plVar12[8] - iVar18) <= local_120) {
                  lVar26 = plVar12[8];
                }
                plVar12[7] = lVar26;
                if ((bVar5 >> 5 & 1) == 0) {
                  local_50 = local_54;
                  lVar26 = local_b0;
                }
                else {
                  lVar26 = FUN_14004075c((longlong)plVar12,&local_50);
                  local_d8 = lVar26;
                }
                uVar31 = local_50;
                uVar20 = (ulonglong)local_50;
                if (local_50 == 0) {
                  uVar20 = uVar27;
                }
                lVar24 = FUN_1400409b1((longlong)plVar12,(uint)uVar20);
                lVar25 = FUN_1400409b1((longlong)plVar12,(uint)uVar20);
                if (((lVar26 != 0) && (lVar25 != 0)) && (lVar24 != 0)) {
                  if (lVar26 == -1) {
                    lVar26 = 0;
                    do {
                      lVar45 = (longlong)*(int *)(lVar24 + lVar26) * (longlong)(int)uVar19;
                      lVar43 = (longlong)*(int *)(lVar25 + lVar26) * (longlong)(int)uVar19;
                      iVar8 = *(int *)(*pauVar28 + lVar26 + uVar44 * 4 + 0x10);
                      *(int *)(*pauVar28 + lVar26) =
                           *(int *)(*pauVar28 + lVar26) +
                           (int)((ulonglong)(lVar45 + 0x8000 + (lVar45 >> 0x3f)) >> 0x10);
                      *(int *)(*pauVar28 + lVar26 + uVar44 * 4 + 0x10) =
                           (int)((ulonglong)(lVar43 + 0x8000 + (lVar43 >> 0x3f)) >> 0x10) + iVar8;
                      lVar26 = lVar26 + 4;
                    } while (lVar15 != lVar26);
                  }
                  else {
                    uVar20 = 0;
                    do {
                      puVar29[uVar20] = 0;
                      *(undefined8 *)(puVar32 + uVar20 * 8) = *(undefined8 *)(puVar2 + uVar20 * 8);
                      uVar20 = uVar20 + 1;
                    } while (uVar27 != uVar20);
                    if (uVar31 != 0) {
                      uVar20 = 0;
                      do {
                        uVar7 = *(ushort *)(lVar26 + uVar20 * 2);
                        uVar35 = (ulonglong)uVar7;
                        if (uVar7 < uVar33) {
                          puVar29[uVar35] = 1;
                          lVar45 = (longlong)*(int *)(lVar24 + uVar20 * 4) * (longlong)(int)uVar19;
                          *(int *)(puVar32 + uVar35 * 8) =
                               *(int *)(puVar32 + uVar35 * 8) +
                               (int)((ulonglong)(lVar45 + 0x8000 + (lVar45 >> 0x3f)) >> 0x10);
                          lVar45 = (longlong)*(int *)(lVar25 + uVar20 * 4) * (longlong)(int)uVar19;
                          *(int *)(puVar32 + uVar35 * 8 + 4) =
                               *(int *)(puVar32 + uVar35 * 8 + 4) +
                               (int)((ulonglong)(lVar45 + 0x8000 + (lVar45 >> 0x3f)) >> 0x10);
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar31 != uVar20);
                    }
                    FUN_14004591f(param_2,(longlong)puVar32,(longlong)puVar2,(longlong)puVar29);
                    lVar26 = 0;
                    do {
                      iVar8 = *(int *)(pauVar21[2] + lVar26 * 2 + lVar22 + 4);
                      iVar9 = *(int *)(*pauVar28 + lVar26 + uVar44 * 4 + 0x10);
                      iVar10 = *(int *)(pauVar21[1] + lVar26 * 2 + lVar30 + 4);
                      *(int *)(*pauVar28 + lVar26) =
                           (*(int *)(pauVar21[2] + lVar26 * 2 + lVar22) +
                           *(int *)(*pauVar28 + lVar26)) -
                           *(int *)(pauVar21[1] + lVar26 * 2 + lVar30);
                      *(int *)(*pauVar28 + lVar26 + uVar44 * 4 + 0x10) = (iVar8 + iVar9) - iVar10;
                      lVar26 = lVar26 + 4;
                    } while (lVar15 != lVar26);
                  }
                }
                if (local_d8 == -1) {
                  local_d8 = -1;
                }
                else {
                  FUN_14001c53d(lVar13,local_d8);
                  local_d8 = 0;
                }
                uVar31 = (int)lVar37 - iVar18;
                FUN_14001c53d(lVar13,lVar24);
                FUN_14001c53d(lVar13,lVar25);
                lVar37 = (ulonglong)uVar31 + *plVar12;
                if ((uint)((int)plVar12[8] - (int)*plVar12) <= uVar31) {
                  lVar37 = plVar12[8];
                }
                plVar12[7] = lVar37;
              }
              local_120 = local_120 + (ushort)(uVar17 << 8 | uVar17 >> 8);
              uVar40 = uVar40 + 1;
              puVar36 = puVar23;
            } while (uVar40 != (uVar16 & 0xfff));
          }
          uVar33 = *(uint *)(lVar11 + 0x410);
          if ((uVar33 & 2) != 0) {
            uVar27 = (ulonglong)((uint)uVar6 * 4);
            *(undefined4 *)(*pauVar28 + uVar27) = 0;
            *(undefined4 *)(*pauVar28 + uVar27 + uVar44 * 4 + 0x10) = 0;
            *(undefined4 *)(*pauVar28 + uVar44 * 4 + 4) = 0;
            *(undefined4 *)(*pauVar28 + uVar44 * 8 + 0x14) = 0;
            uVar33 = *(uint *)(lVar11 + 0x410);
          }
          if ((uVar33 & 0x10) != 0) {
            *(undefined4 *)(*pauVar28 + uVar44 * 4 + 8) = 0;
            *(undefined4 *)(*pauVar28 + uVar44 * 8 + 0x18) = 0;
            *(undefined4 *)(*pauVar28 + uVar44 * 4 + 0xc) = 0;
            *(undefined4 *)(*pauVar28 + uVar44 * 8 + 0x1c) = 0;
          }
          lVar30 = 0;
          do {
            piVar4 = (int *)(param_3 + lVar30 * 2);
            *piVar4 = *piVar4 + (*(int *)(*pauVar28 + lVar30) + 0x200 >> 10);
            piVar4 = (int *)(param_3 + 4 + lVar30 * 2);
            *piVar4 = *piVar4 + (*(int *)(*pauVar28 + lVar30 + uVar44 * 4 + 0x10) + 0x200 >> 10);
            piVar4 = (int *)(*(longlong *)(param_2 + 4) + lVar30 * 2);
            *piVar4 = *piVar4 + (*(int *)(*pauVar28 + lVar30) + 0x8000 >> 0x10);
            piVar4 = (int *)(*(longlong *)(param_2 + 4) + 4 + lVar30 * 2);
            *piVar4 = *piVar4 + (*(int *)(*pauVar28 + lVar30 + uVar44 * 4 + 0x10) + 0x8000 >> 0x10);
            lVar30 = lVar30 + 4;
          } while (uVar44 * 4 + 0x10 != lVar30);
          uVar33 = *(uint *)(lVar11 + 0x410);
          if ((uVar33 & 2) == 0) {
            uVar27 = (ulonglong)((uint)uVar6 * 8);
            param_1[0xb] = *(longlong *)(*(longlong *)(param_2 + 4) + uVar27);
            param_1[0xc] = *(longlong *)(*(longlong *)(param_2 + 4) + 8 + uVar44 * 8);
            *(int *)(param_1 + 10) =
                 (*(int *)(param_3 + 8 + uVar44 * 8) - *(int *)(param_3 + uVar27)) + 0x20 >> 6;
            uVar33 = *(uint *)(lVar11 + 0x410);
          }
          if ((uVar33 & 0x10) == 0) {
            param_1[0x1f] = *(longlong *)(*(longlong *)(param_2 + 4) + 0x10 + uVar44 * 8);
            param_1[0x20] = *(longlong *)(*(longlong *)(param_2 + 4) + 0x18 + uVar44 * 8);
            *(int *)((longlong)param_1 + 0xf4) =
                 (*(int *)(param_3 + 0x1c + uVar44 * 8) - *(int *)(param_3 + 0x14 + uVar44 * 8)) +
                 0x20 >> 6;
          }
        }
LAB_1400450d2:
        if (local_b0 != -1) goto LAB_1400447cf;
        goto LAB_1400447d7;
      }
    }
    local_4c = 8;
  }
  FUN_140021187(plVar12);
  uVar20 = (ulonglong)local_4c;
LAB_1400447f8:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_158)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_158);
  }
  return uVar20;
}

