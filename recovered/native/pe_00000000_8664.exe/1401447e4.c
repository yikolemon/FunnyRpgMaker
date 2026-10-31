/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401447e4 */

int FUN_1401447e4(longlong *param_1,uint param_2,uint param_3,char param_4)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  bool bVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  int *local_1b0;
  uint local_19c;
  longlong local_198;
  longlong *local_190;
  uint local_184;
  undefined8 local_180;
  longlong local_178;
  undefined8 *local_170;
  longlong local_168;
  int local_15c;
  uint local_158;
  undefined4 local_154;
  ulonglong local_150;
  undefined8 local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int local_bc [9];
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_1d8;
  local_bc[0] = 0;
  lVar7 = *param_1;
  if (100 < param_3) {
    local_bc[0] = 0x15;
LAB_1401448b6:
    param_1[5] = *(longlong *)(lVar7 + 0xa0);
    goto LAB_140144df2;
  }
  lVar16 = param_1[3];
  if (*(ushort *)(lVar7 + 0x18e) < param_3) {
    *(short *)(lVar7 + 0x18e) = (short)param_3;
  }
  *(uint *)((longlong)param_1 + 0x24) = param_2;
  lVar22 = 0x10000;
  local_178 = 0x10000;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_178 = (longlong)*(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
    lVar22 = (longlong)*(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
  }
  puVar20 = *(undefined8 **)(*(longlong *)(lVar7 + 0xd0) + 0x50);
  if (puVar20 == (undefined8 *)0x0) {
    local_198 = lVar16;
    iVar14 = FUN_140143d82(lVar7,param_2,&local_108);
    *(int *)(param_1 + 6) = (int)local_108;
    iVar4 = (int)local_108;
  }
  else {
    local_bc[0] = (**(code **)*puVar20)(puVar20[1],param_2,&local_118);
    if (local_bc[0] != 0) goto LAB_1401448b6;
    *(undefined4 *)(param_1 + 6) = local_110;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_c8 = 0;
    local_198 = lVar16;
    FUN_140129628(&local_108,local_118);
    param_1[5] = (longlong)&local_108;
    iVar14 = 0;
    iVar4 = (int)param_1[6];
  }
  if (iVar4 == 0) {
LAB_1401449bc:
    param_1[7] = 0;
    param_1[8] = 0;
LAB_1401449c3:
    local_bc[0] = FUN_140146511(param_1,param_2);
    if (param_4 == '\0' && local_bc[0] == 0) {
      FUN_140146617(param_1,param_2);
      FUN_1401466be(param_1);
      if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0)) {
        if (((*(ushort *)(lVar7 + 6) & 0x7fff) != 0) || ((*(byte *)(lVar7 + 9) & 0x80) != 0)) {
          local_bc[5] = 0;
          local_bc[6] = 0;
          local_bc[7] = 0;
          local_bc[8] = 0;
          local_bc[1] = 0;
          local_bc[2] = 0;
          local_bc[3] = 0;
          local_bc[4] = 0;
          local_98 = param_1[0xb];
          lStack_90 = param_1[0xc];
          plStack_140 = &local_98;
          local_88 = (undefined4)param_1[0x1f];
          uStack_84 = *(undefined4 *)((longlong)param_1 + 0xfc);
          uStack_80 = (undefined4)param_1[0x20];
          uStack_7c = *(undefined4 *)((longlong)param_1 + 0x104);
          local_148 = local_148 & 0xffffffff00000000;
          local_138 = 0;
          lStack_130 = 0;
          local_bc[0] = FUN_140146743(param_1);
          if (local_bc[0] != 0) goto LAB_140144dc4;
        }
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          lVar16 = (int)param_1[0xb] * local_178;
          *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          lVar16 = (int)param_1[0xc] * local_178;
          *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          lVar16 = (int)param_1[0x1f] * local_178;
          *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          lVar16 = *(int *)((longlong)param_1 + 0xfc) * lVar22;
          *(int *)((longlong)param_1 + 0xfc) =
               (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          lVar16 = (int)param_1[0x20] * local_178;
          *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          lVar22 = *(int *)((longlong)param_1 + 0x104) * lVar22;
          *(int *)((longlong)param_1 + 0x104) =
               (int)((ulonglong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
        }
        local_bc[0] = 0;
      }
      else {
        local_bc[0] = (**(code **)(lVar7 + 0x2a8))
                                (param_1,param_2,iVar14 + *(int *)(lVar7 + 0x3fc) + 10,
                                 (int)param_1[6] + -10);
        if (local_bc[0] == 0) {
          if (*(short *)((longlong)param_1 + 0x34) < 1) {
            if (*(short *)((longlong)param_1 + 0x34) < 0) {
              uVar8 = *(undefined8 *)(lVar7 + 0x98);
              *(undefined2 *)((longlong)param_1 + 0x34) = 0xffff;
              plVar18 = param_1 + 0x23;
              local_168 = lVar22;
              lVar22 = FUN_1401475c6(plVar18,param_3);
              uVar21 = (ulonglong)param_2;
              lVar16 = lVar22;
              if (lVar22 == 0) {
                lVar16 = FUN_14012ad43(plVar18,uVar21);
                if (lVar16 != 0) goto LAB_140144db0;
                lVar16 = FUN_14012afda(uVar8,0x18,local_bc);
                if (local_bc[0] == 0) {
                  *(ulonglong *)(lVar16 + 0x10) = uVar21;
                  FUN_14012b008(plVar18,lVar16);
                  goto LAB_140144c52;
                }
              }
              else {
                do {
                  *(undefined8 *)(lVar16 + 0x10) = 0xffffffffffffffff;
                  plVar1 = (longlong *)(lVar16 + 8);
                  lVar16 = *plVar1;
                } while (*plVar1 != 0);
                lVar16 = FUN_14012ad43(plVar18,uVar21);
                if (lVar16 == 0) {
                  *(ulonglong *)(lVar22 + 0x10) = uVar21;
LAB_140144c52:
                  uVar2 = *(ushort *)(local_198 + 0x1a);
                  uVar3 = *(ushort *)(local_198 + 0x18);
                  local_bc[0] = (**(code **)(lVar7 + 0x2c8))(param_1);
                  if (local_bc[0] == 0) {
                    local_158 = (uint)uVar3;
                    local_184 = (uint)uVar2;
                    local_154 = (undefined4)param_1[0x1c];
                    (**(code **)(lVar7 + 0x2b0))(param_1);
                    if (((*(ushort *)(lVar7 + 6) & 0x7fff) != 0) ||
                       ((*(byte *)(lVar7 + 9) & 0x80) != 0)) {
                      local_138 = 0;
                      lStack_130 = 0;
                      local_148 = 0;
                      plStack_140 = (longlong *)0x0;
                      lVar22 = 0;
                      local_128 = 0;
                      uVar5 = *(uint *)(local_198 + 0x98);
                      local_150 = (ulonglong)uVar5;
                      local_15c = (uVar5 & 0xffff) + 4;
                      local_1b0 = local_bc;
                      local_1b8 = 0;
                      plStack_140 = (longlong *)FUN_14012b8aa(uVar8,8,0);
                      lVar16 = 0;
                      local_180 = 0;
                      plVar18 = plStack_140;
                      if (local_bc[0] == 0) {
                        local_1b0 = local_bc;
                        local_1b8 = 0;
                        local_19c = param_3;
                        local_190 = plStack_140;
                        lVar16 = FUN_14012b8aa(uVar8,1,0,(ulonglong)(ushort)uVar5);
                        local_138 = lVar16;
                        if (local_bc[0] == 0) {
                          local_1b0 = local_bc;
                          local_1b8 = 0;
                          lVar22 = FUN_14012b8aa(uVar8,2,0,uVar5 & 0xffff);
                          lStack_130 = lVar22;
                          if (local_bc[0] == 0) {
                            local_1b0 = local_bc;
                            local_1b8 = 0;
                            local_180 = FUN_14012b8aa(uVar8,8,0,local_15c);
                            plVar18 = local_190;
                            param_3 = local_19c;
                            if (local_bc[0] == 0) {
                              local_148 = CONCAT62(CONCAT42(local_148._4_4_,(short)local_150),
                                                   (short)local_150);
                              if ((uVar5 & 0xffff) == 0) {
                                uVar15 = 0;
                              }
                              else {
                                puVar17 = (undefined4 *)(*(longlong *)(local_198 + 0xa0) + 0xc);
                                uVar21 = 0;
                                do {
                                  *(undefined4 *)(local_190 + uVar21) = puVar17[-1];
                                  *(undefined4 *)((longlong)local_190 + uVar21 * 8 + 4) = *puVar17;
                                  *(undefined1 *)(lVar16 + uVar21) = 1;
                                  *(short *)(lVar22 + uVar21 * 2) = (short)uVar21;
                                  uVar21 = uVar21 + 1;
                                  puVar17 = puVar17 + 8;
                                  uVar15 = uVar5 & 0xffff;
                                } while ((ushort)uVar5 != uVar21);
                              }
                              local_190[uVar15] = param_1[0xb];
                              local_190[uVar15 + 1 & 0xffff] = param_1[0xc];
                              local_190[uVar15 + 2 & 0xffff] = param_1[0x1f];
                              local_190[uVar15 + 3 & 0xffff] = param_1[0x20];
                              local_bc[0] = FUN_140146743(param_1,&local_148,local_180);
                              plVar18 = local_190;
                              param_3 = local_19c;
                              if ((local_bc[0] == 0) && ((uVar5 & 0xffff) != 0)) {
                                lVar9 = *(longlong *)(local_198 + 0xa0);
                                uVar21 = 0;
                                do {
                                  if ((*(byte *)(lVar9 + 4 + uVar21 * 4) & 2) != 0) {
                                    *(int *)(lVar9 + 8 + uVar21 * 4) =
                                         (int)*(short *)((longlong)local_190 + uVar21);
                                    *(int *)(lVar9 + 0xc + uVar21 * 4) =
                                         (int)*(short *)((longlong)local_190 + uVar21 + 4);
                                  }
                                  uVar21 = uVar21 + 8;
                                } while ((uVar5 & 0xffff) * 8 != uVar21);
                              }
                            }
                          }
                          else {
                            local_180 = 0;
                            plVar18 = local_190;
                            param_3 = local_19c;
                          }
                        }
                        else {
                          local_180 = 0;
                          lVar22 = 0;
                          plVar18 = local_190;
                          param_3 = local_19c;
                        }
                      }
                      FUN_140128b39(uVar8,plVar18);
                      FUN_140128b39(uVar8,lVar16);
                      FUN_140128b39(uVar8,lVar22);
                      FUN_140128b39(uVar8,local_180);
                      if (local_bc[0] != 0) goto LAB_140144dc4;
                    }
                    if ((*(uint *)(param_1 + 4) & 1) == 0) {
                      lVar16 = (int)param_1[0xb] * local_178;
                      *(int *)(param_1 + 0xb) =
                           (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                      lVar16 = (int)param_1[0xc] * local_178;
                      *(int *)(param_1 + 0xc) =
                           (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                      lVar16 = (int)param_1[0x1f] * local_178;
                      *(int *)(param_1 + 0x1f) =
                           (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                      lVar16 = *(int *)((longlong)param_1 + 0xfc) * local_168;
                      *(int *)((longlong)param_1 + 0xfc) =
                           (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                      lVar16 = (int)param_1[0x20] * local_178;
                      *(int *)(param_1 + 0x20) =
                           (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                      lVar16 = *(int *)((longlong)param_1 + 0x104) * local_168;
                      *(int *)((longlong)param_1 + 0x104) =
                           (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                    }
                    local_170 = puVar20;
                    if ((*(uint *)(param_1 + 4) >> 10 & 1) == 0) {
                      uVar5 = *(uint *)(local_198 + 0x50);
                      uVar21 = (ulonglong)*(uint *)(local_198 + 0x98);
                      local_178 = param_1[5];
                      local_168 = CONCAT44(local_168._4_4_,(int)param_1[6]);
                      FUN_140129049();
                      puVar20 = local_170;
                      if (uVar21 == 0) {
                        lVar16 = 0;
                        bVar19 = false;
                      }
                      else {
                        local_19c = param_3 + 1;
                        lVar16 = (ulonglong)uVar5 << 5;
                        do {
                          lVar22 = param_1[0xb];
                          lVar9 = param_1[0xc];
                          lVar11 = param_1[0x1f];
                          lVar12 = param_1[0x20];
                          lVar13 = param_1[10];
                          uVar6 = *(undefined4 *)((longlong)param_1 + 0xf4);
                          uVar2 = *(ushort *)(local_198 + 0x1a);
                          local_bc[0] = FUN_1401447e4(param_1,*(undefined4 *)
                                                               (*(longlong *)(local_198 + 0x58) +
                                                               lVar16),local_19c,0);
                          if (local_bc[0] != 0) goto LAB_140144dc4;
                          lVar10 = *(longlong *)(local_198 + 0x58);
                          if ((*(byte *)(lVar10 + 5 + lVar16) & 2) == 0) {
                            param_1[0xb] = lVar22;
                            param_1[0xc] = lVar9;
                            param_1[0x1f] = lVar11;
                            param_1[0x20] = lVar12;
                            *(int *)(param_1 + 10) = (int)lVar13;
                            *(undefined4 *)((longlong)param_1 + 0xf4) = uVar6;
                          }
                          uVar3 = *(ushort *)(local_198 + 0x1a);
                          if ((uVar3 != uVar2) &&
                             (local_bc[0] = FUN_1401475e8(param_1,lVar10 + lVar16,local_184),
                             local_bc[0] != 0)) goto LAB_140144dc4;
                          lVar16 = lVar16 + 0x20;
                          uVar21 = uVar21 - 1;
                        } while (uVar21 != 0);
                        bVar19 = (ushort)local_184 < uVar3;
                        lVar16 = lVar10 + lVar16 + -0x20;
                      }
                      puVar20 = local_170;
                      param_1[5] = local_178;
                      *(undefined4 *)(param_1 + 6) = (undefined4)local_168;
                      *(undefined4 *)(param_1 + 0x1c) = local_154;
                      if (((((lVar16 == 0) || ((*(uint *)(param_1 + 4) & 2) != 0)) ||
                           ((bVar19 & *(byte *)(lVar16 + 5)) == 0)) ||
                          (local_bc[0] = FUN_1401477ca(param_1,local_184,local_158),
                          local_bc[0] == 0)) &&
                         ((*(int *)(local_198 + 0x50) != 0 &&
                          ((*(byte *)(*(longlong *)(local_198 + 0x58) + 5) & 4) != 0)))) {
                        *(byte *)(local_198 + 0x38) = *(byte *)(local_198 + 0x38) | 0x40;
                      }
                    }
                    else {
                      FUN_140129049(local_198);
                      *(undefined4 *)(param_1[2] + 0x60) = 0x636f6d70;
                      puVar20 = local_170;
                    }
                    goto LAB_140144dc4;
                  }
                }
                else {
LAB_140144db0:
                  local_bc[0] = 0x15;
                }
              }
            }
          }
          else {
            local_bc[0] = (**(code **)(lVar7 + 0x2c0))(param_1);
            if (local_bc[0] == 0) {
              (**(code **)(lVar7 + 0x2b0))(param_1);
              local_bc[0] = FUN_1401471bc(param_1);
              if (local_bc[0] == 0) {
                FUN_140129049(local_198);
              }
              goto LAB_140144dc4;
            }
          }
          (**(code **)(lVar7 + 0x2b0))(param_1);
        }
      }
    }
  }
  else if ((*(int *)(lVar7 + 0x3fc) == 0) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0xd0) + 0x50) == 0)) {
    local_bc[0] = 8;
  }
  else {
    local_bc[0] = (**(code **)(lVar7 + 0x2a8))(param_1,param_2,*(int *)(lVar7 + 0x3fc) + iVar14);
    if (local_bc[0] == 0) {
      local_bc[0] = (**(code **)(lVar7 + 0x2b8))(param_1);
      (**(code **)(lVar7 + 0x2b0))(param_1);
      if (local_bc[0] == 0) {
        if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0))
        goto LAB_1401449bc;
        goto LAB_1401449c3;
      }
    }
  }
LAB_140144dc4:
  param_1[5] = *(longlong *)(lVar7 + 0xa0);
  if (puVar20 != (undefined8 *)0x0) {
    plVar18 = *(longlong **)(*(longlong *)(lVar7 + 0xd0) + 0x50);
    (**(code **)(*plVar18 + 8))(plVar18[1],&local_118);
  }
LAB_140144df2:
  if (DAT_140f17b40 != (local_70 ^ (ulonglong)auStack_1d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_70 ^ (ulonglong)auStack_1d8);
  }
  return local_bc[0];
}

