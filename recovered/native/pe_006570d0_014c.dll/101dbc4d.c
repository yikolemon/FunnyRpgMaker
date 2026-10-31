/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dbc4d */

uint __fastcall FUN_101dbc4d(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 0xac0);
  uVar12 = 0x40;
  if ((uVar1 & 4) == 0) {
    if (((*(byte *)(param_2 + 0xc) & 1) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      uVar12 = (uint)(param_5 != 0) * 2 + 0x3b;
    }
    else {
      uVar12 = 0x37;
      if (param_5 == 0) {
        uVar12 = 0x31;
      }
    }
  }
  iVar2 = *(int *)(param_3 + 4);
  iVar3 = *(int *)(param_2 + 4);
  uVar4 = FUN_101dbddc(iVar2 - iVar3);
  uVar7 = ((iVar3 + iVar2) / 2 + param_4) - (int)uVar4 / 2;
  uVar6 = 0;
  uVar10 = uVar7 & 0x3f;
  if ((uVar10 == 0) || (uVar9 = uVar7 + uVar4 & 0x3f, uVar9 == 0)) {
LAB_101dbd82:
    uVar12 = uVar6;
    if (((uVar1 & 4) != 0) || (uVar12 = 0xe, uVar10 = uVar6, 0xe < (int)uVar6)) goto LAB_101dbd9f;
  }
  else {
    uVar13 = 0x40 - uVar10;
    if ((int)uVar4 <= (int)uVar12) {
      if (((int)uVar9 < (int)uVar4) && (uVar6 = -uVar9, uVar13 <= uVar9)) {
        uVar6 = uVar13;
      }
      goto LAB_101dbd82;
    }
    if ((uVar1 & 4) != 0) {
LAB_101dbd29:
      uVar10 = uVar4 & 0x3f;
      if (uVar10 < 0x20) {
        if ((uVar13 <= uVar10) || (uVar9 <= uVar10)) goto LAB_101dbd82;
      }
      else {
        uVar10 = 0x40 - uVar12;
      }
      uVar11 = -(uVar12 - uVar13);
      if ((int)(uVar13 - uVar10) < (int)(uVar12 - uVar13)) {
        uVar11 = uVar13 - uVar10;
      }
      uVar6 = -(uVar9 - uVar10);
      if ((int)(uVar12 - uVar9) < (int)(uVar9 - uVar10)) {
        uVar6 = uVar12 - uVar9;
      }
      uVar12 = -uVar11;
      if ((int)-uVar11 < 0) {
        uVar12 = uVar11;
      }
      uVar10 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar10 = uVar6;
      }
      if (uVar12 <= uVar10) {
        uVar6 = uVar11;
      }
      goto LAB_101dbd82;
    }
    if (((uVar10 < uVar12) && (uVar13 < uVar12)) && (uVar9 < uVar12)) {
      uVar10 = 0;
      if (0x40 - uVar9 < uVar12) goto LAB_101dbd29;
    }
    else {
      uVar10 = 0;
    }
  }
  uVar12 = 0xfffffff2;
  if (-0xe < (int)uVar10) {
    uVar12 = uVar10;
  }
LAB_101dbd9f:
  iVar8 = uVar7 + uVar12;
  iVar5 = uVar4 + iVar8;
  if (iVar2 <= iVar3) {
    iVar5 = iVar8;
    iVar8 = uVar4 + iVar8;
  }
  *(int *)(param_2 + 8) = iVar8;
  *(int *)(param_3 + 8) = iVar5;
  return uVar12;
}

