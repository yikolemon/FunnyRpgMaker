/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400832b4 */

void FUN_1400832b4(char param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  undefined1 auStack_b8 [42];
  char local_8e;
  byte local_8d;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  uint local_68 [8];
  ulonglong local_48;
  
  lVar8 = DAT_140f2a910;
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  if (param_1 == '\0') {
    local_8c = 0;
  }
  else {
    local_8c = (undefined4)CONCAT71((int7)(local_48 >> 8),*(int *)(DAT_140f2a910 + 0x2cd4) == 1);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  if (*(int *)(DAT_140f2a910 + 0x1580) < 1) {
LAB_140083820:
    uVar19 = *(uint *)(lVar8 + 0x1580);
    uVar10 = 0;
  }
  else {
    local_8d = (byte)local_8c ^ 1;
    uVar21 = 0;
    lVar17 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_84 = 0;
    uVar19 = 0;
    local_8e = param_1;
    do {
      lVar12 = *(longlong *)(lVar8 + 0x1588);
      switch(*(undefined4 *)(lVar12 + lVar17)) {
      case 1:
        if (*(char *)(lVar8 + 0xeb) == '\0') {
          if ((param_1 != '\0') &&
             (((((byte)local_78 | (byte)local_70) & 1) != 0 || uVar19 != 0 || ((local_84 & 1) != 0))
             )) goto LAB_1400836ce;
          *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)(lVar12 + 0xc + lVar17);
          uVar3 = *(undefined4 *)(lVar12 + 0x14 + lVar17);
          *(undefined4 *)(lVar8 + 0x130) = uVar3;
          local_80 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
        }
        break;
      case 2:
        if ((param_1 != '\0') && (uVar19 != 0 || (local_80 & 1) != 0)) {
LAB_1400836ce:
          if (uVar21 == 0) goto LAB_140083820;
          goto LAB_1400836db;
        }
        *(float *)(lVar8 + 300) = *(float *)(lVar12 + 0xc + lVar17) + *(float *)(lVar8 + 300);
        *(float *)(lVar8 + 0x128) = *(float *)(lVar12 + 0x10 + lVar17) + *(float *)(lVar8 + 0x128);
        uVar3 = *(undefined4 *)(lVar12 + 0x14 + lVar17);
        *(undefined4 *)(lVar8 + 0x130) = uVar3;
        local_78 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
        break;
      case 3:
        iVar16 = *(int *)(lVar12 + 0xc + lVar17);
        uVar10 = 1 << ((byte)iVar16 & 0x1f);
        if ((param_1 != '\0') &&
           ((((uVar10 & uVar19) != 0 || ((local_78 & 1) != 0)) ||
            (((byte)local_80 & *(int *)(lVar12 + 0x14 + lVar17) == 1) != 0)))) goto LAB_1400836ce;
        *(undefined1 *)(lVar8 + 0x120 + (longlong)iVar16) = *(undefined1 *)(lVar12 + 0x10 + lVar17);
        *(undefined4 *)(lVar8 + 0x130) = *(undefined4 *)(lVar12 + 0x14 + lVar17);
        uVar19 = uVar19 | uVar10;
        break;
      case 4:
        *(undefined4 *)(lVar8 + 0x134) = *(undefined4 *)(lVar12 + 0xc + lVar17);
        break;
      case 5:
        if ((*(byte *)(lVar8 + 0x30) & 0x40) == 0) {
          uVar10 = *(uint *)(lVar12 + 0xc + lVar17);
          pcVar14 = (char *)FUN_140076e46(DAT_140f2a910,uVar10);
          uVar18 = (ulonglong)((longlong)pcVar14 - (lVar8 + 0x140)) >> 4;
          iVar16 = (int)uVar18 >> 5;
          bVar4 = (byte)uVar18;
          if (((local_8e == '\0') || (*pcVar14 == *(char *)(lVar12 + 0x10 + lVar17))) ||
             ((1 << (bVar4 & 0x1f) & local_68[iVar16]) == 0 && uVar19 == 0)) {
            uVar9 = FUN_14009227e();
            uVar13 = FUN_140091c8e(uVar10 | uVar9);
            if (((char)uVar13 != '\0') || (((byte)local_8c & (byte)local_84) == 0)) {
              cVar2 = *(char *)(lVar12 + 0x10 + lVar17);
              if (*pcVar14 != cVar2) {
                local_68[iVar16] = local_68[iVar16] | 1 << (bVar4 & 0x1f);
                uVar10 = local_88 & 0xff;
                local_88 = 1;
                if (local_8d != 0) {
                  local_88 = uVar10;
                }
                if ((char)uVar13 != '\0') {
                  local_88 = uVar10;
                }
                local_70 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
              }
              *pcVar14 = cVar2;
              *(undefined4 *)(pcVar14 + 0xc) = *(undefined4 *)(lVar12 + 0x14 + lVar17);
              param_1 = local_8e;
              break;
            }
          }
          goto LAB_1400836ce;
        }
        break;
      case 6:
        if ((*(byte *)(lVar8 + 0x30) & 0x40) == 0) {
          if (((param_1 != '\0') &&
              (((uVar19 != 0 || ((local_80 & 1) != 0)) || ((local_78 & 1) != 0)))) ||
             (((byte)local_8c & (byte)local_88) != 0)) goto LAB_1400836ce;
          uVar10 = *(uint *)(lVar12 + 0xc + lVar17);
          if (0xffff < uVar10) {
            uVar10 = 0xfffd;
          }
          iVar16 = *(int *)(lVar8 + 0xc18);
          if (iVar16 == *(int *)(lVar8 + 0xc1c)) {
            if (iVar16 == 0) {
              iVar11 = 8;
            }
            else {
              iVar11 = iVar16 / 2 + iVar16;
            }
            iVar15 = iVar16 + 1;
            if (iVar16 + 1 < iVar11) {
              iVar15 = iVar11;
            }
            lVar12 = FUN_140077ab4((longlong)iVar15 * 2);
            if (*(longlong *)(lVar8 + 0xc20) != 0) {
              FUN_1401c5180(lVar12,*(longlong *)(lVar8 + 0xc20),
                            (longlong)*(int *)(lVar8 + 0xc18) * 2);
              FUN_140077b90(*(undefined8 *)(lVar8 + 0xc20));
            }
            *(longlong *)(lVar8 + 0xc20) = lVar12;
            *(int *)(lVar8 + 0xc1c) = iVar15;
            iVar16 = *(int *)(lVar8 + 0xc18);
            param_1 = local_8e;
          }
          else {
            lVar12 = *(longlong *)(lVar8 + 0xc20);
          }
          *(short *)(lVar12 + (longlong)iVar16 * 2) = (short)uVar10;
          *(int *)(lVar8 + 0xc18) = *(int *)(lVar8 + 0xc18) + 1;
          local_84 = local_84 & 0xff;
          if ((byte)local_8c != '\0') {
            local_84 = 1;
          }
        }
        break;
      case 7:
        *(byte *)(lVar8 + 0xc14) = *(byte *)(lVar12 + 0xc + lVar17) ^ 1;
      }
      uVar21 = uVar21 + 1;
      lVar17 = lVar17 + 0x1c;
    } while ((longlong)uVar21 < (longlong)*(int *)(lVar8 + 0x1580));
LAB_1400836db:
    uVar10 = (uint)uVar21;
    iVar16 = *(int *)(lVar8 + 0x1590);
    lVar17 = 0;
    uVar18 = uVar21 & 0xffffffff;
    do {
      puVar20 = (undefined4 *)(*(longlong *)(lVar8 + 0x1588) + lVar17);
      if (iVar16 == *(int *)(lVar8 + 0x1594)) {
        if (iVar16 == 0) {
          iVar11 = 8;
        }
        else {
          iVar11 = iVar16 / 2 + iVar16;
        }
        iVar15 = iVar16 + 1;
        if (iVar16 + 1 < iVar11) {
          iVar15 = iVar11;
        }
        lVar12 = FUN_140077ab4((longlong)iVar15 * 0x1c);
        if (*(longlong *)(lVar8 + 0x1598) != 0) {
          FUN_1401c5180(lVar12,*(longlong *)(lVar8 + 0x1598),
                        (longlong)*(int *)(lVar8 + 0x1590) * 0x1c);
          FUN_140077b90(*(undefined8 *)(lVar8 + 0x1598));
        }
        *(longlong *)(lVar8 + 0x1598) = lVar12;
        *(int *)(lVar8 + 0x1594) = iVar15;
        iVar16 = *(int *)(lVar8 + 0x1590);
      }
      else {
        lVar12 = *(longlong *)(lVar8 + 0x1598);
      }
      uVar3 = *puVar20;
      uVar5 = puVar20[1];
      uVar6 = puVar20[2];
      uVar7 = puVar20[3];
      uVar13 = *(undefined8 *)(puVar20 + 5);
      puVar1 = (undefined8 *)(lVar12 + 0xc + (longlong)iVar16 * 0x1c);
      *puVar1 = *(undefined8 *)(puVar20 + 3);
      puVar1[1] = uVar13;
      puVar20 = (undefined4 *)(lVar12 + (longlong)iVar16 * 0x1c);
      *puVar20 = uVar3;
      puVar20[1] = uVar5;
      puVar20[2] = uVar6;
      puVar20[3] = uVar7;
      iVar16 = *(int *)(lVar8 + 0x1590) + 1;
      *(int *)(lVar8 + 0x1590) = iVar16;
      lVar17 = lVar17 + 0x1c;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    uVar19 = *(uint *)(lVar8 + 0x1580);
    if ((0 < (int)uVar19 & *(byte *)(lVar8 + 0x2acc) >> 7) == 1) {
      lVar17 = 0;
      uVar18 = 0;
      do {
        pcVar14 = "Remaining";
        if (uVar18 < (uVar21 & 0xffffffff)) {
          pcVar14 = "Processed";
        }
        FUN_1400922e6(pcVar14,*(longlong *)(lVar8 + 0x1588) + lVar17);
        uVar18 = uVar18 + 1;
        uVar19 = *(uint *)(lVar8 + 0x1580);
        lVar17 = lVar17 + 0x1c;
      } while ((longlong)uVar18 < (longlong)(int)uVar19);
    }
  }
  if (uVar10 == uVar19) {
    iVar16 = 0;
    if (*(int *)(lVar8 + 0x1584) < 0) {
      iVar16 = 0;
      uVar13 = FUN_140077ab4(0);
      if (*(longlong *)(lVar8 + 0x1588) != 0) {
        FUN_1401c5180(uVar13,*(longlong *)(lVar8 + 0x1588),(longlong)*(int *)(lVar8 + 0x1580) * 0x1c
                     );
        FUN_140077b90(*(undefined8 *)(lVar8 + 0x1588));
      }
      *(undefined8 *)(lVar8 + 0x1588) = uVar13;
      *(undefined4 *)(lVar8 + 0x1584) = 0;
    }
  }
  else {
    FUN_1401c5180(*(longlong *)(lVar8 + 0x1588),
                  (ulonglong)uVar10 * 0x1c + *(longlong *)(lVar8 + 0x1588),
                  ((longlong)(int)uVar19 - (ulonglong)uVar10) * 0x1c);
    iVar16 = *(int *)(lVar8 + 0x1580) - uVar10;
  }
  *(int *)(lVar8 + 0x1580) = iVar16;
  if (*(char *)(lVar8 + 0xc14) == '\x01') {
    FUN_140076ac4(lVar8 + 0x30);
    if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_b8)) {
      FUN_140076b6e(lVar8 + 0x30);
      return;
    }
  }
  else if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_b8);
}

