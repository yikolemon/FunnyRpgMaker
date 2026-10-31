/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026443c */

/* WARNING: Type propagation algorithm not settling */

void FUN_1026443c(uint *param_1,floating_point_value *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint ***pppuVar3;
  uint ***pppuVar4;
  ulonglong uVar5;
  int iVar6;
  uint ***pppuVar7;
  byte *pbVar8;
  char cVar9;
  uint ****ppppuVar10;
  uint **ppuVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint ****ppppuVar15;
  uint ****ppppuVar16;
  uint ****ppppuVar17;
  uint uVar18;
  uint uVar19;
  uint ****ppppuVar20;
  uint ****ppppuVar21;
  bool bVar22;
  longlong lVar23;
  longlong lVar24;
  rsize_t rVar25;
  undefined1 local_cf8 [460];
  undefined4 local_b2c;
  uint **local_b28 [115];
  floating_point_value *local_95c;
  uint ****local_958;
  uint *local_954;
  uint ****local_950;
  uint local_94c;
  uint ****local_948;
  uint ****local_944;
  uint ****local_940;
  uint ****local_93c;
  uint ****local_938;
  uint ****local_934;
  uint ****local_930;
  uint ****local_92c;
  uint ****local_928;
  uint ****local_924;
  uint ****local_920;
  uint ****local_91c;
  uint ****local_918;
  uint ***local_914 [115];
  uint ****local_748;
  uint ***local_744 [115];
  uint ****local_578;
  uint ***local_574 [115];
  uint ****local_3a8;
  uint ***local_3a4 [115];
  uint ****local_1d8 [116];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_958 = (uint ****)0x19;
  if (param_2[4] != (floating_point_value)0x0) {
    local_958 = (uint ****)0x36;
  }
  local_95c = param_2;
  uVar14 = *param_1;
  uVar12 = param_1[1];
  local_954 = param_1;
  if ((int)uVar14 < 0) {
    uVar14 = 0;
  }
  uVar19 = uVar14;
  if (uVar12 <= uVar14) {
    uVar19 = uVar12;
  }
  local_944 = (uint ****)(uVar14 - uVar19);
  local_920 = (uint ****)0x0;
  ppppuVar20 = (uint ****)((int)param_1 + uVar19 + 8);
  local_938 = (uint ****)((int)param_1 + uVar12 + 8);
  ppppuVar21 = (uint ****)(param_1 + 2);
  ppppuVar10 = (uint ****)0x0;
  local_94c = (int)local_938 - (int)ppppuVar20;
  local_91c = (uint ****)0x0;
  ppppuVar15 = (uint ****)0x0;
  local_1d8[0] = (uint ****)0x0;
  local_930 = ppppuVar20;
  local_924 = ppppuVar21;
  ppppuVar17 = local_1d8[0];
  if (ppppuVar21 != ppppuVar20) {
    do {
      ppppuVar17 = local_920;
      if (ppppuVar15 == (uint ****)0x9) {
        local_924 = ppppuVar21;
        if (ppppuVar10 != (uint ****)0x0) {
          uVar14 = 0;
          ppppuVar21 = (uint ****)0x0;
          do {
            lVar23 = ZEXT48(local_1d8[(int)ppppuVar21 + 1]) * 1000000000 + (ulonglong)uVar14;
            local_1d8[(int)ppppuVar21 + 1] = (uint ****)(int)lVar23;
            uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
            ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
          } while (ppppuVar21 != ppppuVar10);
          ppppuVar10 = local_1d8[0];
          ppppuVar20 = local_930;
          if (uVar14 != 0) {
            if (local_1d8[0] < (uint ****)0x73) {
              local_1d8[(int)local_1d8[0] + 1] = (uint ****)uVar14;
              local_1d8[0] = (uint ****)((int)local_1d8[0] + 1);
              ppppuVar10 = local_1d8[0];
            }
            else {
              local_918 = (uint ****)0x0;
              local_1d8[0] = (uint ****)0x0;
              _memcpy_s(local_1d8 + 1,0x1cc,local_914,0);
              ppppuVar10 = local_1d8[0];
              ppppuVar20 = local_930;
            }
          }
        }
        ppppuVar21 = local_924;
        if (ppppuVar17 != (uint ****)0x0) {
          ppppuVar16 = (uint ****)0x0;
          ppppuVar15 = (uint ****)0x0;
          if (ppppuVar10 != (uint ****)0x0) {
            do {
              puVar1 = (uint *)(local_1d8 + (int)ppppuVar16 + 1);
              uVar14 = *puVar1;
              *puVar1 = (uint)(*puVar1 + (int)ppppuVar17);
              ppppuVar17 = (uint ****)(uint)CARRY4(uVar14,(uint)ppppuVar17);
              ppppuVar16 = (uint ****)((int)ppppuVar16 + 1);
            } while (ppppuVar16 != local_1d8[0]);
            ppppuVar10 = local_1d8[0];
            ppppuVar15 = local_1d8[0];
            if (ppppuVar17 == (uint ****)0x0) goto LAB_102645ea;
          }
          if (ppppuVar15 < (uint ****)0x73) {
            local_1d8[(int)ppppuVar15 + 1] = ppppuVar17;
            local_1d8[0] = (uint ****)((int)local_1d8[0] + 1);
            ppppuVar10 = local_1d8[0];
          }
          else {
            local_918 = (uint ****)0x0;
            local_1d8[0] = (uint ****)0x0;
            _memcpy_s(local_1d8 + 1,0x1cc,local_914,0);
            ppppuVar10 = local_1d8[0];
          }
        }
LAB_102645ea:
        local_920 = (uint ****)0x0;
        ppppuVar15 = (uint ****)0x0;
      }
      local_920 = (uint ****)((int)local_920 * 10 + (uint)*(byte *)ppppuVar21);
      ppppuVar15 = (uint ****)((int)ppppuVar15 + 1);
      ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
    } while (ppppuVar21 != ppppuVar20);
    local_92c = ppppuVar15;
    local_924 = ppppuVar21;
    ppppuVar17 = ppppuVar10;
    if (ppppuVar15 != (uint ****)0x0) {
      ppppuVar21 = local_920;
      local_91c = ppppuVar10;
      for (local_934 = (uint ****)((uint)ppppuVar15 / 10); local_934 != (uint ****)0x0;
          local_934 = (uint ****)((int)local_934 - (int)local_93c)) {
        local_93c = local_934;
        if ((uint ****)0x26 < local_934) {
          local_93c = (uint ****)0x26;
        }
        bVar2 = (&DAT_10324a47)[(int)local_93c * 4];
        uVar14 = (uint)(byte)(&DAT_10324a46)[(int)local_93c * 4];
        local_918 = (uint ****)(uVar14 + bVar2);
        _memset(local_914,0,uVar14 * 4);
        FUN_1025b2d0(local_914 + uVar14,
                     &DAT_10324140 + (uint)*(ushort *)(&DAT_10324a44 + (int)local_93c * 4) * 4,
                     (uint)bVar2 << 2);
        ppppuVar10 = local_1d8[1];
        bVar22 = true;
        if (local_918 < (uint ****)0x2) {
          if (local_914[0] == (uint ***)0x0) {
LAB_102646bd:
            local_918 = (uint ****)0x0;
            local_1d8[0] = (uint ****)0x0;
            rVar25 = 0;
            pppuVar7 = (uint ***)local_914;
            goto LAB_102649ad;
          }
          if ((local_914[0] != (uint ***)0x1) && (local_91c != (uint ****)0x0)) {
            uVar14 = 0;
            ppppuVar10 = (uint ****)0x0;
            do {
              lVar23 = ZEXT48(local_914[0]) * ZEXT48(local_1d8[(int)ppppuVar10 + 1]) +
                       (ulonglong)uVar14;
              local_1d8[(int)ppppuVar10 + 1] = (uint ****)(int)lVar23;
              uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
              ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
            } while (ppppuVar10 != local_91c);
LAB_10264713:
            if (uVar14 != 0) {
              if ((uint ****)0x72 < local_1d8[0]) {
                local_918 = (uint ****)0x0;
                local_1d8[0] = (uint ****)0x0;
                _memcpy_s(local_1d8 + 1,0x1cc,local_914,0);
                bVar22 = false;
                local_91c = local_1d8[0];
                goto LAB_102649d3;
              }
              local_1d8[(int)local_1d8[0] + 1] = (uint ****)uVar14;
              local_1d8[0] = (uint ****)((int)local_1d8[0] + 1);
            }
            bVar22 = true;
            local_91c = local_1d8[0];
          }
        }
        else {
          if (local_91c < (uint ****)0x2) {
            local_928 = local_1d8[1];
            local_1d8[0] = local_918;
            _memcpy_s(local_1d8 + 1,0x1cc,local_914,(int)local_918 << 2);
            if (ppppuVar10 != (uint ****)0x0) {
              bVar22 = true;
              local_91c = local_1d8[0];
              if ((ppppuVar10 != (uint ****)0x1) && (local_1d8[0] != (uint ****)0x0)) {
                uVar14 = 0;
                ppppuVar10 = (uint ****)0x0;
                do {
                  lVar23 = ZEXT48(local_928) * ZEXT48(local_1d8[(int)ppppuVar10 + 1]) +
                           (ulonglong)uVar14;
                  local_1d8[(int)ppppuVar10 + 1] = (uint ****)(int)lVar23;
                  uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
                  ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
                  ppppuVar21 = local_920;
                } while (ppppuVar10 != local_1d8[0]);
                goto LAB_10264713;
              }
              goto LAB_102649d3;
            }
            goto LAB_102646bd;
          }
          local_928 = (uint ****)(local_1d8 + 1);
          local_950 = local_914;
          local_924 = local_918;
          local_948 = local_91c;
          if (local_918 < local_91c) {
            local_924 = local_91c;
            local_948 = local_918;
            local_950 = local_928;
            local_928 = local_914;
          }
          local_1d8[0] = (uint ****)0x0;
          ppppuVar10 = (uint ****)0x0;
          local_748 = (uint ****)0x0;
          if (local_948 != (uint ****)0x0) {
            do {
              if (local_928[(int)ppppuVar10] == (uint ***)0x0) {
                if (ppppuVar10 == local_1d8[0]) {
                  local_744[(int)ppppuVar10] = (uint ***)0x0;
                  local_1d8[0] = (uint ****)((int)ppppuVar10 + 1);
                  local_748 = local_1d8[0];
                }
              }
              else {
                local_91c = (uint ****)0x0;
                local_940 = (uint ****)0x0;
                ppppuVar20 = ppppuVar10;
                if (local_924 != (uint ****)0x0) {
                  do {
                    if (ppppuVar20 == (uint ****)0x73) break;
                    if (ppppuVar20 == local_1d8[0]) {
                      local_744[(int)ppppuVar20] = (uint ***)0x0;
                      local_748 = (uint ****)((byte *)((int)ppppuVar10 + 1) + (int)local_940);
                    }
                    pppuVar7 = local_950[(int)local_940];
                    pppuVar3 = local_928[(int)ppppuVar10];
                    uVar14 = (uint)(ZEXT48(pppuVar7) * ZEXT48(pppuVar3));
                    ppuVar11 = (uint **)local_744[(int)ppppuVar20];
                    uVar12 = uVar14 + (int)local_744[(int)ppppuVar20];
                    local_744[(int)ppppuVar20] = (uint ***)(uVar12 + (int)local_91c);
                    local_91c = (uint ****)
                                ((int)(ZEXT48(pppuVar7) * ZEXT48(pppuVar3) >> 0x20) +
                                 (uint)CARRY4(uVar14,(uint)ppuVar11) +
                                (uint)CARRY4(uVar12,(uint)local_91c));
                    local_940 = (uint ****)((int)local_940 + 1);
                    ppppuVar20 = (uint ****)((int)ppppuVar20 + 1);
                    local_1d8[0] = local_748;
                  } while (local_940 != local_924);
                  if (local_91c != (uint ****)0x0) {
                    ppppuVar17 = ppppuVar20;
                    local_940 = local_744 + (int)ppppuVar20;
                    do {
                      if (ppppuVar17 == (uint ****)0x73) goto LAB_10264aad;
                      ppppuVar20 = (uint ****)((int)ppppuVar17 + 1);
                      if (ppppuVar17 == local_1d8[0]) {
                        *local_940 = (uint ***)0x0;
                        local_748 = ppppuVar20;
                      }
                      pppuVar7 = *local_940;
                      ppppuVar15 = local_940 + 1;
                      *local_940 = (uint ***)((int)pppuVar7 + (int)local_91c);
                      local_91c = (uint ****)(uint)CARRY4((uint)pppuVar7,(uint)local_91c);
                      local_1d8[0] = local_748;
                      ppppuVar17 = ppppuVar20;
                      local_940 = ppppuVar15;
                    } while (local_91c != (uint ****)0x0);
                  }
                }
                if (ppppuVar20 == (uint ****)0x73) {
LAB_10264aad:
                  local_1d8[0] = (uint ****)0x0;
                  _memcpy_s(local_1d8 + 1,0x1cc,local_cf8,0);
                  goto LAB_10264ad7;
                }
              }
              ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
            } while (ppppuVar10 != local_948);
          }
          rVar25 = (int)local_1d8[0] << 2;
          pppuVar7 = (uint ***)local_744;
LAB_102649ad:
          _memcpy_s(local_1d8 + 1,0x1cc,pppuVar7,rVar25);
          bVar22 = true;
          local_91c = local_1d8[0];
        }
LAB_102649d3:
        if (!bVar22) {
LAB_10264ad7:
          local_b2c = 0;
          local_1d8[0] = (uint ****)0x0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_b28,0);
          ppppuVar10 = local_1d8[0];
          goto LAB_10264a4f;
        }
      }
      ppppuVar10 = local_91c;
      if ((uint)local_92c % 10 != 0) {
        uVar14 = *(uint *)(&DAT_10324adc + ((uint)local_92c % 10) * 2);
        if (uVar14 == 0) {
LAB_10264a15:
          local_b2c = 0;
          local_1d8[0] = (uint ****)0x0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_b28,0);
          ppppuVar21 = local_920;
          ppppuVar10 = local_1d8[0];
        }
        else {
          ppppuVar21 = local_920;
          if ((uVar14 != 1) && (local_91c != (uint ****)0x0)) {
            uVar12 = 0;
            ppppuVar10 = (uint ****)0x0;
            do {
              lVar23 = (ulonglong)uVar14 * ZEXT48(local_1d8[(int)ppppuVar10 + 1]) +
                       (ulonglong)uVar12;
              local_1d8[(int)ppppuVar10 + 1] = (uint ****)(int)lVar23;
              uVar12 = (uint)((ulonglong)lVar23 >> 0x20);
              ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
            } while (ppppuVar10 != local_91c);
            ppppuVar10 = local_1d8[0];
            if (uVar12 != 0) {
              if ((uint ****)0x72 < local_1d8[0]) goto LAB_10264a15;
              local_1d8[(int)local_1d8[0] + 1] = (uint ****)uVar12;
              local_1d8[0] = (uint ****)((int)local_1d8[0] + 1);
              ppppuVar10 = local_1d8[0];
            }
          }
        }
      }
LAB_10264a4f:
      local_91c = ppppuVar10;
      ppppuVar17 = local_91c;
      if (ppppuVar21 != (uint ****)0x0) {
        ppppuVar10 = (uint ****)0x0;
        if (local_91c != (uint ****)0x0) {
          do {
            puVar1 = (uint *)(local_1d8 + (int)ppppuVar10 + 1);
            uVar14 = *puVar1;
            *puVar1 = (uint)(*puVar1 + (int)ppppuVar21);
            ppppuVar21 = (uint ****)(uint)CARRY4(uVar14,(uint)ppppuVar21);
            local_91c = local_1d8[0];
            ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
          } while (ppppuVar10 != local_1d8[0]);
          ppppuVar17 = local_1d8[0];
          if (ppppuVar21 == (uint ****)0x0) goto LAB_10264bb9;
        }
        if (local_91c < (uint ****)0x73) {
          local_1d8[(int)local_91c + 1] = ppppuVar21;
          local_1d8[0] = (uint ****)((int)local_1d8[0] + 1);
          ppppuVar17 = local_1d8[0];
        }
        else {
          local_b2c = 0;
          local_1d8[0] = (uint ****)0x0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_b28,0);
          local_91c = local_1d8[0];
          ppppuVar17 = local_91c;
        }
      }
    }
  }
