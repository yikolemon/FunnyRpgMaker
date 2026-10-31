/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10164541 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10164541(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  size_t _Size;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  void *_Dst;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  float10 fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint local_c4;
  undefined4 *local_bc;
  int local_b0;
  float local_74 [4];
  int local_64 [20];
  uint local_14;
  
  iVar22 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&stack0xffffff20;
  iVar8 = *(int *)(param_1 + 0x168);
  sVar5 = *(short *)(param_1 + 0x1de);
  sVar6 = *(short *)(param_1 + 0x1e2);
  local_64[0x10] = 0;
  local_64[0x11] = 0;
  local_64[0x12] = 0;
  local_64[0xc] = 0;
  local_64[0xd] = 0;
  local_64[0xe] = 0;
  local_64[0xf] = 0;
  local_64[8] = 0;
  local_64[9] = 0;
  local_64[10] = 0;
  local_64[0xb] = 0;
  local_64[4] = 0;
  local_64[5] = 0;
  local_64[6] = 0;
  local_64[7] = 0;
  local_64[0] = 0;
  local_64[1] = 0;
  local_64[2] = 0;
  local_64[3] = 0;
  local_74[0] = 0.0;
  local_74[1] = 0.0;
  local_74[2] = 0.0;
  local_74[3] = 0.0;
  iVar21 = *(int *)(param_1 + 0x40) * 2 + 0x23;
  uVar23 = iVar21 >> 3 & 0xfffffffc;
  _Size = uVar23 * 5;
  if (*(int *)(DAT_1039d74c + 0x29a4) < (int)_Size) {
    _Dst = (void *)FUN_100fa1fa();
    if (*(int *)(iVar22 + 0x29a8) != 0) {
      FUN_1025b2d0();
      FUN_100fa2cb();
    }
    *(void **)(iVar22 + 0x29a8) = _Dst;
    *(size_t *)(iVar22 + 0x29a4) = _Size;
  }
  else {
    _Dst = *(void **)(DAT_1039d74c + 0x29a8);
  }
  _memset(_Dst,0,_Size);
  local_64[1] = *(int *)(iVar22 + 0x29a8);
  local_64[7] = local_64[1] + uVar23;
  local_64[0xd] = local_64[1] + uVar23 * 2;
  local_64[0x13] = uVar23 * 3 + local_64[1];
  iVar19 = *(int *)(param_1 + 0x40);
  if (0 < iVar19) {
    iVar1 = local_64[1] + uVar23 * 4;
    uVar23 = 0;
    local_c4 = 0;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x30) + (uVar23 >> 5) * 4) >> (uVar23 & 0x1f) & 1) != 0) {
        iVar19 = uVar23 * 0x74 + *(int *)(param_1 + 0x10);
        bVar14 = true;
        do {
          uVar7 = *(ushort *)(iVar19 + 0x62 + (uint)(byte)~bVar14 * 2);
          iVar15 = *(int *)(*(int *)(iVar8 + 0x10) + (uint)uVar7 * 0x18);
          if (0 < iVar15) {
            piVar2 = (int *)(*(int *)(iVar8 + 0x10) + (uint)uVar7 * 0x18);
            if ((*(int *)(piVar2[2] + -0x18 + iVar15 * 0x40) == 0) &&
               (*(int *)(piVar2[2] + iVar15 * 0x40 + -0x14) == 0)) {
              iVar15 = iVar15 + -1;
              *piVar2 = iVar15;
            }
            if (iVar15 == 1) {
              if ((*(byte *)(iVar19 + 1) & 1) == 0) {
                if (sVar5 < 1) {
                  fVar27 = (float10)FUN_100fdbca();
                  fVar28 = (float)fVar27;
                }
                else if (bVar14) {
                  fVar27 = (float10)FUN_100fdbca();
                  fVar28 = (float)fVar27;
                }
                else {
                  fVar28 = *(float *)(iVar19 + 0x48);
                }
                if (*(float *)(iVar19 + 0x2c) <= fVar28 && fVar28 != *(float *)(iVar19 + 0x2c))
                goto LAB_10164865;
              }
              uVar16 = 1;
              if (0 < sVar6) {
                uVar16 = (uint)((int)*(short *)(param_1 + 0x1e2) <= (int)uVar23);
              }
              uVar24 = (uint)(byte)~bVar14 * 2;
              if (sVar5 < 1) {
                uVar24 = 2;
              }
              uVar25 = uVar24 | uVar16;
              pfVar17 = local_74 + uVar25 * 6;
              iVar15 = local_64[uVar25 * 6];
              if (iVar15 == 0) {
                *pfVar17 = _DAT_102b8bf0;
                local_74[uVar25 * 6 + 1] = _UNK_102b8bf4;
                local_74[uVar25 * 6 + 2] = _UNK_102b8bf8;
                local_74[uVar25 * 6 + 3] = _UNK_102b8bfc;
                fVar28 = DAT_102b89b4;
              }
              else {
                fVar28 = *pfVar17;
              }
              puVar4 = (uint *)(local_64[uVar25 * 6 + 1] + (uint)(uVar7 >> 5) * 4);
              *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
              local_64[uVar25 * 6] = iVar15 + 1;
              pfVar9 = (float *)piVar2[2];
              if (*pfVar9 < fVar28) {
                *pfVar17 = *pfVar9;
              }
              fVar28 = pfVar9[3];
              fVar29 = pfVar9[2];
              if (pfVar9[1] < local_74[uVar25 * 6 + 1]) {
                local_74[uVar25 * 6 + 1] = pfVar9[1];
              }
              if (local_74[uVar25 * 6 + 2] <= fVar29 && fVar29 != local_74[uVar25 * 6 + 2]) {
                local_74[uVar25 * 6 + 2] = fVar29;
              }
              if (local_74[uVar25 * 6 + 3] <= fVar28 && fVar28 != local_74[uVar25 * 6 + 3]) {
                local_74[uVar25 * 6 + 3] = fVar28;
              }
              local_c4 = local_c4 | 1 << (uVar24 | uVar16);
            }
          }
LAB_10164865:
          bVar10 = (bool)(0 < sVar5 & bVar14);
          bVar14 = false;
        } while (bVar10);
        *(undefined2 *)(iVar19 + 0x60) = 0xffff;
        iVar19 = *(int *)(param_1 + 0x40);
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar19);
    if (local_c4 != 0) {
      iVar15 = *(int *)(iVar8 + 4) + -2;
      iVar19 = *(int *)(iVar22 + 0x2350);
      if (iVar19 < iVar15) {
        if (iVar19 == 0) {
          iVar19 = 8;
        }
        else {
          iVar19 = iVar19 / 2 + iVar19;
        }
        if (iVar19 <= iVar15) {
          iVar19 = iVar15;
        }
        local_bc = (undefined4 *)FUN_100fa1fa();
        if (*(int *)(iVar22 + 0x2354) != 0) {
          FUN_1025b2d0();
          FUN_100fa2cb();
        }
        *(undefined4 **)(iVar22 + 0x2354) = local_bc;
        *(int *)(iVar22 + 0x2350) = iVar19;
      }
      else {
        local_bc = *(undefined4 **)(iVar22 + 0x2354);
      }
      *(int *)(iVar22 + 0x234c) = iVar15;
      iVar22 = *(int *)(iVar8 + 4);
      if (2 < iVar22) {
        uVar23 = 2;
        do {
          bVar18 = ((char)iVar22 - 1U & 0x1f) + 1;
          if ((int)(uVar23 | 0x1f) < iVar22 + -1) {
            bVar18 = 0x20;
          }
          uVar16 = -1 << (bVar18 & 0x1f);
          if ((bVar18 & 0x20) != 0) {
            uVar16 = 0;
          }
          puVar4 = (uint *)(iVar1 + ((int)uVar23 >> 5) * 4);
          *puVar4 = *puVar4 | (~uVar16 >> ((byte)uVar23 & 0x1f)) << ((byte)uVar23 & 0x1f);
          uVar23 = (uVar23 & 0xffffffe0) + 0x20;
        } while ((int)uVar23 < iVar22);
      }
      bVar18 = (byte)*(ushort *)(param_1 + 0x1ea) & 0x1f;
      puVar4 = (uint *)(iVar1 + (uint)(*(ushort *)(param_1 + 0x1ea) >> 5) * 4);
      *puVar4 = *puVar4 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
      local_b0 = (*(int *)(iVar8 + 4) - (uint)(0 < sVar5)) + -2;
      iVar21 = iVar21 >> 5;
      uVar23 = 0;
      do {
        iVar22 = local_64[uVar23 * 6];
        if (iVar22 != 0) {
          fVar28 = local_74[uVar23 * 6];
          fVar29 = local_74[uVar23 * 6 + 1];
          fVar30 = local_74[uVar23 * 6 + 2];
          fVar31 = local_74[uVar23 * 6 + 3];
          if (((byte)uVar23 & 0 < sVar6) == 0) {
            fVar27 = (float10)FUN_100ea38a();
            fVar28 = (float)fVar27;
          }
          if (uVar23 < 2 || sVar5 < 1) {
            fVar27 = (float10)FUN_100ea38a();
            fVar29 = (float)fVar27;
          }
          if ((uVar23 & 1) != 0) {
            fVar27 = (float10)FUN_100fdbca();
            fVar30 = (float)fVar27;
          }
          if ((1 < uVar23) && ((*(byte *)(param_1 + 6) & 2) == 0)) {
            fVar27 = (float10)FUN_100fdbca();
            fVar31 = (float)fVar27;
          }
          if (0 < iVar21) {
            iVar19 = local_64[uVar23 * 6 + 1];
            iVar15 = 0;
            do {
              puVar4 = (uint *)(iVar1 + iVar15 * 4);
              *puVar4 = *puVar4 & ~*(uint *)(iVar19 + iVar15 * 4);
              iVar15 = iVar15 + 1;
            } while (iVar21 != iVar15);
          }
          local_b0 = local_b0 - iVar22;
          iVar19 = *(int *)(iVar8 + 4);
          if (0 < iVar19) {
            iVar15 = local_64[uVar23 * 6 + 1];
            iVar20 = 8;
            iVar26 = 1;
            do {
              uVar16 = iVar26 - 1;
              uVar24 = *(uint *)(iVar15 + (uVar16 >> 5) * 4);
              if ((uVar24 >> (uVar16 & 0x1f) & 1) != 0) {
                *(uint *)(iVar15 + (uVar16 >> 5) * 4) = uVar24 & ~(1 << ((byte)uVar16 & 0x1f));
                iVar19 = *(int *)(iVar8 + 0x10);
                pfVar17 = *(float **)(iVar19 + iVar20);
                *pfVar17 = fVar28;
                pfVar17[1] = fVar29;
                pfVar17[2] = fVar30;
                pfVar17[3] = fVar31;
                iVar22 = iVar22 + -1;
                *(undefined8 *)(local_bc + 4) = *(undefined8 *)(iVar19 + 8 + iVar20);
                puVar3 = (undefined4 *)(iVar19 + -8 + iVar20);
                uVar11 = puVar3[1];
                uVar12 = puVar3[2];
                uVar13 = puVar3[3];
                *local_bc = *puVar3;
                local_bc[1] = uVar11;
                local_bc[2] = uVar12;
                local_bc[3] = uVar13;
                local_bc = local_bc + 6;
                iVar19 = *(int *)(iVar8 + 4);
              }
              if (iVar19 <= iVar26) break;
              iVar26 = iVar26 + 1;
              iVar20 = iVar20 + 0x18;
            } while (iVar22 != 0);
          }
        }
        if (uVar23 == 1 && 0 < sVar5) {
          uVar7 = *(ushort *)(param_1 + 0x1ea);
          iVar22 = *(int *)(iVar8 + 0x10);
          *(undefined8 *)(local_bc + 4) = *(undefined8 *)(iVar22 + 0x10 + (uint)uVar7 * 0x18);
          puVar3 = (undefined4 *)(iVar22 + (uint)uVar7 * 0x18);
          uVar11 = puVar3[1];
          uVar12 = puVar3[2];
          uVar13 = puVar3[3];
          *local_bc = *puVar3;
          local_bc[1] = uVar11;
          local_bc[2] = uVar12;
          local_bc[3] = uVar13;
          local_bc = local_bc + 6;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != 4);
      iVar21 = *(int *)(iVar8 + 4);
      if ((0 < iVar21) && (local_b0 != 0)) {
        iVar22 = 1;
        iVar19 = 0;
        do {
          if ((*(uint *)(iVar1 + (iVar22 - 1U >> 5) * 4) >> (iVar22 - 1U & 0x1f) & 1) != 0) {
            iVar21 = *(int *)(iVar8 + 0x10);
            *(undefined8 *)(local_bc + 4) = *(undefined8 *)(iVar21 + 0x10 + iVar19);
            puVar3 = (undefined4 *)(iVar21 + iVar19);
            uVar11 = puVar3[1];
            uVar12 = puVar3[2];
            uVar13 = puVar3[3];
            *local_bc = *puVar3;
            local_bc[1] = uVar11;
            local_bc[2] = uVar12;
            local_bc[3] = uVar13;
            local_bc = local_bc + 6;
            local_b0 = local_b0 + -1;
            iVar21 = *(int *)(iVar8 + 4);
          }
          if (iVar21 <= iVar22) break;
          iVar22 = iVar22 + 1;
          iVar19 = iVar19 + 0x18;
        } while (local_b0 != 0);
      }
      FUN_1025b2d0();
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&stack0xffffff20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

