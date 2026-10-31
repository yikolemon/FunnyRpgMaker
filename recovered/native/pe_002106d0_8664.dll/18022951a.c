/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022951a */

undefined8 FUN_18022951a(undefined8 param_1,longlong param_2,byte *param_3,uint *param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  uint *local_68;
  uint *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar6 = 0;
  local_68 = (uint *)0x0;
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  if (param_3 == (byte *)0x0) goto LAB_180229597;
  if (((*(longlong *)(param_2 + 0x80) != 0) && (*(byte **)(param_2 + 0x40) <= param_3)) &&
     (param_3 <= (byte *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -2)
     )) {
    local_60 = (uint *)(param_3 + 1);
    bVar3 = *param_3;
    *param_4 = (uint)bVar3;
    if (bVar3 < 0x21) {
      if (bVar3 - 2 < 2) {
        if ((local_60 < *(uint **)(param_2 + 0x40)) ||
           ((uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -4) <
            local_60)) goto LAB_180229595;
        *(ushort *)(param_4 + 2) = *(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8;
        *(ushort *)((longlong)param_4 + 10) =
             *(ushort *)(param_3 + 3) << 8 | *(ushort *)(param_3 + 3) >> 8;
        if (bVar3 == 3) {
          if ((param_3 + 5 < *(byte **)(param_2 + 0x40)) ||
             ((byte *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -4) <
              param_3 + 5)) goto LAB_180229595;
          uVar5 = *(uint *)(param_3 + 5);
          local_78 = local_58;
          FUN_18022946f(param_1,param_2,
                        uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18,1);
          *(short *)((longlong)param_4 + 10) = *(short *)((longlong)param_4 + 10) + local_58._0_2_;
        }
        *param_4 = 2;
LAB_180229709:
        uVar6 = 1;
        goto LAB_180229597;
      }
      if (bVar3 == 0xb) {
        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
           (local_60 <=
            (uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
          param_4[2] = (uint)(ushort)(*(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8)
          ;
          goto LAB_180229709;
        }
      }
      else if (bVar3 == 1) {
        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
           (local_60 <=
            (uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -5))) {
          bVar3 = (byte)*local_60;
          if ((uint)bVar3 <= *(uint *)(param_2 + 0x28)) {
            uVar5 = *(uint *)(param_3 + 2);
            uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            if (uVar5 + bVar3 <= *(uint *)(param_2 + 0x28)) {
              param_4[2] = (uint)bVar3;
              param_4[3] = 0;
              *(ulonglong *)(param_4 + 4) =
                   (ulonglong)(uVar5 << 2) + *(longlong *)(param_2 + 0x30) + 4;
              goto LAB_180229709;
            }
          }
        }
      }
      else {
        cVar4 = FUN_18022a3f4(param_2,param_3,&local_60,&local_68);
        if (cVar4 != '\0') {
          uVar5 = *param_4;
          if (uVar5 == 4) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
            if (uVar5 != 5) {
              if (uVar5 == 6) {
                uVar6 = 0;
              }
              else {
                uVar6 = 1;
                if (uVar5 != 7) {
                  if (uVar5 == 8) {
                    uVar6 = 0;
LAB_180229920:
                    cVar4 = FUN_18022a461(param_2,local_68,param_4 + 2,uVar6);
                    if (((cVar4 != '\0') && (*(uint **)(param_2 + 0x40) <= local_60)) &&
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
                      if (uVar5 != 8) {
                        if ((local_60 + 2 < *(uint **)(param_2 + 0x40)) ||
                           ((uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -4) < local_60 + 2))
                        goto LAB_180229595;
                        uVar5 = local_60[2];
                        local_78 = local_58;
                        FUN_18022946f(param_1,param_2,
                                      uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                      (uVar5 & 0xff00) << 8 | uVar5 << 0x18,4);
                        param_4[10] = param_4[10] + local_58._0_4_ * 0x10000;
                        param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
                        param_4[0xc] = param_4[0xc] + local_58._8_4_ * 4;
                        param_4[0xd] = param_4[0xd] + local_58._12_4_ * 4;
                      }
                      *param_4 = 8;
                      goto LAB_180229709;
                    }
                  }
                  else {
                    switch(uVar5) {
                    case 9:
                      uVar6 = 1;
                      goto LAB_180229920;
                    case 10:
                      if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                         (local_60 <=
                          (uint *)(*(longlong *)(param_2 + 0x80) +
                                   (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        param_4[6] = (uint)(ushort)((ushort)*local_60 << 8 | (ushort)*local_60 >> 8)
                        ;
                        goto LAB_180229709;
                      }
                      break;
                    default:
                      if ((uVar5 & 0xfffffff8) == 0x10) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
                          puVar7 = (uint *)((longlong)local_60 + 2);
                          uVar8 = ((int)(short)((ushort)(byte)*local_60 << 8) |
                                  (uint)*(byte *)((longlong)local_60 + 1)) << 2;
                          param_4[6] = uVar8;
                          if (uVar5 < 0x14) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -2) < puVar7))
                            break;
                            puVar7 = local_60 + 1;
                            uVar8 = ((int)(short)((ushort)*(byte *)((longlong)local_60 + 2) << 8) |
                                    (uint)*(byte *)((longlong)local_60 + 3)) << 2;
                          }
                          param_4[7] = uVar8;
                          if ((uVar5 < 0x18) && ((0xcc0000U >> (uVar5 & 0x1f) & 1) != 0)) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            param_4[8] = (uint)CONCAT11((byte)*puVar7,
                                                        *(byte *)((longlong)puVar7 + 1)) << 0x10;
                            puVar1 = (ushort *)((longlong)puVar7 + 2);
                            pbVar2 = (byte *)((longlong)puVar7 + 3);
                            puVar7 = puVar7 + 1;
                            uVar8 = (uint)CONCAT11(*(byte *)puVar1,*pbVar2) << 0x10;
                          }
                          else {
                            param_4[8] = 0;
                            uVar8 = 0;
                          }
                          param_4[9] = uVar8;
                          if ((uVar5 < 0x18) && ((0xaa0000U >> (uVar5 & 0x1f) & 1) != 0)) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            local_60 = puVar7 + 1;
                            uVar8 = *puVar7;
                            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8
                                    | uVar8 << 0x18;
                            if (uVar5 == 0x11) {
                              local_78 = local_58;
                              FUN_18022946f(param_1,param_2,uVar8,2);
                              *(ulonglong *)(param_4 + 6) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20) +
                                            local_58._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 6) + local_58._0_4_ * 4);
                              uVar5 = *param_4;
                            }
                            if (uVar5 == 0x13) {
                              local_78 = local_58;
                              FUN_18022946f(param_1,param_2,uVar8,4);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              param_4[7] = param_4[7] + local_58._4_4_ * 4;
                              param_4[8] = param_4[8] + local_58._8_4_ * 0x10000;
                              param_4[9] = param_4[9] + local_58._12_4_ * 0x10000;
                              uVar5 = *param_4;
                            }
                            if (uVar5 == 0x15) {
                              local_78 = local_58;
                              FUN_18022946f(param_1,param_2,uVar8,1);
                              *(ulonglong *)(param_4 + 6) =
                                   CONCAT44(local_58._0_4_ * 4 +
                                            (int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20),
                                            local_58._0_4_ * 4 + (int)*(undefined8 *)(param_4 + 6));
                              uVar5 = *param_4;
                            }
                            if (uVar5 == 0x17) {
                              local_78 = local_58;
                              FUN_18022946f(param_1,param_2,uVar8,3);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              param_4[7] = param_4[7] + local_58._0_4_ * 4;
                              param_4[8] = param_4[8] + local_58._4_4_ * 0x10000;
                              param_4[9] = param_4[9] + local_58._8_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x10;
                          goto LAB_180229709;
                        }
                      }
                      else if (uVar5 - 0x18 < 4) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -2))) {
                          puVar7 = (uint *)((longlong)local_60 + 2);
                          param_4[6] = ((int)(short)((ushort)(byte)*local_60 << 8) |
                                       (uint)*(byte *)((longlong)local_60 + 1)) << 2;
                          if ((uVar5 & 0xfffffffe) == 0x1a) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            param_4[7] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 2),
                                                        *(byte *)((longlong)local_60 + 3)) << 0x10;
                            puVar7 = (uint *)((longlong)local_60 + 6);
                            uVar8 = (uint)CONCAT11((byte)local_60[1],
                                                   *(byte *)((longlong)local_60 + 5)) << 0x10;
                          }
                          else {
                            param_4[7] = 0;
                            uVar8 = 0;
                          }
                          param_4[8] = uVar8;
                          if ((uVar5 | 2) == 0x1b) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            cVar4 = '\x01';
                            if (uVar5 != 0x19) {
                              cVar4 = (uVar5 == 0x1b) * '\x03';
                            }
                            if (cVar4 != '\0') {
                              uVar8 = *puVar7;
                              local_78 = local_58;
                              FUN_18022946f(param_1,param_2,
                                            uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 |
                                            (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              if (uVar5 == 0x1b) {
                                *(ulonglong *)(param_4 + 7) =
                                     CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 7) >> 0x20)
                                              + local_58._8_4_ * 0x10000,
                                              (int)*(undefined8 *)(param_4 + 7) +
                                              local_58._4_4_ * 0x10000);
                              }
                            }
                          }
                          *param_4 = 0x18;
                          goto LAB_180229709;
                        }
                      }
                      else if (uVar5 - 0x1c < 4) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -4))) {
                          param_4[6] = ((int)(short)((ushort)(byte)*local_60 << 8) |
                                       (uint)*(byte *)((longlong)local_60 + 1)) << 2;
                          puVar7 = local_60 + 1;
                          param_4[7] = ((int)(short)((ushort)*(byte *)((longlong)local_60 + 2) << 8)
                                       | (uint)*(byte *)((longlong)local_60 + 3)) << 2;
                          if ((uVar5 & 0xfffffffe) == 0x1e) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            param_4[8] = (uint)CONCAT11((byte)local_60[1],
                                                        *(byte *)((longlong)local_60 + 5)) << 0x10;
                            puVar7 = local_60 + 2;
                            uVar8 = (uint)CONCAT11(*(byte *)((longlong)local_60 + 6),
                                                   *(byte *)((longlong)local_60 + 7)) << 0x10;
                          }
                          else {
                            param_4[8] = 0;
                            uVar8 = 0;
                          }
                          param_4[9] = uVar8;
                          if ((uVar5 | 2) == 0x1f) {
                            if ((puVar7 < *(uint **)(param_2 + 0x40)) ||
                               ((uint *)(*(longlong *)(param_2 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 0x88) + -4) < puVar7))
                            break;
                            uVar8 = *puVar7;
                            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8
                                    | uVar8 << 0x18;
                            if (uVar5 == 0x1d) {
                              local_78 = local_58;
                              FUN_18022946f(param_1,param_2,uVar8,2);
                              *(ulonglong *)(param_4 + 6) =
                                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20) +
                                            local_58._4_4_ * 4,
                                            (int)*(undefined8 *)(param_4 + 6) + local_58._0_4_ * 4);
                              uVar5 = *param_4;
                            }
                            if (uVar5 == 0x1f) {
                              local_78 = local_58;
                              FUN_18022946f(param_1,param_2,uVar8,4);
                              param_4[6] = param_4[6] + local_58._0_4_ * 4;
                              param_4[7] = param_4[7] + local_58._4_4_ * 4;
                              param_4[8] = param_4[8] + local_58._8_4_ * 0x10000;
                              param_4[9] = param_4[9] + local_58._12_4_ * 0x10000;
                            }
                          }
                          *param_4 = 0x1c;
                          goto LAB_180229709;
                        }
                      }
                      else if (uVar5 == 0x20) {
                        *(uint **)(param_4 + 2) = local_68;
                        *(undefined1 *)(param_4 + 4) = 0;
                        if ((*(uint **)(param_2 + 0x40) <= local_60) &&
                           (local_60 <=
                            (uint *)(*(longlong *)(param_2 + 0x80) +
                                     (ulonglong)*(uint *)(param_2 + 0x88) + -1))) {
                          puVar7 = (uint *)((longlong)local_60 + 1);
                          uVar5 = *local_60;
                          local_60 = puVar7;
                          if ((byte)uVar5 < 0x1c) {
                            param_4[6] = (uint)(byte)uVar5;
                            cVar4 = FUN_18022a3f4(param_2,param_3,&local_60,&local_68);
                            if (cVar4 != '\0') {
                              *(uint **)(param_4 + 8) = local_68;
                              *(undefined1 *)(param_4 + 10) = 0;
                              goto LAB_180229709;
                            }
                          }
                        }
                      }
                      break;
                    case 0xc:
                    case 0xd:
                      *(uint **)(param_4 + 2) = local_68;
                      *(undefined1 *)(param_4 + 4) = 0;
                      cVar4 = FUN_18022a3f4(param_2,param_3,&local_60);
                      if (((cVar4 != '\0') && (*(uint **)(param_2 + 0x40) <= local_68)) &&
                         (local_68 <=
                          (uint *)(*(longlong *)(param_2 + 0x80) +
                                   (ulonglong)*(uint *)(param_2 + 0x88) + -0x18))) {
                        uVar5 = *local_68;
                        param_4[6] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                     | uVar5 << 0x18;
                        uVar5 = local_68[1];
                        param_4[9] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                     | uVar5 << 0x18;
                        uVar5 = local_68[2];
                        param_4[7] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                     | uVar5 << 0x18;
                        uVar5 = local_68[3];
                        param_4[10] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                      (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
                        uVar5 = local_68[4];
                        param_4[8] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                     | uVar5 << 0x18;
                        uVar5 = local_68[5];
                        param_4[0xb] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                       (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
                        if (*param_4 == 0xd) {
                          if ((local_68 + 6 < *(uint **)(param_2 + 0x40)) ||
                             ((uint *)(*(longlong *)(param_2 + 0x80) +
                                       (ulonglong)*(uint *)(param_2 + 0x88) + -4) < local_68 + 6))
                          break;
                          uVar5 = local_68[6];
                          local_78 = local_58;
                          FUN_18022946f(param_1,param_2,
                                        uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                        (uVar5 & 0xff00) << 8 | uVar5 << 0x18,6);
                          param_4[10] = param_4[10] + local_58._12_4_;
                          param_4[6] = param_4[6] + local_58._0_4_;
                          param_4[7] = param_4[7] + local_58._8_4_;
                          param_4[8] = param_4[8] + (int)local_48;
                          param_4[9] = param_4[9] + local_58._4_4_;
                          param_4[0xb] = param_4[0xb] + local_48._4_4_;
                        }
                        *param_4 = 0xc;
                        goto LAB_180229709;
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
                        if (uVar5 == 0xf) {
                          if ((local_60 + 1 < *(uint **)(param_2 + 0x40)) ||
                             ((uint *)(*(longlong *)(param_2 + 0x80) +
                                       (ulonglong)*(uint *)(param_2 + 0x88) + -4) < local_60 + 1))
                          break;
                          uVar5 = local_60[1];
                          local_78 = local_58;
                          FUN_18022946f(param_1,param_2,
                                        uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                        (uVar5 & 0xff00) << 8 | uVar5 << 0x18,2);
                          *(ulonglong *)(param_4 + 6) =
                               CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20) +
                                        local_58._4_4_ * 0x10000,
                                        (int)*(undefined8 *)(param_4 + 6) + local_58._0_4_ * 0x10000
                                       );
                        }
                        *param_4 = 0xe;
                        goto LAB_180229709;
                      }
                    }
                  }
                  goto LAB_180229595;
                }
              }
              cVar4 = FUN_18022a461(param_2,local_68,param_4 + 2,uVar6);
              if (((cVar4 != '\0') && (*(uint **)(param_2 + 0x40) <= local_60)) &&
                 (local_60 <=
                  (uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) +
                          -0xc))) {
                param_4[10] = (uint)CONCAT11((byte)*local_60,*(byte *)((longlong)local_60 + 1)) <<
                              0x10;
                param_4[0xb] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 2),
                                              *(byte *)((longlong)local_60 + 3)) << 0x10;
                uVar8 = (uint)CONCAT11((byte)local_60[1],*(byte *)((longlong)local_60 + 5)) << 0x10;
                if (0x7ffffffe < uVar8) {
                  uVar8 = 0x7fffffff;
                }
                param_4[0xc] = uVar8;
                param_4[0xd] = (uint)CONCAT11(*(byte *)((longlong)local_60 + 6),
                                              *(byte *)((longlong)local_60 + 7)) << 0x10;
                param_4[0xe] = (uint)CONCAT11((byte)local_60[2],*(byte *)((longlong)local_60 + 9))
                               << 0x10;
                uVar8 = (uint)CONCAT11(*(byte *)((longlong)local_60 + 10),
                                       *(byte *)((longlong)local_60 + 0xb)) << 0x10;
                if (0x7ffffffe < uVar8) {
                  uVar8 = 0x7fffffff;
                }
                param_4[0xf] = uVar8;
                if (uVar5 != 6) {
                  if ((local_60 + 3 < *(uint **)(param_2 + 0x40)) ||
                     ((uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88)
                              + -4) < local_60 + 3)) goto LAB_180229595;
                  uVar5 = local_60[3];
                  local_78 = local_58;
                  FUN_18022946f(param_1,param_2,
                                uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                uVar5 << 0x18,6);
                  param_4[10] = param_4[10] + local_58._0_4_ * 0x10000;
                  param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
                  param_4[0xc] = param_4[0xc] + local_58._8_4_ * 0x10000;
                  param_4[0xd] = param_4[0xd] + local_58._12_4_ * 0x10000;
                  *(ulonglong *)(param_4 + 0xe) =
                       CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 0xe) >> 0x20) +
                                (int)((ulonglong)local_48 >> 0x20) * 0x10000,
                                (int)*(undefined8 *)(param_4 + 0xe) + (int)local_48 * 0x10000);
                }
                *param_4 = 6;
                goto LAB_180229709;
              }
              goto LAB_180229595;
            }
          }
          cVar4 = FUN_18022a461(param_2,local_68,param_4 + 2,uVar6);
          if (((cVar4 != '\0') && (*(uint **)(param_2 + 0x40) <= local_60)) &&
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
            if (uVar5 != 4) {
              if ((local_60 + 3 < *(uint **)(param_2 + 0x40)) ||
                 ((uint *)(*(longlong *)(param_2 + 0x80) + (ulonglong)*(uint *)(param_2 + 0x88) + -4
                          ) < local_60 + 3)) goto LAB_180229595;
              uVar5 = local_60[3];
              local_78 = local_58;
              FUN_18022946f(param_1,param_2,
                            uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18,6);
              param_4[10] = param_4[10] + local_58._0_4_ * 0x10000;
              param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
              param_4[0xc] = param_4[0xc] + local_58._8_4_ * 0x10000;
              param_4[0xd] = param_4[0xd] + local_58._12_4_ * 0x10000;
              *(ulonglong *)(param_4 + 0xe) =
                   CONCAT44((int)((ulonglong)*(undefined8 *)(param_4 + 0xe) >> 0x20) +
                            (int)((ulonglong)local_48 >> 0x20) * 0x10000,
                            (int)*(undefined8 *)(param_4 + 0xe) + (int)local_48 * 0x10000);
            }
            *param_4 = 4;
            goto LAB_180229709;
          }
        }
      }
    }
  }
LAB_180229595:
  uVar6 = 0;
LAB_180229597:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_98)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_98);
}