LAB_10264bb9:
  local_91c = ppppuVar17;
  if (local_944 != (uint ****)0x0) {
    ppppuVar21 = local_91c;
    for (local_920 = (uint ****)((uint)local_944 / 10); local_920 != (uint ****)0x0;
        local_920 = (uint ****)((int)local_920 - (int)local_924)) {
      local_924 = local_920;
      if ((uint ****)0x26 < local_920) {
        local_924 = (uint ****)0x26;
      }
      bVar2 = (&DAT_10324a47)[(int)local_924 * 4];
      uVar14 = (uint)(byte)(&DAT_10324a46)[(int)local_924 * 4];
      local_918 = (uint ****)(uVar14 + bVar2);
      _memset(local_914,0,uVar14 * 4);
      FUN_1025b2d0(local_914 + uVar14,
                   &DAT_10324140 + (uint)*(ushort *)(&DAT_10324a44 + (int)local_924 * 4) * 4,
                   (uint)bVar2 << 2);
      ppppuVar10 = local_1d8[1];
      if (local_918 < (uint ****)0x2) {
        if (local_914[0] == (uint ***)0x0) {
LAB_10264c61:
          local_b2c = 0;
          local_1d8[0] = (uint ****)0x0;
          rVar25 = 0;
          pppuVar7 = local_b28;
          goto LAB_10264efe;
        }
        if ((local_914[0] == (uint ***)0x1) || (uVar14 = 0, ppppuVar21 == (uint ****)0x0)) {
LAB_10264c81:
          bVar22 = true;
        }
        else {
          ppppuVar10 = (uint ****)0x0;
          do {
            lVar23 = ZEXT48(local_914[0]) * ZEXT48(local_1d8[(int)ppppuVar10 + 1]) +
                     (ulonglong)uVar14;
            local_1d8[(int)ppppuVar10 + 1] = (uint ****)(int)lVar23;
            uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
            ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
          } while (ppppuVar10 != ppppuVar21);
LAB_10264cad:
          if (uVar14 != 0) {
            if ((uint ****)0x72 < local_1d8[0]) {
              local_b2c = 0;
              local_1d8[0] = (uint ****)0x0;
              _memcpy_s(local_1d8 + 1,0x1cc,local_b28,0);
              bVar22 = false;
              ppppuVar21 = local_1d8[0];
              local_91c = local_1d8[0];
              goto LAB_10264f24;
            }
            local_1d8[(int)local_1d8[0] + 1] = (uint ****)uVar14;
            local_1d8[0] = (uint ****)((int)local_1d8[0] + 1);
          }
          bVar22 = true;
          ppppuVar21 = local_1d8[0];
          local_91c = local_1d8[0];
        }
      }
      else {
        if (ppppuVar21 < (uint ****)0x2) {
          local_1d8[0] = local_918;
          _memcpy_s(local_1d8 + 1,0x1cc,local_914,(int)local_918 << 2);
          if (ppppuVar10 != (uint ****)0x0) {
            local_91c = local_1d8[0];
            ppppuVar21 = local_1d8[0];
            if ((ppppuVar10 == (uint ****)0x1) || (uVar14 = 0, local_1d8[0] == (uint ****)0x0))
            goto LAB_10264c81;
            ppppuVar21 = (uint ****)0x0;
            do {
              lVar23 = ZEXT48(ppppuVar10) * ZEXT48(local_1d8[(int)ppppuVar21 + 1]) +
                       (ulonglong)uVar14;
              local_1d8[(int)ppppuVar21 + 1] = (uint ****)(int)lVar23;
              uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
              ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
            } while (ppppuVar21 != local_1d8[0]);
            goto LAB_10264cad;
          }
          goto LAB_10264c61;
        }
        local_940 = (uint ****)(local_1d8 + 1);
        local_92c = local_914;
        local_93c = local_918;
        local_948 = ppppuVar21;
        if (local_918 < ppppuVar21) {
          local_93c = ppppuVar21;
          local_948 = local_918;
          local_92c = local_940;
          local_940 = local_914;
        }
        local_1d8[0] = (uint ****)0x0;
        ppppuVar21 = (uint ****)0x0;
        local_748 = (uint ****)0x0;
        if (local_948 != (uint ****)0x0) {
          do {
            if (local_940[(int)ppppuVar21] == (uint ***)0x0) {
              if (ppppuVar21 == local_1d8[0]) {
                local_744[(int)ppppuVar21] = (uint ***)0x0;
                local_1d8[0] = (uint ****)((int)ppppuVar21 + 1);
                local_748 = local_1d8[0];
              }
            }
            else {
              local_928 = (uint ****)0x0;
              local_934 = (uint ****)0x0;
              ppppuVar10 = ppppuVar21;
              if (local_93c != (uint ****)0x0) {
                do {
                  if (ppppuVar10 == (uint ****)0x73) break;
                  if (ppppuVar10 == local_1d8[0]) {
                    local_744[(int)ppppuVar10] = (uint ***)0x0;
                    local_748 = (uint ****)((byte *)((int)ppppuVar21 + 1) + (int)local_934);
                  }
                  pppuVar3 = local_92c[(int)local_934];
                  pppuVar4 = local_940[(int)ppppuVar21];
                  uVar14 = (uint)(ZEXT48(pppuVar3) * ZEXT48(pppuVar4));
                  pbVar8 = (byte *)(uVar14 + (int)local_928);
                  pppuVar7 = (uint ***)(local_744 + (int)ppppuVar10);
                  ppuVar11 = *pppuVar7;
                  *pppuVar7 = (uint **)(pbVar8 + (int)*pppuVar7);
                  local_928 = (uint ****)
                              ((int)(ZEXT48(pppuVar3) * ZEXT48(pppuVar4) >> 0x20) +
                               (uint)CARRY4(uVar14,(uint)local_928) +
                              (uint)CARRY4((uint)ppuVar11,(uint)pbVar8));
                  local_934 = (uint ****)((int)local_934 + 1);
                  ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
                  local_1d8[0] = local_748;
                } while (local_934 != local_93c);
                if (local_928 != (uint ****)0x0) {
                  pppuVar7 = (uint ***)(local_744 + (int)ppppuVar10);
                  ppppuVar20 = local_928;
                  ppppuVar17 = ppppuVar10;
                  do {
                    if (ppppuVar17 == (uint ****)0x73) goto LAB_10264f42;
                    ppppuVar10 = (uint ****)((int)ppppuVar17 + 1);
                    if (ppppuVar17 == local_1d8[0]) {
                      *pppuVar7 = (uint **)0x0;
                      local_748 = ppppuVar10;
                    }
                    ppuVar11 = *pppuVar7;
                    *pppuVar7 = (uint **)((int)*pppuVar7 + (int)ppppuVar20);
                    ppppuVar20 = (uint ****)(uint)CARRY4((uint)ppuVar11,(uint)ppppuVar20);
                    local_1d8[0] = local_748;
                    pppuVar7 = pppuVar7 + 1;
                    ppppuVar17 = ppppuVar10;
                  } while (ppppuVar20 != (uint ****)0x0);
                }
              }
              if (ppppuVar10 == (uint ****)0x73) {
LAB_10264f42:
                local_1d8[0] = (uint ****)0x0;
                _memcpy_s(local_1d8 + 1,0x1cc,local_cf8,0);
                goto LAB_1026504a;
              }
            }
            ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
          } while (ppppuVar21 != local_948);
        }
        rVar25 = (int)local_1d8[0] << 2;
        pppuVar7 = (uint ***)local_744;
LAB_10264efe:
        _memcpy_s(local_1d8 + 1,0x1cc,pppuVar7,rVar25);
        bVar22 = true;
        ppppuVar21 = local_1d8[0];
        local_91c = local_1d8[0];
      }
LAB_10264f24:
      if (!bVar22) goto LAB_1026504a;
    }
    if ((uint)local_944 % 10 != 0) {
      uVar14 = *(uint *)(&DAT_10324adc + ((uint)local_944 % 10) * 2);
      if (uVar14 == 0) {
        local_b2c = 0;
        local_1d8[0] = (uint ****)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_b28,0);
LAB_10264fcf:
        local_91c = local_1d8[0];
      }
      else if ((uVar14 != 1) && (ppppuVar21 != (uint ****)0x0)) {
        uVar12 = 0;
        ppppuVar10 = (uint ****)0x0;
        do {
          lVar23 = (ulonglong)uVar14 * ZEXT48(local_1d8[(int)ppppuVar10 + 1]) + (ulonglong)uVar12;
          local_1d8[(int)ppppuVar10 + 1] = (uint ****)(int)lVar23;
          uVar12 = (uint)((ulonglong)lVar23 >> 0x20);
          ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
        } while (ppppuVar10 != ppppuVar21);
        if (uVar12 == 0) goto LAB_10264fcf;
        if ((uint ****)0x72 < local_1d8[0]) {
LAB_1026504a:
          local_1d8[0] = (uint ****)0x0;
          local_b2c = 0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_b28,0);
          __crt_strtox::assemble_floating_point_infinity(SUB41(local_954[0xc2],0),local_95c);
          goto LAB_1026612c;
        }
        local_1d8[(int)local_1d8[0] + 1] = (uint ****)uVar12;
        local_91c = (uint ****)((int)local_1d8[0] + 1);
        local_1d8[0] = local_91c;
      }
    }
  }
  local_940 = (uint ****)0x0;
  if (local_91c != (uint ****)0x0) {
    pppuVar7 = (uint ***)local_1d8[(int)local_91c];
    local_92c = (uint ****)0x0;
    iVar6 = 0x1f;
    if (pppuVar7 != (uint ***)0x0) {
      for (; (uint)pppuVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (pppuVar7 == (uint ***)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    local_940 = (uint ****)((int)((int)local_91c + -1) * 0x20 + iVar6);
  }
  if ((local_958 <= local_940) || (local_94c == 0)) {
    bVar22 = local_94c != 0;
LAB_10266107:
    FUN_1026429f(local_1d8,local_940,(char)local_954[0xc2],bVar22,local_95c);
    goto LAB_1026612c;
  }
  ppppuVar21 = (uint ****)0x0;
  local_3a8 = (uint ****)0x0;
  ppppuVar10 = (uint ****)0x0;
  local_924 = (uint ****)0x0;
  if (local_930 != local_938) {
    do {
      ppppuVar20 = local_924;
      ppppuVar17 = local_930;
      if (ppppuVar10 == (uint ****)0x9) {
        if (ppppuVar21 != (uint ****)0x0) {
          ppuVar11 = (uint **)0x0;
          ppppuVar10 = (uint ****)0x0;
          do {
            lVar23 = ZEXT48(local_3a4[(int)ppppuVar10]) * 1000000000 + ZEXT48(ppuVar11);
            local_3a4[(int)ppppuVar10] = (uint ***)(uint **)lVar23;
            ppuVar11 = (uint **)((ulonglong)lVar23 >> 0x20);
            ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
          } while (ppppuVar10 != ppppuVar21);
          ppppuVar21 = local_3a8;
          if (ppuVar11 != (uint **)0x0) {
            if (local_3a8 < (uint ****)0x73) {
              local_3a4[(int)local_3a8] = (uint ***)ppuVar11;
              local_3a8 = (uint ****)((int)local_3a8 + 1);
              ppppuVar21 = local_3a8;
            }
            else {
              local_b2c = 0;
              local_3a8 = (uint ****)0x0;
              _memcpy_s(local_3a4,0x1cc,local_b28,0);
              ppppuVar21 = local_3a8;
            }
          }
        }
        ppppuVar17 = local_930;
        if (ppppuVar20 != (uint ****)0x0) {
          ppppuVar15 = (uint ****)0x0;
          ppppuVar10 = (uint ****)0x0;
          if (ppppuVar21 != (uint ****)0x0) {
            do {
              pppuVar7 = (uint ***)(local_3a4 + (int)ppppuVar15);
              ppuVar11 = *pppuVar7;
              *pppuVar7 = (uint **)((int)*pppuVar7 + (int)ppppuVar20);
              ppppuVar20 = (uint ****)(uint)CARRY4((uint)ppuVar11,(uint)ppppuVar20);
              ppppuVar15 = (uint ****)((int)ppppuVar15 + 1);
            } while (ppppuVar15 != local_3a8);
            ppppuVar21 = local_3a8;
            ppppuVar10 = local_3a8;
            if (ppppuVar20 == (uint ****)0x0) goto LAB_102651ff;
          }
          if (ppppuVar10 < (uint ****)0x73) {
            local_3a4[(int)ppppuVar10] = (uint ***)ppppuVar20;
            local_3a8 = (uint ****)((int)local_3a8 + 1);
            ppppuVar21 = local_3a8;
          }
          else {
            local_b2c = 0;
            local_3a8 = (uint ****)0x0;
            _memcpy_s(local_3a4,0x1cc,local_b28,0);
            ppppuVar21 = local_3a8;
          }
        }
LAB_102651ff:
        local_924 = (uint ****)0x0;
        ppppuVar10 = (uint ****)0x0;
      }
      local_924 = (uint ****)((int)local_924 * 10 + (uint)*(byte *)ppppuVar17);
      ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
      local_930 = (uint ****)((int)ppppuVar17 + 1);
    } while (local_930 != local_938);
    local_930 = ppppuVar10;
    if (ppppuVar10 != (uint ****)0x0) {
      for (local_93c = (uint ****)((uint)ppppuVar10 / 10); local_93c != (uint ****)0x0;
          local_93c = (uint ****)((int)local_93c - (int)local_934)) {
        local_934 = local_93c;
        if ((uint ****)0x26 < local_93c) {
          local_934 = (uint ****)0x26;
        }
        bVar2 = (&DAT_10324a47)[(int)local_934 * 4];
        uVar14 = (uint)(byte)(&DAT_10324a46)[(int)local_934 * 4];
        local_918 = (uint ****)(uVar14 + bVar2);
        _memset(local_914,0,uVar14 * 4);
        FUN_1025b2d0(local_914 + uVar14,
                     &DAT_10324140 + (uint)*(ushort *)(&DAT_10324a44 + (int)local_934 * 4) * 4,
                     (uint)bVar2 << 2);
        pppuVar7 = local_3a4[0];
        if (local_918 < (uint ****)0x2) {
          if (local_914[0] == (uint ***)0x0) {
LAB_102652cf:
            local_b2c = 0;
            local_3a8 = (uint ****)0x0;
            rVar25 = 0;
            pppuVar7 = local_b28;
            goto LAB_1026555c;
          }
          if ((local_914[0] == (uint ***)0x1) || (ppppuVar21 == (uint ****)0x0)) {
LAB_102652ed:
            bVar22 = true;
          }
          else {
            uVar14 = 0;
            ppppuVar10 = (uint ****)0x0;
            do {
              lVar23 = ZEXT48(local_914[0]) * ZEXT48(local_3a4[(int)ppppuVar10]) + (ulonglong)uVar14
              ;
              local_3a4[(int)ppppuVar10] = (uint ***)(uint **)lVar23;
              uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
              ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
            } while (ppppuVar10 != ppppuVar21);
LAB_10265318:
            ppuVar11 = (uint **)((ulonglong)lVar23 >> 0x20);
            if (ppuVar11 != (uint **)0x0) {
              if ((uint ****)0x72 < local_3a8) {
                local_b2c = 0;
                local_3a8 = (uint ****)0x0;
                _memcpy_s(local_3a4,0x1cc,local_b28,0);
                bVar22 = false;
                ppppuVar21 = local_3a8;
                goto LAB_1026557a;
              }
              local_3a4[(int)local_3a8] = (uint ***)ppuVar11;
              local_3a8 = (uint ****)((int)local_3a8 + 1);
            }
            bVar22 = true;
            ppppuVar21 = local_3a8;
          }
        }
        else {
          if (ppppuVar21 < (uint ****)0x2) {
            local_3a8 = local_918;
            _memcpy_s(local_3a4,0x1cc,local_914,(int)local_918 << 2);
            if (pppuVar7 != (uint ***)0x0) {
              ppppuVar21 = local_3a8;
              if ((pppuVar7 == (uint ***)0x1) || (local_3a8 == (uint ****)0x0)) goto LAB_102652ed;
              uVar14 = 0;
              ppppuVar21 = (uint ****)0x0;
              do {
                uVar5 = (ulonglong)uVar14;
                ppuVar11 = (uint **)local_3a4[(int)ppppuVar21];
                lVar23 = ZEXT48(pppuVar7) * ZEXT48(ppuVar11) + (ulonglong)uVar14;
                local_3a4[(int)ppppuVar21] = (uint ***)(uint **)lVar23;
                uVar14 = (uint)((ulonglong)lVar23 >> 0x20);
                lVar23 = ZEXT48(pppuVar7) * ZEXT48(ppuVar11) + uVar5;
                ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
              } while (ppppuVar21 != local_3a8);
              goto LAB_10265318;
            }
            goto LAB_102652cf;
          }
          local_944 = local_3a4;
          local_92c = local_914;
          local_948 = local_918;
          local_950 = ppppuVar21;
          if (local_918 < ppppuVar21) {
            local_948 = ppppuVar21;
            local_950 = local_918;
            local_92c = local_944;
            local_944 = local_914;
          }
          local_3a8 = (uint ****)0x0;
          ppppuVar21 = (uint ****)0x0;
          local_748 = (uint ****)0x0;
          if (local_950 != (uint ****)0x0) {
            do {
              if (local_944[(int)ppppuVar21] == (uint ***)0x0) {
                if (ppppuVar21 == local_3a8) {
                  local_744[(int)ppppuVar21] = (uint ***)0x0;
                  local_3a8 = (uint ****)((int)ppppuVar21 + 1);
                  local_748 = local_3a8;
                }
              }
              else {
                local_928 = (uint ****)0x0;
                local_938 = (uint ****)0x0;
                ppppuVar10 = ppppuVar21;
                if (local_948 != (uint ****)0x0) {
                  do {
                    if (ppppuVar10 == (uint ****)0x73) break;
                    if (ppppuVar10 == local_3a8) {
                      local_744[(int)ppppuVar10] = (uint ***)0x0;
                      local_748 = (uint ****)((byte *)((int)ppppuVar21 + 1) + (int)local_938);
                    }
                    pppuVar3 = local_92c[(int)local_938];
                    pppuVar4 = local_944[(int)ppppuVar21];
                    uVar14 = (uint)(ZEXT48(pppuVar3) * ZEXT48(pppuVar4));
                    pbVar8 = (byte *)(uVar14 + (int)local_928);
                    pppuVar7 = (uint ***)(local_744 + (int)ppppuVar10);
                    ppuVar11 = *pppuVar7;
                    *pppuVar7 = (uint **)(pbVar8 + (int)*pppuVar7);
                    local_928 = (uint ****)
                                ((int)(ZEXT48(pppuVar3) * ZEXT48(pppuVar4) >> 0x20) +
                                 (uint)CARRY4(uVar14,(uint)local_928) +
                                (uint)CARRY4((uint)ppuVar11,(uint)pbVar8));
                    local_938 = (uint ****)((int)local_938 + 1);
                    ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
                    local_3a8 = local_748;
                  } while (local_938 != local_948);
                  if (local_928 != (uint ****)0x0) {
                    pppuVar7 = (uint ***)(local_744 + (int)ppppuVar10);
                    ppppuVar20 = local_928;
                    ppppuVar17 = ppppuVar10;
                    do {
                      if (ppppuVar17 == (uint ****)0x73) goto LAB_1026561c;
                      ppppuVar10 = (uint ****)((int)ppppuVar17 + 1);
                      if (ppppuVar17 == local_3a8) {
                        *pppuVar7 = (uint **)0x0;
                        local_748 = ppppuVar10;
                      }
                      ppuVar11 = *pppuVar7;
                      *pppuVar7 = (uint **)((int)*pppuVar7 + (int)ppppuVar20);
                      ppppuVar20 = (uint ****)(uint)CARRY4((uint)ppuVar11,(uint)ppppuVar20);
                      local_3a8 = local_748;
                      pppuVar7 = pppuVar7 + 1;
                      ppppuVar17 = ppppuVar10;
                    } while (ppppuVar20 != (uint ****)0x0);
                  }
                }
                if (ppppuVar10 == (uint ****)0x73) {
LAB_1026561c:
                  local_3a8 = (uint ****)0x0;
                  _memcpy_s(local_3a4,0x1cc,local_cf8,0);
                  goto LAB_10265668;
                }
              }
              ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
            } while (ppppuVar21 != local_950);
          }
          rVar25 = (int)local_3a8 << 2;
          pppuVar7 = (uint ***)local_744;
LAB_1026555c:
          _memcpy_s(local_3a4,0x1cc,pppuVar7,rVar25);
          bVar22 = true;
          ppppuVar21 = local_3a8;
        }
LAB_1026557a:
        if (!bVar22) goto LAB_10265668;
      }
      if ((uint)local_930 % 10 != 0) {
        uVar14 = *(uint *)(&DAT_10324adc + ((uint)local_930 % 10) * 2);
        if (uVar14 == 0) {
LAB_10265668:
          local_3a8 = (uint ****)0x0;
          local_b2c = 0;
          _memcpy_s(local_3a4,0x1cc,local_b28,0);
          ppppuVar21 = local_3a8;
        }
        else if ((uVar14 != 1) && (ppppuVar21 != (uint ****)0x0)) {
          ppuVar11 = (uint **)0x0;
          ppppuVar10 = (uint ****)0x0;
          do {
            lVar23 = (ulonglong)uVar14 * ZEXT48(local_3a4[(int)ppppuVar10]) + ZEXT48(ppuVar11);
            local_3a4[(int)ppppuVar10] = (uint ***)(uint **)lVar23;
            ppuVar11 = (uint **)((ulonglong)lVar23 >> 0x20);
            ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
          } while (ppppuVar10 != ppppuVar21);
          ppppuVar21 = local_3a8;
          if (ppuVar11 != (uint **)0x0) {
            if ((uint ****)0x72 < local_3a8) goto LAB_10265668;
            local_3a4[(int)local_3a8] = (uint ***)ppuVar11;
            local_3a8 = (uint ****)((int)local_3a8 + 1);
            ppppuVar21 = local_3a8;
          }
        }
      }
      if (local_924 != (uint ****)0x0) {
        ppppuVar17 = (uint ****)0x0;
        ppppuVar10 = local_924;
        ppppuVar20 = (uint ****)0x0;
        if (ppppuVar21 != (uint ****)0x0) {
          do {
            pppuVar7 = (uint ***)(local_3a4 + (int)ppppuVar17);
            ppuVar11 = *pppuVar7;
            *pppuVar7 = (uint **)((int)*pppuVar7 + (int)ppppuVar10);
            ppppuVar10 = (uint ****)(uint)CARRY4((uint)ppuVar11,(uint)ppppuVar10);
            ppppuVar17 = (uint ****)((int)ppppuVar17 + 1);
          } while (ppppuVar17 != local_3a8);
          ppppuVar20 = local_3a8;
          ppppuVar21 = local_3a8;
          if (ppppuVar10 == (uint ****)0x0) goto LAB_10265709;
        }
        if (ppppuVar20 < (uint ****)0x73) {
          local_3a4[(int)ppppuVar20] = (uint ***)ppppuVar10;
          local_3a8 = (uint ****)((int)local_3a8 + 1);
          ppppuVar21 = local_3a8;
        }
        else {
          local_b2c = 0;
          local_3a8 = (uint ****)0x0;
          _memcpy_s(local_3a4,0x1cc,local_b28,0);
          ppppuVar21 = local_3a8;
        }
      }
    }
  }
LAB_10265709:
  if ((int)*local_954 < 0) {
    local_94c = local_94c - *local_954;
  }
  local_574[1] = (uint ***)0x0;
  ppppuVar10 = (uint ****)0x1;
  local_574[0] = (uint ***)0x1;
  local_920 = (uint ****)0x1;
  local_578 = (uint ****)0x1;
  for (local_93c = (uint ****)(local_94c / 10); local_93c != (uint ****)0x0;
      local_93c = (uint ****)((int)local_93c - (int)local_934)) {
    local_934 = local_93c;
    if ((uint ****)0x26 < local_93c) {
      local_934 = (uint ****)0x26;
    }
    bVar2 = (&DAT_10324a47)[(int)local_934 * 4];
    uVar14 = (uint)(byte)(&DAT_10324a46)[(int)local_934 * 4];
    local_918 = (uint ****)(uVar14 + bVar2);
    _memset(local_914,0,uVar14 * 4);
    FUN_1025b2d0(local_914 + uVar14,
                 &DAT_10324140 + (uint)*(ushort *)(&DAT_10324a44 + (int)local_934 * 4) * 4,
                 (uint)bVar2 << 2);
    pppuVar7 = local_574[0];
    if (local_918 < (uint ****)0x2) {
      if (local_914[0] == (uint ***)0x0) {
        local_b2c = 0;
        local_578 = (uint ****)0x0;
        rVar25 = 0;
        pppuVar7 = local_b28;
        goto LAB_10265a97;
      }
      ppppuVar21 = local_920;
      if ((local_914[0] == (uint ***)0x1) || (ppppuVar10 == (uint ****)0x0)) goto LAB_10265ab5;
      ppuVar11 = (uint **)0x0;
      ppppuVar21 = (uint ****)0x0;
      do {
        lVar23 = ZEXT48(local_914[0]) * ZEXT48(local_574[(int)ppppuVar21]) + ZEXT48(ppuVar11);
        local_574[(int)ppppuVar21] = (uint ***)(uint **)lVar23;
        ppuVar11 = (uint **)((ulonglong)lVar23 >> 0x20);
        ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
      } while (ppppuVar21 != ppppuVar10);
LAB_10265823:
      ppppuVar10 = local_578;
      ppppuVar21 = local_578;
      if (ppuVar11 == (uint **)0x0) goto LAB_10265ab5;
      if (local_578 < (uint ****)0x73) {
        local_574[(int)local_578] = (uint ***)ppuVar11;
        local_578 = (uint ****)((int)local_578 + 1);
        ppppuVar10 = local_578;
        ppppuVar21 = local_578;
        goto LAB_10265ab5;
      }
      local_b2c = 0;
      local_578 = (uint ****)0x0;
      _memcpy_s(local_574,0x1cc,local_b28,0);
      bVar22 = false;
      local_920 = local_578;
      ppppuVar10 = local_578;
    }
    else {
      if (ppppuVar10 < (uint ****)0x2) {
        local_578 = local_918;
        _memcpy_s(local_574,0x1cc,local_914,(int)local_918 << 2);
        if (pppuVar7 != (uint ***)0x0) {
          local_920 = local_578;
          ppppuVar10 = local_578;
          ppppuVar21 = local_920;
          if ((pppuVar7 != (uint ***)0x1) && (local_578 != (uint ****)0x0)) {
            ppuVar11 = (uint **)0x0;
            ppppuVar21 = (uint ****)0x0;
            do {
              lVar23 = ZEXT48(pppuVar7) * ZEXT48(local_574[(int)ppppuVar21]) + ZEXT48(ppuVar11);
              local_574[(int)ppppuVar21] = (uint ***)(uint **)lVar23;
              ppuVar11 = (uint **)((ulonglong)lVar23 >> 0x20);
              ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
            } while (ppppuVar21 != local_578);
            goto LAB_10265823;
          }
          goto LAB_10265ab5;
        }
        rVar25 = 0;
        local_b2c = 0;
        local_578 = (uint ****)0x0;
        pppuVar7 = local_b28;
      }
      else {
        local_944 = local_574;
        local_92c = local_914;
        local_948 = local_918;
        local_950 = ppppuVar10;
        if (local_918 < ppppuVar10) {
          local_948 = ppppuVar10;
          local_950 = local_918;
          local_92c = local_944;
          local_944 = local_914;
        }
        local_578 = (uint ****)0x0;
        ppppuVar21 = (uint ****)0x0;
        local_748 = (uint ****)0x0;
        if (local_950 != (uint ****)0x0) {
          do {
            if (local_944[(int)ppppuVar21] == (uint ***)0x0) {
              if (ppppuVar21 == local_578) {
                local_744[(int)ppppuVar21] = (uint ***)0x0;
                local_578 = (uint ****)((int)ppppuVar21 + 1);
                local_748 = local_578;
              }
            }
            else {
              local_924 = (uint ****)0x0;
              local_938 = (uint ****)0x0;
              ppppuVar10 = ppppuVar21;
              if (local_948 != (uint ****)0x0) {
                do {
                  if (ppppuVar10 == (uint ****)0x73) break;
                  if (ppppuVar10 == local_578) {
                    local_744[(int)ppppuVar10] = (uint ***)0x0;
                    local_748 = (uint ****)((byte *)((int)local_924 + 1) + (int)ppppuVar21);
                  }
                  pppuVar3 = local_92c[(int)local_924];
                  pppuVar4 = local_944[(int)ppppuVar21];
                  uVar14 = (uint)(ZEXT48(pppuVar3) * ZEXT48(pppuVar4));
                  pbVar8 = (byte *)(uVar14 + (int)local_938);
                  pppuVar7 = (uint ***)(local_744 + (int)ppppuVar10);
                  ppuVar11 = *pppuVar7;
                  *pppuVar7 = (uint **)(pbVar8 + (int)*pppuVar7);
                  local_938 = (uint ****)
                              ((int)(ZEXT48(pppuVar3) * ZEXT48(pppuVar4) >> 0x20) +
                               (uint)CARRY4(uVar14,(uint)local_938) +
                              (uint)CARRY4((uint)ppuVar11,(uint)pbVar8));
                  local_924 = (uint ****)((int)local_924 + 1);
                  ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
                  local_578 = local_748;
                } while (local_924 != local_948);
                if (local_938 != (uint ****)0x0) {
                  ppppuVar20 = local_938;
                  pppuVar7 = (uint ***)(local_744 + (int)ppppuVar10);
                  ppppuVar17 = ppppuVar10;
                  do {
                    if (ppppuVar17 == (uint ****)0x73) goto LAB_10265b52;
                    ppppuVar10 = (uint ****)((int)ppppuVar17 + 1);
                    if (ppppuVar17 == local_578) {
                      *pppuVar7 = (uint **)0x0;
                      local_748 = ppppuVar10;
                    }
                    ppuVar11 = *pppuVar7;
                    *pppuVar7 = (uint **)((int)*pppuVar7 + (int)ppppuVar20);
                    ppppuVar20 = (uint ****)(uint)CARRY4((uint)ppuVar11,(uint)ppppuVar20);
                    local_578 = local_748;
                    pppuVar7 = pppuVar7 + 1;
                    ppppuVar17 = ppppuVar10;
                  } while (ppppuVar20 != (uint ****)0x0);
                }
              }
              if (ppppuVar10 == (uint ****)0x73) {
LAB_10265b52:
                local_578 = (uint ****)0x0;
                _memcpy_s(local_574,0x1cc,local_cf8,0);
                goto LAB_10265bf6;
              }
            }
            ppppuVar21 = (uint ****)((int)ppppuVar21 + 1);
          } while (ppppuVar21 != local_950);
        }
        rVar25 = (int)local_578 << 2;
        pppuVar7 = (uint ***)local_744;
      }
LAB_10265a97:
      _memcpy_s(local_574,0x1cc,pppuVar7,rVar25);
      ppppuVar10 = local_578;
      ppppuVar21 = local_578;
LAB_10265ab5:
      local_920 = ppppuVar21;
      bVar22 = true;
    }
    if (!bVar22) goto LAB_10265bf6;
    ppppuVar21 = local_3a8;
  }
  ppppuVar10 = local_920;
  if (local_94c % 10 != 0) {
    local_92c = *(uint *****)(&DAT_10324adc + (local_94c % 10) * 2);
    if (local_92c == (uint ****)0x0) {
      local_b2c = 0;
      local_578 = (uint ****)0x0;
      _memcpy_s(local_574,0x1cc,local_b28,0);
      ppppuVar21 = local_3a8;
      ppppuVar10 = local_578;
    }
    else if ((local_92c != (uint ****)0x1) && (local_920 != (uint ****)0x0)) {
      ppuVar11 = (uint **)0x0;
      ppppuVar10 = (uint ****)0x0;
      do {
        lVar23 = ZEXT48(local_92c) * ZEXT48(local_574[(int)ppppuVar10]) + ZEXT48(ppuVar11);
        local_574[(int)ppppuVar10] = (uint ***)(uint **)lVar23;
        ppuVar11 = (uint **)((ulonglong)lVar23 >> 0x20);
        ppppuVar10 = (uint ****)((int)ppppuVar10 + 1);
      } while (ppppuVar10 != local_920);
      ppppuVar10 = local_578;
      if (ppuVar11 != (uint **)0x0) {
        if ((uint ****)0x72 < local_578) {
LAB_10265bf6:
          local_578 = (uint ****)0x0;
          local_b2c = 0;
          _memcpy_s(local_574,0x1cc,local_b28,0);
          __crt_strtox::assemble_floating_point_zero(SUB41(local_954[0xc2],0),local_95c);
          goto LAB_1026612c;
        }
        local_574[(int)local_578] = (uint ***)ppuVar11;
        local_578 = (uint ****)((int)local_578 + 1);
        ppppuVar10 = local_578;
      }
    }
  }
  local_920 = ppppuVar10;
  if (ppppuVar21 == (uint ****)0x0) {
    uVar14 = 0;
  }
  else {
    ppuVar11 = (uint **)local_3a4[(int)((int)ppppuVar21 + -1)];
    local_92c = (uint ****)0x0;
    iVar6 = 0x1f;
    if (ppuVar11 != (uint **)0x0) {
      for (; (uint)ppuVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (ppuVar11 == (uint **)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    uVar14 = (int)((int)ppppuVar21 + -1) * 0x20 + iVar6;
  }
  if (local_920 == (uint ****)0x0) {
    uVar12 = 0;
  }
  else {
    ppuVar11 = (uint **)local_574[(int)((int)local_920 + -1)];
    local_92c = (uint ****)0x0;
    iVar6 = 0x1f;
    if (ppuVar11 != (uint **)0x0) {
      for (; (uint)ppuVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (ppuVar11 == (uint **)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    uVar12 = (int)((int)local_920 + -1) * 0x20 + iVar6;
  }
  local_930 = (uint ****)(-(uint)(uVar14 < uVar12) & uVar12 - uVar14);
  ppppuVar10 = local_920;
  if (local_930 != (uint ****)0x0) {
    local_944 = (uint ****)((uint)local_930 & 0x1f);
    local_924 = (uint ****)((uint)local_930 >> 5);
    local_950 = (uint ****)(0x20 - (int)local_944);
    uVar14 = 1 << ((uint)local_950 & 0x1f);
    uVar12 = 0;
    if ((uint ****)0x1f < local_950) {
      uVar12 = uVar14;
    }
    ppuVar11 = (uint **)local_3a4[(int)((int)ppppuVar21 + -1)];
    local_92c = (uint ****)((uVar14 ^ uVar12) - 1);
    local_948 = (uint ****)~(uint)local_92c;
    iVar6 = 0x1f;
    if (ppuVar11 != (uint **)0x0) {
      for (; (uint)ppuVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_938 = (uint ****)0x0;
    if (ppuVar11 == (uint **)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    if (((byte *)((int)local_924 + (int)ppppuVar21) < (byte *)0x74) &&
       (local_928 = (uint ****)
                    ((byte *)((uint)((uint ****)(0x20 - iVar6) < local_944) + (int)local_924) +
                    (int)ppppuVar21), local_928 < (uint ****)0x74)) {
      local_93c = (uint ****)((int)local_924 + -1);
      local_934 = (uint ****)((int)local_928 + -1);
      if (local_934 != local_93c) {
        ppppuVar20 = (uint ****)((int)local_934 - (int)local_924);
        pppuVar7 = (uint ***)(local_3a4 + (int)((int)ppppuVar20 + -1));
        do {
          if (ppppuVar20 < ppppuVar21) {
            local_938 = (uint ****)pppuVar7[1];
          }
          else {
            local_938 = (uint ****)0x0;
          }
          if ((uint ****)((int)ppppuVar20 + -1) < ppppuVar21) {
            ppuVar11 = *pppuVar7;
          }
          else {
            ppuVar11 = (uint **)0x0;
          }
          pppuVar7 = pppuVar7 + -1;
          local_3a4[(int)local_934] =
               (uint ***)
               (((uint)ppuVar11 & (uint)local_948) >> ((byte)local_950 & 0x1f) |
               ((uint)local_938 & (uint)local_92c) << (sbyte)local_944);
          local_934 = (uint ****)((int)local_934 + -1);
          ppppuVar20 = (uint ****)((int)ppppuVar20 + -1);
          ppppuVar21 = local_3a8;
        } while (local_934 != local_93c);
      }
      if (local_924 != (uint ****)0x0) {
        pppuVar7 = (uint ***)local_3a4;
        for (ppppuVar21 = local_924; ppppuVar21 != (uint ****)0x0;
            ppppuVar21 = (uint ****)((int)ppppuVar21 + -1)) {
          *pppuVar7 = (uint **)0x0;
          pppuVar7 = pppuVar7 + 1;
        }
      }
      local_3a8 = local_928;
      ppppuVar21 = local_3a8;
    }
    else {
      local_3a8 = (uint ****)0x0;
      local_b2c = 0;
      _memcpy_s(local_3a4,0x1cc,local_b28,0);
      ppppuVar21 = local_3a8;
      ppppuVar10 = local_578;
    }
  }
  local_958 = (uint ****)((int)local_958 - (int)local_940);
  ppppuVar20 = local_958;
  if (local_940 != (uint ****)0x0) {
    if (local_958 < local_930) {
      bVar22 = true;
      goto LAB_10266107;
    }
    ppppuVar20 = (uint ****)((int)local_958 - (int)local_930);
  }
  if (ppppuVar10 < ppppuVar21) {
LAB_10265e70:
    cVar9 = '\0';
  }
  else {
    ppppuVar17 = ppppuVar21;
    if (ppppuVar21 < ppppuVar10) {
      cVar9 = '\x01';
    }
    else {
      do {
        ppppuVar17 = (uint ****)((int)ppppuVar17 + -1);
        if (ppppuVar17 == (uint ****)0xffffffff) goto LAB_10265e70;
      } while (local_574[(int)ppppuVar17] == local_3a4[(int)ppppuVar17]);
      cVar9 = '\x01' - (local_574[(int)ppppuVar17] < local_3a4[(int)ppppuVar17]);
    }
  }
  if (cVar9 != '\0') {
    local_930 = (uint ****)((int)local_930 + 1);
  }
  local_924 = (uint ****)((uint)ppppuVar20 >> 5);
  local_934 = (uint ****)((uint)ppppuVar20 & 0x1f);
  local_950 = (uint ****)(0x20 - (int)local_934);
  uVar14 = 1 << ((uint)local_950 & 0x1f);
  uVar12 = 0;
  if ((uint ****)0x1f < local_950) {
    uVar12 = uVar14;
  }
  local_938 = (uint ****)0x0;
  local_92c = (uint ****)((uVar14 ^ uVar12) - 1);
  local_948 = (uint ****)~(uint)local_92c;
  ppuVar11 = (uint **)local_3a4[(int)((int)ppppuVar21 + -1)];
  iVar6 = 0x1f;
  if (ppuVar11 != (uint **)0x0) {
    for (; (uint)ppuVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (ppuVar11 == (uint **)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + 1;
  }
  if (((byte *)((int)local_924 + (int)ppppuVar21) < (byte *)0x74) &&
     (local_928 = (uint ****)
                  ((byte *)((uint)((uint ****)(0x20 - iVar6) < local_934) + (int)local_924) +
                  (int)ppppuVar21), local_928 < (uint ****)0x74)) {
    local_93c = (uint ****)((int)local_924 + -1);
    local_944 = (uint ****)((int)local_928 + -1);
    if (local_944 != local_93c) {
      ppppuVar10 = (uint ****)((int)local_944 - (int)local_924);
      pppuVar7 = (uint ***)(local_3a4 + (int)((int)ppppuVar10 + -1));
      do {
        if (ppppuVar10 < ppppuVar21) {
          local_938 = (uint ****)pppuVar7[1];
        }
        else {
          local_938 = (uint ****)0x0;
        }
        if ((uint ****)((int)ppppuVar10 + -1) < ppppuVar21) {
          ppuVar11 = *pppuVar7;
        }
        else {
          ppuVar11 = (uint **)0x0;
        }
        pppuVar7 = pppuVar7 + -1;
        local_3a4[(int)local_944] =
             (uint ***)
             (((uint)ppuVar11 & (uint)local_948) >> ((byte)local_950 & 0x1f) |
             ((uint)local_938 & (uint)local_92c) << (sbyte)local_934);
        local_944 = (uint ****)((int)local_944 + -1);
        ppppuVar10 = (uint ****)((int)ppppuVar10 + -1);
        ppppuVar21 = local_3a8;
      } while (local_944 != local_93c);
    }
    local_3a8 = local_928;
    if (local_924 != (uint ****)0x0) {
      pppuVar7 = (uint ***)local_3a4;
      for (ppppuVar21 = local_924; ppppuVar21 != (uint ****)0x0;
          ppppuVar21 = (uint ****)((int)ppppuVar21 + -1)) {
        *pppuVar7 = (uint **)0x0;
        pppuVar7 = pppuVar7 + 1;
      }
    }
  }
  else {
    local_b2c = 0;
    local_3a8 = (uint ****)0x0;
    _memcpy_s(local_3a4,0x1cc,local_b28,0);
  }
  lVar23 = FUN_102638a0(&local_3a8,&local_578);
  uVar12 = (uint)((ulonglong)lVar23 >> 0x20);
  uVar14 = (uint)lVar23;
  local_928 = (uint ****)CONCAT31(local_928._1_3_,local_3a8 == (uint ****)0x0);
  if (uVar12 == 0) {
    iVar6 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar14 == 0) {
      ppppuVar21 = (uint ****)0x0;
    }
    else {
      ppppuVar21 = (uint ****)(iVar6 + 1);
    }
  }
  else {
    iVar6 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    ppppuVar21 = (uint ****)(iVar6 + 0x20);
  }
  if (local_958 < ppppuVar21) {
    uVar19 = (int)ppppuVar21 - (int)local_958;
    if (local_3a8 == (uint ****)0x0) {
      uVar18 = 1 << (uVar19 & 0x1f);
      uVar13 = 0;
      if (0x1f < uVar19) {
        uVar13 = uVar18;
      }
      uVar18 = uVar18 ^ uVar13;
      if (0x3f < uVar19) {
        uVar13 = uVar18;
      }
      if ((uVar18 - 1 & uVar14) != 0 || ((uVar13 - 1) + (uint)(uVar18 != 0) & uVar12) != 0)
      goto LAB_10266070;
      local_928 = (uint ****)CONCAT31(local_928._1_3_,1);
    }
    else {
LAB_10266070:
      local_928 = (uint ****)((uint)local_928._1_3_ << 8);
    }
    lVar23 = __aullshr();
  }
  pbVar8 = (byte *)~(uint)local_930;
  if (local_940 != (uint ****)0x0) {
    pbVar8 = (byte *)((int)local_940 + -2);
  }
  lVar24 = __allshl(pbVar8,(char)local_954[0xc2],local_928,local_95c);
  FUN_10263e85(lVar23 + lVar24);
LAB_1026612c:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

