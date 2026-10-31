/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c0bf0 */

void FUN_1401c0bf0(ulonglong param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,
                  longlong param_6)

{
  uint *puVar1;
  sbyte sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  rsize_t _MaxCount;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  double dVar23;
  undefined1 auStackY_828 [32];
  uint local_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7e0;
  int local_7dc;
  uint local_7d8 [2];
  undefined4 local_7d0;
  undefined4 local_7cc;
  uint *local_7c8;
  byte local_7c0 [8];
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
  
  local_58 = DAT_140f17b40 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_1401c40a0(local_7c0);
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_1401c4130(local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar3 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar3 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar3;
  FUN_1401c4030(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) == 0) || ((local_7d8[0] & 0x1000000) != 0)) {
      param_4[1] = 0;
LAB_1401c0d3e:
      iVar4 = FUN_1401ae4e0();
joined_r0x0001401c0d84:
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1401c1e1c;
    }
  }
  else if (uVar6 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar19 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar19 = 4;
    }
    else {
      uVar19 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar19 == 1) {
      iVar4 = FUN_1401ae4e0();
      goto joined_r0x0001401c0d84;
    }
    if (((uVar19 == 2) || (uVar19 == 3)) || (uVar19 == 4)) goto LAB_1401c0d3e;
  }
  local_7ec = 0;
  local_7cc = 0x8001f;
  FUN_1401c4030(&local_7d0,0,0);
  FUN_1401c4030(&local_7ec,0x8001f,local_7cc);
  local_7ec = param_2 + 1;
  uVar18 = (param_1 & 0x7fffffffffffffff) >> 0x34;
  uVar6 = (-(ulonglong)(uVar18 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
  uVar21 = (2 - (uint)(uVar18 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
  FUN_1401c4190(-uVar18);
  dVar23 = (double)FUN_1401a1e40();
  uVar5 = -(uint)(((int)dVar23 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar23;
  uVar16 = (uint)(uVar6 >> 0x20);
  local_794 = uVar6;
  uVar19 = (uint)(uVar16 != 0);
  uVar13 = uVar19 + 1;
  if (uVar21 < 0x434) {
    if (uVar21 == 0x36) {
LAB_1401c1228:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar16 != 0) & 4));
      iVar4 = 0x1f;
      bVar22 = *puVar1 == 0;
      if (!bVar22) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar22) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      uVar19 = (iVar4 == 0x20) + uVar13;
      if (uVar19 < 0x74) {
        uVar16 = uVar19 - 1;
        while (uVar16 != 0xffffffff) {
          uVar20 = uVar16 - 1;
          if (uVar16 < uVar13) {
            iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar16 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (uVar20 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
          }
          else {
            uVar10 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar16 * 4) = uVar10 >> 0x1f | iVar4 * 2;
          uVar16 = uVar20;
        }
      }
      else {
        uVar19 = 0;
      }
      uVar13 = 0x435 - uVar21 >> 5;
      local_798 = uVar19;
      FUN_1401c5830(local_3f4,0,(ulonglong)uVar13 * 4);
      local_3f4[uVar13] = 1 << ((byte)(0x435 - uVar21) & 0x1f);
    }
    else {
      local_3f4[1] = 0x100000;
      local_3f4[0] = 0;
      local_3f8 = 2;
      if (uVar16 == 0) goto LAB_1401c1228;
      uVar6 = 0;
      do {
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_1401c1228;
        uVar19 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar19;
      } while (uVar19 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      iVar4 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar16 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      local_798 = (0x20U - iVar4 < 2) + uVar13;
      if (local_798 < 0x74) {
        uVar19 = local_798 - 1;
        while (uVar19 != 0xffffffff) {
          uVar16 = uVar19 - 1;
          if (uVar19 < uVar13) {
            iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (uVar16 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)uVar16 * 4);
          }
          else {
            uVar20 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) = uVar20 >> 0x1e | iVar4 * 4;
          uVar19 = uVar16;
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      uVar19 = local_798;
      uVar13 = 0x436 - uVar21 >> 5;
      FUN_1401c5830(local_3f4,0,(ulonglong)uVar13 * 4);
      local_3f4[uVar13] = 1 << ((byte)(0x436 - uVar21) & 0x1f);
    }
    local_3f8 = uVar13 + 1;
    _MaxCount = (ulonglong)local_3f8 << 2;
  }
  else {
    local_3f4[1] = 0x100000;
    local_3f4[0] = 0;
    local_3f8 = 2;
    if (uVar16 == 0) {
LAB_1401c0fe9:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar20 = uVar21 - 0x433 & 0x1f;
      uVar16 = uVar21 - 0x433 >> 5;
      sVar2 = (sbyte)uVar20;
      bVar9 = 0x20 - sVar2;
      uVar21 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
      iVar4 = 0x1f;
      bVar22 = *puVar1 == 0;
      if (!bVar22) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar22) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar16 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar20) + uVar13 + uVar16, local_798 < 0x74)) {
        uVar19 = local_798;
        while (uVar19 = uVar19 - 1, uVar19 != uVar16 - 1) {
          uVar20 = uVar19 - uVar16;
          if (uVar20 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar20 - 1 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar20 - 1) * 4);
          }
          else {
            uVar20 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) =
               (uVar20 & ~uVar21) >> (bVar9 & 0x1f) | (uVar10 & uVar21) << sVar2;
        }
        uVar6 = 0;
        if (uVar16 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar19 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar19;
          } while (uVar19 != uVar16);
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
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_1401c0fe9;
        uVar16 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar16;
      } while (uVar16 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar20 = uVar21 - 0x432 & 0x1f;
      uVar16 = uVar21 - 0x432 >> 5;
      sVar2 = (sbyte)uVar20;
      bVar9 = 0x20 - sVar2;
      uVar21 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
      iVar4 = 0x1f;
      bVar22 = *puVar1 == 0;
      if (!bVar22) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar22) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar16 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar20) + uVar13 + uVar16, local_798 < 0x74)) {
        uVar19 = local_798;
        while (uVar19 = uVar19 - 1, uVar19 != uVar16 - 1) {
          uVar20 = uVar19 - uVar16;
          if (uVar20 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar20 - 1 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar20 - 1) * 4);
          }
          else {
            uVar20 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) =
               (uVar20 & ~uVar21) >> (bVar9 & 0x1f) | (uVar10 & uVar21) << sVar2;
        }
        uVar6 = 0;
        if (uVar16 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar19 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar19;
          } while (uVar19 != uVar16);
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
    uVar19 = local_798;
  }
  local_5c8 = local_3f8;
  memcpy_s(local_5c4,0x1cc,local_3f4,_MaxCount);
  if ((int)uVar5 < 0) {
    uVar13 = -uVar5;
    local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,uVar13);
    uVar6 = (ulonglong)uVar13 / 10;
    local_7f0 = (uint)uVar6;
    if (local_7f0 != 0) {
      do {
        local_7e0 = (uint)uVar6;
        if (0x26 < local_7e0) {
          local_7e0 = 0x26;
        }
        uVar13 = local_7e0 - 1;
        bVar9 = (&DAT_140eb3ec2)[(ulonglong)uVar13 * 4];
        local_3f8 = (uint)(byte)(&DAT_140eb3ec3)[(ulonglong)uVar13 * 4] + (uint)bVar9;
        FUN_1401c5830(local_3f4,0,(ulonglong)bVar9 * 4);
        FUN_1401c5180(local_3f4 + bVar9,
                      &DAT_140eb35b0 +
                      (ulonglong)*(ushort *)(&DAT_140eb3ec0 + (ulonglong)uVar13 * 4) * 4);
        if (local_3f8 < 2) {
          uVar6 = (ulonglong)local_3f4[0];
          if (local_3f4[0] == 0) {
LAB_1401c1875:
            local_798 = 0;
            uVar19 = local_798;
            goto LAB_1401c1b3b;
          }
          if ((local_3f4[0] == 1) || (uVar19 == 0)) goto LAB_1401c1b3b;
          uVar18 = 0;
          uVar12 = 0;
          do {
            uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar18;
            *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
            uVar18 = uVar11 >> 0x20;
            iVar4 = (int)(uVar11 >> 0x20);
            uVar13 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar13;
          } while (uVar13 != uVar19);
LAB_1401c18bf:
          uVar19 = local_798;
          if (iVar4 == 0) goto LAB_1401c1b3b;
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
            local_798 = local_798 + 1;
            uVar19 = local_798;
            goto LAB_1401c1b3b;
          }
          uVar19 = 0;
          local_798 = 0;
          bVar22 = false;
        }
        else {
          if (uVar19 < 2) {
            uVar13 = (uint)local_794;
            uVar6 = local_794 & 0xffffffff;
            local_798 = local_3f8;
            if (local_3f8 != 0) {
              if (local_3f8 < 0x74) {
                FUN_1401c5180(&local_794,local_3f4);
              }
              else {
                FUN_1401c5830(&local_794,0);
                puVar7 = (undefined4 *)FUN_14019e8cc();
                *puVar7 = 0x22;
                FUN_1401ae640();
              }
            }
            if (uVar13 == 0) goto LAB_1401c1875;
            uVar19 = local_798;
            if ((uVar13 != 1) && (local_798 != 0)) {
              uVar18 = 0;
              uVar12 = 0;
              do {
                uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar18;
                *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
                uVar18 = uVar11 >> 0x20;
                iVar4 = (int)(uVar11 >> 0x20);
                uVar19 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar19;
              } while (uVar19 != local_798);
              goto LAB_1401c18bf;
            }
          }
          else {
            local_7b0 = (uint *)&local_794;
            local_7c8 = local_3f4;
            uVar13 = local_3f8;
            if (local_3f8 < uVar19) {
              uVar13 = uVar19;
              local_7c8 = (uint *)&local_794;
              local_7b0 = local_3f4;
              uVar19 = local_3f8;
            }
            local_798 = 0;
            uVar6 = 0;
            local_228 = 0;
            if (uVar19 != 0) {
              do {
                uVar16 = local_7b0[uVar6];
                uVar21 = (uint)uVar6;
                if (uVar16 == 0) {
                  if (uVar21 == local_798) {
                    local_224[uVar6] = 0;
                    local_798 = uVar21 + 1;
                    local_228 = local_798;
                  }
                }
                else {
                  uVar18 = 0;
                  if (uVar13 != 0) {
                    do {
                      uVar20 = (uint)uVar6;
                      uVar12 = uVar6;
                      if (uVar20 == 0x73) break;
                      if (uVar20 == local_798) {
                        local_224[uVar6] = 0;
                        local_228 = uVar20 + 1;
                      }
                      uVar12 = (ulonglong)(uVar20 + 1);
                      uVar18 = (ulonglong)local_7c8[uVar20 + -uVar21] * (ulonglong)uVar16 + uVar18 +
                               (ulonglong)local_224[uVar6];
                      local_224[uVar6] = (uint)uVar18;
                      uVar18 = uVar18 >> 0x20;
                      uVar6 = uVar12;
                      local_798 = local_228;
                    } while (uVar20 + 1 + -uVar21 != uVar13);
                    uVar16 = (uint)uVar18;
                    uVar6 = uVar12;
                    while (uVar16 != 0) {
                      uVar20 = (uint)uVar6;
                      if (uVar20 == 0x73) goto LAB_1401c1be2;
                      if (uVar20 == local_798) {
                        local_224[uVar6] = 0;
                        local_228 = uVar20 + 1;
                      }
                      uVar16 = local_224[uVar6];
                      local_224[uVar6] = (uint)(uVar16 + uVar18);
                      uVar16 = (uint)(uVar16 + uVar18 >> 0x20);
                      uVar18 = (ulonglong)uVar16;
                      uVar6 = (ulonglong)(uVar20 + 1);
                      local_798 = local_228;
                    }
                  }
                  if ((int)uVar6 == 0x73) goto LAB_1401c1be2;
                }
                uVar6 = (ulonglong)(uVar21 + 1);
              } while (uVar21 + 1 != uVar19);
            }
            uVar19 = 0;
            if (local_798 != 0) {
              if (local_798 < 0x74) {
                FUN_1401c5180(&local_794,local_224);
                uVar19 = local_798;
              }
              else {
                FUN_1401c5830(&local_794,0);
                puVar7 = (undefined4 *)FUN_14019e8cc();
                *puVar7 = 0x22;
                FUN_1401ae640();
                uVar19 = local_798;
              }
            }
          }
LAB_1401c1b3b:
          bVar22 = true;
        }
        if (!bVar22) goto LAB_1401c1be2;
        local_7f0 = local_7f0 - local_7e0;
        uVar6 = (ulonglong)local_7f0;
      } while (local_7f0 != 0);
      uVar13 = (uint)local_7e8;
    }
    uVar16 = local_5c8;
    if (uVar13 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_140eb3f58 + (ulonglong)(uVar13 % 10 - 1) * 4);
      if (uVar13 == 0) {
LAB_1401c1be2:
        local_798 = 0;
        uVar16 = local_5c8;
        uVar19 = local_798;
      }
      else if ((uVar13 != 1) && (uVar19 != 0)) {
        uVar6 = 0;
        uVar18 = 0;
        do {
          uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar18 * 4) * (ulonglong)uVar13 +
                   uVar6;
          *(int *)((longlong)&local_794 + uVar18 * 4) = (int)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar16 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar16;
        } while (uVar16 != uVar19);
        iVar4 = (int)(uVar12 >> 0x20);
        uVar16 = local_5c8;
        uVar19 = local_798;
        if (iVar4 != 0) {
          if (0x72 < local_798) goto LAB_1401c1be2;
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
          local_798 = local_798 + 1;
          uVar19 = local_798;
        }
      }
    }
  }
  else {
    uVar6 = (ulonglong)uVar5 / 10;
    uVar13 = (uint)uVar6;
    uVar16 = local_5c8;
    while (uVar13 != 0) {
      local_7e0 = (uint)uVar6;
      if (0x26 < local_7e0) {
        local_7e0 = 0x26;
      }
      uVar21 = local_7e0 - 1;
      bVar9 = (&DAT_140eb3ec2)[(ulonglong)uVar21 * 4];
      local_3f8 = (uint)(byte)(&DAT_140eb3ec3)[(ulonglong)uVar21 * 4] + (uint)bVar9;
      FUN_1401c5830(local_3f4,0,(ulonglong)bVar9 * 4);
      FUN_1401c5180(local_3f4 + bVar9,
                    &DAT_140eb35b0 +
                    (ulonglong)*(ushort *)(&DAT_140eb3ec0 + (ulonglong)uVar21 * 4) * 4);
      uVar21 = local_5c4[0];
      if (local_3f8 < 2) {
        uVar6 = (ulonglong)local_3f4[0];
        if (local_3f4[0] == 0) {
LAB_1401c1395:
          local_5c8 = 0;
LAB_1401c1398:
          uVar16 = local_5c8;
          goto LAB_1401c16f0;
        }
        if ((local_3f4[0] == 1) || (uVar16 == 0)) goto LAB_1401c16f0;
        uVar18 = 0;
        uVar12 = 0;
        do {
          uVar11 = local_5c4[uVar12] * uVar6 + uVar18;
          local_5c4[uVar12] = (uint)uVar11;
          uVar18 = uVar11 >> 0x20;
          uVar21 = (uint)(uVar11 >> 0x20);
          uVar20 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar20;
        } while (uVar20 != uVar16);
LAB_1401c1437:
        uVar16 = local_5c8;
        if (uVar21 == 0) goto LAB_1401c16f0;
        if (local_5c8 < 0x73) {
          local_5c4[local_5c8] = uVar21;
          local_5c8 = local_5c8 + 1;
          goto LAB_1401c1398;
        }
        uVar16 = 0;
        local_5c8 = 0;
        bVar22 = false;
      }
      else {
        if (uVar16 < 2) {
          uVar6 = (ulonglong)local_5c4[0];
          local_5c8 = local_3f8;
          if (local_3f8 != 0) {
            if (local_3f8 < 0x74) {
              FUN_1401c5180(local_5c4,local_3f4);
            }
            else {
              FUN_1401c5830(local_5c4,0);
              puVar7 = (undefined4 *)FUN_14019e8cc();
              *puVar7 = 0x22;
              FUN_1401ae640();
            }
          }
          if (uVar21 == 0) goto LAB_1401c1395;
          uVar16 = local_5c8;
          if ((uVar21 != 1) && (local_5c8 != 0)) {
            uVar18 = 0;
            uVar12 = 0;
            do {
              uVar11 = local_5c4[uVar12] * uVar6 + uVar18;
              local_5c4[uVar12] = (uint)uVar11;
              uVar18 = uVar11 >> 0x20;
              uVar21 = (uint)(uVar11 >> 0x20);
              uVar16 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar16;
            } while (uVar16 != local_5c8);
            goto LAB_1401c1437;
          }
        }
        else {
          local_7c8 = local_5c4;
          local_7e8 = local_3f4;
          uVar21 = local_3f8;
          if (local_3f8 < uVar16) {
            uVar21 = uVar16;
            local_7e8 = local_5c4;
            uVar16 = local_3f8;
            local_7c8 = local_3f4;
          }
          local_5c8 = 0;
          uVar6 = 0;
          local_228 = 0;
          if (uVar16 != 0) {
            do {
              uVar20 = local_7c8[uVar6];
              uVar10 = (uint)uVar6;
              if (uVar20 == 0) {
                if (uVar10 == local_5c8) {
                  local_224[uVar6] = 0;
                  local_5c8 = uVar10 + 1;
                  local_228 = local_5c8;
                }
              }
              else {
                uVar18 = 0;
                if (uVar21 != 0) {
                  do {
                    uVar17 = (uint)uVar6;
                    uVar12 = uVar6;
                    if (uVar17 == 0x73) break;
                    if (uVar17 == local_5c8) {
                      local_224[uVar6] = 0;
                      local_228 = uVar17 + 1;
                    }
                    uVar12 = (ulonglong)(uVar17 + 1);
                    uVar18 = (ulonglong)local_7e8[uVar17 + -uVar10] * (ulonglong)uVar20 +
                             (ulonglong)local_224[uVar6] + uVar18;
                    local_224[uVar6] = (uint)uVar18;
                    uVar18 = uVar18 >> 0x20;
                    uVar6 = uVar12;
                    local_5c8 = local_228;
                  } while (uVar17 + 1 + -uVar10 != uVar21);
                  uVar20 = (uint)uVar18;
                  uVar6 = uVar12;
                  while (uVar20 != 0) {
                    uVar17 = (uint)uVar6;
                    if (uVar17 == 0x73) goto LAB_1401c17ba;
                    if (uVar17 == local_5c8) {
                      local_224[uVar6] = 0;
                      local_228 = uVar17 + 1;
                    }
                    uVar20 = local_224[uVar6];
                    local_224[uVar6] = (uint)(uVar20 + uVar18);
                    uVar20 = (uint)(uVar20 + uVar18 >> 0x20);
                    uVar18 = (ulonglong)uVar20;
                    uVar6 = (ulonglong)(uVar17 + 1);
                    local_5c8 = local_228;
                  }
                }
                if ((int)uVar6 == 0x73) goto LAB_1401c17ba;
              }
              uVar6 = (ulonglong)(uVar10 + 1);
            } while (uVar10 + 1 != uVar16);
          }
          uVar16 = local_5c8;
          if (local_5c8 != 0) {
            if (local_5c8 < 0x74) {
              FUN_1401c5180(local_5c4,local_224);
              uVar16 = local_5c8;
            }
            else {
              FUN_1401c5830(local_5c4,0);
              puVar7 = (undefined4 *)FUN_14019e8cc();
              *puVar7 = 0x22;
              FUN_1401ae640();
              uVar16 = local_5c8;
            }
          }
        }
LAB_1401c16f0:
        bVar22 = true;
      }
      if (!bVar22) goto LAB_1401c17ba;
      uVar13 = uVar13 - local_7e0;
      uVar6 = (ulonglong)uVar13;
    }
    if (uVar5 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_140eb3f58 + (ulonglong)(uVar5 % 10 - 1) * 4);
      if (uVar13 == 0) {
LAB_1401c17ba:
        local_5c8 = 0;
LAB_1401c17bd:
        uVar16 = local_5c8;
      }
      else if ((uVar13 != 1) && (uVar16 != 0)) {
        uVar6 = 0;
        uVar18 = 0;
        do {
          uVar12 = (ulonglong)local_5c4[uVar18] * (ulonglong)uVar13 + uVar6;
          local_5c4[uVar18] = (uint)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar21 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar21;
        } while (uVar21 != uVar16);
        uVar13 = (uint)(uVar12 >> 0x20);
        uVar16 = local_5c8;
        if (uVar13 != 0) {
          if (0x72 < local_5c8) goto LAB_1401c17ba;
          local_5c4[local_5c8] = uVar13;
          local_5c8 = local_5c8 + 1;
          goto LAB_1401c17bd;
        }
      }
    }
  }
  pcVar15 = local_7a8;
  if (uVar19 != 0) {
    uVar6 = 0;
    uVar18 = 0;
    do {
      uVar12 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar18 * 4) * 10;
      *(int *)((longlong)&local_794 + uVar18 * 4) = (int)uVar12;
      uVar13 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar13;
      uVar6 = uVar12 >> 0x20;
    } while (uVar13 != uVar19);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
  }
  iVar4 = FUN_140197020(&local_798,&local_5c8);
  if (iVar4 == 10) {
    uVar5 = uVar5 + 1;
    *pcVar15 = '1';
    pcVar14 = pcVar15 + 1;
    if (uVar16 != 0) {
      uVar6 = 0;
      uVar18 = 0;
      do {
        uVar12 = uVar6 + (ulonglong)local_5c4[uVar18] * 10;
        local_5c4[uVar18] = (uint)uVar12;
        uVar19 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar19;
        uVar6 = uVar12 >> 0x20;
      } while (uVar19 != uVar16);
      uVar19 = (uint)(uVar12 >> 0x20);
      if (uVar19 != 0) {
        if (local_5c8 < 0x73) {
          local_5c4[local_5c8] = uVar19;
          local_5c8 = local_5c8 + 1;
        }
        else {
          local_5c8 = 0;
        }
      }
    }
  }
  else if (iVar4 == 0) {
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar15;
  }
  else {
    pcVar14 = pcVar15 + 1;
    *pcVar15 = (char)iVar4 + '0';
  }
  local_7a0[1] = uVar5;
  uVar19 = local_7ec;
  if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
    uVar19 = local_7ec + uVar5;
  }
  uVar6 = (ulonglong)uVar19;
  if (param_6 - 1U < (ulonglong)uVar19) {
    uVar6 = param_6 - 1U;
  }
  pcVar15 = pcVar15 + uVar6;
  while ((pcVar14 != pcVar15 && (local_798 != 0))) {
    uVar6 = 0;
    uVar18 = 0;
    do {
      uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar18 * 4) * 1000000000 + uVar6;
      *(int *)((longlong)&local_794 + uVar18 * 4) = (int)uVar12;
      uVar6 = uVar12 >> 0x20;
      uVar19 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar19;
    } while (uVar19 != local_798);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
    uVar6 = FUN_140197020(&local_798,&local_5c8);
    uVar19 = 8;
    do {
      uVar18 = (uVar6 & 0xffffffff) / 10;
      if (uVar19 < (uint)((int)pcVar15 - (int)pcVar14)) {
        pcVar14[uVar19] = (char)uVar6 + (char)uVar18 * -10 + '0';
      }
      uVar19 = uVar19 - 1;
      uVar6 = uVar18;
    } while (uVar19 != 0xffffffff);
    lVar8 = (longlong)pcVar15 - (longlong)pcVar14;
    if (9 < lVar8) {
      lVar8 = 9;
    }
    pcVar14 = pcVar14 + lVar8;
  }
  *pcVar14 = '\0';
  local_7dc = 0;
  FUN_1401c4030(&local_7dc,local_7d0,local_7cc);
LAB_1401c1e1c:
  if (local_7b8 != '\0') {
    FUN_1401c40c0(local_7c0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_58 ^ (ulonglong)auStackY_828);
}

