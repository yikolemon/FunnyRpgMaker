/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028395e */

/* WARNING: Type propagation algorithm not settling */

void FUN_1028395e(uint *****param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,
                 char *param_6,int param_7)

{
  double dVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  __acrt_fp_class _Var7;
  int iVar8;
  uint ****ppppuVar9;
  uint *****pppppuVar10;
  rsize_t rVar11;
  uint ****ppppuVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  uint ****ppppuVar16;
  uint ****ppppuVar17;
  uint *****pppppuVar18;
  uint *****pppppuVar19;
  uint ***pppuVar20;
  uint *****pppppuVar21;
  char *pcVar22;
  uint ******ppppppuVar23;
  uint *****pppppuVar24;
  bool bVar25;
  float10 fVar26;
  undefined1 local_b44 [460];
  undefined4 local_978;
  uint ***local_974 [115];
  uint local_7a8;
  byte local_7a4 [8];
  char local_79c;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 *local_790;
  char *local_78c;
  uint *****local_788;
  uint *****local_784;
  uint *****local_780;
  undefined8 local_77c;
  undefined8 local_774;
  uint *****local_76c;
  char *local_768;
  uint local_764;
  uint *****local_760;
  uint *****local_75c;
  uint *****local_758;
  undefined1 local_751;
  uint *****local_750;
  uint *****local_74c;
  uint *****local_748;
  uint ****local_744 [115];
  uint *****local_578;
  uint ****local_574 [115];
  uint *****local_3a8;
  uint ****local_3a4;
  uint ***local_3a0 [114];
  uint *****local_1d8 [2];
  uint local_1d0 [114];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_790 = param_5;
  local_768 = param_6;
  FUN_10287500(local_7a4);
  local_79c = (local_7a4[0] & 0x1f) != 0x1f;
  if ((bool)local_79c) {
    FUN_10287580(local_7a4);
  }
  uVar13 = param_2;
  uVar6 = 0x20;
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    uVar6 = 0x2d;
  }
  *local_790 = uVar6;
  local_790[2] = local_768;
  FUN_10287490(&local_7a8,0);
  if (((uVar13 & 0x7ff00000) == 0) &&
     ((param_1 == (uint *****)0x0 && (uVar13 & 0xfffff) == 0 || ((local_7a8 & 0x1000000) != 0)))) {
    local_790[1] = 0;
LAB_10283a76:
    iVar8 = FUN_102733f0(local_768,param_7);
joined_r0x10283aac:
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_10284df8;
  }
  _Var7 = __acrt_fp_classify((double *)&param_1);
  if (_Var7 != 0) {
    local_790[1] = 1;
    if (_Var7 == 1) {
      iVar8 = FUN_102733f0(local_768,param_7);
      goto joined_r0x10283aac;
    }
    if (((_Var7 == 2) || (_Var7 == 3)) || (_Var7 == 4)) goto LAB_10283a76;
  }
  param_2 = uVar13 & 0x7fffffff;
  local_794 = 0x8001f;
  FUN_10287490(&local_798,0,0);
  FUN_10287490((int)&local_774 + 4,0x8001f,local_794);
  local_77c = CONCAT44(param_2,param_1);
  local_78c = (char *)(param_3 + 1);
  local_774 = (ulonglong)(uint)local_774;
  bVar25 = (param_2 >> 0x14 & 0x7ff) != 0;
  if (bVar25) {
    iVar8 = 0x100000;
  }
  else {
    local_774 = 0;
    local_774._4_4_ = 0;
    iVar8 = local_774._4_4_;
  }
  local_758 = (uint *****)0x0;
  local_780 = param_1;
  uVar13 = (param_2 & 0xfffff) + iVar8;
  local_74c = (uint *****)((uint)!bVar25 + (param_2 >> 0x14 & 0x7ff));
  pppppuVar21 = param_1;
  uVar14 = param_2;
  FUN_102875e0();
  local_774 = CONCAT44(uVar14,pppppuVar21);
  fVar26 = (float10)FUN_1026d3b0();
  dVar1 = (double)fVar26;
  local_764 = (uint)fVar26;
  if ((local_764 == 0x7fffffff) || (local_764 == 0x80000000)) {
    local_764 = 0;
  }
  local_1d8[1] = local_780;
  local_1d0[0] = uVar13;
  local_3a8 = (uint *****)0x0;
  local_1d8[0] = (uint *****)((uVar13 != 0) + 1);
  if (local_74c < (uint *****)0x433) {
    if (local_74c == (uint *****)0x35) {
LAB_102840f1:
      iVar8 = 8;
      if (uVar13 == 0) {
        iVar8 = 4;
      }
      local_774 = (ulonglong)dVar1 & 0xffffffff;
      uVar13 = *(uint *)((int)local_1d8 + iVar8);
      iVar8 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      pppppuVar21 = (uint *****)((uint)(iVar8 == 0x20) + (int)local_1d8[0]);
      if (pppppuVar21 < (uint *****)0x74) {
        if ((uint ****)((int)pppppuVar21 - 1U) != (uint ****)0xffffffff) {
          ppppuVar17 = (uint ****)((int)pppppuVar21 - 2);
          ppppuVar9 = (uint ****)((int)pppppuVar21 - 1U);
          pppppuVar24 = local_1d8[0];
          do {
            if (ppppuVar9 < pppppuVar24) {
              uVar13 = local_1d0[(int)ppppuVar9 - 1];
            }
            else {
              uVar13 = 0;
            }
            if (ppppuVar17 < pppppuVar24) {
              ppppuVar16 = (uint ****)local_1d8[(int)ppppuVar9];
            }
            else {
              ppppuVar16 = (uint ****)0x0;
            }
            ppppuVar12 = (uint ****)((int)ppppuVar9 - 1);
            ppppuVar17 = (uint ****)((int)ppppuVar17 - 1);
            local_1d0[(int)ppppuVar9 - 1] = (uint)ppppuVar16 >> 0x1f | uVar13 * 2;
            ppppuVar9 = ppppuVar12;
            pppppuVar24 = local_1d8[0];
          } while (ppppuVar12 != (uint ****)0xffffffff);
        }
      }
      else {
        local_578 = (uint *****)0x0;
        local_1d8[0] = (uint *****)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
        pppppuVar21 = local_1d8[0];
      }
      local_1d8[0] = pppppuVar21;
      uVar13 = 0x434 - (int)local_74c;
      uVar14 = uVar13 >> 5;
      _memset(local_574,0,uVar14 * 4);
      local_574[uVar14] = (uint ****)(1 << ((byte)uVar13 & 0x1f));
    }
    else {
      local_574[0] = (uint ****)0x0;
      local_574[1] = (uint ****)0x100000;
      local_578 = (uint *****)0x2;
      if (uVar13 == 0) goto LAB_102840f1;
      iVar8 = 0;
      do {
        if (*(int *)((int)local_574 + iVar8) != *(int *)((int)local_1d0 + iVar8 + -4))
        goto LAB_102840f1;
        iVar8 = iVar8 + 4;
      } while (iVar8 != 8);
      iVar8 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      local_774 = (ulonglong)dVar1 & 0xffffffff;
      if (uVar13 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      pppppuVar21 = (uint *****)((uint)(0x20U - iVar8 < 2) + (int)local_1d8[0]);
      if (pppppuVar21 < (uint *****)0x74) {
        if ((uint ****)((int)pppppuVar21 - 1U) != (uint ****)0xffffffff) {
          ppppuVar17 = (uint ****)((int)pppppuVar21 - 2);
          ppppuVar9 = (uint ****)((int)pppppuVar21 - 1U);
          pppppuVar24 = local_1d8[0];
          do {
            if (ppppuVar9 < pppppuVar24) {
              uVar13 = local_1d0[(int)ppppuVar9 - 1];
            }
            else {
              uVar13 = 0;
            }
            if (ppppuVar17 < pppppuVar24) {
              ppppuVar16 = (uint ****)local_1d8[(int)ppppuVar9];
            }
            else {
              ppppuVar16 = (uint ****)0x0;
            }
            ppppuVar12 = (uint ****)((int)ppppuVar9 - 1);
            ppppuVar17 = (uint ****)((int)ppppuVar17 - 1);
            local_1d0[(int)ppppuVar9 - 1] = (uint)ppppuVar16 >> 0x1e | uVar13 << 2;
            ppppuVar9 = ppppuVar12;
            pppppuVar24 = local_1d8[0];
          } while (ppppuVar12 != (uint ****)0xffffffff);
        }
      }
      else {
        local_578 = (uint *****)0x0;
        local_1d8[0] = (uint *****)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
        pppppuVar21 = local_1d8[0];
      }
      local_1d8[0] = pppppuVar21;
      uVar13 = 0x435 - (int)local_74c;
      uVar14 = uVar13 >> 5;
      _memset(local_574,0,uVar14 * 4);
      local_574[uVar14] = (uint ****)(1 << ((byte)uVar13 & 0x1f));
    }
    local_578 = (uint *****)(uVar14 + 1);
    local_3a8 = local_578;
    _memcpy_s(&local_3a4,0x1cc,local_574,(int)local_578 * 4);
  }
  else {
    local_574[0] = (uint ****)0x0;
    local_574[1] = (uint ****)0x100000;
    local_578 = (uint *****)0x2;
    if (uVar13 == 0) {
LAB_10283e28:
      local_76c = (uint *****)((int)local_74c - 0x432U & 0x1f);
      local_74c = (uint *****)((int)local_74c - 0x432U >> 5);
      local_788 = (uint *****)(0x20 - (int)local_76c);
      uVar13 = 1 << ((uint)local_788 & 0x1f);
      uVar14 = 0;
      if ((uint *****)0x1f < local_788) {
        uVar14 = uVar13;
      }
      local_774 = (ulonglong)dVar1 & 0xffffffff;
      local_784 = (uint *****)((uVar13 ^ uVar14) - 1);
      local_77c = CONCAT44(~(uint)local_784,(undefined4)local_77c);
      ppppuVar17 = (uint ****)local_1d8[(int)local_1d8[0]];
      iVar8 = 0x1f;
      if (ppppuVar17 != (uint ****)0x0) {
        for (; (uint)ppppuVar17 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (ppppuVar17 == (uint ****)0x0) {
        local_75c = (uint *****)0x0;
      }
      else {
        local_75c = (uint *****)(iVar8 + 1);
      }
      if (((uint)((int)local_74c + (int)local_1d8[0]) < 0x74) &&
         (local_780 = (uint *****)
                      ((int)local_74c +
                      (int)local_1d8[0] + (uint)((uint *****)(0x20 - (int)local_75c) < local_76c)),
         local_780 < (uint *****)0x74)) {
        local_760 = (uint *****)((int)local_74c + -1);
        local_750 = (uint *****)((int)local_780 + -1);
        if (local_750 != local_760) {
          ppppuVar17 = (uint ****)((int)local_750 - (int)local_74c);
          local_758 = (uint *****)(local_1d8 + (int)ppppuVar17);
          pppppuVar21 = local_1d8[0];
          do {
            if (ppppuVar17 < pppppuVar21) {
              local_75c = (uint *****)local_758[1];
            }
            else {
              local_75c = (uint *****)0x0;
            }
            if ((uint ****)((int)ppppuVar17 - 1U) < pppppuVar21) {
              ppppuVar9 = *local_758;
            }
            else {
              ppppuVar9 = (uint ****)0x0;
            }
            local_1d0[(int)local_750 + -1] =
                 ((uint)ppppuVar9 & ~(uint)local_784) >> ((byte)local_788 & 0x1f) |
                 ((uint)local_75c & (uint)local_784) << (sbyte)local_76c;
            local_750 = (uint *****)((int)local_750 + -1);
            local_758 = local_758 + -1;
            ppppuVar17 = (uint ****)((int)ppppuVar17 - 1);
            pppppuVar21 = local_1d8[0];
          } while (local_750 != local_760);
        }
        local_1d8[0] = local_780;
        if (local_74c != (uint *****)0x0) {
          ppppppuVar23 = local_1d8;
          for (pppppuVar21 = local_74c; ppppppuVar23 = (uint ******)((int)ppppppuVar23 + 4),
              pppppuVar21 != (uint *****)0x0; pppppuVar21 = (uint *****)((int)pppppuVar21 + -1)) {
            *ppppppuVar23 = (uint *****)0x0;
          }
        }
      }
      else {
        local_578 = (uint *****)0x0;
        local_1d8[0] = (uint *****)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
      }
      local_574[0] = (uint ****)0x2;
    }
    else {
      iVar8 = 0;
      do {
        if (*(int *)((int)local_574 + iVar8) != *(int *)((int)local_1d0 + iVar8 + -4))
        goto LAB_10283e28;
        iVar8 = iVar8 + 4;
      } while (iVar8 != 8);
      local_760 = (uint *****)((int)local_74c - 0x431U & 0x1f);
      local_75c = (uint *****)((int)local_74c - 0x431U >> 5);
      local_784 = (uint *****)(0x20 - (int)local_760);
      uVar13 = 1 << ((uint)local_784 & 0x1f);
      uVar14 = 0;
      if ((uint *****)0x1f < local_784) {
        uVar14 = uVar13;
      }
      local_774 = (ulonglong)dVar1 & 0xffffffff;
      local_788 = (uint *****)((uVar13 ^ uVar14) - 1);
      local_780 = (uint *****)~(uint)local_788;
      ppppuVar17 = (uint ****)local_1d8[(int)local_1d8[0]];
      iVar8 = 0x1f;
      if (ppppuVar17 != (uint ****)0x0) {
        for (; (uint)ppppuVar17 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (ppppuVar17 == (uint ****)0x0) {
        local_758 = (uint *****)0x0;
      }
      else {
        local_758 = (uint *****)(iVar8 + 1);
      }
      if ((uint)((int)local_75c + (int)local_1d8[0]) < 0x74) {
        pppppuVar21 = (uint *****)
                      ((int)local_75c +
                      (int)local_1d8[0] + (uint)((uint *****)(0x20 - (int)local_758) < local_760));
        local_77c = CONCAT44(pppppuVar21,(undefined4)local_77c);
        if ((uint *****)0x73 < pppppuVar21) goto LAB_10283cd1;
        local_76c = (uint *****)((int)local_75c + -1);
        local_750 = (uint *****)((int)pppppuVar21 + -1);
        if (local_750 != local_76c) {
          ppppuVar17 = (uint ****)((int)local_750 - (int)local_75c);
          local_74c = (uint *****)(local_1d8 + (int)ppppuVar17);
          pppppuVar24 = local_1d8[0];
          do {
            if (ppppuVar17 < pppppuVar24) {
              local_758 = (uint *****)local_74c[1];
            }
            else {
              local_758 = (uint *****)0x0;
            }
            if ((uint ****)((int)ppppuVar17 - 1U) < pppppuVar24) {
              ppppuVar9 = *local_74c;
            }
            else {
              ppppuVar9 = (uint ****)0x0;
            }
            local_1d0[(int)local_750 + -1] =
                 ((uint)ppppuVar9 & (uint)local_780) >> ((byte)local_784 & 0x1f) |
                 ((uint)local_758 & (uint)local_788) << (sbyte)local_760;
            local_750 = (uint *****)((int)local_750 + -1);
            local_74c = local_74c + -1;
            ppppuVar17 = (uint ****)((int)ppppuVar17 - 1);
            pppppuVar24 = local_1d8[0];
          } while (local_750 != local_76c);
        }
        local_1d8[0] = pppppuVar21;
        if (local_75c != (uint *****)0x0) {
          ppppppuVar23 = local_1d8;
          for (pppppuVar21 = local_75c; ppppppuVar23 = (uint ******)((int)ppppppuVar23 + 4),
              pppppuVar21 != (uint *****)0x0; pppppuVar21 = (uint *****)((int)pppppuVar21 + -1)) {
            *ppppppuVar23 = (uint *****)0x0;
          }
        }
      }
      else {
LAB_10283cd1:
        local_578 = (uint *****)0x0;
        local_1d8[0] = (uint *****)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
      }
      local_574[0] = (uint ****)0x4;
    }
    local_574[1] = (uint ****)0x0;
    local_3a8 = (uint *****)0x1;
    local_578 = (uint *****)0x1;
    _memcpy_s(&local_3a4,0x1cc,local_574,4);
  }
  local_780 = (uint *****)0xa;
  if ((int)local_764 < 0) {
    local_774 = CONCAT44(-local_764,(uint)local_774);
    uVar4 = local_774;
    for (local_76c = (uint *****)(-local_764 / 10); local_774 = uVar4, local_76c != (uint *****)0x0;
        local_76c = (uint *****)((int)local_76c - (int)local_75c)) {
      local_75c = local_76c;
      if ((uint *****)0x26 < local_76c) {
        local_75c = (uint *****)0x26;
      }
      bVar2 = (&DAT_10324a47)[(int)local_75c * 4];
      uVar13 = (uint)(byte)(&DAT_10324a46)[(int)local_75c * 4];
      local_578 = (uint *****)(uVar13 + bVar2);
      _memset(local_574,0,uVar13 * 4);
      FUN_1025b2d0(local_574 + uVar13,
                   &DAT_10324140 + (uint)*(ushort *)(&DAT_10324a44 + (int)local_75c * 4) * 4,
                   (uint)bVar2 << 2);
      pppppuVar21 = local_1d8[1];
      if (local_578 < (uint *****)0x2) {
        if (local_574[0] == (uint ****)0x0) {
LAB_10284744:
          local_978 = 0;
          local_1d8[0] = (uint *****)0x0;
          rVar11 = 0;
          ppppuVar17 = local_974;
          goto LAB_10284a22;
        }
        if ((local_574[0] == (uint ****)0x1) || (local_1d8[0] == (uint *****)0x0))
        goto LAB_10284a37;
        uVar13 = 0;
        local_77c = CONCAT44(local_1d8[0],(undefined4)local_77c);
        pppppuVar21 = (uint *****)0x0;
        do {
          lVar3 = ZEXT48(local_574[0]) * (ulonglong)local_1d0[(int)pppppuVar21 + -1] +
                  (ulonglong)uVar13;
          local_1d0[(int)pppppuVar21 + -1] = (uint)lVar3;
          uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
          pppppuVar21 = (uint *****)((int)pppppuVar21 + 1);
        } while (pppppuVar21 != local_1d8[0]);
LAB_102847a3:
        uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
        if (uVar13 == 0) goto LAB_10284a37;
        if (local_1d8[0] < (uint *****)0x73) {
          local_1d0[(int)local_1d8[0] + -1] = uVar13;
          local_1d8[0] = (uint *****)((int)local_1d8[0] + 1);
          goto LAB_10284a37;
        }
        local_978 = 0;
        local_1d8[0] = (uint *****)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
        bVar25 = false;
      }
      else {
        if (local_1d8[0] < (uint *****)0x2) {
          local_1d8[0] = local_578;
          _memcpy_s(local_1d8 + 1,0x1cc,local_574,(int)local_578 << 2);
          if (pppppuVar21 != (uint *****)0x0) {
            if ((pppppuVar21 != (uint *****)0x1) && (local_1d8[0] != (uint *****)0x0)) {
              uVar13 = 0;
              local_77c = CONCAT44(local_1d8[0],(undefined4)local_77c);
              pppppuVar24 = (uint *****)0x0;
              do {
                uVar4 = (ulonglong)uVar13;
                uVar14 = local_1d0[(int)pppppuVar24 + -1];
                lVar3 = ZEXT48(pppppuVar21) * (ulonglong)uVar14 + (ulonglong)uVar13;
                local_1d0[(int)pppppuVar24 + -1] = (uint)lVar3;
                uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
                lVar3 = ZEXT48(pppppuVar21) * (ulonglong)uVar14 + uVar4;
                pppppuVar24 = (uint *****)((int)pppppuVar24 + 1);
              } while (pppppuVar24 != local_1d8[0]);
              goto LAB_102847a3;
            }
            goto LAB_10284a37;
          }
          goto LAB_10284744;
        }
        pppppuVar21 = (uint *****)(local_1d8 + 1);
        local_758 = local_574;
        if (local_1d8[0] <= local_578) {
          pppppuVar21 = local_574;
          local_758 = (uint *****)(local_1d8 + 1);
        }
        local_77c = CONCAT44(pppppuVar21,(undefined4)local_77c);
        local_788 = local_578;
        local_784 = local_1d8[0];
        if (local_1d8[0] > local_578) {
          local_788 = local_1d8[0];
          local_784 = local_578;
        }
        local_1d8[0] = (uint *****)0x0;
        pppppuVar24 = (uint *****)0x0;
        local_748 = (uint *****)0x0;
        if (local_784 != (uint *****)0x0) {
          do {
            if (local_758[(int)pppppuVar24] == (uint ****)0x0) {
              if (pppppuVar24 == local_1d8[0]) {
                local_744[(int)pppppuVar24] = (uint ****)0x0;
                local_1d8[0] = (uint *****)((int)pppppuVar24 + 1);
                local_748 = local_1d8[0];
              }
            }
            else {
              local_74c = (uint *****)0x0;
              local_750 = (uint *****)0x0;
              pppppuVar18 = pppppuVar24;
              if (local_788 != (uint *****)0x0) {
                do {
                  if (pppppuVar18 == (uint *****)0x73) break;
                  if (pppppuVar18 == local_1d8[0]) {
                    local_744[(int)pppppuVar18] = (uint ****)0x0;
                    local_748 = (uint *****)((int)local_750 + 1 + (int)pppppuVar24);
                  }
                  ppppuVar17 = pppppuVar21[(int)local_750];
                  ppppuVar9 = local_758[(int)pppppuVar24];
                  uVar13 = (uint)(ZEXT48(ppppuVar17) * ZEXT48(ppppuVar9));
                  pppuVar20 = (uint ***)local_744[(int)pppppuVar18];
                  uVar14 = uVar13 + (int)local_744[(int)pppppuVar18];
                  local_744[(int)pppppuVar18] = (uint ****)(uVar14 + (int)local_74c);
                  local_74c = (uint *****)
                              ((int)(ZEXT48(ppppuVar17) * ZEXT48(ppppuVar9) >> 0x20) +
                               (uint)CARRY4(uVar13,(uint)pppuVar20) +
                              (uint)CARRY4(uVar14,(uint)local_74c));
                  local_750 = (uint *****)((int)local_750 + 1);
                  pppppuVar18 = (uint *****)((int)pppppuVar18 + 1);
                  local_1d8[0] = local_748;
                } while (local_750 != local_788);
                if (local_74c != (uint *****)0x0) {
                  pppppuVar19 = pppppuVar18;
                  local_760 = local_744 + (int)pppppuVar18;
                  do {
                    if (pppppuVar19 == (uint *****)0x73) goto LAB_10284adb;
                    pppppuVar18 = (uint *****)((int)pppppuVar19 + 1);
                    if (pppppuVar19 == local_1d8[0]) {
                      *local_760 = (uint ****)0x0;
                      local_748 = pppppuVar18;
                    }
                    pppppuVar10 = local_760 + 1;
                    ppppuVar17 = *local_760;
                    *local_760 = (uint ****)((int)*local_760 + (int)local_74c);
                    local_74c = (uint *****)(uint)CARRY4((uint)ppppuVar17,(uint)local_74c);
                    local_1d8[0] = local_748;
                    pppppuVar19 = pppppuVar18;
                    local_760 = pppppuVar10;
                  } while (local_74c != (uint *****)0x0);
                }
              }
              if (pppppuVar18 == (uint *****)0x73) {
LAB_10284adb:
                local_1d8[0] = (uint *****)0x0;
                _memcpy_s(local_1d8 + 1,0x1cc,local_b44,0);
                goto LAB_10284b05;
              }
            }
            pppppuVar24 = (uint *****)((int)pppppuVar24 + 1);
          } while (pppppuVar24 != local_784);
        }
        rVar11 = (int)local_1d8[0] << 2;
        ppppuVar17 = (uint ****)local_744;
LAB_10284a22:
        _memcpy_s(local_1d8 + 1,0x1cc,ppppuVar17,rVar11);
LAB_10284a37:
        bVar25 = true;
      }
      if (!bVar25) goto LAB_10284b05;
      uVar4 = local_774;
    }
    local_774._4_4_ = (uint)(uVar4 >> 0x20);
    uVar13 = local_774._4_4_ % 10;
    if (uVar13 != 0) {
      uVar13 = *(uint *)(&DAT_10324adc + uVar13 * 2);
      local_774._0_4_ = (uint)uVar4;
      local_774 = CONCAT44(uVar13,(uint)local_774);
      if (uVar13 == 0) {
LAB_10284b05:
        local_1d8[0] = (uint *****)0x0;
        pppppuVar21 = (uint *****)(local_1d8 + 1);
        goto LAB_10284b21;
      }
      if ((uVar13 != 1) && (local_1d8[0] != (uint *****)0x0)) {
        uVar14 = 0;
        pppppuVar21 = (uint *****)0x0;
        do {
          lVar3 = (ulonglong)uVar13 * (ulonglong)local_1d0[(int)pppppuVar21 + -1] +
                  (ulonglong)uVar14;
          local_1d0[(int)pppppuVar21 + -1] = (uint)lVar3;
          uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
          pppppuVar21 = (uint *****)((int)pppppuVar21 + 1);
        } while (pppppuVar21 != local_1d8[0]);
        if (uVar14 != 0) {
          if ((uint *****)0x72 < local_1d8[0]) goto LAB_10284b05;
          local_1d0[(int)local_1d8[0] + -1] = uVar14;
          local_1d8[0] = (uint *****)((int)local_1d8[0] + 1);
        }
      }
    }
  }
  else {
    local_76c = (uint *****)(local_764 / 10);
    pppppuVar21 = local_3a8;
    if (local_76c != (uint *****)0x0) {
      local_74c = local_3a8;
      do {
        local_75c = local_76c;
        if ((uint *****)0x26 < local_76c) {
          local_75c = (uint *****)0x26;
        }
        bVar2 = (&DAT_10324a47)[(int)local_75c * 4];
        uVar13 = (uint)(byte)(&DAT_10324a46)[(int)local_75c * 4];
        local_578 = (uint *****)(uVar13 + bVar2);
        _memset(local_574,0,uVar13 * 4);
        FUN_1025b2d0(local_574 + uVar13,
                     &DAT_10324140 + (uint)*(ushort *)(&DAT_10324a44 + (int)local_75c * 4) * 4,
                     (uint)bVar2 << 2);
        ppppuVar17 = local_3a4;
        if (local_578 < (uint *****)0x2) {
          if (local_574[0] == (uint ****)0x0) {
LAB_102842b5:
            local_578 = (uint *****)0x0;
            local_3a8 = (uint *****)0x0;
            rVar11 = 0;
            ppppuVar17 = (uint ****)local_574;
            goto LAB_10284599;
          }
          pppppuVar21 = local_74c;
          if ((local_574[0] == (uint ****)0x1) || (local_74c == (uint *****)0x0)) goto LAB_102845ba;
          uVar13 = 0;
          pppppuVar21 = (uint *****)0x0;
          do {
            lVar3 = ZEXT48(local_574[0]) * ZEXT48((&local_3a4)[(int)pppppuVar21]) +
                    (ulonglong)uVar13;
            (&local_3a4)[(int)pppppuVar21] = (uint ****)(uint ***)lVar3;
            uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
            pppppuVar21 = (uint *****)((int)pppppuVar21 + 1);
          } while (pppppuVar21 != local_74c);
LAB_1028430d:
          pppuVar20 = (uint ***)((ulonglong)lVar3 >> 0x20);
          pppppuVar21 = local_3a8;
          if (pppuVar20 == (uint ***)0x0) goto LAB_102845ba;
          if (local_3a8 < (uint *****)0x73) {
            (&local_3a4)[(int)local_3a8] = (uint ****)pppuVar20;
            local_3a8 = (uint *****)((int)local_3a8 + 1);
            pppppuVar21 = local_3a8;
            goto LAB_102845ba;
          }
          local_578 = (uint *****)0x0;
          local_3a8 = (uint *****)0x0;
          _memcpy_s(&local_3a4,0x1cc,local_574,0);
          bVar25 = false;
          local_74c = local_3a8;
        }
        else {
          if (local_74c < (uint *****)0x2) {
            local_77c = CONCAT44(local_3a4,(undefined4)local_77c);
            local_3a8 = local_578;
            _memcpy_s(&local_3a4,0x1cc,local_574,(int)local_578 << 2);
            if (ppppuVar17 != (uint ****)0x0) {
              local_74c = local_3a8;
              pppppuVar21 = local_74c;
              if ((ppppuVar17 != (uint ****)0x1) && (local_3a8 != (uint *****)0x0)) {
                uVar13 = 0;
                pppppuVar21 = (uint *****)0x0;
                do {
                  uVar4 = (ulonglong)uVar13;
                  lVar3 = (local_77c >> 0x20) * ZEXT48((&local_3a4)[(int)pppppuVar21]);
                  lVar5 = lVar3 + (ulonglong)uVar13;
                  (&local_3a4)[(int)pppppuVar21] = (uint ****)(uint ***)lVar5;
                  uVar13 = (uint)((ulonglong)lVar5 >> 0x20);
                  lVar3 = lVar3 + uVar4;
                  pppppuVar21 = (uint *****)((int)pppppuVar21 + 1);
                } while (pppppuVar21 != local_3a8);
                goto LAB_1028430d;
              }
              goto LAB_102845ba;
            }
            goto LAB_102842b5;
          }
          pppppuVar21 = &local_3a4;
          local_760 = local_574;
          if (local_74c <= local_578) {
            pppppuVar21 = local_574;
            local_760 = &local_3a4;
          }
          local_77c = CONCAT44(pppppuVar21,(undefined4)local_77c);
          local_788 = local_578;
          local_784 = local_74c;
          if (local_74c > local_578) {
            local_788 = local_74c;
            local_784 = local_578;
          }
          local_3a8 = (uint *****)0x0;
          pppppuVar24 = (uint *****)0x0;
          local_748 = (uint *****)0x0;
          if (local_784 != (uint *****)0x0) {
            do {
              if (local_760[(int)pppppuVar24] == (uint ****)0x0) {
                if (pppppuVar24 == local_3a8) {
                  local_744[(int)pppppuVar24] = (uint ****)0x0;
                  local_3a8 = (uint *****)((int)pppppuVar24 + 1);
                  local_748 = local_3a8;
                }
              }
              else {
                local_74c = (uint *****)0x0;
                local_750 = (uint *****)0x0;
                pppppuVar18 = pppppuVar24;
                if (local_788 != (uint *****)0x0) {
                  do {
                    if (pppppuVar18 == (uint *****)0x73) break;
                    if (pppppuVar18 == local_3a8) {
                      local_744[(int)pppppuVar18] = (uint ****)0x0;
                      local_748 = (uint *****)((int)local_750 + 1 + (int)pppppuVar24);
                    }
                    ppppuVar9 = pppppuVar21[(int)local_750];
                    ppppuVar16 = local_760[(int)pppppuVar24];
                    uVar13 = (uint)(ZEXT48(ppppuVar9) * ZEXT48(ppppuVar16));
                    uVar14 = uVar13 + (int)local_74c;
                    ppppuVar17 = (uint ****)(local_744 + (int)pppppuVar18);
                    pppuVar20 = *ppppuVar17;
                    *ppppuVar17 = (uint ***)((int)*ppppuVar17 + uVar14);
                    local_74c = (uint *****)
                                ((int)(ZEXT48(ppppuVar9) * ZEXT48(ppppuVar16) >> 0x20) +
                                 (uint)CARRY4(uVar13,(uint)local_74c) +
                                (uint)CARRY4((uint)pppuVar20,uVar14));
                    local_750 = (uint *****)((int)local_750 + 1);
                    pppppuVar18 = (uint *****)((int)pppppuVar18 + 1);
                    local_3a8 = local_748;
                  } while (local_750 != local_788);
                  if (local_74c != (uint *****)0x0) {
                    pppppuVar19 = pppppuVar18;
                    local_750 = local_744 + (int)pppppuVar18;
                    do {
                      if (pppppuVar19 == (uint *****)0x73) goto LAB_1028465f;
                      pppppuVar18 = (uint *****)((int)pppppuVar19 + 1);
                      if (pppppuVar19 == local_3a8) {
                        *local_750 = (uint ****)0x0;
                        local_748 = pppppuVar18;
                      }
                      pppppuVar10 = local_750 + 1;
                      ppppuVar17 = *local_750;
                      *local_750 = (uint ****)((int)*local_750 + (int)local_74c);
                      local_74c = (uint *****)(uint)CARRY4((uint)ppppuVar17,(uint)local_74c);
                      local_3a8 = local_748;
                      pppppuVar19 = pppppuVar18;
                      local_750 = pppppuVar10;
                    } while (local_74c != (uint *****)0x0);
                  }
                }
                if (pppppuVar18 == (uint *****)0x73) {
LAB_1028465f:
                  local_3a8 = (uint *****)0x0;
                  _memcpy_s(&local_3a4,0x1cc,local_b44,0);
                  goto LAB_10284689;
                }
              }
              pppppuVar24 = (uint *****)((int)pppppuVar24 + 1);
            } while (pppppuVar24 != local_784);
          }
          rVar11 = (int)local_3a8 << 2;
          ppppuVar17 = (uint ****)local_744;
LAB_10284599:
          _memcpy_s(&local_3a4,0x1cc,ppppuVar17,rVar11);
          pppppuVar21 = local_3a8;
LAB_102845ba:
          local_74c = pppppuVar21;
          bVar25 = true;
        }
        if (!bVar25) goto LAB_10284689;
        local_76c = (uint *****)((int)local_76c - (int)local_75c);
        pppppuVar21 = local_74c;
      } while (local_76c != (uint *****)0x0);
    }
    if (local_764 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_10324adc + (local_764 % 10) * 2);
      local_77c = CONCAT44(uVar13,(undefined4)local_77c);
      if (uVar13 == 0) {
LAB_10284689:
        local_3a8 = (uint *****)0x0;
        pppppuVar21 = &local_3a4;
LAB_10284b21:
        local_978 = 0;
        _memcpy_s(pppppuVar21,0x1cc,local_974,0);
      }
      else if ((uVar13 != 1) && (pppppuVar21 != (uint *****)0x0)) {
        pppuVar20 = (uint ***)0x0;
        pppppuVar24 = (uint *****)0x0;
        do {
          lVar3 = (ulonglong)uVar13 * ZEXT48((&local_3a4)[(int)pppppuVar24]) + ZEXT48(pppuVar20);
          (&local_3a4)[(int)pppppuVar24] = (uint ****)(uint ***)lVar3;
          pppuVar20 = (uint ***)((ulonglong)lVar3 >> 0x20);
          pppppuVar24 = (uint *****)((int)pppppuVar24 + 1);
        } while (pppppuVar24 != pppppuVar21);
        if (pppuVar20 != (uint ***)0x0) {
          if ((uint *****)0x72 < local_3a8) goto LAB_10284689;
          (&local_3a4)[(int)local_3a8] = (uint ****)pppuVar20;
          local_3a8 = (uint *****)((int)local_3a8 + 1);
        }
      }
    }
  }
  pcVar22 = local_768;
  local_74c = (uint *****)local_768;
  if (local_1d8[0] != (uint *****)0x0) {
    uVar13 = 0;
    pppppuVar21 = (uint *****)0x0;
    do {
      lVar3 = (ulonglong)local_1d0[(int)pppppuVar21 + -1] * 10 + (ulonglong)uVar13;
      local_1d0[(int)pppppuVar21 + -1] = (uint)lVar3;
      uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
      pppppuVar21 = (uint *****)((int)pppppuVar21 + 1);
    } while (pppppuVar21 != local_1d8[0]);
    if (uVar13 != 0) {
      if (local_1d8[0] < (uint *****)0x73) {
        local_1d0[(int)local_1d8[0] + -1] = uVar13;
        local_1d8[0] = (uint *****)((int)local_1d8[0] + 1);
      }
      else {
        local_978 = 0;
        local_1d8[0] = (uint *****)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
      }
    }
  }
  iVar8 = FUN_102638a0();
  if (iVar8 == 10) {
    local_764 = local_764 + 1;
    local_74c = (uint *****)(pcVar22 + 1);
    *pcVar22 = '1';
    if (local_3a8 != (uint *****)0x0) {
      pppuVar20 = (uint ***)0x0;
      pppppuVar21 = (uint *****)0x0;
      do {
        lVar3 = ZEXT48((&local_3a4)[(int)pppppuVar21]) * 10 + ZEXT48(pppuVar20);
        (&local_3a4)[(int)pppppuVar21] = (uint ****)(uint ***)lVar3;
        pppuVar20 = (uint ***)((ulonglong)lVar3 >> 0x20);
        pppppuVar21 = (uint *****)((int)pppppuVar21 + 1);
      } while (pppppuVar21 != local_3a8);
      if (pppuVar20 != (uint ***)0x0) {
        if (local_3a8 < (uint *****)0x73) {
          (&local_3a4)[(int)local_3a8] = (uint ****)pppuVar20;
          local_3a8 = (uint *****)((int)local_3a8 + 1);
        }
        else {
          local_978 = 0;
          local_3a8 = (uint *****)0x0;
          _memcpy_s(&local_3a4,0x1cc,local_974,0);
        }
      }
    }
LAB_10284c89:
    pcVar22 = pcVar22 + 1;
    uVar13 = local_764;
  }
  else {
    if (iVar8 != 0) {
      local_74c = (uint *****)(pcVar22 + 1);
      *pcVar22 = (char)iVar8 + '0';
      goto LAB_10284c89;
    }
    uVar13 = local_764 - 1;
  }
  local_790[1] = uVar13;
  if (((-1 < (int)uVar13) && (local_78c < 0x80000000)) && (param_4 == 0)) {
    local_78c = (char *)((int)local_78c + uVar13);
  }
  if (param_7 - 1U < local_78c) {
    local_78c = (char *)(param_7 - 1U);
  }
  local_78c = local_768 + (int)local_78c;
  local_751 = 0;
  if (pcVar22 != local_78c) {
    do {
      pppppuVar21 = local_74c;
      if (local_1d8[0] == (uint *****)0x0) break;
      uVar13 = 0;
      pppppuVar24 = (uint *****)0x0;
      do {
        lVar3 = (ulonglong)local_1d0[(int)pppppuVar24 + -1] * 1000000000 + (ulonglong)uVar13;
        local_1d0[(int)pppppuVar24 + -1] = (uint)lVar3;
        uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
        pppppuVar24 = (uint *****)((int)pppppuVar24 + 1);
      } while (pppppuVar24 != local_1d8[0]);
      if (uVar13 != 0) {
        if (local_1d8[0] < (uint *****)0x73) {
          local_1d0[(int)local_1d8[0] + -1] = uVar13;
          local_1d8[0] = (uint *****)((int)local_1d8[0] + 1);
        }
        else {
          local_978 = 0;
          local_1d8[0] = (uint *****)0x0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
        }
      }
      uVar13 = FUN_102638a0();
      uVar14 = 8;
      do {
        cVar15 = (char)(uVar13 % (uint)local_780) + '0';
        if (uVar14 < (uint)((int)local_78c - (int)pppppuVar21)) {
          *(char *)((int)pppppuVar21 + uVar14) = cVar15;
        }
        else if (cVar15 != '0') {
          local_751 = 1;
        }
        uVar14 = uVar14 - 1;
        uVar13 = uVar13 / (uint)local_780;
      } while (uVar14 != 0xffffffff);
      uVar13 = (int)local_78c - (int)pppppuVar21;
      if (9 < (uint)((int)local_78c - (int)pppppuVar21)) {
        uVar13 = 9;
      }
      pcVar22 = (char *)((int)pppppuVar21 + uVar13);
      local_74c = (uint *****)pcVar22;
    } while (pcVar22 != local_78c);
  }
  *pcVar22 = '\0';
  FUN_10287490((int)&local_774 + 4,local_798,local_794);
LAB_10284df8:
  if (local_79c != '\0') {
    FUN_10287520(local_7a4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

