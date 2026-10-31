/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101deb49 */

void __fastcall
FUN_101deb49(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  byte local_40;
  uint local_38;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = FUN_101c06e3(param_3,param_5);
  if (iVar3 == 0) {
    local_38 = 0;
    bVar8 = 0;
    bVar10 = 0;
    local_40 = 0;
    bVar14 = 0;
  }
  else {
    local_38 = FUN_101dd9d6();
    if (local_38 == 0) {
      local_38 = 0;
      bVar8 = 0;
      bVar10 = 0;
      local_40 = 0;
      bVar14 = 0;
    }
    else {
      bVar14 = (byte)local_38 & 1;
      bVar10 = (byte)((local_38 & 2) >> 1);
      local_40 = (byte)((local_38 & 4) >> 2);
      bVar8 = (byte)((local_38 & 8) >> 3);
    }
  }
  if ((((bVar10 | bVar14) == 1) && (1 < *(int *)(param_1 + 0x24))) ||
     (((bVar8 | local_40) == 1 && (2 < *(int *)(param_1 + 0x24))))) {
    FUN_101dda07();
  }
  if ((bVar14 == 0) || (iVar3 = *(int *)(param_1 + 0x24), iVar3 < 2)) {
    if ((local_40 != 0) && (iVar3 = *(int *)(param_1 + 0x24), 2 < iVar3)) goto LAB_101dec3d;
  }
  else {
    if (local_40 == 0) {
      iVar4 = FUN_101ddee0();
    }
    else {
LAB_101dec3d:
      iVar4 = FUN_101dda5c();
    }
    cVar2 = FUN_101df6f0();
    if (cVar2 == '\0') {
      return;
    }
    iVar7 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x30);
    iVar13 = *(int *)(iVar7 + iVar4 * 4);
    iVar1 = *(int *)(iVar6 + iVar4 * 4);
    iVar11 = iVar1 - iVar13;
    if (param_4 < iVar11) {
      return;
    }
    iVar15 = 0x40;
    iVar5 = 0;
    do {
      if (iVar4 != iVar5) {
        iVar9 = iVar13 - *(int *)(iVar6 + iVar5 * 4);
        iVar12 = iVar15;
        if (*(int *)(iVar7 + iVar5 * 4) < iVar13) {
          iVar12 = iVar9;
        }
        if (iVar15 <= iVar9) {
          iVar12 = iVar15;
        }
        if (iVar9 < 0x40) {
          iVar15 = iVar12;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 != iVar5);
    iVar3 = 0x40 - iVar15;
    iVar4 = 0;
    if ((local_38 & 0x50) != 0) {
      if ((char)((local_38 & 0x40) >> 6) == '\0' && bVar14 == 0) {
        iVar4 = FUN_101ddee0();
        iVar11 = *(int *)(iVar6 + iVar4 * 4) - *(int *)(iVar7 + iVar4 * 4);
      }
      iVar7 = iVar13;
      if (local_40 != 0) {
        iVar7 = iVar1;
      }
      if ((local_38 & 0x10) == 0) {
        iVar7 = iVar13;
      }
      iVar4 = 0;
      if (((iVar7 + iVar3 & 0x3fU) == 0) && (iVar11 < 0xc0)) {
        iVar4 = (int)((iVar11 + 0x20U & 0xffffffc0) - iVar11) / 2;
      }
    }
    iVar7 = 0;
    if (bVar14 != 0) {
      iVar7 = iVar4;
    }
    if ((local_38 >> 4 & 1) == 0) {
      iVar7 = 0;
    }
    iVar6 = iVar7;
    if (local_40 != 0) {
      iVar6 = iVar4;
    }
    if ((local_38 & 0x40) == 0) {
      iVar6 = iVar7;
    }
    iVar6 = iVar6 + iVar3;
    if ((-3 < iVar6 && iVar6 != 0) &&
       (((iVar6 < 0x43 || (-3 < iVar15)) &&
        (FUN_101ddc57(iVar3), local_40 == 1 && (local_38 & 0x10) != 0)))) {
      FUN_101ddc57(iVar4);
    }
  }
  if ((bVar10 == 0) || (iVar3 = *(int *)(param_1 + 0x24), iVar3 < 2)) {
    if (bVar8 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 < 3) {
      return;
    }
  }
  else if (bVar8 == 0) {
    iVar4 = FUN_101ddf3f();
    goto LAB_101dee27;
  }
  iVar4 = FUN_101ddc98();
LAB_101dee27:
  cVar2 = FUN_101df6f0();
  if (cVar2 != '\0') {
    iVar7 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x30);
    iVar13 = *(int *)(iVar7 + iVar4 * 4);
    iVar1 = *(int *)(iVar6 + iVar4 * 4);
    iVar11 = iVar1 - iVar13;
    if (iVar11 <= param_4) {
      iVar5 = 0;
      iVar15 = 0x40;
      do {
        if (iVar4 != iVar5) {
          iVar9 = *(int *)(iVar7 + iVar5 * 4) - iVar1;
          iVar12 = iVar15;
          if (iVar1 < *(int *)(iVar6 + iVar5 * 4)) {
            iVar12 = iVar9;
          }
          if (iVar15 <= iVar9) {
            iVar12 = iVar15;
          }
          if (iVar9 < 0x40) {
            iVar15 = iVar12;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
      iVar3 = 0;
      if ((local_38 & 0xa0) != 0) {
        if (-1 < (char)local_38 && bVar10 == 0) {
          iVar3 = FUN_101ddf3f();
          iVar11 = *(int *)(iVar6 + iVar3 * 4) - *(int *)(iVar7 + iVar3 * 4);
        }
        if ((local_38 & 0x20) == 0) {
          iVar13 = iVar1;
        }
        if (bVar8 == 0) {
          iVar13 = iVar1;
        }
        iVar3 = 0;
        if (((iVar13 + iVar15 & 0x3fU) == 0) && (iVar11 < 0xc0)) {
          iVar3 = (int)((iVar11 + 0x20U & 0xffffffc0) - iVar11) / 2;
        }
      }
      iVar4 = 0;
      if ((char)local_38 < '\0') {
        iVar4 = iVar3;
      }
      if (bVar8 == 0) {
        iVar4 = 0;
      }
      iVar7 = iVar4;
      if ((local_38 & 0x20) != 0) {
        iVar7 = iVar3;
      }
      if (bVar10 == 0) {
        iVar7 = iVar4;
      }
      iVar7 = iVar7 + (0x40 - iVar15);
      if ((-3 < iVar7 && iVar7 != 0) &&
         (((iVar7 < 0x43 || (-3 < iVar15)) &&
          (FUN_101dde97(0x40 - iVar15), bVar8 == 1 && (local_38 & 0x20) != 0)))) {
        FUN_101dde97(iVar3);
      }
    }
  }
  return;
}

