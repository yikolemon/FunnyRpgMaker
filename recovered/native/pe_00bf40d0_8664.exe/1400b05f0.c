/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b05f0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1400b05f0(ulonglong param_1,int param_2,uint param_3,undefined4 *param_4,char *param_5,
                  longlong param_6)

{
  uint *puVar1;
  byte bVar2;
  sbyte sVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  __acrt_ptd *p_Var8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint uVar22;
  rsize_t _MaxCount;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  double dVar26;
  undefined1 auStackY_828 [32];
  uint local_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7e0;
  uint local_7dc;
  uint local_7d8 [2];
  uint local_7d0;
  uint local_7cc;
  uint *local_7c8;
  ulonglong local_7c0;
  char local_7b8;
  uint *local_7b0;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint local_5c8;
  uint local_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint local_228;
  uint local_224 [115];
  ulonglong local_58;
  
  local_58 = DAT_14012ea80 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_1400b26a0((uint *)&local_7c0);
  local_7b8 = ((byte)local_7c0 & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_1400b2730(&local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar4 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar4 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar4;
  FUN_1400b2630(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) != 0) && ((local_7d8[0] & 0x1000000) == 0)) {
LAB_1400b0792:
      local_7ec = 0;
      local_7cc = 0x8001f;
      FUN_1400b2630(&local_7d0,0,0);
      FUN_1400b2630(&local_7ec,0x8001f,local_7cc);
      local_7ec = param_2 + 1;
      uVar21 = (param_1 & 0x7fffffffffffffff) >> 0x34;
      uVar6 = (-(ulonglong)(uVar21 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
      uVar24 = (2 - (uint)(uVar21 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
      FUN_1400b2790();
      dVar26 = FUN_1400973e0();
      uVar5 = -(uint)(((int)dVar26 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar26;
      uVar17 = (uint)(uVar6 >> 0x20);
      local_794 = uVar6;
      uVar22 = (uint)(uVar17 != 0);
      uVar15 = uVar22 + 1;
      if (uVar24 < 0x434) {
        if (uVar24 == 0x36) {
LAB_1400b0c28:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar17 != 0) & 4));
          iVar11 = 0x1f;
          bVar25 = *puVar1 == 0;
          if (!bVar25) {
            for (; *puVar1 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (bVar25) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          uVar22 = (iVar11 == 0x20) + uVar15;
          if (uVar22 < 0x74) {
            uVar17 = uVar22 - 1;
            while (uVar17 != 0xffffffff) {
              uVar23 = uVar17 - 1;
              if (uVar17 < uVar15) {
                iVar11 = *(int *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
              }
              else {
                iVar11 = 0;
              }
              if (uVar23 < uVar15) {
                uVar12 = *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
              }
              else {
                uVar12 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4) = uVar12 >> 0x1f | iVar11 * 2;
              uVar17 = uVar23;
            }
          }
          else {
            uVar22 = 0;
          }
          uVar15 = 0x435 - uVar24 >> 5;
          local_798 = uVar22;
          FUN_1400b3c00((undefined1 (*) [32])local_3f4,0,(ulonglong)uVar15 * 4);
          local_3f4[uVar15] = 1 << ((byte)(0x435 - uVar24) & 0x1f);
        }
        else {
          local_3f4[1] = 0x100000;
          local_3f4[0] = 0;
          local_3f8 = 2;
          if (uVar17 == 0) goto LAB_1400b0c28;
          uVar6 = 0;
          do {
            if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_1400b0c28;
            uVar22 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar22;
          } while (uVar22 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          iVar11 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (uVar17 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          local_798 = (0x20U - iVar11 < 2) + uVar15;
          if (local_798 < 0x74) {
            uVar22 = local_798 - 1;
            while (uVar22 != 0xffffffff) {
              uVar17 = uVar22 - 1;
              if (uVar22 < uVar15) {
                iVar11 = *(int *)((longlong)&local_794 + (ulonglong)uVar22 * 4);
              }
              else {
                iVar11 = 0;
              }
              if (uVar17 < uVar15) {
                uVar23 = *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
              }
              else {
                uVar23 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4) = uVar23 >> 0x1e | iVar11 * 4;
              uVar22 = uVar17;
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          uVar22 = local_798;
          uVar15 = 0x436 - uVar24 >> 5;
          FUN_1400b3c00((undefined1 (*) [32])local_3f4,0,(ulonglong)uVar15 * 4);
          local_3f4[uVar15] = 1 << ((byte)(0x436 - uVar24) & 0x1f);
        }
        local_3f8 = uVar15 + 1;
        _MaxCount = (ulonglong)local_3f8 << 2;
      }
      else {
        local_3f4[1] = 0x100000;
        local_3f4[0] = 0;
        local_3f8 = 2;
        if (uVar17 == 0) {
LAB_1400b09e9:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar23 = uVar24 - 0x433 & 0x1f;
          uVar17 = uVar24 - 0x433 >> 5;
          sVar3 = (sbyte)uVar23;
          bVar10 = 0x20 - sVar3;
          uVar24 = (int)(1L << (bVar10 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4);
          iVar11 = 0x1f;
          bVar25 = *puVar1 == 0;
          if (!bVar25) {
            for (; *puVar1 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (bVar25) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          if ((uVar15 + uVar17 < 0x74) &&
             (local_798 = (0x20U - iVar11 < uVar23) + uVar15 + uVar17, local_798 < 0x74)) {
            uVar22 = local_798;
            while (uVar22 = uVar22 - 1, uVar22 != uVar17 - 1) {
              uVar23 = uVar22 - uVar17;
              if (uVar23 < uVar15) {
                uVar12 = *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
              }
              else {
                uVar12 = 0;
              }
              if (uVar23 - 1 < uVar15) {
                uVar23 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar23 - 1) * 4);
              }
              else {
                uVar23 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4) =
                   (uVar23 & ~uVar24) >> (bVar10 & 0x1f) | (uVar12 & uVar24) << sVar3;
            }
            uVar6 = 0;
            if (uVar17 != 0) {
              do {
                *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
                uVar22 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar22;
              } while (uVar22 != uVar17);
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          local_3f4[0] = 2;
        }
        else {
          uVar6 = 0;
          do {
            if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_1400b09e9;
            uVar17 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar17;
          } while (uVar17 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar23 = uVar24 - 0x432 & 0x1f;
          uVar17 = uVar24 - 0x432 >> 5;
          sVar3 = (sbyte)uVar23;
          bVar10 = 0x20 - sVar3;
          uVar24 = (int)(1L << (bVar10 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4);
          iVar11 = 0x1f;
          bVar25 = *puVar1 == 0;
          if (!bVar25) {
            for (; *puVar1 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (bVar25) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          if ((uVar15 + uVar17 < 0x74) &&
             (local_798 = (0x20U - iVar11 < uVar23) + uVar15 + uVar17, local_798 < 0x74)) {
            uVar22 = local_798;
            while (uVar22 = uVar22 - 1, uVar22 != uVar17 - 1) {
              uVar23 = uVar22 - uVar17;
              if (uVar23 < uVar15) {
                uVar12 = *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
              }
              else {
                uVar12 = 0;
              }
              if (uVar23 - 1 < uVar15) {
                uVar23 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar23 - 1) * 4);
              }
              else {
                uVar23 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar22 * 4) =
                   (uVar23 & ~uVar24) >> (bVar10 & 0x1f) | (uVar12 & uVar24) << sVar3;
            }
            uVar6 = 0;
            if (uVar17 != 0) {
              do {
                *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
                uVar22 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar22;
              } while (uVar22 != uVar17);
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          local_3f4[0] = 4;
        }
        local_3f4[1] = 0;
        _MaxCount = 4;
        local_3f8 = 1;
        uVar22 = local_798;
      }
      local_5c8 = local_3f8;
      memcpy_s(local_5c4,0x1cc,local_3f4,_MaxCount);
      if ((int)uVar5 < 0) {
        uVar15 = -uVar5;
        local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,uVar15);
        uVar6 = (ulonglong)uVar15 / 10;
        local_7f0 = (uint)uVar6;
        if (local_7f0 != 0) {
          do {
            local_7e0 = (uint)uVar6;
            if (0x26 < local_7e0) {
              local_7e0 = 0x26;
            }
            uVar15 = local_7e0 - 1;
            bVar10 = (&DAT_14010cc52)[(ulonglong)uVar15 * 4];
            bVar2 = (&DAT_14010cc53)[(ulonglong)uVar15 * 4];
            local_3f8 = (uint)bVar2 + (uint)bVar10;
            FUN_1400b3c00((undefined1 (*) [32])local_3f4,0,(ulonglong)bVar10 * 4);
            FUN_1400b3550((undefined8 *)(local_3f4 + bVar10),
                          (undefined8 *)
                          (&DAT_14010c340 +
                          (ulonglong)*(ushort *)(&DAT_14010cc50 + (ulonglong)uVar15 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            if (local_3f8 < 2) {
              uVar6 = (ulonglong)local_3f4[0];
              if (local_3f4[0] == 0) {
LAB_1400b1275:
                local_798 = 0;
                uVar22 = local_798;
                goto LAB_1400b153b;
              }
              if ((local_3f4[0] == 1) || (uVar22 == 0)) goto LAB_1400b153b;
              uVar21 = 0;
              uVar14 = 0;
              do {
                uVar13 = *(uint *)((longlong)&local_794 + uVar14 * 4) * uVar6 + uVar21;
                *(int *)((longlong)&local_794 + uVar14 * 4) = (int)uVar13;
                uVar21 = uVar13 >> 0x20;
                iVar11 = (int)(uVar13 >> 0x20);
                uVar15 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar15;
              } while (uVar15 != uVar22);
LAB_1400b12bf:
              uVar22 = local_798;
              if (iVar11 == 0) goto LAB_1400b153b;
              if (local_798 < 0x73) {
                *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar11;
                local_798 = local_798 + 1;
                uVar22 = local_798;
                goto LAB_1400b153b;
              }
              uVar22 = 0;
              local_798 = 0;
              bVar25 = false;
            }
            else {
              if (uVar22 < 2) {
                uVar15 = (uint)local_794;
                uVar6 = local_794 & 0xffffffff;
                uVar21 = (ulonglong)local_3f8 << 2;
                local_798 = local_3f8;
                if ((ulonglong)local_3f8 != 0) {
                  if (uVar21 < 0x1cd) {
                    FUN_1400b3550(&local_794,(undefined8 *)local_3f4,uVar21);
                  }
                  else {
                    FUN_1400b3c00((undefined1 (*) [32])&local_794,0,0x1cc);
                    p_Var8 = FUN_140095e5c();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_1400a0ea0();
                  }
                }
                if (uVar15 == 0) goto LAB_1400b1275;
                uVar22 = local_798;
                if ((uVar15 != 1) && (local_798 != 0)) {
                  uVar21 = 0;
                  uVar14 = 0;
                  do {
                    uVar13 = *(uint *)((longlong)&local_794 + uVar14 * 4) * uVar6 + uVar21;
                    *(int *)((longlong)&local_794 + uVar14 * 4) = (int)uVar13;
                    uVar21 = uVar13 >> 0x20;
                    iVar11 = (int)(uVar13 >> 0x20);
                    uVar22 = (int)uVar14 + 1;
                    uVar14 = (ulonglong)uVar22;
                  } while (uVar22 != local_798);
                  goto LAB_1400b12bf;
                }
              }
              else {
                local_7b0 = (uint *)&local_794;
                local_7c8 = local_3f4;
                uVar15 = local_3f8;
                if (local_3f8 < uVar22) {
                  uVar15 = uVar22;
                  local_7c8 = (uint *)&local_794;
                  local_7b0 = local_3f4;
                  uVar22 = local_3f8;
                }
                uVar21 = 0;
                uVar6 = 0;
                local_228 = 0;
                if (uVar22 != 0) {
                  do {
                    uVar17 = local_7b0[uVar6];
                    iVar11 = (int)uVar6;
                    if (uVar17 == 0) {
                      if (iVar11 == (int)uVar21) {
                        local_224[uVar6] = 0;
                        uVar21 = (ulonglong)(iVar11 + 1U);
                        local_228 = iVar11 + 1U;
                      }
                    }
                    else {
                      uVar14 = 0;
                      if (uVar15 != 0) {
                        do {
                          iVar19 = (int)uVar6;
                          uVar13 = uVar6;
                          if (iVar19 == 0x73) break;
                          if (iVar19 == (int)uVar21) {
                            local_224[uVar6] = 0;
                            local_228 = iVar19 + 1;
                          }
                          uVar13 = (ulonglong)(iVar19 + 1U);
                          uVar14 = (ulonglong)local_7c8[(uint)(iVar19 + -iVar11)] *
                                   (ulonglong)uVar17 + uVar14 + (ulonglong)local_224[uVar6];
                          local_224[uVar6] = (uint)uVar14;
                          uVar21 = (ulonglong)local_228;
                          uVar14 = uVar14 >> 0x20;
                          uVar6 = uVar13;
                        } while (iVar19 + 1U + -iVar11 != uVar15);
                        uVar17 = (uint)uVar14;
                        uVar6 = uVar13;
                        while (uVar17 != 0) {
                          iVar19 = (int)uVar6;
                          if (iVar19 == 0x73) goto LAB_1400b15e2;
                          if (iVar19 == (int)uVar21) {
                            local_224[uVar6] = 0;
                            local_228 = iVar19 + 1;
                          }
                          uVar17 = local_224[uVar6];
                          local_224[uVar6] = (uint)(uVar17 + uVar14);
                          uVar21 = (ulonglong)local_228;
                          uVar17 = (uint)(uVar17 + uVar14 >> 0x20);
                          uVar14 = (ulonglong)uVar17;
                          uVar6 = (ulonglong)(iVar19 + 1);
                        }
                      }
                      if ((int)uVar6 == 0x73) goto LAB_1400b15e2;
                    }
                    uVar6 = (ulonglong)(iVar11 + 1U);
                  } while (iVar11 + 1U != uVar22);
                }
                local_798 = (uint)uVar21;
                uVar22 = 0;
                if (uVar21 != 0) {
                  if (uVar21 << 2 < 0x1cd) {
                    FUN_1400b3550(&local_794,(undefined8 *)local_224,uVar21 << 2);
                    uVar22 = local_798;
                  }
                  else {
                    FUN_1400b3c00((undefined1 (*) [32])&local_794,0,0x1cc);
                    p_Var8 = FUN_140095e5c();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_1400a0ea0();
                    uVar22 = local_798;
                  }
                }
              }
LAB_1400b153b:
              bVar25 = true;
            }
            if (!bVar25) goto LAB_1400b15e2;
            local_7f0 = local_7f0 - local_7e0;
            uVar6 = (ulonglong)local_7f0;
          } while (local_7f0 != 0);
          uVar15 = (uint)local_7e8;
        }
        uVar17 = local_5c8;
        if (uVar15 % 10 != 0) {
          uVar15 = *(uint *)(&DAT_14010cce8 + (ulonglong)(uVar15 % 10 - 1) * 4);
          if (uVar15 == 0) {
LAB_1400b15e2:
            local_798 = 0;
            uVar17 = local_5c8;
            uVar22 = local_798;
          }
          else if ((uVar15 != 1) && (uVar22 != 0)) {
            uVar6 = 0;
            uVar21 = 0;
            do {
              uVar14 = (ulonglong)*(uint *)((longlong)&local_794 + uVar21 * 4) * (ulonglong)uVar15 +
                       uVar6;
              *(int *)((longlong)&local_794 + uVar21 * 4) = (int)uVar14;
              uVar6 = uVar14 >> 0x20;
              uVar17 = (int)uVar21 + 1;
              uVar21 = (ulonglong)uVar17;
            } while (uVar17 != uVar22);
            iVar11 = (int)(uVar14 >> 0x20);
            uVar17 = local_5c8;
            uVar22 = local_798;
            if (iVar11 != 0) {
              if (0x72 < local_798) goto LAB_1400b15e2;
              *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar11;
              local_798 = local_798 + 1;
              uVar22 = local_798;
            }
          }
        }
      }
      else {
        uVar6 = (ulonglong)uVar5 / 10;
        uVar15 = (uint)uVar6;
        uVar17 = local_5c8;
        while (uVar15 != 0) {
          local_7e0 = (uint)uVar6;
          if (0x26 < local_7e0) {
            local_7e0 = 0x26;
          }
          uVar24 = local_7e0 - 1;
          bVar10 = (&DAT_14010cc52)[(ulonglong)uVar24 * 4];
          bVar2 = (&DAT_14010cc53)[(ulonglong)uVar24 * 4];
          local_3f8 = (uint)bVar2 + (uint)bVar10;
          FUN_1400b3c00((undefined1 (*) [32])local_3f4,0,(ulonglong)bVar10 * 4);
          FUN_1400b3550((undefined8 *)(local_3f4 + bVar10),
                        (undefined8 *)
                        (&DAT_14010c340 +
                        (ulonglong)*(ushort *)(&DAT_14010cc50 + (ulonglong)uVar24 * 4) * 4),
                        (ulonglong)bVar2 << 2);
          uVar24 = local_5c4[0];
          if (local_3f8 < 2) {
            uVar6 = (ulonglong)local_3f4[0];
            if (local_3f4[0] == 0) {
LAB_1400b0d95:
              local_5c8 = 0;
LAB_1400b0d98:
              uVar17 = local_5c8;
              goto LAB_1400b10f0;
            }
            if ((local_3f4[0] == 1) || (uVar17 == 0)) goto LAB_1400b10f0;
            uVar21 = 0;
            uVar14 = 0;
            do {
              uVar13 = local_5c4[uVar14] * uVar6 + uVar21;
              local_5c4[uVar14] = (uint)uVar13;
              uVar21 = uVar13 >> 0x20;
              uVar24 = (uint)(uVar13 >> 0x20);
              uVar23 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar23;
            } while (uVar23 != uVar17);
LAB_1400b0e37:
            uVar17 = local_5c8;
            if (uVar24 == 0) goto LAB_1400b10f0;
            if (local_5c8 < 0x73) {
              local_5c4[local_5c8] = uVar24;
              local_5c8 = local_5c8 + 1;
              goto LAB_1400b0d98;
            }
            uVar17 = 0;
            local_5c8 = 0;
            bVar25 = false;
          }
          else {
            if (uVar17 < 2) {
              uVar6 = (ulonglong)local_5c4[0];
              uVar21 = (ulonglong)local_3f8 << 2;
              local_5c8 = local_3f8;
              if ((ulonglong)local_3f8 != 0) {
                if (uVar21 < 0x1cd) {
                  FUN_1400b3550((undefined8 *)local_5c4,(undefined8 *)local_3f4,uVar21);
                }
                else {
                  FUN_1400b3c00((undefined1 (*) [32])local_5c4,0,0x1cc);
                  p_Var8 = FUN_140095e5c();
                  *(undefined4 *)p_Var8 = 0x22;
                  FUN_1400a0ea0();
                }
              }
              if (uVar24 == 0) goto LAB_1400b0d95;
              uVar17 = local_5c8;
              if ((uVar24 != 1) && (local_5c8 != 0)) {
                uVar21 = 0;
                uVar14 = 0;
                do {
                  uVar13 = local_5c4[uVar14] * uVar6 + uVar21;
                  local_5c4[uVar14] = (uint)uVar13;
                  uVar21 = uVar13 >> 0x20;
                  uVar24 = (uint)(uVar13 >> 0x20);
                  uVar17 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar17;
                } while (uVar17 != local_5c8);
                goto LAB_1400b0e37;
              }
            }
            else {
              local_7c8 = local_5c4;
              local_7e8 = local_3f4;
              uVar24 = local_3f8;
              if (local_3f8 < uVar17) {
                uVar24 = uVar17;
                local_7e8 = local_5c4;
                uVar17 = local_3f8;
                local_7c8 = local_3f4;
              }
              local_5c8 = 0;
              uVar6 = 0;
              local_228 = 0;
              if (uVar17 != 0) {
                do {
                  uVar23 = local_7c8[uVar6];
                  uVar12 = (uint)uVar6;
                  if (uVar23 == 0) {
                    if (uVar12 == local_5c8) {
                      local_224[uVar6] = 0;
                      local_5c8 = uVar12 + 1;
                      local_228 = local_5c8;
                    }
                  }
                  else {
                    uVar21 = 0;
                    if (uVar24 != 0) {
                      do {
                        uVar18 = (uint)uVar6;
                        uVar14 = uVar6;
                        if (uVar18 == 0x73) break;
                        if (uVar18 == local_5c8) {
                          local_224[uVar6] = 0;
                          local_228 = uVar18 + 1;
                        }
                        uVar14 = (ulonglong)(uVar18 + 1);
                        uVar21 = (ulonglong)local_7e8[uVar18 + -uVar12] * (ulonglong)uVar23 +
                                 (ulonglong)local_224[uVar6] + uVar21;
                        local_224[uVar6] = (uint)uVar21;
                        uVar21 = uVar21 >> 0x20;
                        uVar6 = uVar14;
                        local_5c8 = local_228;
                      } while (uVar18 + 1 + -uVar12 != uVar24);
                      uVar23 = (uint)uVar21;
                      uVar6 = uVar14;
                      while (uVar23 != 0) {
                        uVar18 = (uint)uVar6;
                        if (uVar18 == 0x73) goto LAB_1400b11ba;
                        if (uVar18 == local_5c8) {
                          local_224[uVar6] = 0;
                          local_228 = uVar18 + 1;
                        }
                        uVar23 = local_224[uVar6];
                        local_224[uVar6] = (uint)(uVar23 + uVar21);
                        uVar23 = (uint)(uVar23 + uVar21 >> 0x20);
                        uVar21 = (ulonglong)uVar23;
                        uVar6 = (ulonglong)(uVar18 + 1);
                        local_5c8 = local_228;
                      }
                    }
                    if ((int)uVar6 == 0x73) goto LAB_1400b11ba;
                  }
                  uVar6 = (ulonglong)(uVar12 + 1);
                } while (uVar12 + 1 != uVar17);
              }
              uVar6 = (ulonglong)local_5c8 << 2;
              uVar17 = local_5c8;
              if ((ulonglong)local_5c8 != 0) {
                if (uVar6 < 0x1cd) {
                  FUN_1400b3550((undefined8 *)local_5c4,(undefined8 *)local_224,uVar6);
                  uVar17 = local_5c8;
                }
                else {
                  FUN_1400b3c00((undefined1 (*) [32])local_5c4,0,0x1cc);
                  p_Var8 = FUN_140095e5c();
                  *(undefined4 *)p_Var8 = 0x22;
                  FUN_1400a0ea0();
                  uVar17 = local_5c8;
                }
              }
            }
LAB_1400b10f0:
            bVar25 = true;
          }
          if (!bVar25) goto LAB_1400b11ba;
          uVar15 = uVar15 - local_7e0;
          uVar6 = (ulonglong)uVar15;
        }
        if (uVar5 % 10 != 0) {
          uVar15 = *(uint *)(&DAT_14010cce8 + (ulonglong)(uVar5 % 10 - 1) * 4);
          if (uVar15 == 0) {
LAB_1400b11ba:
            local_5c8 = 0;
LAB_1400b11bd:
            uVar17 = local_5c8;
          }
          else if ((uVar15 != 1) && (uVar17 != 0)) {
            uVar6 = 0;
            uVar21 = 0;
            do {
              uVar14 = (ulonglong)local_5c4[uVar21] * (ulonglong)uVar15 + uVar6;
              local_5c4[uVar21] = (uint)uVar14;
              uVar6 = uVar14 >> 0x20;
              uVar24 = (int)uVar21 + 1;
              uVar21 = (ulonglong)uVar24;
            } while (uVar24 != uVar17);
            uVar15 = (uint)(uVar14 >> 0x20);
            uVar17 = local_5c8;
            if (uVar15 != 0) {
              if (0x72 < local_5c8) goto LAB_1400b11ba;
              local_5c4[local_5c8] = uVar15;
              local_5c8 = local_5c8 + 1;
              goto LAB_1400b11bd;
            }
          }
        }
      }
      pcVar20 = local_7a8;
      if (uVar22 != 0) {
        uVar6 = 0;
        uVar21 = 0;
        do {
          uVar14 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar21 * 4) * 10;
          *(int *)((longlong)&local_794 + uVar21 * 4) = (int)uVar14;
          uVar15 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar15;
          uVar6 = uVar14 >> 0x20;
        } while (uVar15 != uVar22);
        iVar11 = (int)(uVar14 >> 0x20);
        if (iVar11 != 0) {
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar11;
            local_798 = local_798 + 1;
          }
          else {
            local_798 = 0;
          }
        }
      }
      uVar6 = FUN_140093310(&local_798,&local_5c8);
      if ((int)uVar6 == 10) {
        uVar5 = uVar5 + 1;
        *pcVar20 = '1';
        pcVar16 = pcVar20 + 1;
        if (uVar17 != 0) {
          uVar6 = 0;
          uVar21 = 0;
          do {
            uVar14 = uVar6 + (ulonglong)local_5c4[uVar21] * 10;
            local_5c4[uVar21] = (uint)uVar14;
            uVar22 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar22;
            uVar6 = uVar14 >> 0x20;
          } while (uVar22 != uVar17);
          uVar22 = (uint)(uVar14 >> 0x20);
          if (uVar22 != 0) {
            if (local_5c8 < 0x73) {
              local_5c4[local_5c8] = uVar22;
              local_5c8 = local_5c8 + 1;
            }
            else {
              local_5c8 = 0;
            }
          }
        }
      }
      else if ((int)uVar6 == 0) {
        uVar5 = uVar5 - 1;
        pcVar16 = pcVar20;
      }
      else {
        pcVar16 = pcVar20 + 1;
        *pcVar20 = (char)uVar6 + '0';
      }
      local_7a0[1] = uVar5;
      uVar22 = local_7ec;
      if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
        uVar22 = local_7ec + uVar5;
      }
      uVar6 = (ulonglong)uVar22;
      if (param_6 - 1U < (ulonglong)uVar22) {
        uVar6 = param_6 - 1U;
      }
      pcVar20 = pcVar20 + uVar6;
      while ((pcVar16 != pcVar20 && (local_798 != 0))) {
        uVar6 = 0;
        uVar21 = 0;
        do {
          uVar14 = (ulonglong)*(uint *)((longlong)&local_794 + uVar21 * 4) * 1000000000 + uVar6;
          *(int *)((longlong)&local_794 + uVar21 * 4) = (int)uVar14;
          uVar6 = uVar14 >> 0x20;
          uVar22 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar22;
        } while (uVar22 != local_798);
        iVar11 = (int)(uVar14 >> 0x20);
        if (iVar11 != 0) {
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar11;
            local_798 = local_798 + 1;
          }
          else {
            local_798 = 0;
          }
        }
        uVar6 = FUN_140093310(&local_798,&local_5c8);
        uVar22 = 8;
        do {
          uVar21 = (uVar6 & 0xffffffff) / 10;
          if (uVar22 < (uint)((int)pcVar20 - (int)pcVar16)) {
            pcVar16[uVar22] = (char)uVar6 + (char)uVar21 * -10 + '0';
          }
          uVar22 = uVar22 - 1;
          uVar6 = uVar21;
        } while (uVar22 != 0xffffffff);
        lVar9 = (longlong)pcVar20 - (longlong)pcVar16;
        if (9 < lVar9) {
          lVar9 = 9;
        }
        pcVar16 = pcVar16 + lVar9;
      }
      *pcVar16 = '\0';
      local_7dc = 0;
      FUN_1400b2630(&local_7dc,local_7d0,local_7cc);
      goto LAB_1400b181c;
    }
    param_4[1] = 0;
    pcVar20 = "0";
LAB_1400b073e:
    uVar7 = FUN_1400a0d40(param_5,param_6,(longlong)pcVar20);
    iVar11 = (int)uVar7;
  }
  else {
    if (uVar6 != 0x7ff) goto LAB_1400b0792;
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar22 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar22 = 4;
    }
    else {
      uVar22 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar22 != 1) {
      if (uVar22 == 2) {
        pcVar20 = "1#QNAN";
      }
      else if (uVar22 == 3) {
        pcVar20 = "1#SNAN";
      }
      else {
        if (uVar22 != 4) goto LAB_1400b0792;
        pcVar20 = "1#IND";
      }
      goto LAB_1400b073e;
    }
    uVar7 = FUN_1400a0d40(param_5,param_6,0x14011c690);
    iVar11 = (int)uVar7;
  }
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_1400b181c:
  if (local_7b8 != '\0') {
    FUN_1400b26c0((uint *)&local_7c0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_58 ^ (ulonglong)auStackY_828);
}

