/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004272c */

int FUN_14004272c(longlong *param_1,uint param_2,uint param_3,char param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 *puVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStackY_1d8 [32];
  longlong local_180;
  undefined8 local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined4 local_110;
  int local_108 [19];
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14012ea80 ^ (ulonglong)auStackY_1d8;
  local_bc = 0;
  lVar6 = *param_1;
  if (100 < param_3) {
    local_bc = 0x15;
LAB_1400427fe:
    param_1[5] = *(longlong *)(lVar6 + 0xa0);
    goto LAB_140042d3a;
  }
  lVar22 = param_1[3];
  if (*(ushort *)(lVar6 + 0x18e) < param_3) {
    *(short *)(lVar6 + 0x18e) = (short)param_3;
  }
  *(uint *)((longlong)param_1 + 0x24) = param_2;
  lVar26 = 0x10000;
  lVar21 = 0x10000;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar21 = (longlong)*(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
    lVar26 = (longlong)*(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
  }
  puVar7 = *(undefined8 **)(*(longlong *)(lVar6 + 0xd0) + 0x50);
  if (puVar7 == (undefined8 *)0x0) {
    uVar13 = FUN_140041cca(lVar6,param_2,local_108);
    *(int *)(param_1 + 6) = local_108[0];
    iVar4 = local_108[0];
  }
  else {
    local_bc = (**(code **)*puVar7)(puVar7[1],param_2,&local_118);
    if (local_bc != 0) goto LAB_1400427fe;
    *(undefined4 *)(param_1 + 6) = local_110;
    local_108[0xc] = 0;
    local_108[0xd] = 0;
    local_108[0xe] = 0;
    local_108[0xf] = 0;
    local_108[8] = 0;
    local_108[9] = 0;
    local_108[10] = 0;
    local_108[0xb] = 0;
    local_108[4] = 0;
    local_108[5] = 0;
    local_108[6] = 0;
    local_108[7] = 0;
    local_108[0] = 0;
    local_108[1] = 0;
    local_108[2] = 0;
    local_108[3] = 0;
    local_108[0x10] = 0;
    local_108[0x11] = 0;
    FUN_14001d02c((undefined8 *)local_108,local_118,local_110);
    param_1[5] = (longlong)local_108;
    uVar13 = 0;
    iVar4 = (int)param_1[6];
  }
  if (iVar4 == 0) {
LAB_140042904:
    param_1[7] = 0;
    param_1[8] = 0;
LAB_14004290b:
    local_bc = FUN_140044459(param_1,param_2);
    if (param_4 == '\0' && local_bc == 0) {
      FUN_14004455f(param_1);
      FUN_140044606(param_1);
      if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0)) {
        if (((*(ushort *)(lVar6 + 6) & 0x7fff) != 0) || ((*(byte *)(lVar6 + 9) & 0x80) != 0)) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_98 = param_1[0xb];
          lStack_90 = param_1[0xc];
          plStack_140 = &local_98;
          local_88 = param_1[0x1f];
          lStack_80 = param_1[0x20];
          local_148 = local_148 & 0xffffffff00000000;
          local_138 = 0;
          lStack_130 = 0;
          uVar24 = FUN_14004468b(param_1,(ushort *)&local_148,(longlong)&local_b8);
          local_bc = (int)uVar24;
          if (local_bc != 0) goto LAB_140042d0c;
        }
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          lVar22 = (int)param_1[0xb] * lVar21;
          *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
          lVar22 = (int)param_1[0xc] * lVar21;
          *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
          lVar22 = (int)param_1[0x1f] * lVar21;
          *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
          lVar22 = *(int *)((longlong)param_1 + 0xfc) * lVar26;
          *(int *)((longlong)param_1 + 0xfc) =
               (int)((ulonglong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >> 0x10);
          lVar21 = (int)param_1[0x20] * lVar21;
          *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar21 + 0x8000 + (lVar21 >> 0x3f)) >> 0x10);
          lVar26 = *(int *)((longlong)param_1 + 0x104) * lVar26;
          *(int *)((longlong)param_1 + 0x104) =
               (int)((ulonglong)(lVar26 + 0x8000 + (lVar26 >> 0x3f)) >> 0x10);
        }
        local_bc = 0;
      }
      else {
        local_bc = (**(code **)(lVar6 + 0x2a8))(param_1,param_2);
        if (local_bc == 0) {
          if (*(short *)((longlong)param_1 + 0x34) < 1) {
            if (*(short *)((longlong)param_1 + 0x34) < 0) {
              lVar23 = *(longlong *)(lVar6 + 0x98);
              *(undefined2 *)((longlong)param_1 + 0x34) = 0xffff;
              plVar16 = param_1 + 0x23;
              lVar14 = FUN_14004550e(plVar16,param_3);
              uVar24 = (ulonglong)param_2;
              lVar15 = lVar14;
              if (lVar14 == 0) {
                lVar15 = FUN_14001e6ca(plVar16,uVar24);
                if (lVar15 == 0) {
                  plVar17 = (longlong *)FUN_14001e961(lVar23,0x18,&local_bc);
                  if (local_bc == 0) {
                    plVar17[2] = uVar24;
                    FUN_14001e98f(plVar16,plVar17);
                    goto LAB_140042b9a;
                  }
                  goto LAB_140042d03;
                }
              }
              else {
                do {
                  *(undefined8 *)(lVar15 + 0x10) = 0xffffffffffffffff;
                  plVar17 = (longlong *)(lVar15 + 8);
                  lVar15 = *plVar17;
                } while (*plVar17 != 0);
                lVar15 = FUN_14001e6ca(plVar16,uVar24);
                if (lVar15 == 0) {
                  *(ulonglong *)(lVar14 + 0x10) = uVar24;
LAB_140042b9a:
                  uVar1 = *(ushort *)(lVar22 + 0x1a);
                  uVar2 = *(ushort *)(lVar22 + 0x18);
                  local_bc = (**(code **)(lVar6 + 0x2c8))(param_1);
                  if (local_bc != 0) goto LAB_140042d03;
                  lVar15 = param_1[0x1c];
                  (**(code **)(lVar6 + 0x2b0))(param_1);
                  if (((*(ushort *)(lVar6 + 6) & 0x7fff) != 0) ||
                     ((*(byte *)(lVar6 + 9) & 0x80) != 0)) {
                    local_138 = 0;
                    lStack_130 = 0;
                    local_148 = 0;
                    plStack_140 = (longlong *)0x0;
                    lVar18 = 0;
                    local_128 = 0;
                    uVar13 = *(uint *)(lVar22 + 0x98);
                    uVar12 = (ushort)uVar13;
                    uVar25 = (uVar13 & 0xffff) + 4;
                    plVar16 = (longlong *)FUN_14001f231(lVar23,8,0,uVar25,0,&local_bc);
                    lVar14 = 0;
                    local_180 = 0;
                    plStack_140 = plVar16;
                    if (local_bc == 0) {
                      lVar14 = FUN_14001f231(lVar23,1,0,uVar13 & 0xffff,0,&local_bc);
                      local_138 = lVar14;
                      if (local_bc == 0) {
                        lVar18 = FUN_14001f231(lVar23,2,0,uVar13 & 0xffff,0,&local_bc);
                        lStack_130 = lVar18;
                        if (local_bc == 0) {
                          local_180 = FUN_14001f231(lVar23,8,0,uVar25,0,&local_bc);
                          if (local_bc == 0) {
                            local_148 = CONCAT62(CONCAT42(local_148._4_4_,uVar12),uVar12);
                            if ((uVar13 & 0xffff) == 0) {
                              uVar25 = 0;
                            }
                            else {
                              puVar19 = (undefined4 *)(*(longlong *)(lVar22 + 0xa0) + 0xc);
                              uVar24 = 0;
                              do {
                                *(undefined4 *)(plVar16 + uVar24) = puVar19[-1];
                                *(undefined4 *)((longlong)plVar16 + uVar24 * 8 + 4) = *puVar19;
                                *(undefined1 *)(lVar14 + uVar24) = 1;
                                *(short *)(lVar18 + uVar24 * 2) = (short)uVar24;
                                uVar24 = uVar24 + 1;
                                puVar19 = puVar19 + 8;
                                uVar25 = uVar13 & 0xffff;
                              } while (uVar12 != uVar24);
                            }
                            plVar16[uVar25] = param_1[0xb];
                            plVar16[uVar25 + 1 & 0xffff] = param_1[0xc];
                            plVar16[uVar25 + 2 & 0xffff] = param_1[0x1f];
                            plVar16[uVar25 + 3 & 0xffff] = param_1[0x20];
                            uVar24 = FUN_14004468b(param_1,(ushort *)&local_148,local_180);
                            local_bc = (int)uVar24;
                            if ((local_bc == 0) && ((uVar13 & 0xffff) != 0)) {
                              lVar8 = *(longlong *)(lVar22 + 0xa0);
                              uVar24 = 0;
                              do {
                                if ((*(byte *)(lVar8 + 4 + uVar24 * 4) & 2) != 0) {
                                  *(int *)(lVar8 + 8 + uVar24 * 4) =
                                       (int)*(short *)((longlong)plVar16 + uVar24);
                                  *(int *)(lVar8 + 0xc + uVar24 * 4) =
                                       (int)*(short *)((longlong)plVar16 + uVar24 + 4);
                                }
                                uVar24 = uVar24 + 8;
                              } while ((uVar13 & 0xffff) * 8 != uVar24);
                            }
                          }
                        }
                        else {
                          local_180 = 0;
                        }
                      }
                      else {
                        local_180 = 0;
                        lVar18 = 0;
                      }
                    }
                    FUN_14001c53d(lVar23,(longlong)plVar16);
                    FUN_14001c53d(lVar23,lVar14);
                    FUN_14001c53d(lVar23,lVar18);
                    FUN_14001c53d(lVar23,local_180);
                    if (local_bc != 0) goto LAB_140042d0c;
                  }
                  if ((*(uint *)(param_1 + 4) & 1) == 0) {
                    lVar23 = (int)param_1[0xb] * lVar21;
                    *(int *)(param_1 + 0xb) =
                         (int)((ulonglong)(lVar23 + 0x8000 + (lVar23 >> 0x3f)) >> 0x10);
                    lVar23 = (int)param_1[0xc] * lVar21;
                    *(int *)(param_1 + 0xc) =
                         (int)((ulonglong)(lVar23 + 0x8000 + (lVar23 >> 0x3f)) >> 0x10);
                    lVar23 = (int)param_1[0x1f] * lVar21;
                    *(int *)(param_1 + 0x1f) =
                         (int)((ulonglong)(lVar23 + 0x8000 + (lVar23 >> 0x3f)) >> 0x10);
                    lVar23 = *(int *)((longlong)param_1 + 0xfc) * lVar26;
                    *(int *)((longlong)param_1 + 0xfc) =
                         (int)((ulonglong)(lVar23 + 0x8000 + (lVar23 >> 0x3f)) >> 0x10);
                    lVar21 = (int)param_1[0x20] * lVar21;
                    *(int *)(param_1 + 0x20) =
                         (int)((ulonglong)(lVar21 + 0x8000 + (lVar21 >> 0x3f)) >> 0x10);
                    lVar26 = *(int *)((longlong)param_1 + 0x104) * lVar26;
                    *(int *)((longlong)param_1 + 0x104) =
                         (int)((ulonglong)(lVar26 + 0x8000 + (lVar26 >> 0x3f)) >> 0x10);
                  }
                  if ((*(uint *)(param_1 + 4) >> 10 & 1) == 0) {
                    uVar13 = *(uint *)(lVar22 + 0x50);
                    uVar24 = (ulonglong)*(uint *)(lVar22 + 0x98);
                    lVar21 = param_1[5];
                    lVar26 = param_1[6];
                    FUN_14001ca4d(lVar22);
                    if (uVar24 == 0) {
                      lVar23 = 0;
                      bVar20 = false;
                    }
                    else {
                      lVar23 = (ulonglong)uVar13 << 5;
                      do {
                        lVar14 = param_1[0xb];
                        lVar18 = param_1[0xc];
                        lVar8 = param_1[0x1f];
                        lVar10 = param_1[0x20];
                        lVar11 = param_1[10];
                        uVar5 = *(undefined4 *)((longlong)param_1 + 0xf4);
                        uVar12 = *(ushort *)(lVar22 + 0x1a);
                        local_bc = FUN_14004272c(param_1,*(uint *)(*(longlong *)(lVar22 + 0x58) +
                                                                  lVar23),param_3 + 1,'\0');
                        if (local_bc != 0) goto LAB_140042d0c;
                        lVar9 = *(longlong *)(lVar22 + 0x58);
                        if ((*(byte *)(lVar9 + 5 + lVar23) & 2) == 0) {
                          param_1[0xb] = lVar14;
                          param_1[0xc] = lVar18;
                          param_1[0x1f] = lVar8;
                          param_1[0x20] = lVar10;
                          *(int *)(param_1 + 10) = (int)lVar11;
                          *(undefined4 *)((longlong)param_1 + 0xf4) = uVar5;
                        }
                        uVar3 = *(ushort *)(lVar22 + 0x1a);
                        if ((uVar3 != uVar12) &&
                           (local_bc = FUN_140045530((longlong)param_1,lVar9 + lVar23,(uint)uVar1,
                                                     (uint)uVar12), local_bc != 0))
                        goto LAB_140042d0c;
                        lVar23 = lVar23 + 0x20;
                        uVar24 = uVar24 - 1;
                      } while (uVar24 != 0);
                      bVar20 = uVar1 < uVar3;
                      lVar23 = lVar9 + lVar23 + -0x20;
                    }
                    param_1[5] = lVar21;
                    *(int *)(param_1 + 6) = (int)lVar26;
                    *(int *)(param_1 + 0x1c) = (int)lVar15;
                    if (((lVar23 != 0) && ((*(uint *)(param_1 + 4) & 2) == 0)) &&
                       ((bVar20 & *(byte *)(lVar23 + 5)) != 0)) {
                      uVar24 = FUN_140045712((longlong)param_1,(uint)uVar1,(uint)uVar2);
                      local_bc = (int)uVar24;
                      if (local_bc != 0) goto LAB_140042d0c;
                    }
                    if ((*(int *)(lVar22 + 0x50) != 0) &&
                       ((*(byte *)(*(longlong *)(lVar22 + 0x58) + 5) & 4) != 0)) {
                      *(byte *)(lVar22 + 0x38) = *(byte *)(lVar22 + 0x38) | 0x40;
                    }
                  }
                  else {
                    FUN_14001ca4d(lVar22);
                    *(undefined4 *)(param_1[2] + 0x60) = 0x636f6d70;
                  }
                  goto LAB_140042d0c;
                }
              }
              local_bc = 0x15;
            }
          }
          else {
            local_bc = (**(code **)(lVar6 + 0x2c0))(param_1);
            if (local_bc == 0) {
              (**(code **)(lVar6 + 0x2b0))(param_1);
              local_bc = FUN_140045104(param_1);
              if (local_bc == 0) {
                FUN_14001ca4d(lVar22);
              }
              goto LAB_140042d0c;
            }
          }
LAB_140042d03:
          (**(code **)(lVar6 + 0x2b0))(param_1);
        }
      }
    }
  }
  else if ((*(int *)(lVar6 + 0x3fc) == 0) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0xd0) + 0x50) == 0)) {
    local_bc = 8;
  }
  else {
    local_bc = (**(code **)(lVar6 + 0x2a8))(param_1,param_2,*(int *)(lVar6 + 0x3fc) + uVar13);
    if (local_bc == 0) {
      local_bc = (**(code **)(lVar6 + 0x2b8))(param_1);
      (**(code **)(lVar6 + 0x2b0))(param_1);
      if (local_bc == 0) {
        if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0))
        goto LAB_140042904;
        goto LAB_14004290b;
      }
    }
  }
LAB_140042d0c:
  param_1[5] = *(longlong *)(lVar6 + 0xa0);
  if (puVar7 != (undefined8 *)0x0) {
    plVar16 = *(longlong **)(*(longlong *)(lVar6 + 0xd0) + 0x50);
    (**(code **)(*plVar16 + 8))(plVar16[1],&local_118);
  }
LAB_140042d3a:
  if (DAT_14012ea80 != (local_70 ^ (ulonglong)auStackY_1d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_70 ^ (ulonglong)auStackY_1d8);
  }
  return local_bc;
}

