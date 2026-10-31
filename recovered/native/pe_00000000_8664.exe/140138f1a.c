/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140138f1a */

void FUN_140138f1a(longlong param_1,int param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 == 0) {
    return;
  }
  lVar7 = FUN_1401292ee(param_3,param_5);
  if ((lVar7 == 0) || (uVar3 = FUN_140137da1(), uVar3 == 0)) {
    uVar3 = 0;
    bVar15 = 0;
    bVar8 = 0;
    bVar16 = 0;
    bVar10 = 0;
  }
  else {
    bVar10 = (byte)uVar3 & 1;
    bVar8 = (byte)((uVar3 & 2) >> 1);
    bVar16 = (byte)((uVar3 & 4) >> 2);
    bVar15 = (byte)((uVar3 & 8) >> 3);
  }
  if ((((bVar8 | bVar10) == 1) && (1 < *(int *)(param_1 + 0x2c))) ||
     (((bVar15 | bVar16) == 1 && (2 < *(int *)(param_1 + 0x2c))))) {
    FUN_140137ddb(param_1);
  }
  if ((bVar10 == 0) || (uVar13 = *(uint *)(param_1 + 0x2c), (int)uVar13 < 2)) {
    if ((bVar16 != 0) && (uVar13 = *(uint *)(param_1 + 0x2c), 2 < (int)uVar13)) goto LAB_140138ff7;
  }
  else {
    if (bVar16 == 0) {
      uVar4 = FUN_1401382e0(param_1);
    }
    else {
LAB_140138ff7:
      uVar4 = FUN_140137e40(param_1);
    }
    cVar2 = FUN_140139b77(param_1);
    if (cVar2 == '\0') {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar1 = *(longlong *)(param_1 + 0x40);
    iVar18 = *(int *)(lVar7 + (longlong)(int)uVar4 * 4);
    iVar11 = *(int *)(lVar1 + (longlong)(int)uVar4 * 4);
    iVar14 = iVar11 - iVar18;
    if (param_4 < iVar14) {
      return;
    }
    iVar17 = 0x40;
    uVar9 = 0;
    do {
      if (uVar4 != uVar9) {
        iVar12 = iVar18 - *(int *)(lVar1 + uVar9 * 4);
        iVar5 = iVar17;
        if (*(int *)(lVar7 + uVar9 * 4) < iVar18) {
          iVar5 = iVar12;
        }
        if (iVar17 <= iVar12) {
          iVar5 = iVar17;
        }
        if (iVar12 < 0x40) {
          iVar17 = iVar5;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar13 != uVar9);
    uVar13 = 0;
    if ((uVar3 & 0x50) != 0) {
      iVar5 = iVar14;
      if ((char)((uVar3 & 0x40) >> 6) == '\0' && bVar10 == 0) {
        iVar5 = FUN_1401382e0(param_1);
        iVar5 = *(int *)(lVar1 + (longlong)iVar5 * 4) - *(int *)(lVar7 + (longlong)iVar5 * 4);
      }
      iVar12 = iVar18;
      if (bVar16 != 0) {
        iVar12 = iVar11;
      }
      if ((uVar3 & 0x10) == 0) {
        iVar12 = iVar18;
      }
      uVar13 = 0;
      if (((iVar12 + (0x40 - iVar17) & 0x3fU) == 0) && (iVar5 < 0xc0)) {
        uVar13 = (int)((iVar5 + 0x20U & 0xffffffc0) - iVar5) / 2;
      }
    }
    uVar4 = 0;
    if (bVar10 != 0) {
      uVar4 = uVar13;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      uVar4 = uVar3 >> 4 & 1;
    }
    uVar6 = uVar4;
    if (bVar16 != 0) {
      uVar6 = uVar13;
    }
    if ((uVar3 & 0x40) == 0) {
      uVar6 = uVar4;
    }
    iVar5 = uVar6 + (0x40 - iVar17);
    if ((-3 < iVar5 && iVar5 != 0) && ((iVar5 < 0x43 || (-3 < iVar17)))) {
      iVar17 = iVar14 + 7;
      if (-1 < iVar14) {
        iVar17 = iVar14;
      }
      FUN_140138034(param_1,iVar18 - (iVar17 >> 3));
      if (bVar16 == 1 && (uVar3 & 0x10) != 0) {
        FUN_140138034(param_1,iVar11 - (iVar17 >> 3),uVar13);
      }
    }
  }
  if ((bVar8 == 0) || (uVar13 = *(uint *)(param_1 + 0x2c), (int)uVar13 < 2)) {
    if (bVar15 == 0) {
      return;
    }
    uVar13 = *(uint *)(param_1 + 0x2c);
    if ((int)uVar13 < 3) {
      return;
    }
  }
  else if (bVar15 == 0) {
    uVar4 = FUN_140138330(param_1);
    goto LAB_1401391df;
  }
  uVar4 = FUN_14013808c(param_1);
LAB_1401391df:
  cVar2 = FUN_140139b77(param_1);
  if (cVar2 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar1 = *(longlong *)(param_1 + 0x40);
    iVar18 = *(int *)(lVar7 + (longlong)(int)uVar4 * 4);
    iVar11 = *(int *)(lVar1 + (longlong)(int)uVar4 * 4);
    iVar14 = iVar11 - iVar18;
    if (iVar14 <= param_4) {
      iVar17 = 0x40;
      uVar9 = 0;
      do {
        if (uVar4 != uVar9) {
          iVar12 = *(int *)(lVar7 + uVar9 * 4) - iVar11;
          iVar5 = iVar17;
          if (iVar11 < *(int *)(lVar1 + uVar9 * 4)) {
            iVar5 = iVar12;
          }
          if (iVar17 <= iVar12) {
            iVar5 = iVar17;
          }
          if (iVar12 < 0x40) {
            iVar17 = iVar5;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
      iVar5 = 0;
      if ((uVar3 & 0xa0) != 0) {
        iVar12 = iVar14;
        if (-1 < (char)uVar3 && bVar8 == 0) {
          iVar5 = FUN_140138330(param_1);
          iVar12 = *(int *)(lVar1 + (longlong)iVar5 * 4) - *(int *)(lVar7 + (longlong)iVar5 * 4);
        }
        if ((uVar3 & 0x20) == 0) {
          iVar18 = iVar11;
        }
        if (bVar15 == 0) {
          iVar18 = iVar11;
        }
        iVar5 = 0;
        if (((iVar18 + iVar17 & 0x3fU) == 0) && (iVar12 < 0xc0)) {
          iVar5 = (int)((iVar12 + 0x20U & 0xffffffc0) - iVar12) / 2;
        }
      }
      iVar18 = 0;
      if ((char)uVar3 < '\0') {
        iVar18 = iVar5;
      }
      if (bVar15 == 0) {
        iVar18 = 0;
      }
      iVar12 = iVar18;
      if ((uVar3 & 0x20) != 0) {
        iVar12 = iVar5;
      }
      if (bVar8 == 0) {
        iVar12 = iVar18;
      }
      iVar12 = iVar12 + (0x40 - iVar17);
      if ((-3 < iVar12 && iVar12 != 0) && ((iVar12 < 0x43 || (-3 < iVar17)))) {
        iVar18 = iVar14 + 7;
        if (-1 < iVar14) {
          iVar18 = iVar14;
        }
        iVar11 = (iVar18 >> 3) + iVar11;
        FUN_140138280(param_1,iVar11);
        if (bVar15 == 1 && (uVar3 & 0x20) != 0) {
          FUN_140138280(param_1,iVar11 - iVar14,iVar5);
          return;
        }
      }
    }
  }
  return;
}

