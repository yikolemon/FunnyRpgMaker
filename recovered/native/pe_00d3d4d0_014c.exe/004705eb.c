/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004705eb */

undefined4 __fastcall FUN_004705eb(int param_1,int param_2,byte *param_3,uint *param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_38;
  uint *local_34;
  uint *local_30;
  undefined1 local_2c [16];
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  local_34 = (uint *)0x0;
  local_1c = 0;
  local_2c = (undefined1  [16])0x0;
  if ((((param_3 != (byte *)0x0) && (*(int *)(param_2 + 0x48) != 0)) &&
      (*(byte **)(param_2 + 0x24) <= param_3)) &&
     (param_3 <= (byte *)((*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c)) - 2U))) {
    local_30 = (uint *)(param_3 + 1);
    uVar7 = (uint)*param_3;
    *param_4 = uVar7;
    if (uVar7 < 0x21) {
      if (uVar7 - 2 < 2) {
        if ((local_30 < *(uint **)(param_2 + 0x24)) ||
           ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) < local_30))
        goto LAB_00470653;
        *(ushort *)(param_4 + 1) = *(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8;
        uVar4 = *(ushort *)(param_3 + 3) << 8 | *(ushort *)(param_3 + 3) >> 8;
        *(ushort *)((int)param_4 + 6) = uVar4;
        if (uVar7 == 3) {
          if ((param_3 + 5 < *(byte **)(param_2 + 0x24)) ||
             ((byte *)((*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c)) - 4U) < param_3 + 5))
          goto LAB_00470653;
          uVar7 = *(uint *)(param_3 + 5);
          FUN_00470554(param_1,param_2,
                       uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18,1,local_2c);
          *(short *)((int)param_4 + 6) = *(short *)((int)param_4 + 6) + local_2c._0_2_;
          uVar4 = local_2c._0_2_;
        }
        *param_4 = 2;
        param_4 = (uint *)(uint)uVar4;
LAB_0047077f:
        uVar5 = CONCAT31((int3)((uint)param_4 >> 8),1);
        goto LAB_00470655;
      }
      if (uVar7 == 0xb) {
        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
           (local_30 <= (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
          puVar6 = (uint *)(uint)(ushort)(*(ushort *)(param_3 + 1) << 8 |
                                         *(ushort *)(param_3 + 1) >> 8);
          param_4[1] = (uint)puVar6;
          param_4 = puVar6;
          goto LAB_0047077f;
        }
      }
      else if (uVar7 == 1) {
        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
           (local_30 <= (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -5))) {
          uVar7 = (uint)(byte)*local_30;
          if (uVar7 <= *(uint *)(param_2 + 0x18)) {
            uVar8 = *(uint *)(param_3 + 2);
            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
            if (uVar8 + uVar7 <= *(uint *)(param_2 + 0x18)) {
              param_4[1] = uVar7;
              param_4[2] = 0;
              puVar6 = (uint *)(*(int *)(param_2 + 0x1c) + uVar8 * 4 + 4);
LAB_004706c8:
              param_4[3] = (uint)puVar6;
              param_4 = puVar6;
              goto LAB_0047077f;
            }
          }
        }
      }
      else {
        uVar5 = FUN_00471327(param_2,(int)param_3,(int *)&local_30,(uint *)&local_34);
        if ((char)uVar5 != '\0') {
          uVar7 = *param_4;
          local_38 = uVar7;
          if (uVar7 == 4) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
            if (uVar7 != 5) {
              if (uVar7 == 6) {
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
                if (uVar7 != 7) {
                  if (uVar7 == 8) {
                    uVar3 = 0;
switchD_00470a95_caseD_9:
                    uVar5 = FUN_00471381(param_2,(byte *)local_34,param_4 + 1,uVar3);
                    if ((((char)uVar5 != '\0') && (*(uint **)(param_2 + 0x24) <= local_30)) &&
                       (local_30 <=
                        (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -8))) {
                      param_4[6] = (uint)CONCAT11((byte)*local_30,*(byte *)((int)local_30 + 1)) <<
                                   0x10;
                      param_4[7] = (uint)CONCAT11(*(byte *)((int)local_30 + 2),
                                                  *(byte *)((int)local_30 + 3)) << 0x10;
                      param_4[8] = ((int)(short)((ushort)(byte)local_30[1] << 8) |
                                   (uint)*(byte *)((int)local_30 + 5)) << 2;
                      param_4[9] = ((int)(short)((ushort)*(byte *)((int)local_30 + 6) << 8) |
                                   (uint)*(byte *)((int)local_30 + 7)) << 2;
                      puVar6 = local_30;
                      if (local_38 != 8) {
                        if ((local_30 + 2 < *(uint **)(param_2 + 0x24)) ||
                           ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                            local_30 + 2)) goto LAB_00470653;
                        uVar7 = local_30[2];
                        puVar6 = (uint *)FUN_00470554(param_1,param_2,
                                                      uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 |
                                                      (uVar7 & 0xff00) << 8 | uVar7 << 0x18,4,
                                                      local_2c);
                        param_4[6] = param_4[6] + local_2c._0_4_ * 0x10000;
                        param_4[7] = param_4[7] + local_2c._4_4_ * 0x10000;
                        param_4[8] = param_4[8] + local_2c._8_4_ * 4;
                        param_4[9] = param_4[9] + local_2c._12_4_ * 4;
                      }
                      *param_4 = 8;
                      param_4 = puVar6;
                      goto LAB_0047077f;
                    }
                  }
                  else {
                    uVar3 = 1;
                    switch(uVar7) {
                    case 9:
                      goto switchD_00470a95_caseD_9;
                    case 10:
                      if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                         (local_30 <=
                          (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        puVar6 = (uint *)(uint)(ushort)((ushort)*local_30 << 8 |
                                                       (ushort)*local_30 >> 8);
                        goto LAB_004706c8;
                      }
                      break;
                    default:
                      if ((uVar7 & 0xfffffff8) == 0x10) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
                          puVar6 = (uint *)((int)local_30 + 2);
                          uVar8 = ((int)(short)((ushort)(byte)*local_30 << 8) |
                                  (uint)*(byte *)((int)local_30 + 1)) << 2;
                          param_4[3] = uVar8;
                          if (uVar7 < 0x14) {
                            if ((puVar6 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2) <
                                puVar6)) break;
                            puVar6 = local_30 + 1;
                            uVar8 = ((int)(short)((ushort)*(byte *)((int)local_30 + 2) << 8) |
                                    (uint)*(byte *)((int)local_30 + 3)) << 2;
                          }
                          param_4[4] = uVar8;
                          if ((uVar7 < 0x18) && ((0xcc0000U >> (uVar7 & 0x1f) & 1) != 0)) {
                            if ((puVar6 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar6)) break;
                            param_4[5] = (uint)CONCAT11((byte)*puVar6,*(byte *)((int)puVar6 + 1)) <<
                                         0x10;
                            puVar1 = (ushort *)((int)puVar6 + 2);
                            pbVar2 = (byte *)((int)puVar6 + 3);
                            puVar6 = puVar6 + 1;
                            uVar8 = (uint)CONCAT11(*(byte *)puVar1,*pbVar2) << 0x10;
                          }
                          else {
                            param_4[5] = 0;
                            uVar8 = 0;
                          }
                          param_4[6] = uVar8;
                          if ((uVar7 < 0x18) && ((0xaa0000U >> (uVar7 & 0x1f) & 1) != 0)) {
                            if ((puVar6 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar6)) break;
                            local_30 = puVar6 + 1;
                            uVar8 = *puVar6;
                            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8
                                    | uVar8 << 0x18;
                            if (uVar7 == 0x11) {
                              FUN_00470554(param_1,param_2,uVar8,2,local_2c);
                              *(ulonglong *)(param_4 + 3) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20) +
                                            local_2c._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 3) + local_2c._0_4_ * 4);
                              uVar7 = *param_4;
                            }
                            if (uVar7 == 0x13) {
                              FUN_00470554(param_1,param_2,uVar8,4,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              param_4[4] = param_4[4] + local_2c._4_4_ * 4;
                              param_4[5] = param_4[5] + local_2c._8_4_ * 0x10000;
                              param_4[6] = param_4[6] + local_2c._12_4_ * 0x10000;
                              uVar7 = *param_4;
                            }
                            if (uVar7 == 0x15) {
                              FUN_00470554(param_1,param_2,uVar8,1,local_2c);
                              *(ulonglong *)(param_4 + 3) =
                                   CONCAT44(local_2c._0_4_ * 4 +
                                            (int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20),
                                            local_2c._0_4_ * 4 + (int)*(undefined8 *)(param_4 + 3));
                              uVar7 = *param_4;
                            }
                            if (uVar7 == 0x17) {
                              FUN_00470554(param_1,param_2,uVar8,3,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              param_4[4] = param_4[4] + local_2c._0_4_ * 4;
                              param_4[5] = param_4[5] + local_2c._4_4_ * 0x10000;
                              param_4[6] = param_4[6] + local_2c._8_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x10;
                          goto LAB_0047077f;
                        }
                      }
                      else if (uVar7 - 0x18 < 4) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
                          puVar6 = (uint *)((int)local_30 + 2);
                          param_4[3] = ((int)(short)((ushort)(byte)*local_30 << 8) |
                                       (uint)*(byte *)((int)local_30 + 1)) << 2;
                          if ((uVar7 & 0xfffffffe) == 0x1a) {
                            if ((puVar6 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar6)) break;
                            param_4[4] = (uint)CONCAT11(*(byte *)((int)local_30 + 2),
                                                        *(byte *)((int)local_30 + 3)) << 0x10;
                            puVar6 = (uint *)((int)local_30 + 6);
                            uVar8 = (uint)CONCAT11((byte)local_30[1],*(byte *)((int)local_30 + 5))
                                    << 0x10;
                          }
                          else {
                            param_4[4] = 0;
                            uVar8 = 0;
                          }
                          param_4[5] = uVar8;
                          if ((uVar7 | 2) == 0x1b) {
                            if ((puVar6 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar6)) break;
                            iVar9 = 1;
                            if (uVar7 != 0x19) {
                              iVar9 = (uint)(uVar7 == 0x1b) * 3;
                            }
                            if (iVar9 != 0) {
                              uVar8 = *puVar6;
                              FUN_00470554(param_1,param_2,
                                           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 |
                                           (uVar8 & 0xff00) << 8 | uVar8 << 0x18,iVar9,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              if (uVar7 == 0x1b) {
                                *(ulonglong *)(param_4 + 4) =
                                     CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20)
                                              + local_2c._8_4_ * 0x10000,
                                              (int)*(undefined8 *)(param_4 + 4) +
                                              local_2c._4_4_ * 0x10000);
                              }
                            }
                          }
                          *param_4 = 0x18;
                          goto LAB_0047077f;
                        }
                      }
                      else if (uVar7 - 0x1c < 4) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4))) {
                          param_4[3] = ((int)(short)((ushort)(byte)*local_30 << 8) |
                                       (uint)*(byte *)((int)local_30 + 1)) << 2;
                          puVar6 = local_30 + 1;
                          param_4[4] = ((int)(short)((ushort)*(byte *)((int)local_30 + 2) << 8) |
                                       (uint)*(byte *)((int)local_30 + 3)) << 2;
                          if ((uVar7 & 0xfffffffe) == 0x1e) {
                            if ((puVar6 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar6)) break;
                            param_4[5] = (uint)CONCAT11((byte)local_30[1],
                                                        *(byte *)((int)local_30 + 5)) << 0x10;
                            puVar6 = local_30 + 2;
                            uVar8 = (uint)CONCAT11(*(byte *)((int)local_30 + 6),
                                                   *(byte *)((int)local_30 + 7)) << 0x10;
                          }
                          else {
                            param_4[5] = 0;
                            uVar8 = 0;
                          }
                          param_4[6] = uVar8;
                          if ((uVar7 | 2) == 0x1f) {
                            if ((puVar6 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar6)) break;
                            uVar8 = *puVar6;
                            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8
                                    | uVar8 << 0x18;
                            if (uVar7 == 0x1d) {
                              FUN_00470554(param_1,param_2,uVar8,2,local_2c);
                              *(ulonglong *)(param_4 + 3) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20) +
                                            local_2c._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 3) + local_2c._0_4_ * 4);
                              uVar7 = *param_4;
                            }
                            if (uVar7 == 0x1f) {
                              FUN_00470554(param_1,param_2,uVar8,4,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              param_4[4] = param_4[4] + local_2c._4_4_ * 4;
                              param_4[5] = param_4[5] + local_2c._8_4_ * 0x10000;
                              param_4[6] = param_4[6] + local_2c._12_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x1c;
                          goto LAB_0047077f;
                        }
                      }
                      else if (uVar7 == 0x20) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -1))) {
                          puVar6 = (uint *)((int)local_30 + 1);
                          uVar7 = *local_30;
                          local_30 = puVar6;
                          if ((byte)uVar7 < 0x1c) {
                            param_4[3] = (uint)(byte)uVar7;
                            uVar5 = FUN_00471327(param_2,(int)param_3,(int *)&local_30,
                                                 (uint *)&local_34);
                            if ((char)uVar5 != '\0') {
                              param_4[4] = (uint)local_34;
                              *(undefined1 *)(param_4 + 5) = 0;
                              param_4 = local_34;
                              goto LAB_0047077f;
                            }
                          }
                        }
                      }
                      break;
                    case 0xc:
                    case 0xd:
                      param_4[1] = (uint)local_34;
                      *(undefined1 *)(param_4 + 2) = 0;
                      uVar5 = FUN_00471327(param_2,(int)param_3,(int *)&local_30,(uint *)&local_34);
                      if ((((char)uVar5 != '\0') && (*(uint **)(param_2 + 0x24) <= local_34)) &&
                         (local_34 <=
                          (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -0x18))) {
                        uVar7 = *local_34;
                        param_4[3] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                     | uVar7 << 0x18;
                        uVar7 = local_34[1];
                        param_4[6] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                     | uVar7 << 0x18;
                        uVar7 = local_34[2];
                        param_4[4] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                     | uVar7 << 0x18;
                        uVar7 = local_34[3];
                        param_4[7] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                     | uVar7 << 0x18;
                        uVar7 = local_34[4];
                        param_4[5] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                     | uVar7 << 0x18;
                        uVar7 = local_34[5];
                        param_4[8] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                     | uVar7 << 0x18;
                        if (*param_4 == 0xd) {
                          if ((local_34 + 6 < *(uint **)(param_2 + 0x24)) ||
                             ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                              local_34 + 6)) break;
                          uVar7 = local_34[6];
                          FUN_00470554(param_1,param_2,
                                       uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 |
                                       (uVar7 & 0xff00) << 8 | uVar7 << 0x18,6,local_2c);
                          param_4[7] = param_4[7] + local_2c._12_4_;
                          param_4[3] = param_4[3] + local_2c._0_4_;
                          param_4[4] = param_4[4] + local_2c._8_4_;
                          param_4[5] = param_4[5] + (int)local_1c;
                          param_4[6] = param_4[6] + local_2c._4_4_;
                          param_4[8] = param_4[8] + local_1c._4_4_;
                        }
                        *param_4 = 0xc;
                        goto LAB_0047077f;
                      }
                      break;
                    case 0xe:
                    case 0xf:
                      param_4[1] = (uint)local_34;
                      *(undefined1 *)(param_4 + 2) = 0;
                      if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                         (local_30 <=
                          (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4))) {
                        param_4[3] = (uint)CONCAT11((byte)*local_30,*(byte *)((int)local_30 + 1)) <<
                                     0x10;
                        param_4[4] = (uint)CONCAT11(*(byte *)((int)local_30 + 2),
                                                    *(byte *)((int)local_30 + 3)) << 0x10;
                        if (uVar7 == 0xf) {
                          if ((local_30 + 1 < *(uint **)(param_2 + 0x24)) ||
                             ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                              local_30 + 1)) break;
                          uVar7 = local_30[1];
                          FUN_00470554(param_1,param_2,
                                       uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 |
                                       (uVar7 & 0xff00) << 8 | uVar7 << 0x18,2,local_2c);
                          *(ulonglong *)(param_4 + 3) =
                               CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20) +
                                        local_2c._4_4_ * 0x10000,
                                        (int)*(undefined8 *)(param_4 + 3) + local_2c._0_4_ * 0x10000
                                       );
                        }
                        *param_4 = 0xe;
                        goto LAB_0047077f;
                      }
                    }
                  }
                  goto LAB_00470653;
                }
              }
              uVar5 = FUN_00471381(param_2,(byte *)local_34,param_4 + 1,uVar3);
              if ((((char)uVar5 != '\0') && (*(uint **)(param_2 + 0x24) <= local_30)) &&
                 (local_30 <= (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -0xc)))
              {
                param_4[6] = (uint)CONCAT11((byte)*local_30,*(byte *)((int)local_30 + 1)) << 0x10;
                param_4[7] = (uint)CONCAT11(*(byte *)((int)local_30 + 2),
                                            *(byte *)((int)local_30 + 3)) << 0x10;
                uVar7 = (uint)CONCAT11((byte)local_30[1],*(byte *)((int)local_30 + 5)) << 0x10;
                if (0x7ffffffe < uVar7) {
                  uVar7 = 0x7fffffff;
                }
                param_4[8] = uVar7;
                param_4[9] = (uint)CONCAT11(*(byte *)((int)local_30 + 6),
                                            *(byte *)((int)local_30 + 7)) << 0x10;
                param_4[10] = (uint)CONCAT11((byte)local_30[2],*(byte *)((int)local_30 + 9)) << 0x10
                ;
                uVar7 = (uint)CONCAT11(*(byte *)((int)local_30 + 10),*(byte *)((int)local_30 + 0xb))
                        << 0x10;
                if (0x7ffffffe < uVar7) {
                  uVar7 = 0x7fffffff;
                }
                param_4[0xb] = uVar7;
                puVar6 = local_30;
                if (local_38 != 6) {
                  if ((local_30 + 3 < *(uint **)(param_2 + 0x24)) ||
                     ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                      local_30 + 3)) goto LAB_00470653;
                  uVar7 = local_30[3];
                  puVar6 = (uint *)FUN_00470554(param_1,param_2,
                                                uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 |
                                                (uVar7 & 0xff00) << 8 | uVar7 << 0x18,6,local_2c);
                  param_4[6] = param_4[6] + local_2c._0_4_ * 0x10000;
                  param_4[7] = param_4[7] + local_2c._4_4_ * 0x10000;
                  param_4[8] = param_4[8] + local_2c._8_4_ * 0x10000;
                  param_4[9] = param_4[9] + local_2c._12_4_ * 0x10000;
                  *(ulonglong *)(param_4 + 10) =
                       CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 10) >> 0x20) +
                                (int)((ulonglong)local_1c >> 0x20) * 0x10000,
                                (int)*(undefined8 *)(param_4 + 10) + (int)local_1c * 0x10000);
                }
                *param_4 = 6;
                param_4 = puVar6;
                goto LAB_0047077f;
              }
              goto LAB_00470653;
            }
          }
          uVar5 = FUN_00471381(param_2,(byte *)local_34,param_4 + 1,uVar3);
          if ((((char)uVar5 != '\0') && (*(uint **)(param_2 + 0x24) <= local_30)) &&
             (local_30 <= (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -0xc))) {
            param_4[6] = (uint)CONCAT11((byte)*local_30,*(byte *)((int)local_30 + 1)) << 0x10;
            param_4[7] = (uint)CONCAT11(*(byte *)((int)local_30 + 2),*(byte *)((int)local_30 + 3))
                         << 0x10;
            param_4[8] = (uint)CONCAT11((byte)local_30[1],*(byte *)((int)local_30 + 5)) << 0x10;
            param_4[9] = (uint)CONCAT11(*(byte *)((int)local_30 + 6),*(byte *)((int)local_30 + 7))
                         << 0x10;
            param_4[10] = (uint)CONCAT11((byte)local_30[2],*(byte *)((int)local_30 + 9)) << 0x10;
            param_4[0xb] = (uint)CONCAT11(*(byte *)((int)local_30 + 10),
                                          *(byte *)((int)local_30 + 0xb)) << 0x10;
            puVar6 = local_30;
            if (local_38 != 4) {
              if ((local_30 + 3 < *(uint **)(param_2 + 0x24)) ||
                 ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) < local_30 + 3)
                 ) goto LAB_00470653;
              uVar7 = local_30[3];
              puVar6 = (uint *)FUN_00470554(param_1,param_2,
                                            uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 |
                                            (uVar7 & 0xff00) << 8 | uVar7 << 0x18,6,local_2c);
              param_4[6] = param_4[6] + local_2c._0_4_ * 0x10000;
              param_4[7] = param_4[7] + local_2c._4_4_ * 0x10000;
              param_4[8] = param_4[8] + local_2c._8_4_ * 0x10000;
              param_4[9] = param_4[9] + local_2c._12_4_ * 0x10000;
              *(ulonglong *)(param_4 + 10) =
                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 10) >> 0x20) +
                            (int)((ulonglong)local_1c >> 0x20) * 0x10000,
                            (int)*(undefined8 *)(param_4 + 10) + (int)local_1c * 0x10000);
            }
            *param_4 = 4;
            param_4 = puVar6;
            goto LAB_0047077f;
          }
        }
      }
    }
  }
LAB_00470653:
  uVar5 = 0;
LAB_00470655:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_38)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_38);
}

