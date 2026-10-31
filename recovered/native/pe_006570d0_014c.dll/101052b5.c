/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101052b5 */

void FUN_101052b5(char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int local_64;
  int local_60;
  undefined4 *local_5c;
  byte local_55;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  byte *local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28 [6];
  
  local_28[5] = DAT_10388d00 ^ (uint)&local_64;
  local_5c = (undefined4 *)CONCAT31(local_5c._1_3_,param_1);
  if (param_1 == '\0') {
    local_54 = 0;
  }
  else {
    local_54 = CONCAT31((int3)(local_28[5] >> 8),*(int *)(DAT_1039d74c + 0x299c) == 1);
  }
  local_3c = (byte *)(DAT_1039d74c + 0x30);
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_64 = DAT_1039d74c;
  iVar10 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x1464) < 1) {
LAB_101057e9:
    iVar14 = *(int *)(iVar10 + 0x1464);
    iVar15 = 0;
  }
  else {
    local_2c = DAT_1039d74c + 0x10c;
    local_55 = (byte)local_54 ^ 1;
    local_40 = 0;
    iVar15 = 0x14;
    local_44 = 0;
    local_38 = 0;
    local_4c = 0;
    local_48 = 0;
    local_50 = 0;
    iVar14 = 0;
    do {
      iVar18 = *(int *)(iVar10 + 0x146c);
      local_60 = iVar14;
      switch(*(undefined4 *)(iVar18 + -0x14 + iVar15)) {
      case 1:
        if (*(char *)(iVar10 + 0xbf) == '\0') {
          if (((char)local_5c != '\0') &&
             (((((byte)local_40 | (byte)local_38) & 1) != 0 || local_50 != 0 ||
              ((local_48 & 1) != 0)))) goto LAB_101056af;
          *(undefined8 *)(iVar10 + 0xe4) = *(undefined8 *)(iVar18 + -8 + iVar15);
          uVar12 = *(undefined4 *)(iVar18 + iVar15);
          *(undefined4 *)(iVar10 + 0xfc) = uVar12;
          local_44 = CONCAT31((int3)((uint)uVar12 >> 8),1);
        }
        break;
      case 2:
        if (((char)local_5c != '\0') && (local_50 != 0 || (local_44 & 1) != 0)) {
LAB_101056af:
          iVar14 = local_60;
          if (local_60 == 0) goto LAB_101057e9;
          goto LAB_101056bb;
        }
        *(float *)(iVar10 + 0xf8) = *(float *)(iVar18 + -8 + iVar15) + *(float *)(iVar10 + 0xf8);
        *(float *)(iVar10 + 0xf4) = *(float *)(iVar18 + -4 + iVar15) + *(float *)(iVar10 + 0xf4);
        uVar12 = *(undefined4 *)(iVar18 + iVar15);
        *(undefined4 *)(iVar10 + 0xfc) = uVar12;
        local_40 = CONCAT31((int3)((uint)uVar12 >> 8),1);
        break;
      case 3:
        iVar14 = *(int *)(iVar18 + -8 + iVar15);
        uVar17 = 1 << ((byte)iVar14 & 0x1f);
        if (((char)local_5c != '\0') &&
           ((((local_50 & uVar17) != 0 || ((local_40 & 1) != 0)) ||
            (iVar10 = local_64, ((byte)local_44 & *(int *)(iVar18 + iVar15) == 1) != 0))))
        goto LAB_101056af;
        *(undefined1 *)(local_64 + 0xec + iVar14) = *(undefined1 *)(iVar18 + -4 + iVar15);
        *(undefined4 *)(local_64 + 0xfc) = *(undefined4 *)(iVar18 + iVar15);
        local_50 = local_50 | uVar17;
        iVar10 = local_64;
        break;
      case 4:
        *(undefined4 *)(iVar10 + 0x100) = *(undefined4 *)(iVar18 + -8 + iVar15);
        break;
      case 5:
        if ((*local_3c & 0x40) == 0) {
          pcVar9 = (char *)FUN_100f9590(DAT_1039d74c,*(undefined4 *)(iVar18 + -8 + iVar15));
          local_30 = (int)pcVar9 - local_2c;
          local_34 = local_30 >> 4;
          if ((((char)local_5c == '\0') || (*pcVar9 == *(char *)(iVar18 + -4 + iVar15))) ||
             (iVar10 = local_64,
             (1 << ((byte)(local_30 >> 4) & 0x1f) & local_28[local_30 >> 9]) == 0 && local_50 == 0))
          {
            FUN_10114148();
            uVar12 = FUN_10113b6a();
            if (((char)uVar12 != '\0') ||
               (iVar10 = local_64, ((byte)local_54 & (byte)local_48) == 0)) {
              cVar2 = *(char *)(iVar18 + -4 + iVar15);
              if (*pcVar9 != cVar2) {
                local_28[local_30 >> 9] = local_28[local_30 >> 9] | 1 << ((byte)local_34 & 0x1f);
                uVar17 = local_4c & 0xff;
                local_4c = 1;
                if (local_55 != 0) {
                  local_4c = uVar17;
                }
                if ((char)uVar12 != '\0') {
                  local_4c = uVar17;
                }
                local_38 = CONCAT31((int3)((uint)uVar12 >> 8),1);
              }
              *pcVar9 = cVar2;
              *(undefined4 *)(pcVar9 + 0xc) = *(undefined4 *)(iVar18 + iVar15);
              iVar10 = local_64;
              break;
            }
          }
          goto LAB_101056af;
        }
        break;
      case 6:
        if ((*local_3c & 0x40) == 0) {
          if ((((char)local_5c != '\0') &&
              (((local_50 != 0 || ((local_44 & 1) != 0)) || ((local_40 & 1) != 0)))) ||
             (((byte)local_54 & (byte)local_4c) != 0)) goto LAB_101056af;
          uVar17 = *(uint *)(iVar18 + -8 + iVar15);
          if (0xffff < uVar17) {
            uVar17 = 0xfffd;
          }
          iVar14 = *(int *)(iVar10 + 0xbe0);
          if (iVar14 == *(int *)(iVar10 + 0xbe4)) {
            if (iVar14 == 0) {
              iVar10 = 8;
            }
            else {
              iVar10 = iVar14 / 2 + iVar14;
            }
            iVar16 = iVar14 + 1;
            if (iVar14 + 1 < iVar10) {
              iVar16 = iVar10;
            }
            iVar18 = FUN_100fa1fa(iVar16 * 2);
            if (*(int *)(local_64 + 0xbe8) != 0) {
              FUN_1025b2d0(iVar18,*(int *)(local_64 + 0xbe8),*(int *)(local_64 + 0xbe0) * 2);
              FUN_100fa2cb(*(undefined4 *)(local_64 + 0xbe8));
            }
            *(int *)(local_64 + 0xbe8) = iVar18;
            *(int *)(local_64 + 0xbe4) = iVar16;
            iVar14 = *(int *)(local_64 + 0xbe0);
            iVar10 = local_64;
          }
          else {
            iVar18 = *(int *)(iVar10 + 0xbe8);
          }
          *(short *)(iVar18 + iVar14 * 2) = (short)uVar17;
          *(int *)(iVar10 + 0xbe0) = *(int *)(iVar10 + 0xbe0) + 1;
          local_48 = local_48 & 0xff;
          if ((byte)local_54 != '\0') {
            local_48 = 1;
          }
        }
        break;
      case 7:
        *(byte *)(iVar10 + 0xbdc) = *(byte *)(iVar18 + -8 + iVar15) ^ 1;
      }
      iVar14 = local_60 + 1;
      iVar15 = iVar15 + 0x1c;
    } while (iVar14 < *(int *)(iVar10 + 0x1464));
LAB_101056bb:
    iVar18 = *(int *)(iVar10 + 0x1470);
    iVar16 = 0;
    local_60 = iVar14;
    do {
      puVar13 = (undefined4 *)(*(int *)(iVar10 + 0x146c) + iVar16);
      if (iVar18 == *(int *)(iVar10 + 0x1474)) {
        if (iVar18 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = iVar18 / 2 + iVar18;
        }
        iVar15 = iVar18 + 1;
        if (iVar18 + 1 < iVar10) {
          iVar15 = iVar10;
        }
        local_5c = puVar13;
        iVar11 = FUN_100fa1fa(iVar15 * 0x1c);
        if (*(int *)(local_64 + 0x1478) != 0) {
          FUN_1025b2d0(iVar11,*(int *)(local_64 + 0x1478),*(int *)(local_64 + 0x1470) * 0x1c);
          FUN_100fa2cb(*(undefined4 *)(local_64 + 0x1478));
        }
        *(int *)(local_64 + 0x1478) = iVar11;
        *(int *)(local_64 + 0x1474) = iVar15;
        iVar18 = *(int *)(local_64 + 0x1470);
        puVar13 = local_5c;
        iVar10 = local_64;
      }
      else {
        iVar11 = *(int *)(iVar10 + 0x1478);
      }
      iVar15 = local_60;
      uVar12 = *puVar13;
      uVar3 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      uVar6 = puVar13[4];
      uVar7 = puVar13[5];
      uVar8 = puVar13[6];
      puVar1 = (undefined4 *)(iVar11 + 0xc + iVar18 * 0x1c);
      *puVar1 = puVar13[3];
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar13 = (undefined4 *)(iVar11 + iVar18 * 0x1c);
      *puVar13 = uVar12;
      puVar13[1] = uVar3;
      puVar13[2] = uVar4;
      puVar13[3] = uVar5;
      iVar18 = *(int *)(iVar10 + 0x1470) + 1;
      *(int *)(iVar10 + 0x1470) = iVar18;
      iVar16 = iVar16 + 0x1c;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    iVar14 = *(int *)(iVar10 + 0x1464);
    if ((0 < iVar14 & *(byte *)(iVar10 + 0x27b4) >> 7) == 1) {
      iVar18 = 0;
      do {
        FUN_101141ab();
        iVar18 = iVar18 + 1;
        iVar14 = *(int *)(local_64 + 0x1464);
        iVar10 = local_64;
      } while (iVar18 < iVar14);
    }
  }
  if (iVar14 - iVar15 == 0) {
    iVar15 = 0;
    if (*(int *)(iVar10 + 0x1468) < 0) {
      uVar12 = FUN_100fa1fa(0);
      if (*(int *)(local_64 + 0x146c) != 0) {
        FUN_1025b2d0(uVar12,*(int *)(local_64 + 0x146c),*(int *)(local_64 + 0x1464) * 0x1c);
        FUN_100fa2cb(*(undefined4 *)(local_64 + 0x146c));
      }
      *(undefined4 *)(local_64 + 0x146c) = uVar12;
      *(undefined4 *)(local_64 + 0x1468) = 0;
      iVar10 = local_64;
    }
  }
  else {
    FUN_1025b2d0(*(int *)(iVar10 + 0x146c),iVar15 * 0x1c + *(int *)(iVar10 + 0x146c),
                 (iVar14 - iVar15) * 0x1c);
    iVar15 = *(int *)(local_64 + 0x1464) - iVar15;
    iVar10 = local_64;
  }
  *(int *)(iVar10 + 0x1464) = iVar15;
  if (*(char *)(iVar10 + 0xbdc) == '\x01') {
    FUN_100f9246();
    if (DAT_10388d00 == (local_28[5] ^ (uint)&local_64)) {
      FUN_100f92e8();
      return;
    }
  }
  else if (DAT_10388d00 == (local_28[5] ^ (uint)&local_64)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

