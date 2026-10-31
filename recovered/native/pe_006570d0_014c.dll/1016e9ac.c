/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016e9ac */

int __fastcall FUN_1016e9ac(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  uint local_49c;
  int local_498;
  byte *local_494;
  uint local_490;
  int local_48c;
  byte *local_488;
  uint local_484;
  uint *local_480;
  uint local_47c;
  uint local_478;
  uint local_474;
  uint local_470;
  uint *local_46c;
  uint local_468;
  uint local_464;
  undefined4 local_460;
  uint local_45c;
  int local_458;
  undefined4 local_454;
  uint local_450;
  int local_44c;
  int local_448;
  int local_444;
  uint local_440;
  int local_43c;
  uint local_438;
  byte *local_434;
  uint local_430;
  uint local_42c;
  uint local_428;
  uint local_424;
  byte *local_420;
  uint local_41c;
  int local_418;
  byte abStack_414 [1024];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_49c;
  local_41c = 0xff;
  iVar3 = FUN_101733e9();
  if (iVar3 != 0) {
    uVar10 = param_1[1];
    uVar4 = -uVar10;
    if ((int)-uVar10 < 0) {
      uVar4 = uVar10;
    }
    param_1[1] = uVar4;
    if ((uVar4 < 0x1000001) && (*param_1 < 0x1000001)) {
      local_474 = local_42c;
      local_478 = local_428;
      local_484 = local_424;
      local_488 = local_420;
      local_470 = local_41c;
      local_490 = local_438;
      local_49c = local_430;
      if (local_430 == 0xc) {
        if (0x17 < (int)local_438) goto LAB_1016eb59;
        iVar3 = (int)(local_434 + (-0x18 - local_418)) / 3;
LAB_1016eab8:
        local_494 = local_434;
        if (iVar3 == 0) goto LAB_1016eb59;
        local_47c = CONCAT31(local_47c._1_3_,local_420 == (byte *)0xff000000);
        local_498 = 0;
LAB_1016ead3:
        uVar4 = 4 - (local_488 == (byte *)0x0);
      }
      else {
        if ((int)local_438 < 0x10) {
          iVar3 = (int)((int)local_434 - (local_418 + local_430)) >> 2;
          goto LAB_1016eab8;
        }
LAB_1016eb59:
        iVar3 = (param_1[0x2b] - param_1[0x2d]) + param_1[0x2a];
        if (((iVar3 - 0x401U < 0xfffffc00) || ((int)local_434 < iVar3)) ||
           (0x400 < (int)local_434 - iVar3)) goto LAB_1016e9fd;
        local_494 = local_434;
        uVar6 = FUN_10171ace();
        local_498 = CONCAT31((int3)((uint)uVar6 >> 8),1);
        iVar3 = 0;
        local_47c = CONCAT31(local_47c._1_3_,local_488 == (byte *)0xff000000);
        if (local_490 != 0x18 || local_488 != (byte *)0xff000000) goto LAB_1016ead3;
        uVar4 = 3;
        local_490 = 0x18;
      }
      param_1[2] = uVar4;
      uVar4 = param_1[1];
      local_46c = param_2;
      local_440 = uVar10;
      iVar5 = FUN_1017315f(uVar4,0);
      if ((iVar5 != 0) && (iVar5 = FUN_10173127(uVar4,0), iVar5 != 0)) {
        local_48c = iVar5;
        local_480 = param_1;
        if ((int)local_490 < 0x10) {
          if ((char)local_498 != '\0' || 0x100 < iVar3) {
            thunk_FUN_10274120(iVar5);
            goto LAB_1016e9fd;
          }
          if (0 < iVar3) {
            pbVar7 = (byte *)param_1[0x2b];
            iVar5 = 0;
            pbVar9 = pbVar7;
            local_498 = iVar3;
            do {
              pbVar16 = (byte *)param_1[0x2c];
              if (pbVar9 < pbVar16) {
LAB_1016ec88:
                pbVar7 = pbVar9 + 1;
                param_1[0x2b] = (uint)pbVar7;
                bVar11 = *pbVar9;
                pbVar9 = pbVar7;
              }
              else {
                if (param_1[8] != 0) {
                  FUN_10170e8c();
                  pbVar9 = (byte *)param_1[0x2b];
                  pbVar16 = (byte *)param_1[0x2c];
                  goto LAB_1016ec88;
                }
                bVar11 = 0;
              }
              iVar3 = local_498;
              abStack_414[iVar5 * 4 + 2] = bVar11;
              if (pbVar9 < pbVar16) {
                pbVar7 = pbVar9 + 1;
                param_1[0x2b] = (uint)pbVar7;
                bVar11 = *pbVar9;
                pbVar9 = pbVar7;
              }
              else if (param_1[8] == 0) {
                bVar11 = 0;
              }
              else {
                FUN_10170e8c();
                pbVar9 = (byte *)param_1[0x2b];
                pbVar16 = (byte *)param_1[0x2c];
                pbVar7 = pbVar9 + 1;
                param_1[0x2b] = (uint)pbVar7;
                bVar11 = *pbVar9;
                pbVar9 = pbVar7;
              }
              abStack_414[iVar5 * 4 + 1] = bVar11;
              if (pbVar9 < pbVar16) {
LAB_1016ed03:
                pbVar7 = pbVar9 + 1;
                param_1[0x2b] = (uint)pbVar7;
                bVar11 = *pbVar9;
                pbVar9 = pbVar7;
              }
              else {
                if (param_1[8] != 0) {
                  FUN_10170e8c();
                  pbVar9 = (byte *)param_1[0x2b];
                  goto LAB_1016ed03;
                }
                bVar11 = 0;
              }
              abStack_414[iVar5 * 4] = bVar11;
              if (local_49c != 0xc) {
                if ((byte *)param_1[0x2c] <= pbVar7) {
                  pbVar9 = pbVar7;
                  if (param_1[8] == 0) goto LAB_1016ed43;
                  FUN_10170e8c();
                  pbVar7 = (byte *)param_1[0x2b];
                }
                pbVar7 = pbVar7 + 1;
                param_1[0x2b] = (uint)pbVar7;
                pbVar9 = pbVar7;
              }
LAB_1016ed43:
              abStack_414[iVar5 * 4 + 3] = 0xff;
              iVar5 = iVar5 + 1;
            } while (iVar3 != iVar5);
          }
          FUN_10171ace();
          iVar5 = local_48c;
          if (local_490 == 1) {
            uVar10 = param_1[1];
            if (0 < (int)uVar10) {
              local_474 = -(*param_1 + 7 >> 3) & 3;
              local_478 = local_48c + 3;
              iVar3 = 0;
              uVar4 = 0;
              do {
                pbVar7 = (byte *)param_1[0x2b];
                if (pbVar7 < (byte *)param_1[0x2c]) {
LAB_1016f366:
                  param_1[0x2b] = (uint)(pbVar7 + 1);
                  local_490 = (uint)*pbVar7;
                  pbVar7 = pbVar7 + 1;
                }
                else {
                  if (param_1[8] != 0) {
                    FUN_10170e8c();
                    pbVar7 = (byte *)param_1[0x2b];
                    goto LAB_1016f366;
                  }
                  local_490 = 0;
                }
                uVar10 = *param_1;
                local_484 = uVar4;
                if (0 < (int)uVar10) {
                  local_494 = (byte *)(local_478 + iVar3);
                  uVar4 = 0;
                  local_49c = 7;
                  local_488 = pbVar7;
                  do {
                    iVar3 = iVar3 + 4;
                    uVar15 = (uint)((local_490 >> (local_49c & 0x1f) & 1) != 0);
                    local_494[uVar4 * 4 + -3] = abStack_414[uVar15 * 4];
                    local_494[uVar4 * 4 + -2] = abStack_414[uVar15 * 4 + 1];
                    local_494[uVar4 * 4 + -1] = abStack_414[uVar15 * 4 + 2];
                    local_494[uVar4 * 4] = 0xff;
                    uVar4 = uVar4 + 1;
                    local_498 = iVar3;
                    if (uVar4 == uVar10) break;
                    if ((int)local_49c < 1) {
                      if (local_488 < (byte *)param_1[0x2c]) {
                        param_1[0x2b] = (uint)(local_488 + 1);
                        local_490 = (uint)*local_488;
                        local_488 = local_488 + 1;
                      }
                      else if (param_1[8] == 0) {
                        local_490 = 0;
                      }
                      else {
                        FUN_10170e8c();
                        uVar10 = *param_1;
                        pbVar7 = (byte *)param_1[0x2b];
                        local_488 = pbVar7 + 1;
                        param_1[0x2b] = (uint)local_488;
                        local_490 = (uint)*pbVar7;
                      }
                      local_49c = 7;
                    }
                    else {
                      local_49c = local_49c - 1;
                    }
                  } while ((int)uVar4 < (int)uVar10);
                }
                FUN_10171ace();
                uVar4 = local_484 + 1;
                uVar10 = param_1[1];
                iVar5 = local_48c;
              } while ((int)uVar4 < (int)uVar10);
            }
          }
          else {
            if (local_490 == 8) {
              uVar4 = *param_1;
            }
            else {
              if (local_490 != 4) {
                thunk_FUN_10274120(local_48c);
                goto LAB_1016e9fd;
              }
              uVar4 = *param_1 + 1 >> 1;
            }
            uVar10 = param_1[1];
            if (0 < (int)uVar10) {
              local_484 = -uVar4 & 3;
              iVar3 = 0;
              pbVar7 = (byte *)0x0;
              do {
                local_49c = *param_1;
                local_488 = pbVar7;
                if (0 < (int)local_49c) {
                  pbVar7 = (byte *)param_1[0x2b];
                  iVar5 = local_48c + iVar3;
                  uVar10 = local_490;
                  uVar4 = 1;
                  local_494 = pbVar7;
                  do {
                    local_498 = iVar3;
                    if (pbVar7 < (byte *)param_1[0x2c]) {
                      local_494 = pbVar7 + 1;
                      param_1[0x2b] = (uint)local_494;
                      uVar15 = (uint)*pbVar7;
                      pbVar7 = local_494;
                    }
                    else if (param_1[8] == 0) {
                      uVar15 = 0;
                    }
                    else {
                      FUN_10170e8c();
                      local_49c = *param_1;
                      pbVar9 = (byte *)param_1[0x2b];
                      pbVar7 = pbVar9 + 1;
                      param_1[0x2b] = (uint)pbVar7;
                      uVar15 = (uint)*pbVar9;
                      uVar10 = local_490;
                      local_494 = pbVar7;
                    }
                    puVar1 = local_480;
                    iVar3 = local_498;
                    uVar18 = uVar15 >> 4;
                    if (uVar10 != 4) {
                      uVar18 = uVar15;
                    }
                    *(byte *)(iVar5 + -4 + uVar4 * 4) = abStack_414[uVar18 * 4];
                    *(byte *)(iVar5 + -3 + uVar4 * 4) = abStack_414[uVar18 * 4 + 1];
                    *(byte *)(iVar5 + -2 + uVar4 * 4) = abStack_414[uVar18 * 4 + 2];
                    *(undefined1 *)(iVar5 + -1 + uVar4 * 4) = 0xff;
                    if (uVar4 == local_49c) {
                      iVar3 = local_498 + 4;
                      param_1 = local_480;
                      break;
                    }
                    uVar15 = uVar15 & 0xf;
                    if (uVar10 != 4) {
                      uVar15 = 0;
                    }
                    if (uVar10 == 8) {
                      if (local_494 < (byte *)local_480[0x2c]) {
                        pbVar7 = local_494 + 1;
                        local_480[0x2b] = (uint)pbVar7;
                        uVar15 = (uint)*local_494;
                        uVar10 = local_490;
                        local_494 = pbVar7;
                      }
                      else if (local_480[8] == 0) {
                        uVar15 = 0;
                        pbVar7 = local_494;
                      }
                      else {
                        FUN_10170e8c();
                        local_49c = *puVar1;
                        pbVar7 = (byte *)puVar1[0x2b];
                        local_494 = pbVar7 + 1;
                        puVar1[0x2b] = (uint)local_494;
                        uVar15 = (uint)*pbVar7;
                        uVar10 = local_490;
                        pbVar7 = local_494;
                      }
                    }
                    *(byte *)(iVar5 + uVar4 * 4) = abStack_414[uVar15 * 4];
                    *(byte *)(iVar5 + 1 + uVar4 * 4) = abStack_414[uVar15 * 4 + 1];
                    *(byte *)(iVar5 + 2 + uVar4 * 4) = abStack_414[uVar15 * 4 + 2];
                    *(undefined1 *)(iVar5 + 3 + uVar4 * 4) = 0xff;
                    iVar3 = iVar3 + 8;
                    iVar17 = uVar4 + 1;
                    param_1 = local_480;
                    uVar4 = uVar4 + 2;
                  } while (iVar17 < (int)local_49c);
                }
                FUN_10171ace();
                pbVar7 = local_488 + 1;
                uVar10 = param_1[1];
                iVar5 = local_48c;
              } while ((int)pbVar7 < (int)uVar10);
            }
          }
        }
        else {
          FUN_10171ace();
          if (local_490 == 0x10) {
            local_468 = *param_1 * 2 & 2;
LAB_1016ee27:
            if ((local_478 != 0 && local_474 != 0) && local_484 != 0) {
              local_444 = FUN_101736a2();
              local_47c = FUN_10173700();
              local_448 = FUN_101736a2();
              local_464 = FUN_10173700();
              local_44c = FUN_101736a2();
              uVar10 = FUN_10173700();
              local_458 = FUN_101736a2();
              local_45c = FUN_10173700();
              local_454 = 0;
              local_450 = uVar10;
              if ((local_45c < 9 && uVar10 < 9) && (local_464 < 9 && local_47c < 9)) {
                iVar3 = local_444 + -7;
                iVar17 = local_448 + -7;
                iVar14 = local_44c + -7;
                iVar12 = local_458 + -7;
                local_460 = CONCAT31((int3)(local_45c >> 8),1);
                goto LAB_1016ef0e;
              }
            }
            thunk_FUN_10274120(iVar5);
            goto LAB_1016e9fd;
          }
          if (local_490 == 0x20) {
            uVar10 = local_474 ^ 0xff0000 | local_478 ^ 0xff00 | local_484 ^ 0xff;
            local_468 = 0;
            if (((byte)local_47c & uVar10 == 0) != 0) {
              local_454 = CONCAT31((int3)(uVar10 >> 8),1);
              goto LAB_1016ede3;
            }
            goto LAB_1016ee27;
          }
          local_468 = 0;
          if (local_490 != 0x18) goto LAB_1016ee27;
          local_468 = *param_1 & 3;
          local_454 = 0;
LAB_1016ede3:
          local_460 = 0;
          iVar3 = 0;
          iVar17 = 0;
          iVar14 = 0;
          iVar12 = 0;
          local_47c = 0;
          local_464 = 0;
          local_450 = 0;
          local_45c = 0;
LAB_1016ef0e:
          uVar10 = param_1[1];
          if (0 < (int)uVar10) {
            iVar13 = 0;
            iVar8 = 0;
            local_458 = iVar12;
            local_44c = iVar14;
            local_448 = iVar17;
            local_444 = iVar3;
            do {
              local_43c = iVar8;
              if ((char)local_460 == '\0') {
                if (0 < (int)*param_1) {
                  pbVar7 = (byte *)param_1[0x2b];
                  uVar10 = 0;
                  pbVar9 = pbVar7;
                  do {
                    pbVar16 = (byte *)param_1[0x2c];
                    local_49c = uVar10;
                    if (pbVar9 < pbVar16) {
LAB_1016f032:
                      pbVar7 = pbVar9 + 1;
                      param_1[0x2b] = (uint)pbVar7;
                      bVar11 = *pbVar9;
                      pbVar9 = pbVar7;
                    }
                    else {
                      if (param_1[8] != 0) {
                        FUN_10170e8c();
                        pbVar9 = (byte *)param_1[0x2b];
                        pbVar16 = (byte *)param_1[0x2c];
                        goto LAB_1016f032;
                      }
                      bVar11 = 0;
                    }
                    param_1 = local_480;
                    *(byte *)(local_48c + 2 + iVar13) = bVar11;
                    if (pbVar9 < pbVar16) {
LAB_1016f07e:
                      local_494 = pbVar9 + 1;
                      param_1[0x2b] = (uint)local_494;
                      local_498 = CONCAT31((int3)((uint)pbVar9 >> 8),*pbVar9);
                      pbVar9 = local_494;
                    }
                    else {
                      if (local_480[8] != 0) {
                        FUN_10170e8c();
                        pbVar9 = (byte *)param_1[0x2b];
                        pbVar16 = (byte *)param_1[0x2c];
                        goto LAB_1016f07e;
                      }
                      local_498 = 0;
                      local_494 = pbVar7;
                    }
                    uVar10 = local_49c;
                    *(char *)(local_48c + 1 + iVar13) = (char)local_498;
                    if (pbVar9 < pbVar16) {
LAB_1016f0b6:
                      pbVar7 = pbVar9 + 1;
                      param_1[0x2b] = (uint)pbVar7;
                      bVar11 = *pbVar9;
                      pbVar9 = pbVar7;
                    }
                    else {
                      if (param_1[8] != 0) {
                        FUN_10170e8c();
                        pbVar9 = (byte *)param_1[0x2b];
                        goto LAB_1016f0b6;
                      }
                      bVar11 = 0;
                      pbVar7 = local_494;
                    }
                    *(byte *)(local_48c + iVar13) = bVar11;
                    uVar4 = 0xff;
                    if ((char)local_454 != '\0') {
                      if ((byte *)param_1[0x2c] <= pbVar7) {
                        if (param_1[8] == 0) {
                          uVar4 = 0;
                          pbVar9 = pbVar7;
                          goto LAB_1016f0fb;
                        }
                        FUN_10170e8c();
                        pbVar7 = (byte *)param_1[0x2b];
                      }
                      pbVar9 = pbVar7 + 1;
                      param_1[0x2b] = (uint)pbVar9;
                      uVar4 = (uint)*pbVar7;
                      pbVar7 = pbVar9;
                    }
LAB_1016f0fb:
                    local_470 = local_470 | uVar4;
                    *(char *)(local_48c + 3 + iVar13) = (char)uVar4;
                    iVar13 = iVar13 + 4;
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)*param_1);
                }
              }
              else if (0 < (int)*param_1) {
                iVar3 = 0;
                do {
                  if (local_490 == 0x10) {
                    FUN_1017336c();
                  }
                  else {
                    FUN_10173352();
                  }
                  uVar2 = FUN_1017373d(local_47c);
                  iVar5 = local_48c;
                  *(undefined1 *)(local_48c + iVar13) = uVar2;
                  uVar2 = FUN_1017373d(local_464);
                  *(undefined1 *)(iVar5 + 1 + iVar13) = uVar2;
                  uVar2 = FUN_1017373d(local_450);
                  *(undefined1 *)(iVar5 + 2 + iVar13) = uVar2;
                  if (local_488 == (byte *)0x0) {
                    uVar10 = 0xff;
                  }
                  else {
                    uVar10 = FUN_1017373d(local_45c);
                  }
                  local_470 = local_470 | uVar10;
                  *(char *)(local_48c + 3 + iVar13) = (char)uVar10;
                  iVar13 = iVar13 + 4;
                  iVar3 = iVar3 + 1;
                  param_1 = local_480;
                } while (iVar3 < (int)*local_480);
              }
              FUN_10171ace();
              iVar8 = local_43c + 1;
              uVar10 = param_1[1];
              iVar5 = local_48c;
            } while (iVar8 < (int)uVar10);
          }
        }
        if ((local_470 == 0) && (iVar3 = *param_1 * uVar10 * 4, -1 < iVar3 + -1)) {
          uVar4 = iVar3 + 3;
          do {
            *(undefined1 *)(iVar5 + -4 + uVar4) = 0xff;
            uVar4 = uVar4 - 4;
          } while (3 < uVar4);
        }
        iVar3 = iVar5;
        if ((int)local_440 < 1) {
          uVar4 = *param_1;
        }
        else {
          local_470 = (int)uVar10 >> 1;
          uVar4 = *param_1;
          if (0 < (int)local_470) {
            local_49c = uVar4 * 4;
            uVar15 = 1;
            if (1 < (int)local_49c) {
              uVar15 = local_49c;
            }
            iVar17 = iVar5 + (uVar10 - 1) * uVar4 * 4;
            local_498 = uVar4 * -4;
            uVar10 = 0;
            do {
              if (0 < (int)uVar4) {
                uVar18 = 0;
                do {
                  uVar2 = *(undefined1 *)(iVar5 + uVar18);
                  *(undefined1 *)(iVar5 + uVar18) = *(undefined1 *)(iVar17 + uVar18);
                  *(undefined1 *)(iVar17 + uVar18) = uVar2;
                  uVar18 = uVar18 + 1;
                } while (uVar15 != uVar18);
              }
              uVar10 = uVar10 + 1;
              iVar17 = iVar17 + local_498;
              iVar5 = iVar5 + local_49c;
              param_1 = local_480;
              iVar3 = local_48c;
            } while (uVar10 != local_470);
          }
        }
        *local_46c = uVar4;
        *param_3 = param_1[1];
        goto LAB_1016ea04;
      }
    }
LAB_1016e9fd:
    FUN_10170e07();
  }
  iVar3 = 0;
LAB_1016ea04:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_49c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

