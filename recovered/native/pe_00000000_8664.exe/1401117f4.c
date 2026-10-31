/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401117f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401117f4(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  ushort uVar8;
  float *pfVar9;
  longlong lVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 uVar22;
  float *pfVar23;
  undefined4 *puVar24;
  sbyte sVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  int *piVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 local_1a8 [38];
  short local_182;
  longlong local_180;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  float local_158 [2];
  undefined8 local_150;
  float afStack_148 [2];
  longlong local_140 [32];
  
  local_140[0xe] = DAT_140f17b40 ^ (ulonglong)local_1a8;
  lVar36 = *(longlong *)(param_1 + 0x1a0);
  sVar7 = *(short *)(param_1 + 0x22a);
  local_182 = *(short *)(param_1 + 0x22e);
  lVar21 = 0;
  do {
    *(undefined8 *)((longlong)local_140 + lVar21) = 0;
    *(undefined8 *)((longlong)local_158 + lVar21) = 0;
    *(undefined8 *)((longlong)afStack_148 + lVar21 + -8) = 0;
    *(undefined4 *)((longlong)afStack_148 + lVar21) = 0;
    lVar21 = lVar21 + 0x20;
  } while (lVar21 != 0x80);
  uVar29 = *(int *)(param_1 + 0x6c) * 2 + 0x23;
  local_178 = (ulonglong)uVar29;
  uVar29 = (int)uVar29 >> 3 & 0xfffffffc;
  iVar19 = uVar29 * 5;
  local_180 = DAT_140f2a910;
  if (*(int *)(DAT_140f2a910 + 0x2cdc) < iVar19) {
    uVar22 = FUN_140077ab4((longlong)iVar19);
    if (*(longlong *)(local_180 + 0x2ce0) != 0) {
      FUN_1401c5180(uVar22,*(longlong *)(local_180 + 0x2ce0),(longlong)*(int *)(local_180 + 0x2cd8))
      ;
      FUN_140077b90(*(undefined8 *)(local_180 + 0x2ce0));
    }
    *(undefined8 *)(local_180 + 0x2ce0) = uVar22;
    *(int *)(local_180 + 0x2cdc) = iVar19;
  }
  else {
    uVar22 = *(undefined8 *)(DAT_140f2a910 + 0x2ce0);
  }
  lVar21 = local_180;
  lVar34 = 0;
  FUN_1401c5830(uVar22,0,(longlong)iVar19);
  uVar18 = _UNK_1402114a8;
  uVar22 = _DAT_1402114a0;
  fVar31 = DAT_1402112e4;
  lVar21 = *(longlong *)(lVar21 + 0x2ce0);
  lVar26 = lVar21;
  do {
    *(longlong *)((longlong)local_140 + lVar34) = lVar26;
    lVar26 = lVar26 + (int)uVar29;
    lVar34 = lVar34 + 0x20;
  } while (lVar34 != 0x80);
  iVar19 = *(int *)(param_1 + 0x6c);
  if (0 < iVar19) {
    lVar21 = lVar21 + (int)(uVar29 << 2);
    uVar35 = 0;
    uVar29 = 0;
    local_170 = lVar36;
    local_168 = param_1;
    local_160 = lVar21;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x58) + (uVar35 >> 5 & 0x7ffffff) * 4) >>
           ((uint)uVar35 & 0x1f) & 1) != 0) {
        lVar21 = uVar35 * 0x74 + *(longlong *)(param_1 + 0x18);
        bVar13 = true;
        do {
          uVar8 = *(ushort *)(lVar21 + 0x62 + (ulonglong)(uint)(byte)~bVar13 * 2);
          iVar19 = *(int *)(*(longlong *)(lVar36 + 0x10) + (ulonglong)uVar8 * 0x20);
          lVar26 = (longlong)iVar19;
          if (0 < lVar26) {
            piVar32 = (int *)(*(longlong *)(lVar36 + 0x10) + (ulonglong)uVar8 * 0x20);
            if ((*(int *)(*(longlong *)(piVar32 + 2) + -0x20 + lVar26 * 0x48) == 0) &&
               (*(longlong *)(*(longlong *)(piVar32 + 2) + lVar26 * 0x48 + -0x18) == 0)) {
              iVar19 = iVar19 + -1;
              *piVar32 = iVar19;
            }
            if (iVar19 == 1) {
              if ((*(byte *)(lVar21 + 1) & 1) == 0) {
                if (sVar7 < 1) {
                  uVar37 = *(undefined4 *)(lVar21 + 0x48);
LAB_140111a3d:
                  fVar38 = (float)FUN_14007b71f(uVar37,*(undefined4 *)(lVar21 + 0x4c));
                  lVar36 = local_170;
                }
                else {
                  if (bVar13) {
                    uVar37 = *(undefined4 *)(lVar21 + 0x44);
                    goto LAB_140111a3d;
                  }
                  fVar38 = *(float *)(lVar21 + 0x48);
                }
                if (*(float *)(lVar21 + 0x2c) <= fVar38 && fVar38 != *(float *)(lVar21 + 0x2c))
                goto LAB_140111b21;
              }
              if (local_182 < 1) {
                uVar20 = 1;
              }
              else {
                uVar20 = (uint)((longlong)*(short *)(local_168 + 0x22e) <= (longlong)uVar35);
              }
              uVar28 = (uint)(byte)~bVar13 * 2;
              if (sVar7 < 1) {
                uVar28 = 2;
              }
              uVar27 = (ulonglong)((uVar28 | uVar20) << 5);
              pfVar23 = (float *)((longlong)local_158 + uVar27);
              iVar19 = *(int *)((longlong)afStack_148 + uVar27);
              if (iVar19 == 0) {
                *(undefined8 *)pfVar23 = uVar22;
                *(undefined8 *)((longlong)afStack_148 + (uVar27 - 8)) = uVar18;
                fVar38 = fVar31;
              }
              else {
                fVar38 = *pfVar23;
              }
              puVar1 = (uint *)(*(longlong *)((longlong)local_140 + uVar27) +
                               (ulonglong)(uVar8 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
              *(int *)((longlong)afStack_148 + uVar27) = iVar19 + 1;
              pfVar9 = *(float **)(piVar32 + 2);
              if (*pfVar9 < fVar38) {
                *pfVar23 = *pfVar9;
              }
              fVar38 = pfVar9[3];
              fVar39 = pfVar9[2];
              if (pfVar9[1] < *(float *)((longlong)local_158 + uVar27 + 4)) {
                *(float *)((longlong)local_158 + uVar27 + 4) = pfVar9[1];
              }
              pfVar23 = (float *)((longlong)afStack_148 + (uVar27 - 8));
              if (*pfVar23 <= fVar39 && fVar39 != *pfVar23) {
                *(float *)((longlong)afStack_148 + (uVar27 - 8)) = fVar39;
              }
              pfVar23 = (float *)((longlong)afStack_148 + (uVar27 - 4));
              if (*pfVar23 <= fVar38 && fVar38 != *pfVar23) {
                *(float *)((longlong)afStack_148 + (uVar27 - 4)) = fVar38;
              }
              uVar29 = uVar29 | 1 << (uVar28 & 0x1f | uVar20);
            }
          }
LAB_140111b21:
          bVar12 = (bool)(0 < sVar7 & bVar13);
          bVar13 = false;
        } while (bVar12);
        *(undefined2 *)(lVar21 + 0x60) = 0xffff;
        iVar19 = *(int *)(local_168 + 0x6c);
        lVar21 = local_160;
        param_1 = local_168;
      }
      uVar35 = uVar35 + 1;
    } while ((longlong)uVar35 < (longlong)iVar19);
    if (uVar29 != 0) {
      iVar30 = *(int *)(lVar36 + 4) + -2;
      iVar19 = *(int *)(local_180 + 0x2554);
      if (iVar19 < iVar30) {
        if (iVar19 == 0) {
          iVar19 = 8;
        }
        else {
          iVar19 = iVar19 / 2 + iVar19;
        }
        if (iVar19 <= iVar30) {
          iVar19 = iVar30;
        }
        puVar24 = (undefined4 *)FUN_140077ab4((longlong)iVar19 << 5);
        if (*(longlong *)(local_180 + 0x2558) != 0) {
          FUN_1401c5180(puVar24,*(longlong *)(local_180 + 0x2558),
                        (longlong)*(int *)(local_180 + 0x2550) << 5);
          FUN_140077b90(*(undefined8 *)(local_180 + 0x2558));
        }
        *(undefined4 **)(local_180 + 0x2558) = puVar24;
        *(int *)(local_180 + 0x2554) = iVar19;
      }
      else {
        puVar24 = *(undefined4 **)(local_180 + 0x2558);
      }
      *(int *)(local_180 + 0x2550) = iVar30;
      iVar19 = *(int *)(lVar36 + 4);
      if (2 < iVar19) {
        uVar29 = 2;
        do {
          sVar25 = ((byte)(iVar19 + -1) & 0x1f) + 1;
          if ((int)(uVar29 | 0x1f) < iVar19 + -1) {
            sVar25 = 0x20;
          }
          puVar1 = (uint *)(lVar21 + (longlong)((int)uVar29 >> 5) * 4);
          *puVar1 = *puVar1 | (~(uint)(-1L << sVar25) >> ((byte)uVar29 & 0x1f)) <<
                              ((byte)uVar29 & 0x1f);
          uVar29 = (uVar29 & 0xffffffe0) + 0x20;
        } while ((int)uVar29 < iVar19);
      }
      bVar11 = (byte)*(ushort *)(param_1 + 0x236) & 0x1f;
      puVar1 = (uint *)(lVar21 + (ulonglong)(*(ushort *)(param_1 + 0x236) >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
      local_170 = CONCAT44(local_170._4_4_,(*(int *)(lVar36 + 4) - (uint)(0 < sVar7)) + -2);
      uVar37 = *(undefined4 *)(param_1 + 0x160);
      uVar4 = *(undefined4 *)(param_1 + 0x164);
      uVar5 = *(undefined4 *)(param_1 + 0x168);
      uVar6 = *(undefined4 *)(param_1 + 0x16c);
      local_178 = (ulonglong)(uint)((int)local_178 >> 5);
      uVar35 = 0;
      do {
        fVar31 = afStack_148[uVar35 * 8];
        if (fVar31 != 0.0) {
          fVar38 = local_158[uVar35 * 8];
          fVar39 = local_158[uVar35 * 8 + 1];
          fVar40 = afStack_148[uVar35 * 8 + -2];
          fVar41 = afStack_148[uVar35 * 8 + -1];
          if (((byte)uVar35 & 0 < local_182) == 0) {
            fVar38 = (float)FUN_14004863e(fVar38,uVar37);
          }
          if (uVar35 < 2 || sVar7 < 1) {
            fVar39 = (float)FUN_14004863e(fVar39,uVar4);
          }
          if ((uVar35 & 1) != 0) {
            fVar40 = (float)FUN_14007b71f(fVar40,uVar5);
          }
          if ((1 < uVar35) && ((*(byte *)(param_1 + 6) & 2) == 0)) {
            fVar41 = (float)FUN_14007b71f(fVar41,uVar6);
          }
          if (0 < (int)local_178) {
            lVar26 = local_140[uVar35 * 4];
            uVar27 = 0;
            do {
              puVar1 = (uint *)(lVar21 + uVar27 * 4);
              *puVar1 = *puVar1 & ~*(uint *)(lVar26 + uVar27 * 4);
              uVar27 = uVar27 + 1;
            } while (local_178 != uVar27);
          }
          local_170 = CONCAT44(local_170._4_4_,(int)local_170 - (int)fVar31);
          iVar19 = *(int *)(lVar36 + 4);
          if (0 < iVar19) {
            lVar26 = local_140[uVar35 * 4];
            lVar34 = 8;
            uVar27 = 0;
            do {
              uVar33 = uVar27 >> 5 & 0x7ffffff;
              uVar29 = *(uint *)(lVar26 + uVar33 * 4);
              if ((uVar29 >> ((uint)uVar27 & 0x1f) & 1) != 0) {
                *(uint *)(lVar26 + uVar33 * 4) = uVar29 & ~(1 << ((byte)uVar27 & 0x1f));
                fVar31 = (float)((int)fVar31 + -1);
                lVar10 = *(longlong *)(lVar36 + 0x10);
                pfVar23 = *(float **)(lVar10 + lVar34);
                *pfVar23 = fVar38;
                pfVar23[1] = fVar39;
                pfVar23[2] = fVar40;
                pfVar23[3] = fVar41;
                puVar2 = (undefined4 *)(lVar10 + -8 + lVar34);
                uVar14 = *puVar2;
                uVar15 = puVar2[1];
                uVar16 = puVar2[2];
                uVar17 = puVar2[3];
                puVar3 = (undefined8 *)(lVar10 + 8 + lVar34);
                uVar22 = puVar3[1];
                *(undefined8 *)(puVar24 + 4) = *puVar3;
                *(undefined8 *)(puVar24 + 6) = uVar22;
                *puVar24 = uVar14;
                puVar24[1] = uVar15;
                puVar24[2] = uVar16;
                puVar24[3] = uVar17;
                puVar24 = puVar24 + 8;
                iVar19 = *(int *)(lVar36 + 4);
              }
              uVar27 = uVar27 + 1;
            } while (((longlong)uVar27 < (longlong)iVar19) &&
                    (lVar34 = lVar34 + 0x20, fVar31 != 0.0));
          }
        }
        if (uVar35 == 1 && 0 < sVar7) {
          lVar26 = (ulonglong)*(ushort *)(param_1 + 0x236) * 0x20;
          puVar2 = (undefined4 *)(*(longlong *)(lVar36 + 0x10) + lVar26);
          uVar14 = *puVar2;
          uVar15 = puVar2[1];
          uVar16 = puVar2[2];
          uVar17 = puVar2[3];
          puVar3 = (undefined8 *)(*(longlong *)(lVar36 + 0x10) + 0x10 + lVar26);
          uVar22 = puVar3[1];
          *(undefined8 *)(puVar24 + 4) = *puVar3;
          *(undefined8 *)(puVar24 + 6) = uVar22;
          *puVar24 = uVar14;
          puVar24[1] = uVar15;
          puVar24[2] = uVar16;
          puVar24[3] = uVar17;
          puVar24 = puVar24 + 8;
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 != 4);
      iVar19 = *(int *)(lVar36 + 4);
      if (0 < iVar19) {
        if ((int)local_170 != 0) {
          uVar35 = 0;
          lVar26 = 0;
          iVar30 = (int)local_170;
          do {
            if ((*(uint *)(lVar21 + (uVar35 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar35 & 0x1f) & 1) !=
                0) {
              puVar2 = (undefined4 *)(*(longlong *)(lVar36 + 0x10) + lVar26);
              uVar37 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar3 = (undefined8 *)(*(longlong *)(lVar36 + 0x10) + 0x10 + lVar26);
              uVar22 = puVar3[1];
              *(undefined8 *)(puVar24 + 4) = *puVar3;
              *(undefined8 *)(puVar24 + 6) = uVar22;
              *puVar24 = uVar37;
              puVar24[1] = uVar4;
              puVar24[2] = uVar5;
              puVar24[3] = uVar6;
              puVar24 = puVar24 + 8;
              iVar30 = iVar30 + -1;
              iVar19 = *(int *)(lVar36 + 4);
            }
            uVar35 = uVar35 + 1;
          } while (((longlong)uVar35 < (longlong)iVar19) && (lVar26 = lVar26 + 0x20, iVar30 != 0));
        }
      }
      if (DAT_140f17b40 == (local_140[0xe] ^ (ulonglong)local_1a8)) {
        FUN_1401c5180(*(longlong *)(lVar36 + 0x10) + 0x40,*(undefined8 *)(local_180 + 0x2558),
                      (longlong)iVar19 * 0x20 + -0x40);
        return;
      }
      goto LAB_140111fba;
    }
  }
  if (DAT_140f17b40 == (local_140[0xe] ^ (ulonglong)local_1a8)) {
    return;
  }
LAB_140111fba:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_140[0xe] ^ (ulonglong)local_1a8);
}

