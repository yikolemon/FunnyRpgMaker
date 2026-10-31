/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004362b9 */

void __fastcall FUN_004362b9(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  byte local_40;
  uint local_38;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (uint *)FUN_0041ccd3(param_3,param_5);
  if (puVar1 == (uint *)0x0) {
    local_38 = 0;
    bVar7 = 0;
    bVar9 = 0;
    local_40 = 0;
    bVar13 = 0;
  }
  else {
    local_38 = FUN_00435146(*puVar1);
    if (local_38 == 0) {
      local_38 = 0;
      bVar7 = 0;
      bVar9 = 0;
      local_40 = 0;
      bVar13 = 0;
    }
    else {
      bVar13 = (byte)local_38 & 1;
      bVar9 = (byte)((local_38 & 2) >> 1);
      local_40 = (byte)((local_38 & 4) >> 2);
      bVar7 = (byte)((local_38 & 8) >> 3);
    }
  }
  if ((((bVar9 | bVar13) == 1) && (1 < *(int *)(param_1 + 0x24))) ||
     (((bVar7 | local_40) == 1 && (2 < *(int *)(param_1 + 0x24))))) {
    FUN_00435177(param_1);
  }
  if ((bVar13 == 0) || (iVar5 = *(int *)(param_1 + 0x24), iVar5 < 2)) {
    if ((local_40 != 0) && (iVar5 = *(int *)(param_1 + 0x24), 2 < iVar5)) goto LAB_004363ad;
  }
  else {
    if (local_40 == 0) {
      iVar2 = FUN_00435650(param_1);
    }
    else {
LAB_004363ad:
      iVar2 = FUN_004351cc(param_1);
    }
    iVar3 = FUN_00436e60(param_1,iVar2);
    if ((char)iVar3 == '\0') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x30);
    iVar12 = *(int *)(iVar3 + iVar2 * 4);
    iVar15 = *(int *)(iVar6 + iVar2 * 4);
    iVar10 = iVar15 - iVar12;
    if (param_4 < iVar10) {
      return;
    }
    iVar14 = 0x40;
    iVar4 = 0;
    do {
      if (iVar2 != iVar4) {
        iVar8 = iVar12 - *(int *)(iVar6 + iVar4 * 4);
        iVar11 = iVar14;
        if (*(int *)(iVar3 + iVar4 * 4) < iVar12) {
          iVar11 = iVar8;
        }
        if (iVar14 <= iVar8) {
          iVar11 = iVar14;
        }
        if (iVar8 < 0x40) {
          iVar14 = iVar11;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar5 != iVar4);
    iVar5 = 0x40 - iVar14;
    iVar2 = 0;
    if ((local_38 & 0x50) != 0) {
      iVar4 = iVar10;
      if ((char)((local_38 & 0x40) >> 6) == '\0' && bVar13 == 0) {
        iVar2 = FUN_00435650(param_1);
        iVar4 = *(int *)(iVar6 + iVar2 * 4) - *(int *)(iVar3 + iVar2 * 4);
      }
      iVar3 = iVar12;
      if (local_40 != 0) {
        iVar3 = iVar15;
      }
      if ((local_38 & 0x10) == 0) {
        iVar3 = iVar12;
      }
      iVar2 = 0;
      if (((iVar3 + iVar5 & 0x3fU) == 0) && (iVar4 < 0xc0)) {
        iVar2 = (int)((iVar4 + 0x20U & 0xffffffc0) - iVar4) / 2;
      }
    }
    iVar3 = 0;
    if (bVar13 != 0) {
      iVar3 = iVar2;
    }
    if ((local_38 >> 4 & 1) == 0) {
      iVar3 = 0;
    }
    iVar6 = iVar3;
    if (local_40 != 0) {
      iVar6 = iVar2;
    }
    if ((local_38 & 0x40) == 0) {
      iVar6 = iVar3;
    }
    iVar6 = iVar6 + iVar5;
    if ((-3 < iVar6 && iVar6 != 0) && ((iVar6 < 0x43 || (-3 < iVar14)))) {
      iVar3 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      FUN_004353c7(param_1,iVar12 - (iVar3 >> 3),iVar5);
      if (local_40 == 1 && (local_38 & 0x10) != 0) {
        FUN_004353c7(param_1,iVar15 - (iVar3 >> 3),iVar2);
      }
    }
  }
  if ((bVar9 == 0) || (iVar5 = *(int *)(param_1 + 0x24), iVar5 < 2)) {
    if (bVar7 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 < 3) {
      return;
    }
  }
  else if (bVar7 == 0) {
    iVar2 = FUN_004356af(param_1);
    goto LAB_00436597;
  }
  iVar2 = FUN_00435408(param_1);
LAB_00436597:
  iVar3 = FUN_00436e60(param_1,iVar2);
  if ((char)iVar3 != '\0') {
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x30);
    iVar12 = *(int *)(iVar3 + iVar2 * 4);
    iVar15 = *(int *)(iVar6 + iVar2 * 4);
    iVar10 = iVar15 - iVar12;
    if (iVar10 <= param_4) {
      iVar4 = 0;
      iVar14 = 0x40;
      do {
        if (iVar2 != iVar4) {
          iVar8 = *(int *)(iVar3 + iVar4 * 4) - iVar15;
          iVar11 = iVar14;
          if (iVar15 < *(int *)(iVar6 + iVar4 * 4)) {
            iVar11 = iVar8;
          }
          if (iVar14 <= iVar8) {
            iVar11 = iVar14;
          }
          if (iVar8 < 0x40) {
            iVar14 = iVar11;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar5 != iVar4);
      iVar5 = 0;
      if ((local_38 & 0xa0) != 0) {
        iVar2 = iVar10;
        if (-1 < (char)local_38 && bVar9 == 0) {
          iVar5 = FUN_004356af(param_1);
          iVar2 = *(int *)(iVar6 + iVar5 * 4) - *(int *)(iVar3 + iVar5 * 4);
        }
        if ((local_38 & 0x20) == 0) {
          iVar12 = iVar15;
        }
        if (bVar7 == 0) {
          iVar12 = iVar15;
        }
        iVar5 = 0;
        if (((iVar12 + iVar14 & 0x3fU) == 0) && (iVar2 < 0xc0)) {
          iVar5 = (int)((iVar2 + 0x20U & 0xffffffc0) - iVar2) / 2;
        }
      }
      iVar2 = 0;
      if ((char)local_38 < '\0') {
        iVar2 = iVar5;
      }
      if (bVar7 == 0) {
        iVar2 = 0;
      }
      iVar3 = iVar2;
      if ((local_38 & 0x20) != 0) {
        iVar3 = iVar5;
      }
      if (bVar9 == 0) {
        iVar3 = iVar2;
      }
      iVar3 = iVar3 + (0x40 - iVar14);
      if ((-3 < iVar3 && iVar3 != 0) && ((iVar3 < 0x43 || (-3 < iVar14)))) {
        iVar2 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar2 = iVar10;
        }
        iVar15 = (iVar2 >> 3) + iVar15;
        FUN_00435607(param_1,iVar15,0x40 - iVar14);
        if (bVar7 == 1 && (local_38 & 0x20) != 0) {
          FUN_00435607(param_1,iVar15 - iVar10,iVar5);
        }
      }
    }
  }
  return;
}

