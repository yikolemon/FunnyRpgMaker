/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140146743 */

ulonglong FUN_140146743(longlong *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_158 [32];
  longlong local_138;
  ulonglong local_128;
  uint local_120;
  int local_11c;
  longlong local_118;
  ushort local_10a;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  uint local_a4;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ushort *local_70;
  longlong local_68;
  longlong local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_158;
  uVar10 = 0;
  local_4c = 0;
  lVar15 = *param_1;
  plVar5 = *(longlong **)(lVar15 + 0xa0);
  lVar13 = plVar5[6];
  uVar17 = *(uint *)((longlong)param_1 + 0x24);
  uVar7 = *(ushort *)(param_2 + 2);
  uVar12 = (ulonglong)uVar7 + 4;
  puVar6 = *(uint **)(lVar15 + 0x408);
  local_54 = 0;
  do {
    *(int *)(param_3 + uVar10 * 8) = *(int *)(*(longlong *)(param_2 + 8) + uVar10 * 8) << 6;
    *(int *)(param_3 + 4 + uVar10 * 8) = *(int *)(*(longlong *)(param_2 + 8) + 4 + uVar10 * 8) << 6;
    uVar10 = uVar10 + 1;
  } while (uVar12 != uVar10);
  if (*(char *)(lVar15 + 0x401) == '\0') {
    lVar16 = 0;
    lVar15 = 0;
LAB_140146887:
    FUN_140128b39(lVar13,lVar15);
LAB_14014688f:
    FUN_140128b39(lVar13,lVar16);
  }
  else {
    if (puVar6 == (uint *)0x0) {
      uVar10 = 6;
      goto LAB_1401468b0;
    }
    uVar10 = 0;
    if (((puVar6[0x20] <= uVar17) ||
        (uVar17 = *(int *)(*(longlong *)(puVar6 + 0x22) + 4 + (ulonglong)uVar17 * 4) -
                  *(int *)(*(longlong *)(puVar6 + 0x22) + (ulonglong)uVar17 * 4), local_e0 = lVar13,
        uVar17 == 0)) ||
       (local_e8 = (ulonglong)uVar7, uVar10 = FUN_14012d612(plVar5), (int)uVar10 != 0))
    goto LAB_1401468b0;
    uVar10 = FUN_14012dc34(plVar5,uVar17);
    local_4c = (uint)uVar10;
    if (local_4c != 0) goto LAB_1401468b0;
    local_118 = CONCAT44(local_118._4_4_,(int)plVar5[7] - (int)*plVar5);
    uVar8 = FUN_14012dd9f(plVar5);
    local_128 = CONCAT44(local_128._4_4_,uVar8);
    uVar7 = FUN_14012dd9f(plVar5);
    if (uVar7 <= uVar17) {
      local_90 = (ulonglong)((uint)local_128 & 0xfff);
      if (((uint)local_128 & 0xfff) * 4 <= uVar17) {
        local_120 = (uint)uVar7 + (int)local_118;
        if ((short)local_128 < 0) {
          iVar9 = (int)*plVar5;
          uVar17 = (int)plVar5[7] - iVar9;
          lVar13 = (ulonglong)local_120 + *plVar5;
          if ((uint)((int)plVar5[8] - iVar9) <= local_120) {
            lVar13 = plVar5[8];
          }
          plVar5[7] = lVar13;
          local_b0 = FUN_140142814(plVar5,&local_54);
          iVar9 = (int)*plVar5;
          local_120 = (int)plVar5[7] - iVar9;
          lVar13 = (ulonglong)uVar17 + *plVar5;
          if ((uint)((int)plVar5[8] - iVar9) <= uVar17) {
            lVar13 = plVar5[8];
          }
          plVar5[7] = lVar13;
        }
        else {
          local_b0 = 0;
        }
        uVar18 = *puVar6 * 0xc + 7 & 0xfffffff8;
        uVar17 = (uint)uVar12;
        local_100 = FUN_140128a1f(local_e0,((int)local_e8 + 0xbU & 0xfffffff8) + uVar17 * 0x18 +
                                           uVar18,&local_4c);
        if (local_4c == 0) {
          local_c0 = (ulonglong)(uVar17 * 8);
          local_128 = (ulonglong)uVar18;
          local_108 = local_128 + local_100;
          local_b8 = local_108 + local_c0;
          uVar10 = 0;
          FUN_1401c5830(local_108,0);
          uVar18 = *puVar6;
          lVar13 = local_128 + (local_e8 & 0xffffffff) * 8 + local_100;
          do {
            *(int *)(lVar13 + 0x20 + uVar10 * 8) =
                 *(int *)(*(longlong *)(param_2 + 8) + uVar10 * 8) << 0x10;
            *(int *)(lVar13 + 0x24 + uVar10 * 8) =
                 *(int *)(*(longlong *)(param_2 + 8) + 4 + uVar10 * 8) << 0x10;
            uVar10 = uVar10 + 1;
          } while (uVar12 != uVar10);
          local_f0 = local_108 + uVar12 * 4;
          uVar10 = local_e8;
          if ((int)local_90 != 0) {
            local_c8 = local_b8 + local_c0;
            local_c0 = local_c0 + local_c8;
            local_98 = local_100 + (ulonglong)uVar18 * 4;
            local_a0 = local_98 + (ulonglong)uVar18 * 4;
            local_60 = (uint)((int)local_e8 << 4) + local_128 + local_100 + 0x44;
            local_68 = local_100 + 0x24 + local_128 + local_e8 * 8;
            local_88 = local_e8 * 4 + 0x10;
            local_d8 = 0;
            iVar9 = 0;
            puVar19 = (ushort *)plVar5[7];
            uVar18 = local_120;
            do {
              uVar22 = (ulonglong)uVar18;
              if (plVar5[8] - (longlong)puVar19 < 4) {
LAB_14014717f:
                local_4c = 8;
                goto LAB_14014718a;
              }
              local_10a = *puVar19;
              puVar11 = puVar19 + 2;
              uVar20 = (uint)(byte)puVar19[1] << 8;
              uVar14 = (uint)CONCAT11((byte)puVar19[1],*(byte *)((longlong)puVar19 + 3));
              lVar13 = 0;
              if ((uVar20 & 0x4000) == 0) {
                lVar13 = *(longlong *)(puVar6 + 0x1e);
              }
              local_120 = uVar18;
              local_11c = iVar9;
              if ((short)uVar20 < 0) {
                if ((uint)((int)plVar5[8] - (int)puVar11) < *puVar6 * 2) goto LAB_14014717f;
                if (*puVar6 == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar10 = 0;
                  do {
                    uVar7 = *puVar11;
                    pbVar1 = (byte *)((longlong)puVar11 + 1);
                    puVar11 = puVar11 + 1;
                    *(uint *)(local_100 + uVar10 * 4) =
                         ((int)(short)((ushort)(byte)uVar7 << 8) | (uint)*pbVar1) << 2;
                    uVar10 = uVar10 + 1;
                    uVar18 = *puVar6;
                  } while (uVar10 < uVar18);
                }
                lVar13 = 0;
                lVar16 = local_100;
LAB_140146bfc:
                local_128 = CONCAT44(local_128._4_4_,uVar14);
                local_118 = lVar13;
                if ((uVar20 & 0x4000) != 0) {
                  if ((uint)((int)plVar5[8] - (int)puVar11) < uVar18 * 4) goto LAB_14014717f;
                  if (uVar18 != 0) {
                    uVar10 = 0;
                    do {
                      uVar7 = *puVar11;
                      pbVar1 = (byte *)((longlong)puVar11 + 1);
                      puVar11 = puVar11 + 1;
                      *(uint *)(local_98 + uVar10 * 4) =
                           ((int)(short)((ushort)(byte)uVar7 << 8) | (uint)*pbVar1) << 2;
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *puVar6);
                    if (*puVar6 != 0) {
                      uVar10 = 0;
                      do {
                        uVar7 = *puVar11;
                        pbVar1 = (byte *)((longlong)puVar11 + 1);
                        puVar11 = puVar11 + 1;
                        *(uint *)(local_a0 + uVar10 * 4) =
                             ((int)(short)((ushort)(byte)uVar7 << 8) | (uint)*pbVar1) << 2;
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < *puVar6);
                    }
                  }
                }
                local_138 = local_a0;
                iVar9 = FUN_140142996(puVar6,uVar14,lVar16);
                uVar10 = local_e8;
                uVar14 = (uint)local_128;
                if (local_118 == 0) {
                  uVar22 = (ulonglong)local_120;
                }
                else {
                  *(int *)(local_118 + (ulonglong)((uint)local_128 & 0xfff) * 4) = iVar9;
                  uVar22 = (ulonglong)local_120;
                }
              }
              else {
                uVar21 = (uint)*(byte *)((longlong)puVar19 + 3) | uVar20 & 0xfff;
                if (puVar6[0x1a] <= uVar21) goto LAB_14014717f;
                if (lVar13 == 0) {
LAB_140146b5d:
                  uVar18 = *puVar6;
                  lVar16 = (ulonglong)(uVar21 * uVar18) * 4 + *(longlong *)(puVar6 + 0x1c);
                  goto LAB_140146bfc;
                }
                iVar9 = *(int *)(*(longlong *)(puVar6 + 0x1e) + (ulonglong)uVar21 * 4);
                local_f8 = CONCAT44(local_f8._4_4_,iVar9);
                if (iVar9 == -0x20000) goto LAB_140146b5d;
              }
              if (iVar9 != 0) {
                local_f8 = CONCAT44(local_f8._4_4_,iVar9);
                local_80 = *plVar5;
                local_78 = plVar5[7];
                lVar13 = uVar22 + local_80;
                if ((uint)((int)plVar5[8] - (int)local_80) <= (uint)uVar22) {
                  lVar13 = plVar5[8];
                }
                plVar5[7] = lVar13;
                local_70 = puVar11;
                if ((uVar14 >> 0xd & 1) == 0) {
                  local_50 = local_54;
                  local_d0 = local_b0;
                }
                else {
                  local_d0 = FUN_140142814(plVar5,&local_50);
                  local_d8 = local_d0;
                }
                uVar10 = (ulonglong)local_50;
                if (local_50 == 0) {
                  uVar10 = uVar12;
                }
                local_a4 = local_50;
                local_118 = FUN_140142a69(plVar5,uVar10);
                local_128 = FUN_140142a69(plVar5,uVar10);
                if (((local_d0 != 0) && (local_128 != 0)) && (local_118 != 0)) {
                  if (local_d0 == -1) {
                    lVar13 = 0;
                    do {
                      lVar16 = (longlong)*(int *)(local_118 + lVar13) * (longlong)(int)local_f8;
                      lVar23 = (longlong)*(int *)(local_128 + lVar13) * (longlong)(int)local_f8;
                      iVar9 = *(int *)(local_f0 + lVar13);
                      *(int *)(local_108 + lVar13) =
                           *(int *)(local_108 + lVar13) +
                           (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                      *(int *)(local_f0 + lVar13) =
                           (int)((ulonglong)(lVar23 + 0x8000 + (lVar23 >> 0x3f)) >> 0x10) + iVar9;
                      lVar13 = lVar13 + 4;
                    } while (local_88 != lVar13);
                  }
                  else {
                    uVar10 = 0;
                    do {
                      *(undefined1 *)(local_c0 + uVar10) = 0;
                      *(undefined8 *)(local_c8 + uVar10 * 8) =
                           *(undefined8 *)(local_b8 + uVar10 * 8);
                      uVar10 = uVar10 + 1;
                    } while (uVar12 != uVar10);
                    if (local_a4 != 0) {
                      local_f8 = (longlong)(int)local_f8;
                      uVar10 = 0;
                      do {
                        uVar7 = *(ushort *)(local_d0 + uVar10 * 2);
                        uVar22 = (ulonglong)uVar7;
                        if (uVar7 < uVar17) {
                          *(undefined1 *)(local_c0 + uVar22) = 1;
                          lVar13 = *(int *)(local_118 + uVar10 * 4) * local_f8;
                          piVar2 = (int *)(local_c8 + uVar22 * 8);
                          *piVar2 = *piVar2 + (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f))
                                                   >> 0x10);
                          lVar13 = *(int *)(local_128 + uVar10 * 4) * local_f8;
                          piVar2 = (int *)(local_c8 + 4 + uVar22 * 8);
                          *piVar2 = *piVar2 + (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f))
                                                   >> 0x10);
                        }
                        uVar10 = uVar10 + 1;
                      } while (local_a4 != uVar10);
                    }
                    FUN_1401479d7(param_2,local_c8,local_b8,local_c0);
                    lVar13 = 0;
                    do {
                      iVar9 = *(int *)(local_60 + lVar13 * 2);
                      iVar3 = *(int *)(local_f0 + lVar13);
                      iVar4 = *(int *)(local_68 + lVar13 * 2);
                      *(int *)(local_108 + lVar13) =
                           (*(int *)(local_60 + -4 + lVar13 * 2) + *(int *)(local_108 + lVar13)) -
                           *(int *)(local_68 + -4 + lVar13 * 2);
                      *(int *)(local_f0 + lVar13) = (iVar9 + iVar3) - iVar4;
                      lVar13 = lVar13 + 4;
                    } while (local_88 != lVar13);
                  }
                }
                lVar13 = local_e0;
                if (local_d8 == -1) {
                  local_d8 = -1;
                }
                else {
                  FUN_140128b39(local_e0);
                  local_d8 = 0;
                }
                uVar18 = (int)local_78 - (int)local_80;
                FUN_140128b39(lVar13,local_118);
                FUN_140128b39(local_e0,local_128);
                lVar13 = (ulonglong)uVar18 + *plVar5;
                if ((uint)((int)plVar5[8] - (int)*plVar5) <= uVar18) {
                  lVar13 = plVar5[8];
                }
                plVar5[7] = lVar13;
                uVar22 = (ulonglong)local_120;
                puVar11 = local_70;
                uVar10 = local_e8;
              }
              uVar18 = (int)uVar22 + (uint)(ushort)(local_10a << 8 | local_10a >> 8);
              iVar9 = local_11c + 1;
              puVar19 = puVar11;
            } while (iVar9 != (int)local_90);
          }
          uVar17 = *(uint *)(lVar15 + 0x410);
          if ((uVar17 & 2) != 0) {
            uVar12 = (ulonglong)(uint)((int)uVar10 * 4);
            *(undefined4 *)(local_108 + uVar12) = 0;
            *(undefined4 *)(local_f0 + uVar12) = 0;
            *(undefined4 *)(local_108 + 4 + uVar10 * 4) = 0;
            *(undefined4 *)(local_f0 + 4 + uVar10 * 4) = 0;
            uVar17 = *(uint *)(lVar15 + 0x410);
          }
          if ((uVar17 & 0x10) != 0) {
            *(undefined4 *)(local_108 + 8 + uVar10 * 4) = 0;
            *(undefined4 *)(local_f0 + 8 + uVar10 * 4) = 0;
            *(undefined4 *)(local_108 + 0xc + uVar10 * 4) = 0;
            *(undefined4 *)(local_f0 + 0xc + uVar10 * 4) = 0;
          }
          lVar13 = 0;
          do {
            piVar2 = (int *)(param_3 + lVar13 * 2);
            *piVar2 = *piVar2 + (*(int *)(local_108 + lVar13) + 0x200 >> 10);
            piVar2 = (int *)(param_3 + 4 + lVar13 * 2);
            *piVar2 = *piVar2 + (*(int *)(local_f0 + lVar13) + 0x200 >> 10);
            piVar2 = (int *)(*(longlong *)(param_2 + 8) + lVar13 * 2);
            *piVar2 = *piVar2 + (*(int *)(local_108 + lVar13) + 0x8000 >> 0x10);
            piVar2 = (int *)(*(longlong *)(param_2 + 8) + 4 + lVar13 * 2);
            *piVar2 = *piVar2 + (*(int *)(local_f0 + lVar13) + 0x8000 >> 0x10);
            lVar13 = lVar13 + 4;
          } while (uVar10 * 4 + 0x10 != lVar13);
          uVar17 = *(uint *)(lVar15 + 0x410);
          if ((uVar17 & 2) == 0) {
            uVar12 = (ulonglong)(uint)((int)uVar10 * 8);
            param_1[0xb] = *(longlong *)(*(longlong *)(param_2 + 8) + uVar12);
            param_1[0xc] = *(longlong *)(*(longlong *)(param_2 + 8) + 8 + uVar10 * 8);
            *(int *)(param_1 + 10) =
                 (*(int *)(param_3 + 8 + uVar10 * 8) - *(int *)(param_3 + uVar12)) + 0x20 >> 6;
            uVar17 = *(uint *)(lVar15 + 0x410);
          }
          if ((uVar17 & 0x10) == 0) {
            param_1[0x1f] = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10 + uVar10 * 8);
            param_1[0x20] = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18 + uVar10 * 8);
            *(int *)((longlong)param_1 + 0xf4) =
                 (*(int *)(param_3 + 0x1c + uVar10 * 8) - *(int *)(param_3 + 0x14 + uVar10 * 8)) +
                 0x20 >> 6;
          }
        }
LAB_14014718a:
        lVar15 = local_b0;
        lVar13 = local_e0;
        lVar16 = local_100;
        if (local_b0 != -1) goto LAB_140146887;
        goto LAB_14014688f;
      }
    }
    local_4c = 8;
  }
  FUN_14012dd58(plVar5);
  uVar10 = (ulonglong)local_4c;
LAB_1401468b0:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_158)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_158);
  }
  return uVar10;
}

