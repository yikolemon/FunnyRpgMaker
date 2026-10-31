/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101058f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101058f6(void)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  byte bVar14;
  char cVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined *puVar18;
  bool bVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  bool bVar23;
  float10 fVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  float fVar28;
  float fVar29;
  int local_60;
  int *local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int *local_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  local_50 = *(uint *)(DAT_1039d74c + 0x120c);
  local_60 = DAT_1039d74c;
  if ((local_50 >> 10 & 1) == 0) {
    local_4c = (int *)(DAT_1039d74c + 0x1fe8);
    iVar20 = **(int **)(DAT_1039d74c + 0x1fe8);
    local_1c = 0;
    puVar16 = (undefined8 *)(DAT_1039d74c + 0x38);
LAB_10105b4d:
    local_24 = *puVar16;
    local_54 = iVar20;
  }
  else {
    iVar20 = DAT_1039d74c;
    if (*(int *)(DAT_1039d74c + 0x1fe0) != 0) {
      local_48 = *(float *)(DAT_1039d74c + 0x1fe8);
      iVar22 = *(int *)(DAT_1039d74c + 0x1fe0) << 2;
      local_5c = (int *)0x0;
      iVar17 = 0;
      local_58 = iVar22;
      do {
        piVar27 = *(int **)((int)local_48 + iVar17);
        iVar26 = piVar27[0x15];
        if ((*(code **)(iVar20 + 0xc60) != (code *)0x0) && ((char)iVar26 != '\0')) {
          uVar25 = (**(code **)(iVar20 + 0xc60))(piVar27);
          piVar27[1] = (uVar25 & 0xff) << 0xc | piVar27[1] & 0xffffefffU;
          iVar22 = local_58;
          iVar20 = local_60;
        }
        if ((*(code **)(iVar20 + 0xc5c) != (code *)0x0) && ((char)iVar26 != '\0')) {
          bVar13 = (**(code **)(iVar20 + 0xc5c))(piVar27);
          if (bVar13 != 0) {
            local_5c = piVar27;
          }
          piVar27[1] = (uint)bVar13 << 0xd | piVar27[1] & 0xffffdfffU;
          iVar22 = local_58;
          iVar20 = local_60;
        }
        piVar27 = local_5c;
        iVar17 = iVar17 + 4;
      } while (iVar22 != iVar17);
      if (local_5c != (int *)0x0) {
        iVar22 = *(int *)(iVar20 + 0x1ff8);
        if (iVar22 != *local_5c) {
          if ((*(byte *)(iVar20 + 0x27b5) & 8) != 0) {
            if (local_5c[0x16] == 0) {
              puVar18 = &DAT_1033b7f1;
            }
            else {
              puVar18 = *(undefined **)(local_5c[0x16] + 4);
            }
            FUN_100f99e6("[viewport] Focused viewport changed %08X -> %08X \'%s\', attempting to apply our focus.\n"
                         ,iVar22,*local_5c,puVar18);
            iVar22 = *(int *)(local_60 + 0x1ff8);
          }
          iVar20 = FUN_1010ad03(iVar22);
          if (iVar20 == 0) {
            bVar13 = 0;
          }
          else {
            bVar13 = *(byte *)(iVar20 + 0x54);
          }
          if (piVar27[0x19] != *(int *)(local_60 + 0x203c)) {
            iVar20 = *(int *)(local_60 + 0x203c) + 1;
            *(int *)(local_60 + 0x203c) = iVar20;
            piVar27[0x19] = iVar20;
          }
          *(int *)(local_60 + 0x1ff8) = *piVar27;
          bVar14 = FUN_10114036();
          iVar20 = local_60;
          if (((bVar13 & (bVar14 ^ 1)) == 1) && (*(char *)(local_60 + 0x75) == '\x01')) {
            bVar23 = false;
            if (*(int *)(local_60 + 0x2048) != 0) {
              bVar23 = *(int **)(*(int *)(local_60 + 0x2048) + 0x3c) == piVar27;
            }
            bVar13 = *(byte *)(piVar27 + 0x21);
            *(byte *)(piVar27 + 0x21) = bVar13 | bVar23;
            if (piVar27[0x16] == 0) {
              if ((bVar13 | bVar23) == 0) {
                FUN_101034e2(0,3);
                iVar20 = local_60;
              }
              else {
                FUN_10107908(0,0,piVar27,3);
                iVar20 = local_60;
              }
            }
            else {
              FUN_101034e2(piVar27[0x16],3);
              iVar20 = local_60;
            }
          }
        }
        if (*(int *)(iVar20 + 0x2048) == 0) {
          bVar23 = false;
        }
        else {
          bVar23 = *(int **)(*(int *)(iVar20 + 0x2048) + 0x3c) == piVar27;
        }
        *(bool *)(piVar27 + 0x21) = bVar23;
      }
    }
    local_4c = (int *)(iVar20 + 0x1fe8);
    iVar20 = **(int **)(iVar20 + 0x1fe8);
    (**(code **)(local_60 + 0xc48))(&local_1c,iVar20);
    local_24 = *(undefined8 *)(local_60 + 0x38);
    local_54 = iVar20;
    if ((*(byte *)(iVar20 + 5) & 0x10) != 0) {
      local_1c = *(undefined8 *)(iVar20 + 8);
      puVar16 = (undefined8 *)(iVar20 + 0x10);
      goto LAB_10105b4d;
    }
  }
  iVar20 = local_60;
  FUN_1010e792(&local_1c,&local_24,0x804);
  local_5c = (int *)DAT_102b89b4;
  if ((*(char *)(iVar20 + 0x1f6d) == '\0') && (0.0 <= *(float *)(iVar20 + 0x84))) {
    local_5c = (int *)((float)*(double *)(iVar20 + 0x18) - *(float *)(iVar20 + 0x84));
  }
  *(undefined4 *)(iVar20 + 0x1238) = 0;
  *(undefined4 *)(iVar20 + 0x1fec) = 0;
  *(undefined4 *)(iVar20 + 0x1ff0) = 0;
  if (0 < *(int *)(iVar20 + 0x1fe0)) {
    iVar20 = 0;
    do {
      iVar22 = *(int *)(*local_4c + iVar20 * 4);
      *(int *)(iVar22 + 0x5c) = iVar20;
      if ((iVar20 < 1) || (*(int *)(local_60 + 4) + -2 <= *(int *)(iVar22 + 0x60))) {
        local_48 = (float)CONCAT31(local_48._1_3_,*(byte *)(iVar22 + 0x54));
        if (((local_50 >> 10 & 1) != 0) &&
           (((*(byte *)(iVar22 + 5) & 0x10) == 0 & *(byte *)(iVar22 + 0x54)) == 1)) {
          if (*(char *)(iVar22 + 0x55) == '\x01') {
            (**(code **)(local_60 + 0xc48))(&local_34,iVar22);
            *(undefined4 *)(iVar22 + 0xec) = uStack_30;
            *(undefined4 *)(iVar22 + 0xe8) = local_34;
            *(undefined4 *)(iVar22 + 0xc) = uStack_30;
            *(undefined4 *)(iVar22 + 8) = local_34;
          }
          if (*(char *)(iVar22 + 0x56) == '\x01') {
            (**(code **)(local_60 + 0xc50))(&local_34,iVar22);
            *(undefined4 *)(iVar22 + 0xf4) = uStack_30;
            *(undefined4 *)(iVar22 + 0xf0) = local_34;
            *(undefined4 *)(iVar22 + 0x14) = uStack_30;
            *(undefined4 *)(iVar22 + 0x10) = local_34;
          }
          if (*(code **)(local_60 + 0xc54) != (code *)0x0) {
            (**(code **)(local_60 + 0xc54))(&local_34,iVar22);
            *(ulonglong *)(iVar22 + 0x18) = CONCAT44(uStack_30,local_34);
          }
        }
        FUN_101293f2();
        fVar28 = *(float *)(iVar22 + 0x110);
        fVar29 = *(float *)(iVar22 + 0x114);
        *(float *)(iVar22 + 0x100) = fVar28;
        *(float *)(iVar22 + 0x104) = fVar29;
        *(undefined4 *)(iVar22 + 0x108) = *(undefined4 *)(iVar22 + 0x118);
        *(undefined4 *)(iVar22 + 0x10c) = *(undefined4 *)(iVar22 + 0x11c);
        *(undefined4 *)(iVar22 + 0x110) = 0;
        *(undefined4 *)(iVar22 + 0x114) = 0;
        *(undefined4 *)(iVar22 + 0x118) = 0;
        *(undefined4 *)(iVar22 + 0x11c) = 0;
        local_58 = iVar20;
        if ((*(code **)(local_60 + 0xc80) != (code *)0x0) && (local_48._0_1_ != '\0')) {
          (**(code **)(local_60 + 0xc80))(&local_34,iVar22);
          *(undefined4 *)(iVar22 + 0x110) = local_34;
          *(undefined4 *)(iVar22 + 0x114) = uStack_30;
          *(undefined4 *)(iVar22 + 0x118) = uStack_2c;
          *(undefined4 *)(iVar22 + 0x11c) = uStack_28;
          fVar28 = (float)*(undefined8 *)(iVar22 + 0x100);
          fVar29 = (float)((ulonglong)*(undefined8 *)(iVar22 + 0x100) >> 0x20);
        }
        *(ulonglong *)(iVar22 + 0x20) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(iVar22 + 8) >> 0x20) + fVar29,
                      (float)*(undefined8 *)(iVar22 + 8) + fVar28);
        FUN_10126046(&local_34,iVar22 + 0x100,iVar22 + 0x108);
        *(ulonglong *)(iVar22 + 0x28) = CONCAT44(uStack_30,local_34);
        iVar17 = 0;
        piVar27 = local_5c;
        bVar23 = true;
        do {
          bVar19 = bVar23;
          pfVar1 = (float *)(iVar22 + 0x88 + iVar17 * 4);
          if ((*pfVar1 <= (float)piVar27 && (float)piVar27 != *pfVar1) &&
             (iVar20 = *(int *)(iVar22 + 0x90 + iVar17 * 4), iVar20 != 0)) {
            FUN_10129444(iVar20);
            *(undefined4 *)(iVar22 + 0x90 + iVar17 * 4) = 0;
            piVar27 = local_5c;
          }
          iVar20 = local_58;
          iVar17 = 1;
          bVar23 = false;
        } while (bVar19);
        *(undefined4 *)(iVar22 + 0x7c) = 0x3f800000;
        if ((*(byte *)(iVar22 + 5) & 8) != 0) {
          uVar2 = *(undefined8 *)(iVar22 + 8);
          uVar3 = *(undefined8 *)(iVar22 + 0x6c);
          iVar17 = -(uint)((float)uVar2 - (float)uVar3 != 0.0);
          iVar26 = -(uint)((float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20) !=
                          0.0);
          auVar5._4_4_ = iVar17;
          auVar5._0_4_ = iVar17;
          auVar5._8_4_ = iVar26;
          auVar5._12_4_ = iVar26;
          iVar17 = movmskpd((undefined8 *)(iVar22 + 8),auVar5);
          if (iVar17 != 0) {
            FUN_10118d63(iVar22,(undefined8 *)(iVar22 + 0x6c),iVar22 + 8,iVar22 + 0x74,iVar22 + 0x10
                        );
          }
        }
        if ((*(code **)(local_60 + 0xc78) == (code *)0x0) || (local_48._0_1_ == '\0')) {
          if (*(short *)(iVar22 + 0x86) == -1) {
            uVar25 = -(uint)(*(float *)(iVar22 + 0x30) != 0.0);
            fVar28 = (float)(~uVar25 & DAT_1028b430 | (uint)*(float *)(iVar22 + 0x30) & uVar25);
          }
          else {
            fVar28 = *(float *)(*(int *)(local_60 + 0xca4) + 0x20 + *(short *)(iVar22 + 0x86) * 0x28
                               );
          }
        }
        else {
          fVar24 = (float10)(**(code **)(local_60 + 0xc78))(iVar22);
          fVar28 = (float)fVar24;
          fStack_38 = fVar28;
        }
        fVar29 = *(float *)(iVar22 + 0x30);
        if ((fVar29 != 0.0) || (NAN(fVar29))) {
          if (((fVar28 != fVar29) || (NAN(fVar28) || NAN(fVar29))) &&
             (*(char *)(local_60 + 0x77) == '\x01')) {
            uStack_44 = 0;
            uStack_40 = 0;
            uStack_3c = 0;
            local_48 = fVar28;
            FUN_10119019(iVar22,fVar28 / fVar29);
            fVar28 = local_48;
          }
        }
        *(float *)(iVar22 + 0x30) = fVar28;
        iVar20 = iVar20 + 1;
      }
      else {
        FUN_10129335();
      }
    } while (iVar20 < *(int *)(local_60 + 0x1fe0));
  }
  iVar20 = local_60;
  uVar8 = _UNK_102b8bfc;
  uVar7 = _UNK_102b8bf8;
  uVar6 = _UNK_102b8bf4;
  pfVar1 = (float *)(local_60 + 0x2024);
  *(undefined4 *)(local_60 + 0x2024) = _DAT_102b8bf0;
  *(undefined4 *)(local_60 + 0x2028) = uVar6;
  *(undefined4 *)(local_60 + 0x202c) = uVar7;
  *(undefined4 *)(local_60 + 0x2030) = uVar8;
  if (*(int *)(local_60 + 0xc9c) == 0) {
    *(undefined8 *)(local_60 + 0x1ffc) = *(undefined8 *)(local_54 + 8);
    *(undefined8 *)(local_60 + 0x2004) = *(undefined8 *)(local_54 + 0x10);
    *(undefined8 *)(local_60 + 0x200c) = *(undefined8 *)(local_54 + 0x20);
    *(undefined8 *)(local_60 + 0x2014) = *(undefined8 *)(local_54 + 0x28);
    *(undefined4 *)(local_60 + 0x201c) = *(undefined4 *)(local_54 + 0x30);
    FUN_101250a4(local_60 + 0x200c);
    fVar28 = *(float *)(iVar20 + 0x2010) + *(float *)(iVar20 + 0x2018);
    fVar29 = *(float *)(iVar20 + 0x200c) + *(float *)(iVar20 + 0x2014);
    if (fVar29 < *(float *)(iVar20 + 0x2024)) {
      *pfVar1 = fVar29;
    }
    if (fVar28 < *(float *)(iVar20 + 0x2028)) {
      *(float *)(iVar20 + 0x2028) = fVar28;
    }
    if (*(float *)(iVar20 + 0x202c) <= fVar29 && fVar29 != *(float *)(iVar20 + 0x202c)) {
      *(float *)(iVar20 + 0x202c) = fVar29;
    }
    if (*(float *)(iVar20 + 0x2030) <= fVar28 && fVar28 != *(float *)(iVar20 + 0x2030)) {
      *(float *)(iVar20 + 0x2030) = fVar28;
    }
  }
  else {
    puVar4 = *(undefined4 **)(local_60 + 0xca4);
    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    uVar8 = puVar4[3];
    uVar9 = puVar4[4];
    uVar10 = puVar4[5];
    uVar11 = puVar4[6];
    uVar12 = puVar4[7];
    *(undefined4 *)(local_60 + 0x1ffc) = *puVar4;
    *(undefined4 *)(local_60 + 0x2000) = uVar6;
    *(undefined4 *)(local_60 + 0x2004) = uVar7;
    *(undefined4 *)(local_60 + 0x2008) = uVar8;
    *(undefined4 *)(local_60 + 0x200c) = uVar9;
    *(undefined4 *)(local_60 + 0x2010) = uVar10;
    *(undefined4 *)(local_60 + 0x2014) = uVar11;
    *(undefined4 *)(local_60 + 0x2018) = uVar12;
    *(undefined8 *)(local_60 + 0x201c) = *(undefined8 *)(puVar4 + 8);
  }
  if (*(int *)(iVar20 + 0xc9c) != 0) {
    iVar22 = *(int *)(iVar20 + 0xc9c) * 0x28;
    pfVar21 = (float *)(*(int *)(iVar20 + 0xca4) + 0x10);
    do {
      FUN_101250a4(pfVar21);
      fVar28 = pfVar21[1] + pfVar21[3];
      fVar29 = *pfVar21 + pfVar21[2];
      if (fVar29 < *pfVar1) {
        *pfVar1 = fVar29;
      }
      if (fVar28 < *(float *)(iVar20 + 0x2028)) {
        *(float *)(iVar20 + 0x2028) = fVar28;
      }
      if (*(float *)(iVar20 + 0x202c) <= fVar29 && fVar29 != *(float *)(iVar20 + 0x202c)) {
        *(float *)(iVar20 + 0x202c) = fVar29;
      }
      if (*(float *)(iVar20 + 0x2030) <= fVar28 && fVar28 != *(float *)(iVar20 + 0x2030)) {
        *(float *)(iVar20 + 0x2030) = fVar28;
      }
      pfVar21 = pfVar21 + 10;
      iVar22 = iVar22 + -0x28;
    } while (iVar22 != 0);
  }
  iVar22 = local_54;
  if ((local_50 >> 10 & 1) != 0) {
    if ((*(byte *)(iVar20 + 0x35) & 0x10) == 0) {
LAB_10106048:
      iVar17 = FUN_101190d8(iVar20 + 0xe4);
      if (iVar17 != 0) goto LAB_1010607a;
LAB_10106086:
      iVar17 = *(int *)(iVar20 + 0x1ff4);
      bVar23 = true;
      iVar22 = 0;
      if (iVar17 == 0) {
        iVar17 = **(int **)(iVar20 + 0x1fe8);
        *(int *)(iVar20 + 0x1ff4) = iVar17;
      }
    }
    else {
      if ((*(int *)(iVar20 + 0x100) == 0) ||
         (iVar17 = FUN_1010ad03(*(int *)(iVar20 + 0x100)), iVar17 == 0)) goto LAB_10106086;
      if ((*(byte *)(iVar17 + 4) & 0x80) != 0) goto LAB_10106048;
LAB_1010607a:
      *(int *)(iVar20 + 0x1ff4) = iVar17;
      bVar23 = false;
      iVar22 = iVar17;
    }
    if ((*(int *)(iVar20 + 0x14dc) == 0) ||
       (iVar26 = *(int *)(*(int *)(iVar20 + 0x14dc) + 0x3c), iVar26 == 0)) {
      iVar26 = iVar17;
    }
    if (*(char *)(iVar20 + 0x2250) == '\0') {
      iVar17 = iVar22;
    }
    if (!bVar23) {
      iVar17 = iVar22;
    }
    *(int *)(iVar20 + 0x1ff0) = iVar26;
    if ((*(char *)(iVar20 + 0x2250) == '\0') && (iVar17 = iVar22, *(int *)(iVar20 + 0x1528) != 0)) {
      cVar15 = FUN_10114036();
      if (iVar22 == 0 || cVar15 != '\0') goto LAB_10106026;
    }
    else {
      iVar22 = iVar17;
      if (iVar17 == 0) goto LAB_10106026;
    }
    if ((iVar22 == iVar26) || ((*(byte *)(iVar22 + 4) & 0x80) != 0)) goto LAB_10106026;
  }
  *(int *)(iVar20 + 0x1ff0) = iVar22;
LAB_10106026:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_60)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

