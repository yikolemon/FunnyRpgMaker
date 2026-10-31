/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00433ace */

undefined4 __fastcall FUN_00433ace(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  bool bVar20;
  int *local_26c;
  uint local_268;
  uint local_264;
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
  uint *local_214;
  uint local_210;
  byte *local_20c;
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
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  int *local_1cc;
  int local_1c8 [7];
  int local_1ac [51];
  int local_e0 [51];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_26c;
  local_1f0 = (uint *)*param_1;
  local_204 = (uint)((ulonglong)((uint)param_1[0xb] >> 1) * 0x92492493 >> 0x20);
  local_240 = (int *)(&DAT_004de0c0 + local_1f0[3] * 8);
  iVar9 = param_1[9];
  uVar7 = FUN_0042fab9(iVar9);
  if ((char)uVar7 == '\0') {
    local_214 = &local_1d0;
  }
  else {
    local_214 = (uint *)FUN_0042ff7b(iVar9);
  }
  iVar9 = *local_240;
  local_26c = param_1;
  if (iVar9 != 0x159b) {
    local_204 = local_204 >> 2;
    local_1f4 = param_1 + 0xc4;
    local_228 = param_2;
    do {
      bVar2 = (&DAT_004dcb24)[iVar9];
      if (bVar2 != 0) {
        pbVar8 = &DAT_004dcb24 + iVar9;
        local_21c = 0;
        local_218 = 0;
        local_234 = 0;
        local_230 = 0;
joined_r0x00433b90:
        while (bVar2 == 0x20) {
          pbVar1 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar1;
        }
        pbVar8 = (byte *)FUN_0042ffd7(pbVar8,param_1,local_214,&local_1d4);
        local_1d8 = local_1d4;
        if (local_1d4 != 0) {
          local_210 = (uint)*(ushort *)(local_240 + 1);
          local_248 = (local_210 & 1) + 0x7fffffff;
          local_220 = 0;
          local_1ec = local_210 & 4;
          uVar17 = 0;
          local_20c = pbVar8;
LAB_00433c01:
          local_264 = uVar17;
          iVar9 = FUN_00430301((int)param_1,local_214,uVar17,(undefined4 *)0x0,&local_1cc);
          if (((iVar9 != 0) && (iVar9 = FUN_0041d7a9(param_2,iVar9,1), iVar9 == 0)) &&
             (iVar9 = *(int *)(param_2 + 0x54), 2 < *(ushort *)(iVar9 + 0x6e))) {
            uVar17 = (uint)*(ushort *)(iVar9 + 0x6c);
            param_2 = local_228;
            if (uVar17 == 0) {
              iVar9 = 0;
              goto LAB_00433e26;
            }
            local_25c = *(int *)(iVar9 + 0x70);
            local_244 = *(int *)(iVar9 + 0x74);
            local_238 = *(int *)(iVar9 + 0x78);
            iVar9 = 0;
            uVar10 = 0xffffffff;
            local_250 = 0xffffffff;
            local_24c = 0xffffffff;
            uVar16 = uVar10;
            uVar11 = 0;
            do {
              local_254 = uVar11;
              local_268 = uVar10 + 1;
              uVar10 = (uint)*(ushort *)(local_238 + local_254 * 2);
              if ((int)local_268 < (int)uVar10) {
                uVar11 = local_268;
                if ((local_210 & 3) == 0) {
                  do {
                    iVar3 = *(int *)(local_25c + 4 + uVar11 * 8);
                    iVar14 = (int)local_1cc + iVar3;
                    if (((int)uVar16 < 0) || (iVar3 < iVar9)) {
                      iVar9 = iVar3;
                      uVar16 = uVar11;
                      if (iVar14 <= local_230) {
                        local_230 = iVar14;
                      }
                    }
                    else if (local_234 <= iVar14) {
                      local_234 = iVar14;
                    }
                    bVar20 = uVar11 != uVar10;
                    uVar11 = uVar11 + 1;
                  } while (bVar20);
                }
                else {
                  do {
                    iVar3 = *(int *)(local_25c + 4 + uVar11 * 8);
                    iVar14 = (int)local_1cc + iVar3;
                    if (((int)uVar16 < 0) || (iVar9 < iVar3)) {
                      iVar9 = iVar3;
                      uVar16 = uVar11;
                      if (local_234 <= iVar14) {
                        local_234 = iVar14;
                      }
                    }
                    else if (iVar14 <= local_230) {
                      local_230 = iVar14;
                    }
                    bVar20 = uVar11 != uVar10;
                    uVar11 = uVar11 + 1;
                  } while (bVar20);
                }
                local_260 = uVar10;
                if ((int)local_24c < (int)uVar16) {
                  local_250 = local_268;
                  local_24c = uVar10;
                }
              }
              uVar11 = local_254 + 1;
            } while (local_254 + 1 != uVar17);
            param_1 = local_26c;
            if (-1 < (int)uVar16) {
              local_238 = *(int *)(local_25c + uVar16 * 8);
              uVar17 = uVar16;
              local_268 = 0xffffffff;
              local_254 = 0xffffffff;
              if ((*(byte *)(local_244 + uVar16) & 3) == 1) {
                local_268 = uVar16;
                local_254 = uVar16;
              }
              do {
                uVar11 = uVar17 - 1;
                if ((int)uVar17 <= (int)local_250) {
                  uVar11 = local_24c;
                }
                iVar14 = *(int *)(local_25c + 4 + uVar11 * 8);
                uVar10 = iVar9 - iVar14;
                if (iVar9 < iVar14) {
                  uVar10 = iVar14 - iVar9;
                }
                uVar12 = uVar16;
                if (5 < uVar10) {
                  iVar14 = *(int *)(local_25c + uVar11 * 8);
                  uVar15 = local_238 - iVar14;
                  if (local_238 < iVar14) {
                    uVar15 = iVar14 - local_238;
                  }
                  local_260 = uVar17;
                  if (uVar15 <= uVar10 * 0x14) break;
                }
                uVar17 = local_268;
                if ((int)local_268 < 0) {
                  uVar17 = uVar11;
                }
                if ((*(byte *)(local_244 + uVar11) & 3) == 1) {
                  local_268 = uVar17;
                  local_254 = uVar11;
                }
                uVar17 = uVar11;
                local_260 = uVar16;
              } while (uVar11 != uVar16);
              do {
                local_1fc = uVar12 + 1;
                if ((int)local_24c <= (int)uVar12) {
                  local_1fc = local_250;
                }
                iVar14 = *(int *)(local_25c + 4 + local_1fc * 8);
                uVar17 = iVar9 - iVar14;
                if (iVar9 < iVar14) {
                  uVar17 = iVar14 - iVar9;
                }
                if (5 < uVar17) {
                  iVar14 = *(int *)(local_25c + local_1fc * 8);
                  uVar11 = local_238 - iVar14;
                  if (local_238 < iVar14) {
                    uVar11 = iVar14 - local_238;
                  }
                  local_258 = uVar12;
                  if (uVar11 <= uVar17 * 0x14) break;
                }
                uVar17 = local_254;
                if ((int)local_254 < 0) {
                  uVar17 = local_1fc;
                }
                if ((*(byte *)(local_244 + local_1fc) & 3) == 1) {
                  local_268 = local_1fc;
                  local_254 = uVar17;
                }
                uVar12 = local_1fc;
                local_258 = uVar16;
              } while (local_1fc != uVar16);
              uVar17 = local_268;
              uVar11 = local_260;
              uVar10 = local_254;
              if ((local_210 & 0x10) != 0) {
                local_1f8 = local_26c[0xb];
                local_1e4 = local_1f8 / 0x19;
                iVar14 = *(int *)(local_25c + local_258 * 8);
                iVar3 = *(int *)(local_25c + local_260 * 8);
                uVar12 = iVar3 - iVar14;
                if (iVar3 < iVar14) {
                  uVar12 = iVar14 - iVar3;
                }
                if ((uVar12 < local_1e4) &&
                   (uVar12 = uVar16,
                   (int)((local_258 - local_260) + 2) <= (int)(local_24c - local_250))) {
                  do {
                    uVar15 = uVar12 - 1;
                    if ((int)uVar12 <= (int)local_250) {
                      uVar15 = local_24c;
                    }
                    iVar14 = *(int *)(local_25c + uVar15 * 8);
                  } while ((iVar14 == local_238) && (uVar12 = uVar15, uVar15 != uVar16));
                  if (uVar15 == uVar16) goto LAB_00433fef;
                  local_1f8 = local_1f8 >> 2;
                  uVar16 = 0;
                  bVar20 = false;
                  local_22c = 0;
                  uVar12 = local_258;
                  local_224 = local_258;
                  do {
                    local_208 = uVar16;
                    if ((!bVar20) &&
                       (local_224 = uVar12, local_208 = 0xffffffff, local_22c = 0xffffffff,
                       (*(byte *)(local_244 + uVar12) & 3) == 1)) {
                      local_208 = uVar12;
                      local_22c = uVar12;
                    }
                    bVar20 = (int)local_24c <= (int)uVar12;
                    uVar12 = uVar12 + 1;
                    if (bVar20) {
                      uVar12 = local_250;
                    }
                    iVar3 = *(int *)(local_25c + 4 + local_224 * 8);
                    uVar15 = iVar3 - iVar9;
                    if (iVar3 < iVar9) {
                      uVar15 = iVar9 - iVar3;
                    }
                    uVar16 = local_208;
                    if (local_1f8 < uVar15) {
                      bVar20 = false;
                    }
                    else {
                      iVar4 = *(int *)(local_25c + 4 + uVar12 * 8);
                      uVar15 = iVar3 - iVar4;
                      if (iVar3 < iVar4) {
                        uVar15 = iVar4 - iVar3;
                      }
                      local_1dc = *(int *)(local_25c + uVar12 * 8);
                      iVar4 = *(int *)(local_25c + local_224 * 8);
                      uVar19 = iVar4 - local_1dc;
                      if (iVar4 < local_1dc) {
                        uVar19 = local_1dc - iVar4;
                      }
                      uVar6 = uVar15 * 0x14;
                      local_23c = uVar12;
                      local_1e0 = iVar3;
                      if ((uVar15 < 6) || (uVar6 < uVar19)) {
                        uVar15 = local_208;
                        if ((int)local_208 < 0) {
                          uVar15 = uVar12;
                        }
                        if ((*(byte *)(local_244 + uVar12) & 3) == 1) {
                          local_22c = uVar12;
                          uVar16 = uVar15;
                        }
                        bVar20 = true;
                        local_200 = iVar4;
                        local_1e8 = uVar6;
                        if ((iVar4 < local_1dc == iVar14 < local_238) && (local_1e4 <= uVar19))
                        goto LAB_0043418c;
                      }
                      else {
                        bVar20 = false;
                      }
                    }
                  } while (uVar12 != local_260);
                }
              }
              goto LAB_00433f45;
            }
            bVar20 = false;
            local_258 = uVar17;
            goto LAB_00433faa;
          }
          goto LAB_00433fef;
        }
        goto LAB_00434269;
      }
      local_230 = 0;
      local_234 = 0;
      local_218 = 0;
      local_21c = 0;
LAB_00434297:
      uVar16 = local_218;
      uVar17 = local_21c;
      if (local_21c != 0 || local_218 != 0) {
        FUN_00431f60(local_218,(int)local_1ac);
        FUN_00431f60(uVar17,(int)local_e0);
        piVar13 = local_1f4 + param_1[0xc3] * 9;
        param_1[0xc3] = param_1[0xc3] + 1;
        if (uVar17 == 0) {
          iVar9 = *(int *)((int)local_1ac + (uVar16 & 0xfffffffe) * 2);
LAB_00434336:
          piVar13[3] = iVar9;
          *piVar13 = iVar9;
LAB_0043433b:
          uVar17 = (uint)*(ushort *)(local_240 + 1);
        }
        else {
          iVar9 = *(int *)((int)local_e0 + (uVar17 & 0xfffffffe) * 2);
          if (uVar16 == 0) goto LAB_00434336;
          *piVar13 = iVar9;
          iVar14 = *(int *)((int)local_1ac + (uVar16 & 0xfffffffe) * 2);
          piVar13[3] = iVar14;
          if (iVar14 == iVar9) goto LAB_0043433b;
          uVar17 = (uint)*(ushort *)(local_240 + 1);
          if (iVar14 <= iVar9 == ((*(ushort *)(local_240 + 1) & 3) != 0)) {
            iVar9 = (iVar9 + iVar14) / 2;
            piVar13[3] = iVar9;
            *piVar13 = iVar9;
          }
        }
        piVar13[6] = local_234;
        piVar13[7] = local_230;
        uVar16 = (uVar17 & 0x60) + (uVar17 & 7) * 2;
        piVar13[8] = uVar16;
        param_1 = local_26c;
        if ((uVar17 & 8) != 0) {
          piVar13[8] = uVar16 | 0x10;
        }
      }
      iVar9 = local_240[2];
      local_240 = local_240 + 2;
    } while (iVar9 != 0x159b);
  }
  FUN_0042ffa3(param_1[9],local_214);
  uVar17 = param_1[0xc3];
  if (uVar17 == 0) {
    iVar9 = param_1[9];
    uVar17 = *(uint *)(iVar9 + 4);
    uVar7 = 1;
    if (uVar17 != 0) {
      iVar14 = *(int *)(iVar9 + 8);
      uVar16 = 0;
      do {
        if (*local_1f0 == (*(ushort *)(iVar14 + uVar16 * 2) & 0x1fff)) {
          *(undefined2 *)(iVar14 + uVar16 * 2) = 0x42;
          uVar17 = *(uint *)(iVar9 + 4);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar17);
    }
  }
  else {
    piVar13 = param_1 + 0xc4;
    uVar16 = 0;
    do {
      local_1c8[uVar16 - 1] = (int)piVar13;
      uVar16 = uVar16 + 1;
      piVar13 = piVar13 + 9;
    } while (uVar17 != uVar16);
    FUN_0043477c(uVar17,(int)&local_1cc);
    if (uVar17 != 1) {
      uVar16 = 0;
      do {
        iVar9 = 0;
        if ((*(byte *)(local_1cc + 8) & 6) != 0) {
          iVar9 = 0xc;
        }
        piVar13 = (int *)local_1c8[uVar16];
        piVar18 = piVar13 + 3;
        if ((*(byte *)(piVar13 + 8) & 6) == 0) {
          piVar18 = piVar13;
        }
        if (*piVar18 < *(int *)((int)local_1cc + iVar9)) {
          *(int *)((int)local_1cc + iVar9) = *piVar18;
          uVar17 = local_26c[0xc3];
        }
        uVar16 = uVar16 + 1;
        local_1cc = piVar13;
      } while (uVar16 < uVar17 - 1);
    }
    uVar7 = 0;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_26c)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_26c);
  while( true ) {
    uVar17 = uVar16;
    if ((int)uVar16 < 0) {
      uVar17 = uVar15;
    }
    if ((*(byte *)(local_244 + uVar15) & 3) == 1) {
      uVar16 = uVar17;
    }
    uVar12 = uVar15;
    local_22c = uVar15;
    if (uVar15 == local_260) break;
LAB_0043418c:
    uVar15 = uVar12 + 1;
    if ((int)local_24c <= (int)uVar12) {
      uVar15 = local_250;
    }
    iVar9 = *(int *)(local_25c + 4 + uVar15 * 8);
    uVar17 = iVar3 - iVar9;
    if (iVar3 < iVar9) {
      uVar17 = iVar9 - iVar3;
    }
    uVar11 = local_224;
    iVar9 = iVar3;
    if (5 < uVar17) {
      iVar14 = *(int *)(local_25c + local_1fc * 8);
      uVar17 = iVar4 - iVar14;
      if (iVar4 < iVar14) {
        uVar17 = iVar14 - iVar4;
      }
      if (uVar17 <= uVar6) {
        uVar17 = local_22c;
        uVar10 = uVar16;
        local_258 = local_24c;
        if ((int)local_250 < (int)uVar15) {
          local_258 = uVar15 - 1;
        }
        goto LAB_00433f45;
      }
    }
  }
  local_258 = local_260;
  uVar17 = local_260;
  uVar10 = uVar16;
LAB_00433f45:
  iVar9 = iVar9 + (int)local_1cc;
  if (((int)uVar10 < 0) || ((int)uVar17 < 0)) {
LAB_00433f77:
    if ((*(byte *)(local_244 + uVar11) & 3) == 1) {
      bVar20 = (*(byte *)(local_244 + local_258) & 3) != 1;
      if ((bVar20) && ((short)local_1ec != 0)) goto LAB_00433fef;
    }
    else {
      bVar20 = true;
      if ((local_210 & 4) != 0) goto LAB_00433fef;
    }
  }
  else {
    iVar14 = *(int *)(local_25c + uVar17 * 8);
    iVar3 = *(int *)(local_25c + uVar10 * 8);
    uVar17 = iVar3 - iVar14;
    if (iVar3 < iVar14) {
      uVar17 = iVar14 - iVar3;
    }
    if (uVar17 <= local_204) goto LAB_00433f77;
LAB_00433e26:
    bVar20 = false;
  }
LAB_00433faa:
  if ((local_210 & 1) == 0) {
    iVar14 = local_248;
    if (iVar9 < local_248) {
      iVar14 = iVar9;
    }
    bVar5 = iVar9 < local_248;
    local_248 = iVar14;
    local_220 = local_220 & 0xff;
    if (bVar5) {
      local_220 = (uint)bVar20;
    }
  }
  else {
    iVar14 = local_248;
    if (local_248 < iVar9) {
      iVar14 = iVar9;
    }
    bVar5 = local_248 < iVar9;
    local_248 = iVar14;
    local_220 = local_220 & 0xff;
    if (bVar5) {
      local_220 = (uint)bVar20;
    }
  }
LAB_00433fef:
  uVar17 = local_264 + 1;
  if (uVar17 == local_1d8) goto LAB_00434226;
  goto LAB_00433c01;
LAB_00434226:
  pbVar8 = local_20c;
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
LAB_00434269:
  bVar2 = *pbVar8;
  if (bVar2 == 0) goto LAB_00434297;
  goto joined_r0x00433b90;
}

