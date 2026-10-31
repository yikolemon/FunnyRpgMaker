/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140036e62 */

void FUN_140036e62(longlong param_1,int param_2,uint param_3,int param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    return;
  }
  puVar7 = (uint *)FUN_14001ccf2(param_3,param_5);
  if ((puVar7 == (uint *)0x0) || (uVar3 = FUN_140035ce9(*puVar7), uVar3 == 0)) {
    uVar3 = 0;
    bVar15 = 0;
    bVar9 = 0;
    bVar16 = 0;
    bVar10 = 0;
  }
  else {
    bVar10 = (byte)uVar3 & 1;
    bVar9 = (byte)((uVar3 & 2) >> 1);
    bVar16 = (byte)((uVar3 & 4) >> 2);
    bVar15 = (byte)((uVar3 & 8) >> 3);
  }
  if ((((bVar9 | bVar10) == 1) && (1 < *(int *)(param_1 + 0x2c))) ||
     (((bVar15 | bVar16) == 1 && (2 < *(int *)(param_1 + 0x2c))))) {
    FUN_140035d23(param_1);
  }
  if ((bVar10 == 0) || (uVar19 = *(uint *)(param_1 + 0x2c), (int)uVar19 < 2)) {
    if ((bVar16 != 0) && (uVar19 = *(uint *)(param_1 + 0x2c), 2 < (int)uVar19)) goto LAB_140036f3f;
  }
  else {
    if (bVar16 == 0) {
      uVar8 = FUN_140036228(param_1);
      uVar4 = (uint)uVar8;
    }
    else {
LAB_140036f3f:
      uVar8 = FUN_140035d88(param_1);
      uVar4 = (uint)uVar8;
    }
    uVar8 = FUN_140037abf(param_1,uVar4);
    if ((char)uVar8 == '\0') {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = *(longlong *)(param_1 + 0x40);
    iVar18 = *(int *)(lVar1 + (longlong)(int)uVar4 * 4);
    iVar11 = *(int *)(lVar2 + (longlong)(int)uVar4 * 4);
    iVar14 = iVar11 - iVar18;
    if (param_4 < iVar14) {
      return;
    }
    iVar17 = 0x40;
    uVar8 = 0;
    do {
      if (uVar4 != uVar8) {
        iVar12 = iVar18 - *(int *)(lVar2 + uVar8 * 4);
        iVar13 = iVar17;
        if (*(int *)(lVar1 + uVar8 * 4) < iVar18) {
          iVar13 = iVar12;
        }
        if (iVar17 <= iVar12) {
          iVar13 = iVar17;
        }
        if (iVar12 < 0x40) {
          iVar17 = iVar13;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar19 != uVar8);
    iVar13 = 0x40 - iVar17;
    iVar12 = 0;
    if ((uVar3 & 0x50) != 0) {
      iVar5 = iVar14;
      if ((char)((uVar3 & 0x40) >> 6) == '\0' && bVar10 == 0) {
        uVar8 = FUN_140036228(param_1);
        iVar5 = *(int *)(lVar2 + (longlong)(int)uVar8 * 4) -
                *(int *)(lVar1 + (longlong)(int)uVar8 * 4);
      }
      iVar6 = iVar18;
      if (bVar16 != 0) {
        iVar6 = iVar11;
      }
      if ((uVar3 & 0x10) == 0) {
        iVar6 = iVar18;
      }
      iVar12 = 0;
      if (((iVar6 + iVar13 & 0x3fU) == 0) && (iVar5 < 0xc0)) {
        iVar12 = (int)((iVar5 + 0x20U & 0xffffffc0) - iVar5) / 2;
      }
    }
    iVar5 = 0;
    if (bVar10 != 0) {
      iVar5 = iVar12;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      iVar5 = 0;
    }
    iVar6 = iVar5;
    if (bVar16 != 0) {
      iVar6 = iVar12;
    }
    if ((uVar3 & 0x40) == 0) {
      iVar6 = iVar5;
    }
    iVar6 = iVar6 + iVar13;
    if ((-3 < iVar6 && iVar6 != 0) && ((iVar6 < 0x43 || (-3 < iVar17)))) {
      iVar17 = iVar14 + 7;
      if (-1 < iVar14) {
        iVar17 = iVar14;
      }
      FUN_140035f7c(param_1,iVar18 - (iVar17 >> 3),iVar13);
      if (bVar16 == 1 && (uVar3 & 0x10) != 0) {
        FUN_140035f7c(param_1,iVar11 - (iVar17 >> 3),iVar12);
      }
    }
  }
  if ((bVar9 == 0) || (uVar19 = *(uint *)(param_1 + 0x2c), (int)uVar19 < 2)) {
    if (bVar15 == 0) {
      return;
    }
    uVar19 = *(uint *)(param_1 + 0x2c);
    if ((int)uVar19 < 3) {
      return;
    }
  }
  else if (bVar15 == 0) {
    uVar8 = FUN_140036278(param_1);
    uVar4 = (uint)uVar8;
    goto LAB_140037127;
  }
  uVar8 = FUN_140035fd4(param_1);
  uVar4 = (uint)uVar8;
LAB_140037127:
  uVar8 = FUN_140037abf(param_1,uVar4);
  if ((char)uVar8 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = *(longlong *)(param_1 + 0x40);
    iVar18 = *(int *)(lVar1 + (longlong)(int)uVar4 * 4);
    iVar11 = *(int *)(lVar2 + (longlong)(int)uVar4 * 4);
    iVar14 = iVar11 - iVar18;
    if (iVar14 <= param_4) {
      iVar17 = 0x40;
      uVar8 = 0;
      do {
        if (uVar4 != uVar8) {
          iVar12 = *(int *)(lVar1 + uVar8 * 4) - iVar11;
          iVar13 = iVar17;
          if (iVar11 < *(int *)(lVar2 + uVar8 * 4)) {
            iVar13 = iVar12;
          }
          if (iVar17 <= iVar12) {
            iVar13 = iVar17;
          }
          if (iVar12 < 0x40) {
            iVar17 = iVar13;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar19 != uVar8);
      iVar13 = 0;
      if ((uVar3 & 0xa0) != 0) {
        iVar12 = iVar14;
        if (-1 < (char)uVar3 && bVar9 == 0) {
          uVar8 = FUN_140036278(param_1);
          iVar12 = *(int *)(lVar2 + (longlong)(int)uVar8 * 4) -
                   *(int *)(lVar1 + (longlong)(int)uVar8 * 4);
        }
        if ((uVar3 & 0x20) == 0) {
          iVar18 = iVar11;
        }
        if (bVar15 == 0) {
          iVar18 = iVar11;
        }
        iVar13 = 0;
        if (((iVar18 + iVar17 & 0x3fU) == 0) && (iVar12 < 0xc0)) {
          iVar13 = (int)((iVar12 + 0x20U & 0xffffffc0) - iVar12) / 2;
        }
      }
      iVar18 = 0;
      if ((char)uVar3 < '\0') {
        iVar18 = iVar13;
      }
      if (bVar15 == 0) {
        iVar18 = 0;
      }
      iVar12 = iVar18;
      if ((uVar3 & 0x20) != 0) {
        iVar12 = iVar13;
      }
      if (bVar9 == 0) {
        iVar12 = iVar18;
      }
      iVar12 = iVar12 + (0x40 - iVar17);
      if ((-3 < iVar12 && iVar12 != 0) && ((iVar12 < 0x43 || (-3 < iVar17)))) {
        iVar18 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar18 = iVar14;
        }
        iVar11 = (iVar18 >> 3) + iVar11;
        FUN_1400361c8(param_1,iVar11,0x40 - iVar17);
        if (bVar15 == 1 && (uVar3 & 0x20) != 0) {
          FUN_1400361c8(param_1,iVar11 - iVar14,iVar13);
          return;
        }
      }
    }
  }
  return;
}

