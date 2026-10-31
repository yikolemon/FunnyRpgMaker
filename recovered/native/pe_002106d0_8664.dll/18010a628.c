/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010a628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18010a628(void)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  byte bVar21;
  char cVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  float *pfVar26;
  bool bVar27;
  int *piVar28;
  longlong lVar29;
  longlong lVar30;
  undefined *puVar31;
  int iVar32;
  bool bVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_108 [32];
  longlong local_e8;
  uint local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  lVar19 = DAT_180419160;
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_d4 = *(uint *)(DAT_180419160 + 0x12f4);
  if ((local_d4 >> 10 & 1) == 0) {
    lVar23 = **(longlong **)(DAT_180419160 + 0x2180);
    local_a8 = 0;
    puVar24 = (undefined8 *)(DAT_180419160 + 0x38);
LAB_18010a889:
    local_b0 = *puVar24;
  }
  else {
    iVar32 = *(int *)(DAT_180419160 + 0x2178);
    if ((longlong)iVar32 != 0) {
      lVar23 = *(longlong *)(DAT_180419160 + 0x2180);
      piVar28 = (int *)0x0;
      lVar29 = 0;
      do {
        piVar4 = *(int **)(lVar23 + lVar29);
        iVar34 = piVar4[0x1c];
        if ((*(code **)(lVar19 + 0xd00) != (code *)0x0) && ((char)iVar34 != '\0')) {
          bVar20 = (**(code **)(lVar19 + 0xd00))(piVar4);
          piVar4[1] = (uint)bVar20 << 0xc | piVar4[1] & 0xffffefffU;
        }
        if ((*(code **)(lVar19 + 0xcf8) != (code *)0x0) && ((char)iVar34 != '\0')) {
          bVar20 = (**(code **)(lVar19 + 0xcf8))(piVar4);
          if (bVar20 != 0) {
            piVar28 = piVar4;
          }
          piVar4[1] = (uint)bVar20 << 0xd | piVar4[1] & 0xffffdfffU;
        }
        lVar29 = lVar29 + 8;
      } while ((longlong)iVar32 * 8 != lVar29);
      if (piVar28 != (int *)0x0) {
        iVar32 = *(int *)(lVar19 + 0x21a0);
        if (iVar32 != *piVar28) {
          if ((*(byte *)(lVar19 + 0x2acd) & 8) != 0) {
            if (*(longlong *)(piVar28 + 0x1e) == 0) {
              puVar31 = &DAT_18036b91b;
            }
            else {
              puVar31 = *(undefined **)(*(longlong *)(piVar28 + 0x1e) + 8);
            }
            FUN_1800fdfea("[viewport] Focused viewport changed %08X -> %08X \'%s\', attempting to apply our focus.\n"
                          ,iVar32,*piVar28,puVar31);
            iVar32 = *(int *)(lVar19 + 0x21a0);
          }
          lVar23 = FUN_18010f8b9(iVar32);
          if (lVar23 == 0) {
            bVar20 = 0;
          }
          else {
            bVar20 = *(byte *)(lVar23 + 0x70);
          }
          if (piVar28[0x22] != *(int *)(lVar19 + 0x21f0)) {
            iVar32 = *(int *)(lVar19 + 0x21f0) + 1;
            *(int *)(lVar19 + 0x21f0) = iVar32;
            piVar28[0x22] = iVar32;
          }
          *(int *)(lVar19 + 0x21a0) = *piVar28;
          bVar21 = FUN_180118e4b();
          if (((bVar20 & (bVar21 ^ 1)) == 1) && (*(char *)(lVar19 + 0x89) == '\x01')) {
            bVar33 = false;
            if (*(longlong *)(lVar19 + 0x2200) != 0) {
              bVar33 = *(int **)(*(longlong *)(lVar19 + 0x2200) + 0x48) == piVar28;
            }
            bVar20 = *(byte *)(piVar28 + 0x2a);
            *(byte *)(piVar28 + 0x2a) = bVar20 | bVar33;
            lVar23 = *(longlong *)(piVar28 + 0x1e);
            if ((lVar23 == 0) && (lVar23 = 0, (bVar20 | bVar33) != 0)) {
              FUN_18010c613(0,0,piVar28,3);
            }
            else {
              FUN_1801080ec(lVar23,3);
            }
          }
        }
        if (*(longlong *)(lVar19 + 0x2200) == 0) {
          bVar33 = false;
        }
        else {
          bVar33 = *(int **)(*(longlong *)(lVar19 + 0x2200) + 0x48) == piVar28;
        }
        *(bool *)(piVar28 + 0x2a) = bVar33;
      }
    }
    lVar23 = **(longlong **)(lVar19 + 0x2180);
    (**(code **)(lVar19 + 0xcd0))(&local_a8,lVar23);
    local_b0 = *(undefined8 *)(lVar19 + 0x38);
    if ((*(byte *)(lVar23 + 5) & 0x10) != 0) {
      local_a8 = *(undefined8 *)(lVar23 + 8);
      puVar24 = (undefined8 *)(lVar23 + 0x10);
      goto LAB_18010a889;
    }
  }
  local_e8 = CONCAT44(local_e8._4_4_,0x804);
  FUN_18011351e(0,0x11111111,&local_a8,&local_b0);
  fVar39 = DAT_1802de564;
  if ((*(char *)(lVar19 + 0x20e1) == '\0') && (0.0 <= *(float *)(lVar19 + 0x98))) {
    fVar39 = (float)*(double *)(lVar19 + 0x18) - *(float *)(lVar19 + 0x98);
  }
  *(undefined4 *)(lVar19 + 0x1330) = 0;
  *(undefined8 *)(lVar19 + 0x2188) = 0;
  *(undefined8 *)(lVar19 + 0x2190) = 0;
  uVar18 = DAT_1802ac570;
  local_d0 = lVar23;
  if (0 < *(int *)(lVar19 + 0x2178)) {
    iVar32 = 0;
    do {
      lVar23 = *(longlong *)(*(longlong *)(lVar19 + 0x2180) + (longlong)iVar32 * 8);
      *(int *)(lVar23 + 0x80) = iVar32;
      if ((iVar32 < 1) || (*(int *)(lVar19 + 4) + -2 <= *(int *)(lVar23 + 0x84))) {
        bVar20 = *(byte *)(lVar23 + 0x70);
        if (((local_d4 >> 10 & 1) != 0) && (((*(byte *)(lVar23 + 5) & 0x10) == 0 & bVar20) == 1)) {
          if (*(char *)(lVar23 + 0x71) == '\x01') {
            (**(code **)(lVar19 + 0xcd0))(&local_c8,lVar23);
            *(undefined8 *)(lVar23 + 0x130) = local_c8;
            *(undefined8 *)(lVar23 + 8) = local_c8;
          }
          if (*(char *)(lVar23 + 0x72) == '\x01') {
            (**(code **)(lVar19 + 0xce0))(&local_c8,lVar23);
            *(undefined8 *)(lVar23 + 0x138) = local_c8;
            *(undefined8 *)(lVar23 + 0x10) = local_c8;
          }
          if (*(code **)(lVar19 + 0xce8) != (code *)0x0) {
            (**(code **)(lVar19 + 0xce8))(&local_c8,lVar23);
            *(undefined8 *)(lVar23 + 0x18) = local_c8;
          }
        }
        FUN_18012f4e4(lVar23);
        fVar38 = (float)*(undefined8 *)(lVar23 + 0x158);
        fVar37 = (float)((ulonglong)*(undefined8 *)(lVar23 + 0x158) >> 0x20);
        *(undefined4 *)(lVar23 + 0x148) = *(undefined4 *)(lVar23 + 0x158);
        *(undefined4 *)(lVar23 + 0x14c) = *(undefined4 *)(lVar23 + 0x15c);
        *(undefined4 *)(lVar23 + 0x150) = *(undefined4 *)(lVar23 + 0x160);
        *(undefined4 *)(lVar23 + 0x154) = *(undefined4 *)(lVar23 + 0x164);
        *(undefined8 *)(lVar23 + 0x158) = 0;
        *(undefined8 *)(lVar23 + 0x160) = 0;
        if ((*(code **)(lVar19 + 0xd40) != (code *)0x0) && (bVar20 != 0)) {
          (**(code **)(lVar19 + 0xd40))(&local_c8,lVar23);
          *(undefined8 *)(lVar23 + 0x158) = local_c8;
          *(undefined8 *)(lVar23 + 0x160) = uStack_c0;
          fVar38 = (float)*(undefined8 *)(lVar23 + 0x148);
          fVar37 = (float)((ulonglong)*(undefined8 *)(lVar23 + 0x148) >> 0x20);
        }
        *(ulonglong *)(lVar23 + 0x20) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar23 + 8) >> 0x20) + fVar37,
                      (float)*(undefined8 *)(lVar23 + 8) + fVar38);
        FUN_18012bf4a(lVar23,&local_c8,lVar23 + 0x148,lVar23 + 0x150);
        *(undefined8 *)(lVar23 + 0x28) = local_c8;
        lVar29 = 0;
        uVar25 = local_c8;
        bVar33 = true;
        do {
          bVar27 = bVar33;
          pfVar1 = (float *)(lVar23 + 0xac + lVar29 * 4);
          if ((*pfVar1 <= fVar39 && fVar39 != *pfVar1) &&
             (*(longlong *)(lVar23 + 0xb8 + lVar29 * 8) != 0)) {
            uVar25 = FUN_18012f547();
            *(undefined8 *)(lVar23 + 0xb8 + lVar29 * 8) = 0;
          }
          lVar29 = 1;
          bVar33 = false;
        } while (bVar27);
        *(undefined4 *)(lVar23 + 0xa0) = 0x3f800000;
        if ((*(byte *)(lVar23 + 5) & 8) != 0) {
          uVar2 = *(undefined8 *)(lVar23 + 8);
          uVar3 = *(undefined8 *)(lVar23 + 0x90);
          iVar34 = -(uint)((float)uVar2 - (float)uVar3 != 0.0);
          iVar36 = -(uint)((float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20) !=
                          0.0);
          auVar6._4_4_ = iVar34;
          auVar6._0_4_ = iVar34;
          auVar6._8_4_ = iVar36;
          auVar6._12_4_ = iVar36;
          iVar34 = movmskpd((int)uVar25,auVar6);
          if (iVar34 != 0) {
            local_e8 = lVar23 + 0x10;
            FUN_18011dd87(lVar23,(undefined8 *)(lVar23 + 0x90),(undefined8 *)(lVar23 + 8),
                          lVar23 + 0x98);
          }
        }
        if ((*(code **)(lVar19 + 0xd30) == (code *)0x0) || (bVar20 == 0)) {
          if ((longlong)*(short *)(lVar23 + 0xaa) == -1) {
            uVar35 = -(uint)(*(float *)(lVar23 + 0x30) != 0.0);
            fVar38 = (float)(~uVar35 & uVar18 | (uint)*(float *)(lVar23 + 0x30) & uVar35);
          }
          else {
            fVar38 = *(float *)(*(longlong *)(lVar19 + 0xd80) + 0x20 +
                               (longlong)*(short *)(lVar23 + 0xaa) * 0x30);
          }
        }
        else {
          fVar38 = (float)(**(code **)(lVar19 + 0xd30))(lVar23);
        }
        fVar37 = *(float *)(lVar23 + 0x30);
        if ((fVar37 != 0.0) || (NAN(fVar37))) {
          if (((fVar38 != fVar37) || (NAN(fVar38) || NAN(fVar37))) &&
             (*(char *)(lVar19 + 0x8b) == '\x01')) {
            FUN_18011e05d(lVar23,fVar38 / fVar37);
          }
        }
        *(float *)(lVar23 + 0x30) = fVar38;
        iVar32 = iVar32 + 1;
      }
      else {
        FUN_18012f40b(lVar23);
      }
    } while (iVar32 < *(int *)(lVar19 + 0x2178));
  }
  lVar23 = local_d0;
  uVar25 = _UNK_1802de748;
  pfVar1 = (float *)(lVar19 + 0x21d8);
  *(undefined8 *)(lVar19 + 0x21d8) = _DAT_1802de740;
  *(undefined8 *)(lVar19 + 0x21e0) = uVar25;
  if (*(int *)(lVar19 + 0xd78) == 0) {
    *(undefined8 *)(lVar19 + 0x21a8) = *(undefined8 *)(local_d0 + 8);
    *(undefined8 *)(lVar19 + 0x21b0) = *(undefined8 *)(local_d0 + 0x10);
    *(undefined8 *)(lVar19 + 0x21b8) = *(undefined8 *)(local_d0 + 0x20);
    *(undefined8 *)(lVar19 + 0x21c0) = *(undefined8 *)(local_d0 + 0x28);
    *(undefined4 *)(lVar19 + 0x21c8) = *(undefined4 *)(local_d0 + 0x30);
    FUN_18012ae82(pfVar1,lVar19 + 0x21b8);
    fVar39 = *(float *)(lVar19 + 0x21bc) + *(float *)(lVar19 + 0x21c4);
    fVar38 = *(float *)(lVar19 + 0x21b8) + *(float *)(lVar19 + 0x21c0);
    if (fVar38 < *(float *)(lVar19 + 0x21d8)) {
      *pfVar1 = fVar38;
    }
    if (fVar39 < *(float *)(lVar19 + 0x21dc)) {
      *(float *)(lVar19 + 0x21dc) = fVar39;
    }
    if (*(float *)(lVar19 + 0x21e0) <= fVar38 && fVar38 != *(float *)(lVar19 + 0x21e0)) {
      *(float *)(lVar19 + 0x21e0) = fVar38;
    }
    if (*(float *)(lVar19 + 0x21e4) <= fVar39 && fVar39 != *(float *)(lVar19 + 0x21e4)) {
      *(float *)(lVar19 + 0x21e4) = fVar39;
    }
  }
  else {
    puVar5 = *(undefined4 **)(lVar19 + 0xd80);
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar9 = puVar5[3];
    uVar10 = puVar5[4];
    uVar11 = puVar5[5];
    uVar12 = puVar5[6];
    uVar13 = puVar5[7];
    uVar14 = puVar5[8];
    uVar15 = puVar5[9];
    uVar16 = puVar5[10];
    uVar17 = puVar5[0xb];
    *(undefined4 *)(lVar19 + 0x21a8) = *puVar5;
    *(undefined4 *)(lVar19 + 0x21ac) = uVar7;
    *(undefined4 *)(lVar19 + 0x21b0) = uVar8;
    *(undefined4 *)(lVar19 + 0x21b4) = uVar9;
    *(undefined4 *)(lVar19 + 0x21b8) = uVar10;
    *(undefined4 *)(lVar19 + 0x21bc) = uVar11;
    *(undefined4 *)(lVar19 + 0x21c0) = uVar12;
    *(undefined4 *)(lVar19 + 0x21c4) = uVar13;
    *(undefined4 *)(lVar19 + 0x21c8) = uVar14;
    *(undefined4 *)(lVar19 + 0x21cc) = uVar15;
    *(undefined4 *)(lVar19 + 0x21d0) = uVar16;
    *(undefined4 *)(lVar19 + 0x21d4) = uVar17;
  }
  if ((longlong)*(int *)(lVar19 + 0xd78) != 0) {
    lVar29 = (longlong)*(int *)(lVar19 + 0xd78) * 0x30;
    pfVar26 = (float *)(*(longlong *)(lVar19 + 0xd80) + 0x10);
    do {
      FUN_18012ae82(pfVar1,pfVar26);
      fVar39 = pfVar26[1] + pfVar26[3];
      fVar38 = *pfVar26 + pfVar26[2];
      if (fVar38 < *pfVar1) {
        *pfVar1 = fVar38;
      }
      if (fVar39 < *(float *)(lVar19 + 0x21dc)) {
        *(float *)(lVar19 + 0x21dc) = fVar39;
      }
      if (*(float *)(lVar19 + 0x21e0) <= fVar38 && fVar38 != *(float *)(lVar19 + 0x21e0)) {
        *(float *)(lVar19 + 0x21e0) = fVar38;
      }
      if (*(float *)(lVar19 + 0x21e4) <= fVar39 && fVar39 != *(float *)(lVar19 + 0x21e4)) {
        *(float *)(lVar19 + 0x21e4) = fVar39;
      }
      pfVar26 = pfVar26 + 0xc;
      lVar29 = lVar29 + -0x30;
    } while (lVar29 != 0);
  }
  if ((local_d4 >> 10 & 1) != 0) {
    if ((*(byte *)(lVar19 + 0x35) & 0x10) == 0) {
LAB_18010ad90:
      lVar29 = FUN_18011e139();
      if (lVar29 != 0) goto LAB_18010adbe;
LAB_18010adcc:
      lVar29 = *(longlong *)(lVar19 + 0x2198);
      bVar33 = true;
      if (lVar29 == 0) {
        lVar29 = **(longlong **)(lVar19 + 0x2180);
        *(longlong *)(lVar19 + 0x2198) = lVar29;
      }
      lVar23 = 0;
    }
    else {
      if ((*(int *)(lVar19 + 0x134) == 0) || (lVar29 = FUN_18010f8b9(), lVar29 == 0))
      goto LAB_18010adcc;
      if ((*(byte *)(lVar29 + 4) & 0x80) != 0) goto LAB_18010ad90;
LAB_18010adbe:
      *(longlong *)(lVar19 + 0x2198) = lVar29;
      bVar33 = false;
      lVar23 = lVar29;
    }
    if ((*(longlong *)(lVar19 + 0x1628) == 0) ||
       (lVar30 = *(longlong *)(*(longlong *)(lVar19 + 0x1628) + 0x48), lVar30 == 0)) {
      lVar30 = lVar29;
    }
    if (*(char *)(lVar19 + 0x2428) == '\0') {
      lVar29 = lVar23;
    }
    if (!bVar33) {
      lVar29 = lVar23;
    }
    *(longlong *)(lVar19 + 0x2190) = lVar30;
    if ((*(char *)(lVar19 + 0x2428) == '\0') && (lVar29 = lVar23, *(int *)(lVar19 + 0x167c) != 0)) {
      cVar22 = FUN_180118e4b();
      if (lVar23 == 0 || cVar22 != '\0') goto LAB_18010ad35;
    }
    else {
      lVar23 = lVar29;
      if (lVar29 == 0) goto LAB_18010ad35;
    }
    if ((lVar23 == lVar30) || ((*(byte *)(lVar23 + 4) & 0x80) != 0)) goto LAB_18010ad35;
  }
  *(longlong *)(lVar19 + 0x2190) = lVar23;
LAB_18010ad35:
  if (DAT_180402640 != (local_a0 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_a0 ^ (ulonglong)auStack_108);
  }
  return;
}

