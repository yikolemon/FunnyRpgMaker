/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dc35e */

undefined4 __fastcall FUN_101dc35e(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int *local_26c;
  uint local_268;
  int local_264;
  uint local_260;
  int local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  int local_248;
  int local_244;
  int *local_240;
  uint local_23c;
  int local_238;
  int local_234;
  int local_230;
  uint local_22c;
  int local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  undefined1 *local_214;
  uint local_210;
  char *local_20c;
  uint local_208;
  uint local_204;
  int local_200;
  uint local_1fc;
  uint local_1f8;
  int *local_1f4;
  uint *local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined1 local_1d0 [4];
  int *local_1cc;
  int local_1c8 [7];
  int local_1ac [51];
  int local_e0 [51];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_26c;
  local_1f0 = (uint *)*param_1;
  local_204 = (uint)((ulonglong)((uint)param_1[0xb] >> 1) * 0x92492493 >> 0x20);
  local_240 = (int *)(&DAT_10309b1c + local_1f0[3] * 8);
  iVar16 = param_1[9];
  cVar7 = FUN_101d8349();
  if (cVar7 == '\0') {
    local_214 = local_1d0;
  }
  else {
    local_214 = (undefined1 *)FUN_101d880b(iVar16);
  }
  iVar16 = *local_240;
  local_26c = param_1;
  if (iVar16 != 0x159b) {
    local_204 = local_204 >> 2;
    local_1f4 = param_1 + 0xc4;
    local_228 = param_2;
    do {
      cVar7 = (&DAT_10308580)[iVar16];
      if (cVar7 != '\0') {
        pcVar8 = &DAT_10308580 + iVar16;
        local_21c = 0;
        local_218 = 0;
        local_234 = 0;
        local_230 = 0;
joined_r0x101dc420:
        while (cVar7 == ' ') {
          pcVar1 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar7 = *pcVar1;
        }
        pcVar8 = (char *)FUN_101d8867(pcVar8,param_1,local_214,&local_1d4);
        local_1d8 = local_1d4;
        if (local_1d4 != 0) {
          local_210 = (uint)*(ushort *)(local_240 + 1);
          local_248 = (local_210 & 1) + 0x7fffffff;
          local_220 = 0;
          local_1ec = local_210 & 4;
          iVar16 = 0;
          local_20c = pcVar8;
LAB_101dc491:
          local_264 = iVar16;
          iVar16 = FUN_101d8b91(param_1,local_214,iVar16,0,&local_1cc);
          if (((iVar16 != 0) && (iVar16 = FUN_101c11b9(param_2,iVar16,1), iVar16 == 0)) &&
             (iVar16 = *(int *)(param_2 + 0x54), 2 < *(ushort *)(iVar16 + 0x6e))) {
            uVar13 = (uint)*(ushort *)(iVar16 + 0x6c);
            param_2 = local_228;
            if (uVar13 == 0) {
              iVar16 = 0;
              goto LAB_101dc6b6;
            }
            local_25c = *(int *)(iVar16 + 0x70);
            local_244 = *(int *)(iVar16 + 0x74);
            local_238 = *(int *)(iVar16 + 0x78);
            iVar16 = 0;
            uVar9 = 0xffffffff;
            local_250 = 0xffffffff;
            local_24c = 0xffffffff;
            uVar19 = uVar9;
            uVar10 = 0;
            do {
              local_254 = uVar10;
              local_268 = uVar9 + 1;
              uVar9 = (uint)*(ushort *)(local_238 + local_254 * 2);
              if ((int)local_268 < (int)uVar9) {
                uVar10 = local_268;
                if ((local_210 & 3) == 0) {
                  do {
                    iVar2 = *(int *)(local_25c + 4 + uVar10 * 8);
                    iVar15 = (int)local_1cc + iVar2;
                    if (((int)uVar19 < 0) || (iVar2 < iVar16)) {
                      iVar16 = iVar2;
                      uVar19 = uVar10;
                      if (iVar15 <= local_230) {
                        local_230 = iVar15;
                      }
                    }
                    else if (local_234 <= iVar15) {
                      local_234 = iVar15;
                    }
                    bVar20 = uVar10 != uVar9;
                    uVar10 = uVar10 + 1;
                  } while (bVar20);
                }
                else {
                  do {
                    iVar2 = *(int *)(local_25c + 4 + uVar10 * 8);
                    iVar15 = (int)local_1cc + iVar2;
                    if (((int)uVar19 < 0) || (iVar16 < iVar2)) {
                      iVar16 = iVar2;
                      uVar19 = uVar10;
                      if (local_234 <= iVar15) {
                        local_234 = iVar15;
                      }
                    }
                    else if (iVar15 <= local_230) {
                      local_230 = iVar15;
                    }
                    bVar20 = uVar10 != uVar9;
                    uVar10 = uVar10 + 1;
                  } while (bVar20);
                }
                local_260 = uVar9;
                if ((int)local_24c < (int)uVar19) {
                  local_250 = local_268;
                  local_24c = uVar9;
                }
              }
              uVar10 = local_254 + 1;
            } while (local_254 + 1 != uVar13);
            param_1 = local_26c;
            if (-1 < (int)uVar19) {
              local_238 = *(int *)(local_25c + uVar19 * 8);
              uVar13 = uVar19;
              local_268 = 0xffffffff;
              local_254 = 0xffffffff;
              if ((*(byte *)(local_244 + uVar19) & 3) == 1) {
                local_268 = uVar19;
                local_254 = uVar19;
              }
              do {
                uVar10 = uVar13 - 1;
                if ((int)uVar13 <= (int)local_250) {
                  uVar10 = local_24c;
                }
                iVar15 = *(int *)(local_25c + 4 + uVar10 * 8);
                uVar9 = iVar16 - iVar15;
                if (iVar16 < iVar15) {
                  uVar9 = iVar15 - iVar16;
                }
                uVar11 = uVar19;
                if (5 < uVar9) {
                  iVar15 = *(int *)(local_25c + uVar10 * 8);
                  uVar14 = local_238 - iVar15;
                  if (local_238 < iVar15) {
                    uVar14 = iVar15 - local_238;
                  }
                  local_260 = uVar13;
                  if (uVar14 <= uVar9 * 0x14) break;
                }
                uVar13 = local_268;
                if ((int)local_268 < 0) {
                  uVar13 = uVar10;
                }
                if ((*(byte *)(local_244 + uVar10) & 3) == 1) {
                  local_268 = uVar13;
                  local_254 = uVar10;
                }
                uVar13 = uVar10;
                local_260 = uVar19;
              } while (uVar10 != uVar19);
              do {
                local_1fc = uVar11 + 1;
                if ((int)local_24c <= (int)uVar11) {
                  local_1fc = local_250;
                }
                iVar15 = *(int *)(local_25c + 4 + local_1fc * 8);
                uVar13 = iVar16 - iVar15;
                if (iVar16 < iVar15) {
                  uVar13 = iVar15 - iVar16;
                }
                if (5 < uVar13) {
                  iVar15 = *(int *)(local_25c + local_1fc * 8);
                  uVar10 = local_238 - iVar15;
                  if (local_238 < iVar15) {
                    uVar10 = iVar15 - local_238;
                  }
                  local_258 = uVar11;
                  if (uVar10 <= uVar13 * 0x14) break;
                }
                uVar13 = local_254;
                if ((int)local_254 < 0) {
                  uVar13 = local_1fc;
                }
                if ((*(byte *)(local_244 + local_1fc) & 3) == 1) {
                  local_268 = local_1fc;
                  local_254 = uVar13;
                }
                uVar11 = local_1fc;
                local_258 = uVar19;
              } while (local_1fc != uVar19);
              uVar13 = local_268;
              uVar10 = local_260;
              uVar9 = local_254;
              if ((local_210 & 0x10) != 0) {
                local_1f8 = local_26c[0xb];
                local_1e4 = local_1f8 / 0x19;
                iVar15 = *(int *)(local_25c + local_258 * 8);
                iVar2 = *(int *)(local_25c + local_260 * 8);
                uVar11 = iVar2 - iVar15;
                if (iVar2 < iVar15) {
                  uVar11 = iVar15 - iVar2;
                }
                if ((uVar11 < local_1e4) &&
                   (uVar11 = uVar19,
                   (int)((local_258 - local_260) + 2) <= (int)(local_24c - local_250))) {
                  do {
                    uVar14 = uVar11 - 1;
                    if ((int)uVar11 <= (int)local_250) {
                      uVar14 = local_24c;
                    }
                    iVar15 = *(int *)(local_25c + uVar14 * 8);
                  } while ((iVar15 == local_238) && (uVar11 = uVar14, uVar14 != uVar19));
                  if (uVar14 == uVar19) goto LAB_101dc87f;
                  local_1f8 = local_1f8 >> 2;
                  uVar19 = 0;
                  bVar20 = false;
                  local_22c = 0;
                  uVar11 = local_258;
                  local_224 = local_258;
                  do {
                    local_208 = uVar19;
                    if ((!bVar20) &&
                       (local_224 = uVar11, local_208 = 0xffffffff, local_22c = 0xffffffff,
                       (*(byte *)(local_244 + uVar11) & 3) == 1)) {
                      local_208 = uVar11;
                      local_22c = uVar11;
                    }
                    bVar20 = (int)local_24c <= (int)uVar11;
                    uVar11 = uVar11 + 1;
                    if (bVar20) {
                      uVar11 = local_250;
                    }
                    iVar2 = *(int *)(local_25c + 4 + local_224 * 8);
                    uVar14 = iVar2 - iVar16;
                    if (iVar2 < iVar16) {
                      uVar14 = iVar16 - iVar2;
                    }
                    uVar19 = local_208;
                    if (local_1f8 < uVar14) {
                      bVar20 = false;
                    }
                    else {
                      iVar3 = *(int *)(local_25c + 4 + uVar11 * 8);
                      uVar14 = iVar2 - iVar3;
                      if (iVar2 < iVar3) {
                        uVar14 = iVar3 - iVar2;
                      }
                      local_1dc = *(int *)(local_25c + uVar11 * 8);
                      iVar3 = *(int *)(local_25c + local_224 * 8);
                      uVar18 = iVar3 - local_1dc;
                      if (iVar3 < local_1dc) {
                        uVar18 = local_1dc - iVar3;
                      }
                      uVar6 = uVar14 * 0x14;
                      local_23c = uVar11;
                      local_1e0 = iVar2;
                      if ((uVar14 < 6) || (uVar6 < uVar18)) {
                        uVar14 = local_208;
                        if ((int)local_208 < 0) {
                          uVar14 = uVar11;
                        }
                        if ((*(byte *)(local_244 + uVar11) & 3) == 1) {
                          local_22c = uVar11;
                          uVar19 = uVar14;
                        }
                        bVar20 = true;
                        local_200 = iVar3;
                        local_1e8 = uVar6;
                        if ((iVar3 < local_1dc == iVar15 < local_238) && (local_1e4 <= uVar18))
                        goto LAB_101dca1c;
                      }
                      else {
                        bVar20 = false;
                      }
                    }
                  } while (uVar11 != local_260);
                }
              }
              goto LAB_101dc7d5;
            }
            bVar20 = false;
            local_258 = uVar13;
            goto LAB_101dc83a;
          }
          goto LAB_101dc87f;
        }
        goto LAB_101dcaf9;
      }
      local_230 = 0;
      local_234 = 0;
      local_218 = 0;
      local_21c = 0;
LAB_101dcb27:
      uVar19 = local_218;
      uVar13 = local_21c;
      if (local_21c != 0 || local_218 != 0) {
        FUN_101da7f0();
        FUN_101da7f0();
        piVar4 = local_1f4 + param_1[0xc3] * 9;
        param_1[0xc3] = param_1[0xc3] + 1;
        if (uVar13 == 0) {
          iVar16 = *(int *)((int)local_1ac + (uVar19 & 0xfffffffe) * 2);
LAB_101dcbc6:
          piVar4[3] = iVar16;
          *piVar4 = iVar16;
LAB_101dcbcb:
          uVar13 = (uint)*(ushort *)(local_240 + 1);
        }
        else {
          iVar16 = *(int *)((int)local_e0 + (uVar13 & 0xfffffffe) * 2);
          if (uVar19 == 0) goto LAB_101dcbc6;
          *piVar4 = iVar16;
          iVar15 = *(int *)((int)local_1ac + (uVar19 & 0xfffffffe) * 2);
          piVar4[3] = iVar15;
          if (iVar15 == iVar16) goto LAB_101dcbcb;
          uVar13 = (uint)*(ushort *)(local_240 + 1);
          if (iVar15 <= iVar16 == ((*(ushort *)(local_240 + 1) & 3) != 0)) {
            iVar16 = (iVar16 + iVar15) / 2;
            piVar4[3] = iVar16;
            *piVar4 = iVar16;
          }
        }
        piVar4[6] = local_234;
        piVar4[7] = local_230;
        uVar19 = (uVar13 & 0x60) + (uVar13 & 7) * 2;
        piVar4[8] = uVar19;
        param_1 = local_26c;
        if ((uVar13 & 8) != 0) {
          piVar4[8] = uVar19 | 0x10;
        }
      }
      iVar16 = local_240[2];
      local_240 = local_240 + 2;
    } while (iVar16 != 0x159b);
  }
  FUN_101d8833(param_1[9],local_214);
  iVar16 = param_1[0xc3];
  if (iVar16 == 0) {
    iVar16 = param_1[9];
    uVar13 = *(uint *)(iVar16 + 4);
    uVar12 = 1;
    if (uVar13 != 0) {
      iVar15 = *(int *)(iVar16 + 8);
      uVar19 = 0;
      do {
        if (*local_1f0 == (*(ushort *)(iVar15 + uVar19 * 2) & 0x1fff)) {
          *(undefined2 *)(iVar15 + uVar19 * 2) = 0x42;
          uVar13 = *(uint *)(iVar16 + 4);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar13);
    }
  }
  else {
    param_1 = param_1 + 0xc4;
    iVar15 = 0;
    do {
      local_1c8[iVar15 + -1] = (int)param_1;
      iVar15 = iVar15 + 1;
      param_1 = param_1 + 9;
    } while (iVar16 != iVar15);
    FUN_101dd00c();
    if (iVar16 != 1) {
      uVar13 = 0;
      do {
        iVar15 = 0;
        if ((*(byte *)(local_1cc + 8) & 6) != 0) {
          iVar15 = 0xc;
        }
        piVar4 = (int *)local_1c8[uVar13];
        piVar17 = piVar4 + 3;
        if ((*(byte *)(piVar4 + 8) & 6) == 0) {
          piVar17 = piVar4;
        }
        if (*piVar17 < *(int *)((int)local_1cc + iVar15)) {
          *(int *)((int)local_1cc + iVar15) = *piVar17;
          iVar16 = local_26c[0xc3];
        }
        uVar13 = uVar13 + 1;
        local_1cc = piVar4;
      } while (uVar13 < iVar16 - 1U);
    }
    uVar12 = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_26c)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
  while( true ) {
    uVar13 = uVar19;
    if ((int)uVar19 < 0) {
      uVar13 = uVar14;
    }
    if ((*(byte *)(local_244 + uVar14) & 3) == 1) {
      uVar19 = uVar13;
    }
    uVar11 = uVar14;
    local_22c = uVar14;
    if (uVar14 == local_260) break;
LAB_101dca1c:
    uVar14 = uVar11 + 1;
    if ((int)local_24c <= (int)uVar11) {
      uVar14 = local_250;
    }
    iVar16 = *(int *)(local_25c + 4 + uVar14 * 8);
    uVar13 = iVar2 - iVar16;
    if (iVar2 < iVar16) {
      uVar13 = iVar16 - iVar2;
    }
    uVar10 = local_224;
    iVar16 = iVar2;
    if (5 < uVar13) {
      iVar15 = *(int *)(local_25c + local_1fc * 8);
      uVar13 = iVar3 - iVar15;
      if (iVar3 < iVar15) {
        uVar13 = iVar15 - iVar3;
      }
      if (uVar13 <= uVar6) {
        uVar13 = local_22c;
        uVar9 = uVar19;
        local_258 = local_24c;
        if ((int)local_250 < (int)uVar14) {
          local_258 = uVar14 - 1;
        }
        goto LAB_101dc7d5;
      }
    }
  }
  local_258 = local_260;
  uVar13 = local_260;
  uVar9 = uVar19;
LAB_101dc7d5:
  iVar16 = iVar16 + (int)local_1cc;
  if (((int)uVar9 < 0) || ((int)uVar13 < 0)) {
LAB_101dc807:
    if ((*(byte *)(local_244 + uVar10) & 3) == 1) {
      bVar20 = (*(byte *)(local_244 + local_258) & 3) != 1;
      if ((bVar20) && ((short)local_1ec != 0)) goto LAB_101dc87f;
    }
    else {
      bVar20 = true;
      if ((local_210 & 4) != 0) goto LAB_101dc87f;
    }
  }
  else {
    iVar15 = *(int *)(local_25c + uVar13 * 8);
    iVar2 = *(int *)(local_25c + uVar9 * 8);
    uVar13 = iVar2 - iVar15;
    if (iVar2 < iVar15) {
      uVar13 = iVar15 - iVar2;
    }
    if (uVar13 <= local_204) goto LAB_101dc807;
LAB_101dc6b6:
    bVar20 = false;
  }
LAB_101dc83a:
  if ((local_210 & 1) == 0) {
    iVar15 = local_248;
    if (iVar16 < local_248) {
      iVar15 = iVar16;
    }
    bVar5 = iVar16 < local_248;
    local_248 = iVar15;
    local_220 = local_220 & 0xff;
    if (bVar5) {
      local_220 = (uint)bVar20;
    }
  }
  else {
    iVar15 = local_248;
    if (local_248 < iVar16) {
      iVar15 = iVar16;
    }
    bVar5 = local_248 < iVar16;
    local_248 = iVar15;
    local_220 = local_220 & 0xff;
    if (bVar5) {
      local_220 = (uint)bVar20;
    }
  }
LAB_101dc87f:
  iVar16 = local_264 + 1;
  if (iVar16 == local_1d8) goto LAB_101dcab6;
  goto LAB_101dc491;
LAB_101dcab6:
  pcVar8 = local_20c;
  if (1 < local_248 + 0x80000001U) {
    if ((char)local_220 == '\0') {
      local_e0[local_21c] = local_248;
      local_21c = local_21c + 1;
    }
    else {
      local_1ac[local_218] = local_248;
      local_218 = local_218 + 1;
    }
  }
LAB_101dcaf9:
  cVar7 = *pcVar8;
  if (cVar7 == '\0') goto LAB_101dcb27;
  goto joined_r0x101dc420;
}

