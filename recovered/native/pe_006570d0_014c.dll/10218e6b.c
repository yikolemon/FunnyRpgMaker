/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10218e6b */

undefined4 __fastcall FUN_10218e6b(undefined4 param_1,int param_2,byte *param_3,uint *param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  char cVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint local_38;
  uint *local_34;
  uint *local_30;
  undefined1 local_2c [16];
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  local_34 = (uint *)0x0;
  local_1c = 0;
  local_2c = (undefined1  [16])0x0;
  if ((((param_3 != (byte *)0x0) && (*(int *)(param_2 + 0x48) != 0)) &&
      (*(byte **)(param_2 + 0x24) <= param_3)) &&
     (param_3 <= (byte *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
    local_30 = (uint *)(param_3 + 1);
    uVar6 = (uint)*param_3;
    *param_4 = uVar6;
    if (uVar6 < 0x21) {
      if (uVar6 - 2 < 2) {
        if ((local_30 < *(uint **)(param_2 + 0x24)) ||
           ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) < local_30))
        goto LAB_10218ed3;
        *(ushort *)(param_4 + 1) = *(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8;
        *(ushort *)((int)param_4 + 6) =
             *(ushort *)(param_3 + 3) << 8 | *(ushort *)(param_3 + 3) >> 8;
        if (uVar6 == 3) {
          if ((param_3 + 5 < *(byte **)(param_2 + 0x24)) ||
             ((byte *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) < param_3 + 5))
          goto LAB_10218ed3;
          uVar6 = *(uint *)(param_3 + 5);
          FUN_10218dd4(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                       uVar6 << 0x18,1,local_2c);
          *(short *)((int)param_4 + 6) = *(short *)((int)param_4 + 6) + local_2c._0_2_;
        }
        *param_4 = 2;
LAB_10218fff:
        uVar4 = 1;
        goto LAB_10218ed5;
      }
      if (uVar6 == 0xb) {
        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
           (local_30 <= (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
          param_4[1] = (uint)(ushort)(*(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8)
          ;
          goto LAB_10218fff;
        }
      }
      else if (uVar6 == 1) {
        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
           (local_30 <= (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -5))) {
          uVar6 = (uint)(byte)*local_30;
          if (uVar6 <= *(uint *)(param_2 + 0x18)) {
            uVar7 = *(uint *)(param_3 + 2);
            uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
            if (uVar7 + uVar6 <= *(uint *)(param_2 + 0x18)) {
              param_4[1] = uVar6;
              param_4[2] = 0;
              uVar6 = *(int *)(param_2 + 0x1c) + uVar7 * 4 + 4;
LAB_10218f48:
              param_4[3] = uVar6;
              goto LAB_10218fff;
            }
          }
        }
      }
      else {
        cVar3 = FUN_10219ba7(&local_30,&local_34);
        if (cVar3 != '\0') {
          uVar6 = *param_4;
          local_38 = uVar6;
          if (uVar6 == 4) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
            if (uVar6 != 5) {
              if (uVar6 == 6) {
                uVar4 = 0;
              }
              else {
                uVar4 = 1;
                if (uVar6 != 7) {
                  if (uVar6 == 8) {
                    uVar4 = 0;
switchD_10219315_caseD_9:
                    cVar3 = FUN_10219c01(param_4 + 1,uVar4);
                    if (((cVar3 != '\0') && (*(uint **)(param_2 + 0x24) <= local_30)) &&
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
                      if (local_38 != 8) {
                        if ((local_30 + 2 < *(uint **)(param_2 + 0x24)) ||
                           ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                            local_30 + 2)) goto LAB_10218ed3;
                        uVar6 = local_30[2];
                        FUN_10218dd4(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18,4,local_2c);
                        param_4[6] = param_4[6] + local_2c._0_4_ * 0x10000;
                        param_4[7] = param_4[7] + local_2c._4_4_ * 0x10000;
                        param_4[8] = param_4[8] + local_2c._8_4_ * 4;
                        param_4[9] = param_4[9] + local_2c._12_4_ * 4;
                      }
                      *param_4 = 8;
                      goto LAB_10218fff;
                    }
                  }
                  else {
                    uVar4 = 1;
                    switch(uVar6) {
                    case 9:
                      goto switchD_10219315_caseD_9;
                    case 10:
                      if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                         (local_30 <=
                          (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        uVar6 = (uint)(ushort)((ushort)*local_30 << 8 | (ushort)*local_30 >> 8);
                        goto LAB_10218f48;
                      }
                      break;
                    default:
                      if ((uVar6 & 0xfffffff8) == 0x10) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
                          puVar5 = (uint *)((int)local_30 + 2);
                          uVar7 = ((int)(short)((ushort)(byte)*local_30 << 8) |
                                  (uint)*(byte *)((int)local_30 + 1)) << 2;
                          param_4[3] = uVar7;
                          if (uVar6 < 0x14) {
                            if ((puVar5 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2) <
                                puVar5)) break;
                            puVar5 = local_30 + 1;
                            uVar7 = ((int)(short)((ushort)*(byte *)((int)local_30 + 2) << 8) |
                                    (uint)*(byte *)((int)local_30 + 3)) << 2;
                          }
                          param_4[4] = uVar7;
                          if ((uVar6 < 0x18) && ((0xcc0000U >> (uVar6 & 0x1f) & 1) != 0)) {
                            if ((puVar5 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar5)) break;
                            param_4[5] = (uint)CONCAT11((byte)*puVar5,*(byte *)((int)puVar5 + 1)) <<
                                         0x10;
                            puVar1 = (ushort *)((int)puVar5 + 2);
                            pbVar2 = (byte *)((int)puVar5 + 3);
                            puVar5 = puVar5 + 1;
                            uVar7 = (uint)CONCAT11(*(byte *)puVar1,*pbVar2) << 0x10;
                          }
                          else {
                            param_4[5] = 0;
                            uVar7 = 0;
                          }
                          param_4[6] = uVar7;
                          if ((uVar6 < 0x18) && ((0xaa0000U >> (uVar6 & 0x1f) & 1) != 0)) {
                            if ((puVar5 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar5)) break;
                            local_30 = puVar5 + 1;
                            uVar7 = *puVar5;
                            uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                    | uVar7 << 0x18;
                            if (uVar6 == 0x11) {
                              FUN_10218dd4(uVar7,2,local_2c);
                              *(ulonglong *)(param_4 + 3) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20) +
                                            local_2c._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 3) + local_2c._0_4_ * 4);
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x13) {
                              FUN_10218dd4(uVar7,4,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              param_4[4] = param_4[4] + local_2c._4_4_ * 4;
                              param_4[5] = param_4[5] + local_2c._8_4_ * 0x10000;
                              param_4[6] = param_4[6] + local_2c._12_4_ * 0x10000;
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x15) {
                              FUN_10218dd4(uVar7,1,local_2c);
                              *(ulonglong *)(param_4 + 3) =
                                   CONCAT44(local_2c._0_4_ * 4 +
                                            (int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20),
                                            local_2c._0_4_ * 4 + (int)*(undefined8 *)(param_4 + 3));
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x17) {
                              FUN_10218dd4(uVar7,3,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              param_4[4] = param_4[4] + local_2c._0_4_ * 4;
                              param_4[5] = param_4[5] + local_2c._4_4_ * 0x10000;
                              param_4[6] = param_4[6] + local_2c._8_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x10;
                          goto LAB_10218fff;
                        }
                      }
                      else if (uVar6 - 0x18 < 4) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -2))) {
                          puVar5 = (uint *)((int)local_30 + 2);
                          param_4[3] = ((int)(short)((ushort)(byte)*local_30 << 8) |
                                       (uint)*(byte *)((int)local_30 + 1)) << 2;
                          if ((uVar6 & 0xfffffffe) == 0x1a) {
                            if ((puVar5 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar5)) break;
                            param_4[4] = (uint)CONCAT11(*(byte *)((int)local_30 + 2),
                                                        *(byte *)((int)local_30 + 3)) << 0x10;
                            puVar5 = (uint *)((int)local_30 + 6);
                            uVar7 = (uint)CONCAT11((byte)local_30[1],*(byte *)((int)local_30 + 5))
                                    << 0x10;
                          }
                          else {
                            param_4[4] = 0;
                            uVar7 = 0;
                          }
                          param_4[5] = uVar7;
                          if ((uVar6 | 2) == 0x1b) {
                            if ((puVar5 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar5)) break;
                            cVar3 = '\x01';
                            if (uVar6 != 0x19) {
                              cVar3 = (uVar6 == 0x1b) * '\x03';
                            }
                            if (cVar3 != '\0') {
                              uVar7 = *puVar5;
                              FUN_10218dd4(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 |
                                           (uVar7 & 0xff00) << 8 | uVar7 << 0x18,cVar3,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              if (uVar6 == 0x1b) {
                                *(ulonglong *)(param_4 + 4) =
                                     CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20)
                                              + local_2c._8_4_ * 0x10000,
                                              (int)*(undefined8 *)(param_4 + 4) +
                                              local_2c._4_4_ * 0x10000);
                              }
                            }
                          }
                          *param_4 = 0x18;
                          goto LAB_10218fff;
                        }
                      }
                      else if (uVar6 - 0x1c < 4) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4))) {
                          param_4[3] = ((int)(short)((ushort)(byte)*local_30 << 8) |
                                       (uint)*(byte *)((int)local_30 + 1)) << 2;
                          puVar5 = local_30 + 1;
                          param_4[4] = ((int)(short)((ushort)*(byte *)((int)local_30 + 2) << 8) |
                                       (uint)*(byte *)((int)local_30 + 3)) << 2;
                          if ((uVar6 & 0xfffffffe) == 0x1e) {
                            if ((puVar5 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar5)) break;
                            param_4[5] = (uint)CONCAT11((byte)local_30[1],
                                                        *(byte *)((int)local_30 + 5)) << 0x10;
                            puVar5 = local_30 + 2;
                            uVar7 = (uint)CONCAT11(*(byte *)((int)local_30 + 6),
                                                   *(byte *)((int)local_30 + 7)) << 0x10;
                          }
                          else {
                            param_4[5] = 0;
                            uVar7 = 0;
                          }
                          param_4[6] = uVar7;
                          if ((uVar6 | 2) == 0x1f) {
                            if ((puVar5 < *(uint **)(param_2 + 0x24)) ||
                               ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                                puVar5)) break;
                            uVar7 = *puVar5;
                            uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8
                                    | uVar7 << 0x18;
                            if (uVar6 == 0x1d) {
                              FUN_10218dd4(uVar7,2,local_2c);
                              *(ulonglong *)(param_4 + 3) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20) +
                                            local_2c._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 3) + local_2c._0_4_ * 4);
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x1f) {
                              FUN_10218dd4(uVar7,4,local_2c);
                              param_4[3] = param_4[3] + local_2c._0_4_ * 4;
                              param_4[4] = param_4[4] + local_2c._4_4_ * 4;
                              param_4[5] = param_4[5] + local_2c._8_4_ * 0x10000;
                              param_4[6] = param_4[6] + local_2c._12_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x1c;
                          goto LAB_10218fff;
                        }
                      }
                      else if (uVar6 == 0x20) {
                        param_4[1] = (uint)local_34;
                        *(undefined1 *)(param_4 + 2) = 0;
                        if ((*(uint **)(param_2 + 0x24) <= local_30) &&
                           (local_30 <=
                            (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -1))) {
                          puVar5 = (uint *)((int)local_30 + 1);
                          uVar6 = *local_30;
                          local_30 = puVar5;
                          if ((byte)uVar6 < 0x1c) {
                            param_4[3] = (uint)(byte)uVar6;
                            cVar3 = FUN_10219ba7(&local_30,&local_34);
                            if (cVar3 != '\0') {
                              param_4[4] = (uint)local_34;
                              *(undefined1 *)(param_4 + 5) = 0;
                              goto LAB_10218fff;
                            }
                          }
                        }
                      }
                      break;
                    case 0xc:
                    case 0xd:
                      param_4[1] = (uint)local_34;
                      *(undefined1 *)(param_4 + 2) = 0;
                      cVar3 = FUN_10219ba7(&local_30,&local_34);
                      if (((cVar3 != '\0') && (*(uint **)(param_2 + 0x24) <= local_34)) &&
                         (local_34 <=
                          (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -0x18))) {
                        uVar6 = *local_34;
                        param_4[3] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_34[1];
                        param_4[6] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_34[2];
                        param_4[4] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_34[3];
                        param_4[7] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_34[4];
                        param_4[5] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_34[5];
                        param_4[8] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        if (*param_4 == 0xd) {
                          if ((local_34 + 6 < *(uint **)(param_2 + 0x24)) ||
                             ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                              local_34 + 6)) break;
                          uVar6 = local_34[6];
                          FUN_10218dd4(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                       (uVar6 & 0xff00) << 8 | uVar6 << 0x18,6,local_2c);
                          param_4[7] = param_4[7] + local_2c._12_4_;
                          param_4[3] = param_4[3] + local_2c._0_4_;
                          param_4[4] = param_4[4] + local_2c._8_4_;
                          param_4[5] = param_4[5] + (int)local_1c;
                          param_4[6] = param_4[6] + local_2c._4_4_;
                          param_4[8] = param_4[8] + local_1c._4_4_;
                        }
                        *param_4 = 0xc;
                        goto LAB_10218fff;
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
                        if (uVar6 == 0xf) {
                          if ((local_30 + 1 < *(uint **)(param_2 + 0x24)) ||
                             ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                              local_30 + 1)) break;
                          uVar6 = local_30[1];
                          FUN_10218dd4(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                       (uVar6 & 0xff00) << 8 | uVar6 << 0x18,2,local_2c);
                          *(ulonglong *)(param_4 + 3) =
                               CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20) +
                                        local_2c._4_4_ * 0x10000,
                                        (int)*(undefined8 *)(param_4 + 3) + local_2c._0_4_ * 0x10000
                                       );
                        }
                        *param_4 = 0xe;
                        goto LAB_10218fff;
                      }
                    }
                  }
                  goto LAB_10218ed3;
                }
              }
              cVar3 = FUN_10219c01(param_4 + 1,uVar4);
              if (((cVar3 != '\0') && (*(uint **)(param_2 + 0x24) <= local_30)) &&
                 (local_30 <= (uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -0xc)))
              {
                param_4[6] = (uint)CONCAT11((byte)*local_30,*(byte *)((int)local_30 + 1)) << 0x10;
                param_4[7] = (uint)CONCAT11(*(byte *)((int)local_30 + 2),
                                            *(byte *)((int)local_30 + 3)) << 0x10;
                uVar6 = (uint)CONCAT11((byte)local_30[1],*(byte *)((int)local_30 + 5)) << 0x10;
                if (0x7ffffffe < uVar6) {
                  uVar6 = 0x7fffffff;
                }
                param_4[8] = uVar6;
                param_4[9] = (uint)CONCAT11(*(byte *)((int)local_30 + 6),
                                            *(byte *)((int)local_30 + 7)) << 0x10;
                param_4[10] = (uint)CONCAT11((byte)local_30[2],*(byte *)((int)local_30 + 9)) << 0x10
                ;
                uVar6 = (uint)CONCAT11(*(byte *)((int)local_30 + 10),*(byte *)((int)local_30 + 0xb))
                        << 0x10;
                if (0x7ffffffe < uVar6) {
                  uVar6 = 0x7fffffff;
                }
                param_4[0xb] = uVar6;
                if (local_38 != 6) {
                  if ((local_30 + 3 < *(uint **)(param_2 + 0x24)) ||
                     ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) <
                      local_30 + 3)) goto LAB_10218ed3;
                  uVar6 = local_30[3];
                  FUN_10218dd4(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18,6,local_2c);
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
                goto LAB_10218fff;
              }
              goto LAB_10218ed3;
            }
          }
          cVar3 = FUN_10219c01(param_4 + 1,uVar4);
          if (((cVar3 != '\0') && (*(uint **)(param_2 + 0x24) <= local_30)) &&
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
            if (local_38 != 4) {
              if ((local_30 + 3 < *(uint **)(param_2 + 0x24)) ||
                 ((uint *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) + -4) < local_30 + 3)
                 ) goto LAB_10218ed3;
              uVar6 = local_30[3];
              FUN_10218dd4(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                           uVar6 << 0x18,6,local_2c);
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
            goto LAB_10218fff;
          }
        }
      }
    }
  }
LAB_10218ed3:
  uVar4 = 0;
LAB_10218ed5:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_38)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

