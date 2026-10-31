/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140076b5a */

undefined8 FUN_140076b5a(longlong param_1,longlong param_2,byte *param_3,uint *param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 auStackY_98 [32];
  uint *local_68;
  uint *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  uVar8 = 0;
  local_68 = (uint *)0x0;
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  if (param_3 == (byte *)0x0) goto LAB_140076bd7;
  if (((*(longlong *)(param_2 + 0x80) != 0) && (*(byte **)(param_2 + 0x40) <= param_3)) &&
     (param_3 <=
      (byte *)((*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88)) - 2))) {
    local_60 = (uint *)(param_3 + 1);
    bVar3 = *param_3;
    *param_4 = (uint)bVar3;
    if (bVar3 < 0x21) {
      if (bVar3 - 2 < 2) {
        if ((local_60 < *(uint **)(param_2 + 0x40)) ||
           ((uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -4) <
            local_60)) goto LAB_140076bd5;
        *(ushort *)(param_4 + 2) = *(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8;
        uVar5 = *(ushort *)(param_3 + 3) << 8 | *(ushort *)(param_3 + 3) >> 8;
        *(ushort *)((longlong)param_4 + 10) = uVar5;
        if (bVar3 == 3) {
          if ((param_3 + 5 < *(byte **)(param_2 + 0x40)) ||
             ((byte *)((*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88)) - 4) <
              param_3 + 5)) goto LAB_140076bd5;
          uVar6 = *(uint *)(param_3 + 5);
          FUN_140076aaf(param_1,param_2,
                        uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18,1,(undefined1 (*) [32])local_58);
          *(short *)((longlong)param_4 + 10) = *(short *)((longlong)param_4 + 10) + local_58._0_2_;
          uVar5 = local_58._0_2_;
        }
        puVar7 = (uint *)(ulonglong)uVar5;
        *param_4 = 2;
LAB_140076d49:
        uVar8 = CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
        goto LAB_140076bd7;
      }
      if (bVar3 == 0xb) {
        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
           (local_60 <=
            (uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
          uVar5 = *(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8;
          puVar7 = (uint *)(ulonglong)uVar5;
          param_4[2] = (uint)uVar5;
          goto LAB_140076d49;
        }
      }
      else if (bVar3 == 1) {
        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
           (local_60 <=
            (uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -5))) {
          bVar3 = (byte)*local_60;
          if ((uint)bVar3 <= *(uint *)(param_2 + 0x28)) {
            uVar6 = *(uint *)(param_3 + 2);
            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            if (uVar6 + bVar3 <= *(uint *)(param_2 + 0x28)) {
              param_4[2] = (uint)bVar3;
              param_4[3] = 0;
              puVar7 = (uint *)((ulonglong)(uVar6 << 2) + *(longlong *)(param_2 + 0x30) + 4);
              *(uint **)(param_4 + 4) = puVar7;
              goto LAB_140076d49;
            }
          }
        }
      }
      else {
        uVar8 = FUN_140077a34(param_2,(longlong)param_3,(longlong *)&local_60,(ulonglong *)&local_68
                             );
        if ((char)uVar8 != '\0') {
          uVar6 = *param_4;
          if (uVar6 == 4) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
            if (uVar6 != 5) {
              if (uVar6 == 6) {
                uVar11 = 0;
              }
              else {
                uVar11 = 1;
                if (uVar6 != 7) {
                  if (uVar6 == 8) {
                    uVar11 = 0;
LAB_140076f60:
                    uVar8 = FUN_140077aa1(param_2,(byte *)local_68,param_4 + 2,uVar11);
                    if ((((char)uVar8 != '\0') && (*(uint **)(param_2 + 0x40) <= local_60)) &&
                       (local_60 <=
                        (uint *)(*(longlong *)(param_2 + 0x80) +
                                 (ulonglong)*(uint *)(param_2 + 0x88) + -8))) {
                      param_4[10] = (uint)CONCAT11((byte)*local_60,*(byte *)((longlong)local_60 + 1)
                                                  ) << 0x10;
                      param_4[0xb] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 2),
                                                    *(byte *)((longlong)local_60 + 3)) << 0x10;
                      param_4[0xc] = ((int)(short)((ushort)(byte)local_60[1] << 8) |
                                     (uint)*(byte *)((longlong)local_60 + 5)) << 2;
                      param_4[0xd] = ((int)(short)((ushort)*(byte *)((longlong)local_60 + 6) << 8) |
                                     (uint)*(byte *)((longlong)local_60 + 7)) << 2;
                      puVar7 = local_60;
                      if (uVar6 != 8) {
                        if ((local_60 + 2 < *(uint **)(param_2 + 0x40)) ||
                           ((uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -4) < local_60 + 2))
                        goto LAB_140076bd5;
                        uVar6 = local_60[2];
                        puVar7 = (uint *)FUN_140076aaf(param_1,param_2,
                                                       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                                       (uVar6 & 0xff00) << 8 | uVar6 << 0x18,4,
                                                       (undefined1 (*) [32])local_58);
                        param_4[10] = param_4[10] + local_58._0_4_ * 0x10000;
                        param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
                        param_4[0xc] = param_4[0xc] + local_58._8_4_ * 4;
                        param_4[0xd] = param_4[0xd] + local_58._12_4_ * 4;
                      }
                      *param_4 = 8;
                      goto LAB_140076d49;
                    }
                  }
                  else {
                    switch(uVar6) {
                    case 9:
                      uVar11 = 1;
                      goto LAB_140076f60;
                    case 10:
                      if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                         (local_60 <=
                          (uint *)(*(longlong *)(param_2 + 0x80) +
                                   (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        uVar5 = (ushort)*local_60 << 8 | (ushort)*local_60 >> 8;
                        puVar7 = (uint *)(ulonglong)uVar5;
                        param_4[6] = (uint)uVar5;
                        goto LAB_140076d49;
                      }
                      break;
                    default:
                      if ((uVar6 & 0xfffffff8) == 0x10) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
                          puVar7 = (uint *)((longlong)local_60 + 2);
                          uVar10 = ((int)(short)((ushort)(byte)*local_60 << 8) |
                                   (uint)*(byte *)((longlong)local_60 + 1)) << 2;
                          param_4[6] = uVar10;
                          if (uVar6 < 0x14) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -2) < puVar7))
                            break;
                            puVar7 = local_60 + 1;
                            uVar10 = ((int)(short)((ushort)*(byte *)((longlong)local_60 + 2) << 8) |
                                     (uint)*(byte *)((longlong)local_60 + 3)) << 2;
                          }
                          param_4[7] = uVar10;
                          if ((uVar6 < 0x18) && ((0xcc0000U >> (uVar6 & 0x1f) & 1) != 0)) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            param_4[8] = (uint)CONCAT11((byte)*puVar7,
                                                        *(byte *)((longlong)puVar7 + 1)) << 0x10;
                            puVar1 = (ushort *)((longlong)puVar7 + 2);
                            pbVar2 = (byte *)((longlong)puVar7 + 3);
                            puVar7 = puVar7 + 1;
                            uVar10 = (uint)CONCAT11(*(byte *)puVar1,*pbVar2) << 0x10;
                          }
                          else {
                            param_4[8] = 0;
                            uVar10 = 0;
                          }
                          param_4[9] = uVar10;
                          if ((uVar6 < 0x18) && ((0xaa0000U >> (uVar6 & 0x1f) & 1) != 0)) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            local_60 = puVar7 + 1;
                            uVar10 = *puVar7;
                            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                     (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
                            if (uVar6 == 0x11) {
                              puVar7 = (uint *)FUN_140076aaf(param_1,param_2,uVar10,2,
                                                             (undefined1 (*) [32])local_58);
                              *(ulonglong *)(param_4 + 6) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20) +
                                            local_58._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 6) + local_58._0_4_ * 4);
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x13) {
                              puVar7 = (uint *)FUN_140076aaf(param_1,param_2,uVar10,4,
                                                             (undefined1 (*) [32])local_58);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              param_4[7] = param_4[7] + local_58._4_4_ * 4;
                              param_4[8] = param_4[8] + local_58._8_4_ * 0x10000;
                              param_4[9] = param_4[9] + local_58._12_4_ * 0x10000;
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x15) {
                              puVar7 = (uint *)FUN_140076aaf(param_1,param_2,uVar10,1,
                                                             (undefined1 (*) [32])local_58);
                              *(ulonglong *)(param_4 + 6) =
                                   CONCAT44(local_58._0_4_ * 4 +
                                            (int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20),
                                            local_58._0_4_ * 4 + (int)*(undefined8 *)(param_4 + 6));
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x17) {
                              puVar7 = (uint *)FUN_140076aaf(param_1,param_2,uVar10,3,
                                                             (undefined1 (*) [32])local_58);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              param_4[7] = param_4[7] + local_58._0_4_ * 4;
                              param_4[8] = param_4[8] + local_58._4_4_ * 0x10000;
                              param_4[9] = param_4[9] + local_58._8_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x10;
                          goto LAB_140076d49;
                        }
                      }
                      else if (uVar6 - 0x18 < 4) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
                          puVar7 = (uint *)((longlong)local_60 + 2);
                          param_4[6] = ((int)(short)((ushort)(byte)*local_60 << 8) |
                                       (uint)*(byte *)((longlong)local_60 + 1)) << 2;
                          if ((uVar6 & 0xfffffffe) == 0x1a) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            param_4[7] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 2),
                                                        *(byte *)((longlong)local_60 + 3)) << 0x10;
                            puVar7 = (uint *)((longlong)local_60 + 6);
                            uVar10 = (uint)CONCAT11((byte)local_60[1],
                                                    *(byte *)((longlong)local_60 + 5)) << 0x10;
                          }
                          else {
                            param_4[7] = 0;
                            uVar10 = 0;
                          }
                          param_4[8] = uVar10;
                          if ((uVar6 | 2) == 0x1b) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            uVar10 = 1;
                            if (uVar6 != 0x19) {
                              uVar10 = (uint)(uVar6 == 0x1b) * 3;
                            }
                            if (uVar10 != 0) {
                              uVar4 = *puVar7;
                              FUN_140076aaf(param_1,param_2,
                                            uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                            (uVar4 & 0xff00) << 8 | uVar4 << 0x18,uVar10,
                                            (undefined1 (*) [32])local_58);
                              puVar7 = (uint *)(ulonglong)(uint)(local_58._0_4_ * 4);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              if (uVar6 == 0x1b) {
                                *(ulonglong *)(param_4 + 7) =
                                     CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 7) >> 0x20)
                                              + local_58._8_4_ * 0x10000,
                                              (int)*(undefined8 *)(param_4 + 7) +
                                              local_58._4_4_ * 0x10000);
                              }
                            }
                          }
                          *param_4 = 0x18;
                          goto LAB_140076d49;
                        }
                      }
                      else if (uVar6 - 0x1c < 4) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -4))) {
                          param_4[6] = ((int)(short)((ushort)(byte)*local_60 << 8) |
                                       (uint)*(byte *)((longlong)local_60 + 1)) << 2;
                          puVar9 = local_60 + 1;
                          param_4[7] = ((int)(short)((ushort)*(byte *)((longlong)local_60 + 2) << 8)
                                       | (uint)*(byte *)((longlong)local_60 + 3)) << 2;
                          if ((uVar6 & 0xfffffffe) == 0x1e) {
                            if ((puVar9 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar9))
                            break;
                            param_4[8] = (uint)CONCAT11((byte)local_60[1],
                                                        *(byte *)((longlong)local_60 + 5)) << 0x10;
                            puVar9 = local_60 + 2;
                            uVar10 = (uint)CONCAT11(*(byte *)((longlong)local_60 + 6),
                                                    *(byte *)((longlong)local_60 + 7)) << 0x10;
                          }
                          else {
                            param_4[8] = 0;
                            uVar10 = 0;
                          }
                          param_4[9] = uVar10;
                          puVar7 = (uint *)(ulonglong)(uVar6 | 2);
                          if ((uVar6 | 2) == 0x1f) {
                            if ((puVar9 < *(uint **)(param_2 + 0x40)) ||
                               (puVar7 = (uint *)(*(longlong *)(param_2 + 0x80) +
                                                  (ulonglong)*(uint *)(param_2 + 0x88) + -4),
                               puVar7 < puVar9)) break;
                            uVar10 = *puVar9;
                            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                     (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
                            if (uVar6 == 0x1d) {
                              puVar7 = (uint *)FUN_140076aaf(param_1,param_2,uVar10,2,
                                                             (undefined1 (*) [32])local_58);
                              *(ulonglong *)(param_4 + 6) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20) +
                                            local_58._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 6) + local_58._0_4_ * 4);
                              uVar6 = *param_4;
                            }
                            if (uVar6 == 0x1f) {
                              puVar7 = (uint *)FUN_140076aaf(param_1,param_2,uVar10,4,
                                                             (undefined1 (*) [32])local_58);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              param_4[7] = param_4[7] + local_58._4_4_ * 4;
                              param_4[8] = param_4[8] + local_58._8_4_ * 0x10000;
                              param_4[9] = param_4[9] + local_58._12_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x1c;
                          goto LAB_140076d49;
                        }
                      }
                      else if (uVar6 == 0x20) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -1))) {
                          puVar7 = (uint *)((longlong)local_60 + 1);
                          uVar6 = *local_60;
                          local_60 = puVar7;
                          if ((byte)uVar6 < 0x1c) {
                            param_4[6] = (uint)(byte)uVar6;
                            uVar8 = FUN_140077a34(param_2,(longlong)param_3,(longlong *)&local_60,
                                                  (ulonglong *)&local_68);
                            if ((char)uVar8 != '\0') {
                              *(uint **)(param_4 + 8) = local_68;
                              *(undefined1 *)(param_4 + 10) = 0;
                              puVar7 = local_68;
                              goto LAB_140076d49;
                            }
                          }
                        }
                      }
                      break;
                    case 0xc:
                    case 0xd:
                      *(uint **)(param_4 + 2) = local_68;
                      *(undefined1 *)(param_4 + 4) = 0;
                      uVar8 = FUN_140077a34(param_2,(longlong)param_3,(longlong *)&local_60,
                                            (ulonglong *)&local_68);
                      if ((((char)uVar8 != '\0') && (*(uint **)(param_2 + 0x40) <= local_68)) &&
                         (local_68 <=
                          (uint *)(*(longlong *)(param_2 + 0x80) +
                                   (ulonglong)*(uint *)(param_2 + 0x88) + -0x18))) {
                        uVar6 = *local_68;
                        param_4[6] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_68[1];
                        param_4[9] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_68[2];
                        param_4[7] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_68[3];
                        param_4[10] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                      (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
                        uVar6 = local_68[4];
                        param_4[8] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
                        uVar6 = local_68[5];
                        param_4[0xb] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                       (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
                        puVar7 = local_68;
                        if (*param_4 == 0xd) {
                          if ((local_68 + 6 < *(uint **)(param_2 + 0x40)) ||
                             ((uint *)(*(longlong *)(param_2 + 0x80) +
                                       (ulonglong)*(uint *)(param_2 + 0x88) + -4) < local_68 + 6))
                          break;
                          uVar6 = local_68[6];
                          FUN_140076aaf(param_1,param_2,
                                        uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                        (uVar6 & 0xff00) << 8 | uVar6 << 0x18,6,
                                        (undefined1 (*) [32])local_58);
                          param_4[10] = param_4[10] + local_58._12_4_;
                          param_4[6] = param_4[6] + local_58._0_4_;
                          param_4[7] = param_4[7] + local_58._8_4_;
                          param_4[8] = param_4[8] + (int)local_48;
                          param_4[9] = param_4[9] + local_58._4_4_;
                          puVar7 = (uint *)(ulonglong)local_48._4_4_;
                          param_4[0xb] = param_4[0xb] + local_48._4_4_;
                        }
                        *param_4 = 0xc;
                        goto LAB_140076d49;
                      }
                      break;
                    case 0xe:
                    case 0xf:
                      *(uint **)(param_4 + 2) = local_68;
                      *(undefined1 *)(param_4 + 4) = 0;
                      if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                         (local_60 <=
                          (uint *)(*(longlong *)(param_2 + 0x80) +
                                   (ulonglong)*(uint *)(param_2 + 0x88) + -4))) {
                        param_4[6] = (uint)CONCAT11((byte)*local_60,
                                                    *(byte *)((longlong)local_60 + 1)) << 0x10;
                        param_4[7] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 2),
                                                    *(byte *)((longlong)local_60 + 3)) << 0x10;
                        puVar7 = local_60;
                        if (uVar6 == 0xf) {
                          if ((local_60 + 1 < *(uint **)(param_2 + 0x40)) ||
                             ((uint *)(*(longlong *)(param_2 + 0x80) +
                                       (ulonglong)*(uint *)(param_2 + 0x88) + -4) < local_60 + 1))
                          break;
                          uVar6 = local_60[1];
                          puVar7 = (uint *)FUN_140076aaf(param_1,param_2,
                                                         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                                         (uVar6 & 0xff00) << 8 | uVar6 << 0x18,2,
                                                         (undefined1 (*) [32])local_58);
                          *(ulonglong *)(param_4 + 6) =
                               CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20) +
                                        local_58._4_4_ * 0x10000,
                                        (int)*(undefined8 *)(param_4 + 6) + local_58._0_4_ * 0x10000
                                       );
                        }
                        *param_4 = 0xe;
                        goto LAB_140076d49;
                      }
                    }
                  }
                  goto LAB_140076bd5;
                }
              }
              uVar8 = FUN_140077aa1(param_2,(byte *)local_68,param_4 + 2,uVar11);
              if ((((char)uVar8 != '\0') && (*(uint **)(param_2 + 0x40) <= local_60)) &&
                 (local_60 <=
                  (uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) +
                          -0xc))) {
                param_4[10] = (uint)CONCAT11((byte)*local_60,*(byte *)((longlong)local_60 + 1)) <<
                              0x10;
                param_4[0xb] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 2),
                                              *(byte *)((longlong)local_60 + 3)) << 0x10;
                uVar10 = (uint)CONCAT11((byte)local_60[1],*(byte *)((longlong)local_60 + 5)) << 0x10
                ;
                if (0x7ffffffe < uVar10) {
                  uVar10 = 0x7fffffff;
                }
                param_4[0xc] = uVar10;
                param_4[0xd] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 6),
                                              *(byte *)((longlong)local_60 + 7)) << 0x10;
                param_4[0xe] = (uint)CONCAT11((byte)local_60[2],*(byte *)((longlong)local_60 + 9))
                               << 0x10;
                uVar10 = (uint)CONCAT11(*(byte *)((longlong)local_60 + 10),
                                        *(byte *)((longlong)local_60 + 0xb)) << 0x10;
                if (0x7ffffffe < uVar10) {
                  uVar10 = 0x7fffffff;
                }
                param_4[0xf] = uVar10;
                puVar7 = local_60;
                if (uVar6 != 6) {
                  if ((local_60 + 3 < *(uint **)(param_2 + 0x40)) ||
                     ((uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88)
                              + -4) < local_60 + 3)) goto LAB_140076bd5;
                  uVar6 = local_60[3];
                  puVar7 = (uint *)FUN_140076aaf(param_1,param_2,
                                                 uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                                 (uVar6 & 0xff00) << 8 | uVar6 << 0x18,6,
                                                 (undefined1 (*) [32])local_58);
                  param_4[10] = param_4[10] + local_58._0_4_ * 0x10000;
                  param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
                  param_4[0xc] = param_4[0xc] + local_58._8_4_ * 0x10000;
                  param_4[0xd] = param_4[0xd] + local_58._12_4_ * 0x10000;
                  *(ulonglong *)(param_4 + 0xe) =
                       CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 0xe) >> 0x20) +
                                SUB84(local_48,4) * 0x10000,
                                (int)*(undefined8 *)(param_4 + 0xe) + (int)local_48 * 0x10000);
                }
                *param_4 = 6;
                goto LAB_140076d49;
              }
              goto LAB_140076bd5;
            }
          }
          uVar8 = FUN_140077aa1(param_2,(byte *)local_68,param_4 + 2,uVar11);
          if ((((char)uVar8 != '\0') && (*(uint **)(param_2 + 0x40) <= local_60)) &&
             (local_60 <=
              (uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -0xc))
             ) {
            param_4[10] = (uint)CONCAT11((byte)*local_60,*(byte *)((longlong)local_60 + 1)) << 0x10;
            param_4[0xb] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 2),
                                          *(byte *)((longlong)local_60 + 3)) << 0x10;
            param_4[0xc] = (uint)CONCAT11((byte)local_60[1],*(byte *)((longlong)local_60 + 5)) <<
                           0x10;
            param_4[0xd] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 6),
                                          *(byte *)((longlong)local_60 + 7)) << 0x10;
            param_4[0xe] = (uint)CONCAT11((byte)local_60[2],*(byte *)((longlong)local_60 + 9)) <<
                           0x10;
            param_4[0xf] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 10),
                                          *(byte *)((longlong)local_60 + 0xb)) << 0x10;
            puVar7 = local_60;
            if (uVar6 != 4) {
              if ((local_60 + 3 < *(uint **)(param_2 + 0x40)) ||
                 ((uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -4
                          ) < local_60 + 3)) goto LAB_140076bd5;
              uVar6 = local_60[3];
              puVar7 = (uint *)FUN_140076aaf(param_1,param_2,
                                             uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                             (uVar6 & 0xff00) << 8 | uVar6 << 0x18,6,
                                             (undefined1 (*) [32])local_58);
              param_4[10] = param_4[10] + local_58._0_4_ * 0x10000;
              param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
              param_4[0xc] = param_4[0xc] + local_58._8_4_ * 0x10000;
              param_4[0xd] = param_4[0xd] + local_58._12_4_ * 0x10000;
              *(ulonglong *)(param_4 + 0xe) =
                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 0xe) >> 0x20) +
                            SUB84(local_48,4) * 0x10000,
                            (int)*(undefined8 *)(param_4 + 0xe) + (int)local_48 * 0x10000);
            }
            *param_4 = 4;
            goto LAB_140076d49;
          }
        }
      }
    }
  }
LAB_140076bd5:
  uVar8 = 0;
LAB_140076bd7:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_98)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_98);
}

