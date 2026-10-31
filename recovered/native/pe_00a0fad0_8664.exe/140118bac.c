/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140118bac */

void FUN_140118bac(uint *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  rsize_t rVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_d78 [32];
  undefined8 *local_d58;
  uint local_d48;
  uint local_d44;
  uint local_d40;
  uint local_d3c;
  undefined8 local_d38;
  uint local_d30;
  uint *local_d28;
  undefined8 *local_d20;
  uint *local_d18;
  uint *local_d10;
  uint *local_d08;
  undefined4 local_cf8;
  uint local_cf4 [115];
  undefined4 local_b28;
  undefined1 local_b24 [460];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint local_784 [115];
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  undefined8 local_3e4;
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_d78;
  uVar25 = param_1[1];
  local_d30 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  puVar23 = param_1 + 2;
  uVar16 = 0;
  local_d44 = *param_1;
  if ((int)*param_1 < 0) {
    local_d44 = 0;
  }
  uVar26 = 0;
  uVar24 = 0;
  uVar19 = local_d44;
  if (uVar25 <= local_d44) {
    uVar19 = uVar25;
  }
  local_d44 = local_d44 - uVar19;
  local_d08 = (uint *)((longlong)param_1 + (ulonglong)uVar19 + 8);
  local_d10 = (uint *)((longlong)param_1 + (ulonglong)uVar25 + 8);
  local_d48 = (int)local_d10 - (int)local_d08;
  local_d28 = param_1;
  local_d20 = param_2;
  if (puVar23 != local_d08) {
    do {
      uVar25 = (uint)uVar26;
      if (uVar24 == 9) {
        if (uVar16 != 0) {
          uVar18 = 0;
          uVar11 = 0;
          do {
            uVar19 = (int)uVar11 + 1;
            uVar10 = (ulonglong)local_784[uVar11] * 1000000000 + uVar18;
            local_784[uVar11] = (uint)uVar10;
            uVar18 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar19;
          } while (uVar19 != uVar16);
          uVar19 = (uint)(uVar10 >> 0x20);
          uVar16 = local_788;
          if (uVar19 != 0) {
            if (local_788 < 0x73) {
              local_784[local_788] = uVar19;
              local_788 = local_788 + 1;
              uVar16 = local_788;
            }
            else {
              local_788 = 0;
              uVar16 = 0;
            }
          }
        }
        if (uVar25 != 0) {
          uVar19 = 0;
          uVar24 = 0;
          if (uVar16 != 0) {
            do {
              uVar16 = uVar24 + 1;
              uVar11 = local_784[uVar24] + uVar26;
              local_784[uVar24] = (uint)uVar11;
              uVar26 = uVar11 >> 0x20;
              uVar25 = (uint)(uVar11 >> 0x20);
              uVar24 = uVar16;
            } while (uVar16 != local_788);
            uVar16 = local_788;
            uVar19 = local_788;
            if (uVar25 == 0) goto LAB_140118d57;
          }
          if (uVar19 < 0x73) {
            local_784[uVar19] = uVar25;
            uVar16 = local_788 + 1;
            local_788 = uVar16;
          }
          else {
            uVar16 = 0;
            local_788 = 0;
          }
        }
LAB_140118d57:
        uVar25 = 0;
        uVar24 = 0;
      }
      uVar19 = *puVar23;
      uVar24 = uVar24 + 1;
      puVar23 = (uint *)((longlong)puVar23 + 1);
      uVar25 = (uint)(byte)uVar19 + uVar25 * 10;
      uVar26 = (ulonglong)uVar25;
    } while (puVar23 != local_d08);
    if (uVar24 != 0) {
      for (uVar19 = uVar24 / 10; uVar19 != 0; uVar19 = uVar19 - local_d40) {
        local_d40 = uVar19;
        if (0x26 < uVar19) {
          local_d40 = 0x26;
        }
        uVar20 = local_d40 - 1;
        bVar8 = (&DAT_140167cf2)[(ulonglong)uVar20 * 4];
        bVar1 = (&DAT_140167cf3)[(ulonglong)uVar20 * 4];
        local_218 = (uint)bVar1 + (uint)bVar8;
        local_d3c = uVar19;
        FUN_1401366a0(local_214,0,(ulonglong)bVar8 * 4);
        FUN_140135ff0(local_214 + bVar8,
                      &DAT_1401673e0 +
                      (ulonglong)*(ushort *)(&DAT_140167cf0 + (ulonglong)uVar20 * 4) * 4,
                      (ulonglong)bVar1 << 2);
        uVar20 = local_784[0];
        if (local_218 < 2) {
          uVar11 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
LAB_140118e28:
            local_788 = 0;
            uVar14 = 0;
            goto LAB_140119146;
          }
          uVar14 = uVar16;
          if ((local_214[0] == 1) || (uVar16 == 0)) goto LAB_140119146;
          uVar10 = 0;
          uVar18 = 0;
          do {
            uVar14 = (int)uVar18 + 1;
            uVar12 = local_784[uVar18] * uVar11 + uVar10;
            local_784[uVar18] = (uint)uVar12;
            uVar10 = uVar12 >> 0x20;
            uVar20 = (uint)(uVar12 >> 0x20);
            uVar18 = (ulonglong)uVar14;
          } while (uVar14 != uVar16);
LAB_140118e7b:
          uVar16 = 0;
          uVar14 = local_788;
          if (uVar20 == 0) goto LAB_140119146;
          if (local_788 < 0x73) {
            local_784[local_788] = uVar20;
            local_788 = local_788 + 1;
            uVar14 = local_788;
            goto LAB_140119146;
          }
          local_788 = 0;
          bVar27 = false;
        }
        else {
          if (uVar16 < 2) {
            uVar11 = (ulonglong)local_784[0];
            local_788 = local_218;
            if (local_218 != 0) {
              if (local_218 < 0x74) {
                FUN_140135ff0();
              }
              else {
                FUN_1401366a0(local_784,0,0x1cc);
                puVar6 = (undefined4 *)FUN_140113dd4();
                *puVar6 = 0x22;
                FUN_140120ee8();
              }
            }
            if (uVar20 == 0) goto LAB_140118e28;
            uVar14 = local_788;
            if ((uVar20 != 1) && (local_788 != 0)) {
              uVar10 = 0;
              uVar18 = 0;
              do {
                uVar16 = (int)uVar18 + 1;
                uVar12 = local_784[uVar18] * uVar11 + uVar10;
                local_784[uVar18] = (uint)uVar12;
                uVar10 = uVar12 >> 0x20;
                uVar20 = (uint)(uVar12 >> 0x20);
                uVar18 = (ulonglong)uVar16;
              } while (uVar16 != local_788);
              goto LAB_140118e7b;
            }
          }
          else {
            local_d18 = local_784;
            local_d38 = local_214;
            uVar19 = uVar16;
            if (local_218 < uVar16) {
              local_d38 = local_784;
              uVar19 = local_218;
              local_d18 = local_214;
            }
            local_788 = 0;
            local_5b8 = 0;
            uVar11 = 0;
            uVar20 = local_218;
            if (local_218 < uVar16) {
              uVar20 = uVar16;
            }
            if (uVar19 != 0) {
              do {
                uVar14 = (uint)uVar11;
                uVar16 = local_d18[uVar11];
                if (uVar16 == 0) {
                  if (uVar14 == local_788) {
                    local_788 = uVar14 + 1;
                    local_5b4[uVar11] = 0;
                    local_5b8 = local_788;
                  }
                }
                else {
                  uVar18 = 0;
                  uVar17 = uVar14;
                  if (uVar20 != 0) {
                    do {
                      uVar17 = (uint)uVar11;
                      uVar10 = uVar11;
                      if (uVar17 == 0x73) break;
                      if (uVar17 == local_788) {
                        local_5b4[uVar11] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar10 = (ulonglong)(uVar17 + 1);
                      uVar18 = (ulonglong)local_d38[-uVar14 + uVar17] * (ulonglong)uVar16 + uVar18 +
                               (ulonglong)local_5b4[uVar11];
                      local_5b4[uVar11] = (uint)uVar18;
                      uVar18 = uVar18 >> 0x20;
                      uVar11 = uVar10;
                      local_788 = local_5b8;
                    } while (-uVar14 + uVar17 + 1 != uVar20);
                    uVar17 = (uint)uVar10;
                    uVar16 = (uint)uVar18;
                    while (uVar16 != 0) {
                      uVar17 = (uint)uVar10;
                      if (uVar17 == 0x73) goto LAB_140119218;
                      if (uVar17 == local_788) {
                        local_5b4[uVar10] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar16 = local_5b4[uVar10];
                      uVar17 = uVar17 + 1;
                      local_5b4[uVar10] = (uint)(uVar16 + uVar18);
                      uVar16 = (uint)(uVar16 + uVar18 >> 0x20);
                      uVar18 = (ulonglong)uVar16;
                      uVar10 = (ulonglong)uVar17;
                      local_788 = local_5b8;
                    }
                  }
                  if (uVar17 == 0x73) goto LAB_140119218;
                }
                uVar11 = (ulonglong)(uVar14 + 1);
              } while (uVar14 + 1 != uVar19);
            }
            uVar14 = local_788;
            uVar19 = local_d3c;
            if (local_788 != 0) {
              if (local_788 < 0x74) {
                FUN_140135ff0();
                uVar14 = local_788;
                uVar19 = local_d3c;
              }
              else {
                FUN_1401366a0(local_784,0,0x1cc);
                puVar6 = (undefined4 *)FUN_140113dd4();
                *puVar6 = 0x22;
                FUN_140120ee8();
                uVar14 = local_788;
                uVar19 = local_d3c;
              }
            }
          }
LAB_140119146:
          bVar27 = true;
          uVar16 = uVar14;
        }
        if (!bVar27) goto LAB_140119218;
      }
      if (uVar24 % 10 != 0) {
        uVar19 = *(uint *)(&DAT_140167d88 + (ulonglong)(uVar24 % 10 - 1) * 4);
        if (uVar19 == 0) {
LAB_140119218:
          local_788 = 0;
          uVar16 = 0;
        }
        else if ((uVar19 != 1) && (uVar16 != 0)) {
          uVar18 = 0;
          uVar11 = 0;
          do {
            uVar24 = (int)uVar11 + 1;
            uVar10 = (ulonglong)local_784[uVar11] * (ulonglong)uVar19 + uVar18;
            local_784[uVar11] = (uint)uVar10;
            uVar18 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar24;
          } while (uVar24 != uVar16);
          uVar19 = (uint)(uVar10 >> 0x20);
          uVar16 = local_788;
          if (uVar19 != 0) {
            if (0x72 < local_788) goto LAB_140119218;
            local_784[local_788] = uVar19;
            local_788 = local_788 + 1;
            uVar16 = local_788;
          }
        }
      }
      if (uVar25 != 0) {
        uVar19 = 0;
        uVar24 = 0;
        if (uVar16 != 0) {
          do {
            uVar16 = uVar24 + 1;
            uVar25 = local_784[uVar24];
            local_784[uVar24] = (uint)(uVar25 + uVar26);
            uVar25 = (uint)(uVar25 + uVar26 >> 0x20);
            uVar26 = (ulonglong)uVar25;
            uVar24 = uVar16;
          } while (uVar16 != local_788);
          uVar16 = local_788;
          uVar19 = local_788;
          if (uVar25 == 0) goto LAB_1401192a4;
        }
        if (uVar19 < 0x73) {
          local_784[uVar19] = uVar25;
          local_788 = local_788 + 1;
          uVar16 = local_788;
        }
        else {
          local_788 = 0;
          uVar16 = 0;
        }
      }
    }
  }
LAB_1401192a4:
  if (local_d44 == 0) {
LAB_1401197d5:
    if (uVar16 == 0) goto LAB_1401197da;
    local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
    iVar9 = 0x1f;
    bVar27 = local_784[uVar16 - 1] == 0;
    if (!bVar27) {
      for (; local_784[uVar16 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (bVar27) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    local_d3c = (uVar16 - 1) * 0x20 + iVar9;
  }
  else {
    for (uVar25 = local_d44 / 10; local_d3c = uVar25, uVar25 != 0; uVar25 = uVar25 - uVar19) {
      uVar19 = uVar25;
      if (0x26 < uVar25) {
        uVar19 = 0x26;
      }
      uVar24 = uVar19 - 1;
      bVar8 = (&DAT_140167cf2)[(ulonglong)uVar24 * 4];
      bVar1 = (&DAT_140167cf3)[(ulonglong)uVar24 * 4];
      local_218 = (uint)bVar1 + (uint)bVar8;
      local_d40 = uVar19;
      FUN_1401366a0(local_214,0,(ulonglong)bVar8 * 4);
      FUN_140135ff0(local_214 + bVar8,
                    &DAT_1401673e0 +
                    (ulonglong)*(ushort *)(&DAT_140167cf0 + (ulonglong)uVar24 * 4) * 4,
                    (ulonglong)bVar1 << 2);
      uVar24 = local_784[0];
      if (local_218 < 2) {
        uVar26 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
LAB_140119367:
          local_788 = 0;
          uVar20 = 0;
          goto LAB_140119674;
        }
        uVar20 = uVar16;
        if ((local_214[0] == 1) || (uVar16 == 0)) goto LAB_140119674;
        uVar18 = 0;
        uVar11 = 0;
        do {
          uVar20 = (int)uVar11 + 1;
          uVar10 = local_784[uVar11] * uVar26 + uVar18;
          local_784[uVar11] = (uint)uVar10;
          uVar18 = uVar10 >> 0x20;
          uVar24 = (uint)(uVar10 >> 0x20);
          uVar11 = (ulonglong)uVar20;
        } while (uVar20 != uVar16);
LAB_1401193ba:
        uVar16 = 0;
        uVar20 = local_788;
        if (uVar24 == 0) goto LAB_140119674;
        if (local_788 < 0x73) {
          local_784[local_788] = uVar24;
          local_788 = local_788 + 1;
          uVar20 = local_788;
          goto LAB_140119674;
        }
        local_788 = 0;
        bVar27 = false;
      }
      else {
        if (uVar16 < 2) {
          uVar26 = (ulonglong)local_784[0];
          local_788 = local_218;
          if (local_218 != 0) {
            if (local_218 < 0x74) {
              FUN_140135ff0();
            }
            else {
              FUN_1401366a0(local_784,0,0x1cc);
              puVar6 = (undefined4 *)FUN_140113dd4();
              *puVar6 = 0x22;
              FUN_140120ee8();
            }
          }
          if (uVar24 == 0) goto LAB_140119367;
          uVar20 = local_788;
          if ((uVar24 != 1) && (local_788 != 0)) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar16 = (int)uVar11 + 1;
              uVar10 = local_784[uVar11] * uVar26 + uVar18;
              local_784[uVar11] = (uint)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar24 = (uint)(uVar10 >> 0x20);
              uVar11 = (ulonglong)uVar16;
            } while (uVar16 != local_788);
            goto LAB_1401193ba;
          }
        }
        else {
          puVar23 = local_784;
          puVar13 = local_214;
          uVar25 = uVar16;
          if (local_218 < uVar16) {
            puVar13 = local_784;
            uVar25 = local_218;
            puVar23 = local_214;
          }
          uVar24 = 0;
          local_5b8 = 0;
          uVar26 = 0;
          uVar19 = local_218;
          if (local_218 < uVar16) {
            uVar19 = uVar16;
          }
          if (uVar25 != 0) {
            do {
              uVar20 = (uint)uVar26;
              uVar16 = puVar23[uVar26];
              if (uVar16 == 0) {
                if (uVar20 == uVar24) {
                  uVar24 = uVar20 + 1;
                  local_5b4[uVar26] = 0;
                  local_5b8 = uVar24;
                }
              }
              else {
                uVar11 = 0;
                uVar14 = uVar20;
                if (uVar19 != 0) {
                  do {
                    uVar14 = (uint)uVar26;
                    uVar18 = uVar26;
                    if (uVar14 == 0x73) break;
                    if (uVar14 == uVar24) {
                      local_5b4[uVar26] = 0;
                      local_5b8 = uVar14 + 1;
                    }
                    uVar18 = (ulonglong)(uVar14 + 1);
                    uVar11 = (ulonglong)puVar13[-uVar20 + uVar14] * (ulonglong)uVar16 + uVar11 +
                             (ulonglong)local_5b4[uVar26];
                    local_5b4[uVar26] = (uint)uVar11;
                    uVar11 = uVar11 >> 0x20;
                    uVar26 = uVar18;
                    uVar24 = local_5b8;
                  } while (-uVar20 + uVar14 + 1 != uVar19);
                  uVar14 = (uint)uVar18;
                  uVar16 = (uint)uVar11;
                  while (uVar16 != 0) {
                    uVar14 = (uint)uVar18;
                    if (uVar14 == 0x73) goto LAB_14011974e;
                    if (uVar14 == uVar24) {
                      local_5b4[uVar18] = 0;
                      local_5b8 = uVar14 + 1;
                    }
                    uVar16 = local_5b4[uVar18];
                    uVar14 = uVar14 + 1;
                    local_5b4[uVar18] = (uint)(uVar11 + uVar16);
                    uVar16 = (uint)(uVar11 + uVar16 >> 0x20);
                    uVar11 = (ulonglong)uVar16;
                    uVar18 = (ulonglong)uVar14;
                    uVar24 = local_5b8;
                  }
                }
                if (uVar14 == 0x73) goto LAB_14011974e;
              }
              uVar26 = (ulonglong)(uVar20 + 1);
            } while (uVar20 + 1 != uVar25);
          }
          local_788 = uVar24;
          uVar20 = local_788;
          uVar25 = local_d3c;
          uVar19 = local_d40;
          if (uVar24 != 0) {
            if (uVar24 < 0x74) {
              FUN_140135ff0();
              uVar20 = local_788;
              uVar25 = local_d3c;
              uVar19 = local_d40;
            }
            else {
              FUN_1401366a0(local_784,0,0x1cc);
              puVar6 = (undefined4 *)FUN_140113dd4();
              *puVar6 = 0x22;
              FUN_140120ee8();
              uVar20 = local_788;
              uVar25 = local_d3c;
              uVar19 = local_d40;
            }
          }
        }
LAB_140119674:
        bVar27 = true;
        uVar16 = uVar20;
      }
      if (!bVar27) goto LAB_14011974e;
    }
    if (local_d44 % 10 == 0) goto LAB_1401197d5;
    uVar25 = *(uint *)(&DAT_140167d88 + (ulonglong)(local_d44 % 10 - 1) * 4);
    if (uVar25 == 0) {
      local_788 = 0;
      uVar16 = 0;
      goto LAB_1401197d5;
    }
    if (uVar25 == 1) goto LAB_1401197d5;
    if (uVar16 != 0) {
      uVar11 = 0;
      uVar26 = 0;
      do {
        uVar19 = (int)uVar26 + 1;
        uVar18 = (ulonglong)local_784[uVar26] * (ulonglong)uVar25 + uVar11;
        local_784[uVar26] = (uint)uVar18;
        uVar11 = uVar18 >> 0x20;
        uVar26 = (ulonglong)uVar19;
      } while (uVar19 != uVar16);
      uVar25 = (uint)(uVar18 >> 0x20);
      uVar16 = local_788;
      if (uVar25 != 0) {
        if (0x72 < local_788) {
LAB_14011974e:
          puVar7 = (ulonglong *)*local_d20;
          if (*(char *)(local_d20 + 1) == '\0') {
            *(uint *)puVar7 =
                 (-(uint)((char)local_d28[0xc2] != '\0') & 0x80000000) + 0x7f800000 |
                 (uint)*puVar7 & 0x7f800000;
          }
          else {
            *puVar7 = (-(ulonglong)((char)local_d28[0xc2] != '\0') & 0x8000000000000000) +
                      0x7ff0000000000000 | *puVar7 & 0x7ff0000000000000;
          }
          goto LAB_14011a882;
        }
        local_784[local_788] = uVar25;
        local_788 = local_788 + 1;
        uVar16 = local_788;
      }
      goto LAB_1401197d5;
    }
LAB_1401197da:
    local_d3c = 0;
  }
  puVar23 = local_d10;
  if ((local_d3c < local_d30) && (local_d48 != 0)) {
    uVar25 = 0;
    uVar26 = 0;
    local_958 = 0;
    uVar19 = 0;
    puVar13 = local_d08;
    if (local_d08 != local_d10) {
      do {
        uVar24 = (uint)uVar26;
        if (uVar19 == 9) {
          if (uVar25 != 0) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar19 = (int)uVar11 + 1;
              uVar10 = (ulonglong)local_954[uVar11] * 1000000000 + uVar18;
              local_954[uVar11] = (uint)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar19;
            } while (uVar19 != uVar25);
            uVar19 = (uint)(uVar10 >> 0x20);
            uVar25 = local_958;
            if (uVar19 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar19;
                local_958 = local_958 + 1;
                uVar25 = local_958;
              }
              else {
                local_218 = 0;
                local_958 = 0;
                memcpy_s(local_954,0x1cc,local_214,0);
                uVar25 = local_958;
              }
            }
          }
          if (uVar24 != 0) {
            uVar11 = 0;
            uVar19 = 0;
            if (uVar25 != 0) {
              do {
                uVar25 = (int)uVar11 + 1;
                uVar18 = local_954[uVar11] + uVar26;
                local_954[uVar11] = (uint)uVar18;
                uVar26 = uVar18 >> 0x20;
                uVar24 = (uint)(uVar18 >> 0x20);
                uVar11 = (ulonglong)uVar25;
              } while (uVar25 != local_958);
              uVar19 = local_958;
              uVar25 = local_958;
              if (uVar24 == 0) goto LAB_140119975;
            }
            if (uVar19 < 0x73) {
              local_954[uVar19] = uVar24;
              local_958 = local_958 + 1;
              uVar25 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVar25 = local_958;
            }
          }
LAB_140119975:
          uVar24 = 0;
          uVar19 = 0;
        }
        uVar20 = *puVar13;
        uVar19 = uVar19 + 1;
        puVar13 = (uint *)((longlong)puVar13 + 1);
        uVar24 = (uint)(byte)uVar20 + uVar24 * 10;
        uVar26 = (ulonglong)uVar24;
      } while (puVar13 != puVar23);
      if (uVar19 != 0) {
        uVar11 = (ulonglong)uVar19 / 10;
        uVar20 = (uint)uVar11;
        while (local_d40 = (uint)uVar11, uVar20 != 0) {
          uVar20 = local_d40;
          if (0x26 < local_d40) {
            uVar20 = 0x26;
          }
          local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar20);
          uVar11 = (ulonglong)(uVar20 - 1);
          bVar8 = (&DAT_140167cf2)[uVar11 * 4];
          bVar1 = (&DAT_140167cf3)[uVar11 * 4];
          local_218 = (uint)bVar1 + (uint)bVar8;
          FUN_1401366a0(local_214,0,(ulonglong)bVar8 * 4);
          FUN_140135ff0(local_214 + bVar8,
                        &DAT_1401673e0 + (ulonglong)*(ushort *)(&DAT_140167cf0 + uVar11 * 4) * 4,
                        (ulonglong)bVar1 << 2);
          uVar20 = local_954[0];
          if (local_218 < 2) {
            uVar11 = (ulonglong)local_214[0];
            if (local_214[0] == 0) {
LAB_140119a4b:
              local_218 = 0;
              puVar23 = local_214;
              local_958 = 0;
              rVar22 = 0;
              goto LAB_140119d13;
            }
            if ((local_214[0] == 1) || (uVar25 == 0)) goto LAB_140119d2b;
            uVar10 = 0;
            uVar18 = 0;
            do {
              uVar20 = (int)uVar18 + 1;
              uVar12 = local_954[uVar18] * uVar11 + uVar10;
              local_954[uVar18] = (uint)uVar12;
              uVar10 = uVar12 >> 0x20;
              uVar14 = (uint)(uVar12 >> 0x20);
              uVar18 = (ulonglong)uVar20;
            } while (uVar20 != uVar25);
LAB_140119aab:
            uVar25 = local_958;
            if (uVar14 == 0) goto LAB_140119d2b;
            if (local_958 < 0x73) {
              local_954[local_958] = uVar14;
              local_958 = local_958 + 1;
              uVar25 = local_958;
              goto LAB_140119d2b;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            bVar27 = false;
            uVar25 = local_958;
          }
          else {
            puVar23 = local_214;
            if (uVar25 < 2) {
              local_958 = local_218;
              memcpy_s(local_954,0x1cc,puVar23,(ulonglong)local_218 << 2);
              if (uVar20 != 0) {
                uVar25 = local_958;
                if ((uVar20 != 1) && (local_958 != 0)) {
                  uVar18 = 0;
                  uVar11 = 0;
                  do {
                    uVar25 = (int)uVar11 + 1;
                    uVar10 = (ulonglong)local_954[uVar11] * (ulonglong)uVar20 + uVar18;
                    local_954[uVar11] = (uint)uVar10;
                    uVar18 = uVar10 >> 0x20;
                    uVar14 = (uint)(uVar10 >> 0x20);
                    uVar11 = (ulonglong)uVar25;
                  } while (uVar25 != local_958);
                  goto LAB_140119aab;
                }
                goto LAB_140119d2b;
              }
              goto LAB_140119a4b;
            }
            local_d18 = local_954;
            local_d44 = uVar25;
            if (local_218 < uVar25) {
              puVar23 = local_954;
              local_d18 = local_214;
              local_d44 = local_218;
            }
            uVar14 = 0;
            local_958 = 0;
            uVar20 = local_218;
            if (local_218 < uVar25) {
              uVar20 = uVar25;
            }
            local_5b8 = 0;
            if (local_d44 != 0) {
              do {
                uVar25 = local_d18[uVar14];
                if (uVar25 == 0) {
                  if (uVar14 == local_958) {
                    local_958 = uVar14 + 1;
                    local_5b4[uVar14] = 0;
                    local_5b8 = local_958;
                  }
                }
                else {
                  uVar11 = 0;
                  uVar17 = uVar14;
                  if (uVar20 != 0) {
                    uVar18 = (ulonglong)uVar14;
                    do {
                      uVar17 = (uint)uVar18;
                      uVar10 = uVar18;
                      if (uVar17 == 0x73) break;
                      if (uVar17 == local_958) {
                        local_5b4[uVar18] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar10 = (ulonglong)(uVar17 + 1);
                      uVar11 = (ulonglong)puVar23[-uVar14 + uVar17] * (ulonglong)uVar25 +
                               (ulonglong)local_5b4[uVar18] + uVar11;
                      local_5b4[uVar18] = (uint)uVar11;
                      uVar11 = uVar11 >> 0x20;
                      uVar18 = uVar10;
                      local_958 = local_5b8;
                    } while (-uVar14 + uVar17 + 1 != uVar20);
                    uVar17 = (uint)uVar10;
                    uVar25 = (uint)uVar11;
                    while (uVar25 != 0) {
                      uVar17 = (uint)uVar10;
                      if (uVar17 == 0x73) goto LAB_140119dee;
                      if (uVar17 == local_958) {
                        local_5b4[uVar10] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar25 = local_5b4[uVar10];
                      uVar17 = uVar17 + 1;
                      local_5b4[uVar10] = (uint)(uVar25 + uVar11);
                      uVar25 = (uint)(uVar25 + uVar11 >> 0x20);
                      uVar11 = (ulonglong)uVar25;
                      uVar10 = (ulonglong)uVar17;
                      local_958 = local_5b8;
                    }
                  }
                  if (uVar17 == 0x73) {
LAB_140119dee:
                    local_b28 = 0;
                    local_958 = 0;
                    memcpy_s(local_954,0x1cc,local_b24,0);
                    goto LAB_140119e15;
                  }
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 != local_d44);
            }
            puVar23 = local_5b4;
            rVar22 = (ulonglong)local_958 << 2;
LAB_140119d13:
            memcpy_s(local_954,0x1cc,puVar23,rVar22);
            uVar25 = local_958;
LAB_140119d2b:
            bVar27 = true;
          }
          if (!bVar27) goto LAB_140119e15;
          uVar20 = local_d40 - (int)local_d38;
          uVar11 = (ulonglong)uVar20;
        }
        if (uVar19 % 10 != 0) {
          uVar19 = *(uint *)(&DAT_140167d88 + (ulonglong)(uVar19 % 10 - 1) * 4);
          if (uVar19 == 0) {
LAB_140119e15:
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar25 = local_958;
          }
          else if ((uVar19 != 1) && (uVar25 != 0)) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar20 = (int)uVar11 + 1;
              uVar10 = (ulonglong)local_954[uVar11] * (ulonglong)uVar19 + uVar18;
              local_954[uVar11] = (uint)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar20;
            } while (uVar20 != uVar25);
            uVar19 = (uint)(uVar10 >> 0x20);
            uVar25 = local_958;
            if (uVar19 != 0) {
              if (0x72 < local_958) goto LAB_140119e15;
              local_954[local_958] = uVar19;
              local_958 = local_958 + 1;
              uVar25 = local_958;
            }
          }
        }
        if (uVar24 != 0) {
          uVar19 = 0;
          uVar20 = 0;
          if (uVar25 != 0) {
            do {
              uVar20 = uVar19 + 1;
              uVar25 = local_954[uVar19];
              local_954[uVar19] = (uint)(uVar25 + uVar26);
              uVar24 = (uint)(uVar25 + uVar26 >> 0x20);
              uVar26 = (ulonglong)uVar24;
              uVar19 = uVar20;
            } while (uVar20 != local_958);
            uVar20 = local_958;
            uVar25 = local_958;
            if (uVar24 == 0) goto LAB_140119ed2;
          }
          if (uVar20 < 0x73) {
            local_954[uVar20] = uVar24;
            local_958 = local_958 + 1;
            uVar25 = local_958;
          }
          else {
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar25 = local_958;
          }
        }
      }
    }
LAB_140119ed2:
    if ((int)*local_d28 < 0) {
      local_d48 = local_d48 - *local_d28;
    }
    uVar24 = 1;
    local_3e4 = 1;
    local_3e8 = 1;
    for (uVar19 = local_d48 / 10; uVar19 != 0; uVar19 = uVar19 - (int)local_d38) {
      uVar20 = uVar19;
      if (0x26 < uVar19) {
        uVar20 = 0x26;
      }
      local_d38._4_4_ = (undefined4)((ulonglong)local_d38 >> 0x20);
      local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar20);
      uVar26 = (ulonglong)(uVar20 - 1);
      bVar8 = (&DAT_140167cf2)[uVar26 * 4];
      bVar1 = (&DAT_140167cf3)[uVar26 * 4];
      local_218 = (uint)bVar1 + (uint)bVar8;
      FUN_1401366a0(local_214,0,(ulonglong)bVar8 * 4);
      FUN_140135ff0(local_214 + bVar8,
                    &DAT_1401673e0 + (ulonglong)*(ushort *)(&DAT_140167cf0 + uVar26 * 4) * 4,
                    (ulonglong)bVar1 << 2);
      if (local_218 < 2) {
        uVar26 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          uVar24 = local_3e8;
        }
        else if ((local_214[0] != 1) && (uVar24 != 0)) {
          uVar18 = 0;
          uVar11 = 0;
          do {
            uVar20 = (int)uVar11 + 1;
            uVar10 = *(uint *)((longlong)&local_3e4 + uVar11 * 4) * uVar26 + uVar18;
            *(int *)((longlong)&local_3e4 + uVar11 * 4) = (int)uVar10;
            uVar18 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar20;
          } while (uVar20 != uVar24);
          iVar9 = (int)(uVar10 >> 0x20);
          uVar24 = local_3e8;
          if (iVar9 == 0) goto LAB_140119fd6;
          if (local_3e8 < 0x73) {
            *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar9;
            local_3e8 = local_3e8 + 1;
            uVar24 = local_3e8;
            goto LAB_140119fd6;
          }
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          bVar27 = false;
          uVar24 = local_3e8;
          goto LAB_14011a30e;
        }
LAB_140119fd6:
        bVar27 = true;
      }
      else {
        puVar23 = local_214;
        if (uVar24 < 2) {
          uVar24 = (uint)local_3e4;
          uVar26 = local_3e4 & 0xffffffff;
          local_3e8 = local_218;
          memcpy_s(&local_3e4,0x1cc,puVar23,(ulonglong)local_218 << 2);
          if (uVar24 == 0) {
            local_cf8 = 0;
            puVar23 = local_cf4;
            local_3e8 = 0;
            rVar22 = 0;
            goto LAB_14011a2f6;
          }
          if ((uVar24 != 1) && (local_3e8 != 0)) {
            uVar18 = 0;
            uVar11 = 0;
            do {
              uVar24 = (int)uVar11 + 1;
              uVar10 = *(uint *)((longlong)&local_3e4 + uVar11 * 4) * uVar26 + uVar18;
              *(int *)((longlong)&local_3e4 + uVar11 * 4) = (int)uVar10;
              uVar18 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar24;
            } while (uVar24 != local_3e8);
            iVar9 = (int)(uVar10 >> 0x20);
            if (iVar9 != 0) {
              if (0x72 < local_3e8) {
                local_cf8 = 0;
                local_3e8 = 0;
                memcpy_s(&local_3e4,0x1cc,local_cf4,0);
                bVar27 = false;
                uVar24 = local_3e8;
                goto LAB_14011a30e;
              }
              *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar9;
              local_3e8 = local_3e8 + 1;
            }
          }
        }
        else {
          local_d18 = (uint *)&local_3e4;
          local_d40 = uVar24;
          if (local_218 < uVar24) {
            puVar23 = (uint *)&local_3e4;
            local_d18 = local_214;
            local_d40 = local_218;
          }
          uVar17 = 0;
          uVar20 = 0;
          uVar14 = local_218;
          if (local_218 < uVar24) {
            uVar14 = uVar24;
          }
          local_5b8 = 0;
          if (local_d40 != 0) {
            do {
              uVar24 = local_d18[uVar17];
              if (uVar24 == 0) {
                if (uVar17 == uVar20) {
                  uVar20 = uVar17 + 1;
                  local_5b4[uVar17] = 0;
                  local_5b8 = uVar20;
                }
              }
              else {
                uVar26 = 0;
                uVar21 = uVar17;
                if (uVar14 != 0) {
                  uVar11 = (ulonglong)uVar17;
                  do {
                    uVar21 = (uint)uVar11;
                    uVar18 = uVar11;
                    if (uVar21 == 0x73) break;
                    if (uVar21 == uVar20) {
                      local_5b4[uVar11] = 0;
                      local_5b8 = uVar21 + 1;
                    }
                    uVar18 = (ulonglong)(uVar21 + 1);
                    uVar26 = (ulonglong)puVar23[-uVar17 + uVar21] * (ulonglong)uVar24 + uVar26 +
                             (ulonglong)local_5b4[uVar11];
                    local_5b4[uVar11] = (uint)uVar26;
                    uVar26 = uVar26 >> 0x20;
                    uVar11 = uVar18;
                    uVar20 = local_5b8;
                  } while (-uVar17 + uVar21 + 1 != uVar14);
                  uVar21 = (uint)uVar18;
                  uVar24 = (uint)uVar26;
                  while (uVar24 != 0) {
                    uVar21 = (uint)uVar18;
                    if (uVar21 == 0x73) goto LAB_14011a389;
                    if (uVar21 == uVar20) {
                      local_5b4[uVar18] = 0;
                      local_5b8 = uVar21 + 1;
                    }
                    uVar24 = local_5b4[uVar18];
                    uVar21 = uVar21 + 1;
                    local_5b4[uVar18] = (uint)(uVar24 + uVar26);
                    uVar24 = (uint)(uVar24 + uVar26 >> 0x20);
                    uVar26 = (ulonglong)uVar24;
                    uVar18 = (ulonglong)uVar21;
                    uVar20 = local_5b8;
                  }
                }
                if (uVar21 == 0x73) {
LAB_14011a389:
                  local_b28 = 0;
                  local_3e8 = 0;
                  memcpy_s(&local_3e4,0x1cc,local_b24,0);
                  goto LAB_14011a42f;
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != local_d40);
          }
          puVar23 = local_5b4;
          rVar22 = (ulonglong)uVar20 << 2;
          local_3e8 = uVar20;
LAB_14011a2f6:
          memcpy_s(&local_3e4,0x1cc,puVar23,rVar22);
        }
        bVar27 = true;
        uVar24 = local_3e8;
      }
LAB_14011a30e:
      if (!bVar27) goto LAB_14011a42f;
    }
    if (local_d48 % 10 != 0) {
      uVar19 = *(uint *)(&DAT_140167d88 + (ulonglong)(local_d48 % 10 - 1) * 4);
      if (uVar19 == 0) {
        local_cf8 = 0;
        local_3e8 = 0;
        memcpy_s(&local_3e4,0x1cc,local_cf4,0);
        uVar24 = local_3e8;
      }
      else if ((uVar19 != 1) && (uVar24 != 0)) {
        uVar11 = 0;
        uVar26 = 0;
        do {
          uVar20 = (int)uVar26 + 1;
          uVar18 = (ulonglong)*(uint *)((longlong)&local_3e4 + uVar26 * 4) * (ulonglong)uVar19 +
                   uVar11;
          *(int *)((longlong)&local_3e4 + uVar26 * 4) = (int)uVar18;
          uVar11 = uVar18 >> 0x20;
          uVar26 = (ulonglong)uVar20;
        } while (uVar20 != uVar24);
        iVar9 = (int)(uVar18 >> 0x20);
        uVar24 = local_3e8;
        if (iVar9 != 0) {
          if (0x72 < local_3e8) {
LAB_14011a42f:
            local_cf8 = 0;
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
            uVar25 = local_d28[0xc2];
            if (*(char *)(local_d20 + 1) == '\0') {
              puVar23 = (uint *)FUN_140118658();
              *puVar23 = -(uint)((char)uVar25 != '\0') & 0x80000000;
            }
            else {
              puVar7 = (ulonglong *)FUN_14011861c();
              *puVar7 = -(ulonglong)((char)uVar25 != '\0') & 0x8000000000000000;
            }
            goto LAB_14011a882;
          }
          *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar9;
          local_3e8 = local_3e8 + 1;
          uVar24 = local_3e8;
        }
      }
    }
    if (uVar25 == 0) {
      uVar19 = 0;
    }
    else {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      iVar9 = 0x1f;
      bVar27 = local_954[uVar25 - 1] == 0;
      if (!bVar27) {
        for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar27) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      uVar19 = (uVar25 - 1) * 0x20 + iVar9;
    }
    if (uVar24 == 0) {
      uVar20 = 0;
    }
    else {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      puVar23 = (uint *)((longlong)&local_3e4 + (ulonglong)(uVar24 - 1) * 4);
      iVar9 = 0x1f;
      bVar27 = *puVar23 == 0;
      if (!bVar27) {
        for (; *puVar23 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar27) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      uVar20 = (uVar24 - 1) * 0x20 + iVar9;
    }
    uVar19 = -(uint)(uVar19 < uVar20) & uVar20 - uVar19;
    local_d44 = uVar19;
    if (uVar19 != 0) {
      local_d48 = 0;
      uVar20 = uVar19 & 0x1f;
      uVar17 = uVar19 >> 5;
      local_d38 = (uint *)CONCAT44(local_d38._4_4_,0x20 - uVar20);
      bVar8 = (byte)(0x20 - uVar20);
      uVar14 = (1 << (bVar8 & 0x3f)) - 1;
      local_d40 = ~uVar14;
      iVar9 = 0x1f;
      bVar27 = local_954[uVar25 - 1] == 0;
      if (!bVar27) {
        for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar27) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      if ((uVar17 + uVar25 < 0x74) &&
         (local_d48 = (0x20U - iVar9 < uVar20) + uVar17 + uVar25, local_d48 < 0x74)) {
        uVar21 = local_d48 - 1;
        if (uVar21 != uVar17 - 1) {
          do {
            uVar4 = uVar21 - uVar17;
            if (uVar4 < uVar25) {
              uVar5 = local_954[uVar4];
            }
            else {
              uVar5 = 0;
            }
            if (uVar4 - 1 < uVar25) {
              uVar25 = local_954[uVar4 - 1];
            }
            else {
              uVar25 = 0;
            }
            local_954[uVar21] =
                 (uVar25 & local_d40) >> (bVar8 & 0x1f) | (uVar5 & uVar14) << (sbyte)uVar20;
            uVar21 = uVar21 - 1;
            uVar25 = local_958;
          } while (uVar21 != uVar17 - 1);
        }
        uVar20 = 0;
        local_958 = local_d48;
        uVar25 = local_d48;
        if (uVar17 != 0) {
          do {
            uVar26 = (ulonglong)uVar20;
            uVar20 = uVar20 + 1;
            local_954[uVar26] = 0;
          } while (uVar20 != uVar17);
        }
      }
      else {
        local_cf8 = 0;
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_cf4,0);
        uVar25 = local_958;
      }
    }
    uVar20 = local_d3c;
    local_d30 = local_d30 - local_d3c;
    uVar14 = local_d30;
    if (local_d3c != 0) {
      if (local_d30 < uVar19) {
        bVar27 = true;
        goto LAB_14011a860;
      }
      uVar14 = local_d30 - uVar19;
    }
    if (uVar24 < uVar25) {
LAB_14011a67e:
      bVar27 = false;
    }
    else {
      uVar17 = uVar25;
      if (uVar25 < uVar24) {
        bVar27 = true;
      }
      else {
        do {
          uVar17 = uVar17 - 1;
          if (uVar17 == 0xffffffff) goto LAB_14011a67e;
          uVar24 = *(uint *)((longlong)&local_3e4 + (ulonglong)uVar17 * 4);
        } while (local_954[uVar17] == uVar24);
        bVar27 = local_954[uVar17] <= uVar24;
      }
    }
    if (bVar27) {
      uVar19 = uVar19 + 1;
    }
    uVar21 = uVar14 >> 5;
    sVar3 = (sbyte)(uVar14 & 0x1f);
    bVar8 = 0x20 - sVar3;
    uVar17 = (int)(1L << (bVar8 & 0x3f)) - 1;
    uVar24 = ~uVar17;
    local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar24);
    iVar9 = 0x1f;
    bVar27 = local_954[uVar25 - 1] == 0;
    if (!bVar27) {
      for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (bVar27) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    local_d44 = uVar19;
    if ((uVar21 + uVar25 < 0x74) &&
       (uVar14 = (0x20U - iVar9 < (uVar14 & 0x1f)) + uVar21 + uVar25, uVar14 < 0x74)) {
      uVar4 = uVar14;
      while (uVar4 = uVar4 - 1, uVar4 != uVar21 - 1) {
        uVar5 = uVar4 - uVar21;
        if (uVar5 < uVar25) {
          uVar15 = local_954[uVar5];
        }
        else {
          uVar15 = 0;
        }
        if (uVar5 - 1 < uVar25) {
          uVar25 = local_954[uVar5 - 1];
        }
        else {
          uVar25 = 0;
        }
        local_954[uVar4] = (uVar25 & uVar24) >> (bVar8 & 0x1f) | (uVar15 & uVar17) << sVar3;
        uVar25 = local_958;
      }
      uVar25 = 0;
      local_958 = uVar14;
      if (uVar21 != 0) {
        do {
          uVar26 = (ulonglong)uVar25;
          uVar25 = uVar25 + 1;
          local_954[uVar26] = 0;
        } while (uVar25 != uVar21);
      }
    }
    else {
      local_cf8 = 0;
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_cf4,0);
    }
    uVar26 = FUN_140118190(&local_958,&local_3e8);
    bVar27 = local_958 == 0;
    lVar2 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar26 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = (int)lVar2 + 1;
    }
    if (local_d30 < uVar25) {
      bVar8 = (char)uVar25 - (byte)local_d30;
      if ((!bVar27) || (bVar27 = true, (uVar26 & (1L << (bVar8 & 0x3f)) - 1U) != 0)) {
        bVar27 = false;
      }
      uVar26 = uVar26 >> (bVar8 & 0x3f);
    }
    local_d58 = local_d20;
    uVar11 = 0;
    if (uVar16 != 0) {
      uVar11 = (ulonglong)local_784[0];
    }
    uVar18 = 0;
    if (1 < uVar16) {
      uVar18 = (ulonglong)local_784[1];
    }
    uVar25 = ~uVar19;
    if (uVar20 != 0) {
      uVar25 = uVar20 - 2;
    }
    FUN_140118694(uVar26 + ((uVar18 << 0x20) + uVar11 << ((byte)local_d30 & 0x3f)),uVar25,
                  (char)local_d28[0xc2],bVar27);
  }
  else {
    bVar27 = local_d48 != 0;
LAB_14011a860:
    local_d58 = local_d20;
    FUN_140118a4c(&local_788,local_d3c,(char)local_d28[0xc2],bVar27);
  }
LAB_14011a882:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_d78);
}

