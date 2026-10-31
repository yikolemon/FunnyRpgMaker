/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033ba8 */

uint FUN_140033ba8(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 0x117c);
  uVar13 = 0x40;
  if ((uVar1 & 4) == 0) {
    if (((*(byte *)(param_2 + 0xc) & 1) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      uVar13 = (uint)(param_5 != 0) * 2 + 0x3b;
    }
    else {
      uVar13 = 0x37;
      if (param_5 == 0) {
        uVar13 = 0x31;
      }
    }
  }
  iVar2 = *(int *)(param_3 + 4);
  iVar3 = *(int *)(param_2 + 4);
  uVar5 = FUN_140033d66(param_1,param_5,iVar2 - iVar3);
  uVar7 = ((iVar3 + iVar2) / 2 + param_4) - (int)uVar5 / 2;
  uVar6 = 0;
  uVar12 = uVar7 & 0x3f;
  if ((uVar12 == 0) || (uVar9 = uVar7 + uVar5 & 0x3f, uVar9 == 0)) {
LAB_140033d0e:
    uVar13 = uVar6;
    if (((uVar1 & 4) != 0) || (uVar13 = 0xe, uVar11 = uVar6, 0xe < (int)uVar6)) goto LAB_140033d2e;
  }
  else {
    uVar10 = 0x40 - uVar12;
    if ((int)uVar5 <= (int)uVar13) {
      uVar6 = 0;
      if (((int)uVar9 < (int)uVar5) && (uVar6 = -uVar9, uVar10 <= uVar9)) {
        uVar6 = uVar10;
      }
      goto LAB_140033d0e;
    }
    if (((uVar1 & 4) != 0) ||
       ((((uVar11 = 0, uVar12 < uVar13 && (uVar10 < uVar13)) && (uVar9 < uVar13)) &&
        (0x40 - uVar9 < uVar13)))) {
      uVar12 = uVar5 & 0x3f;
      if (uVar12 < 0x20) {
        if ((uVar10 <= uVar12) || (uVar9 <= uVar12)) goto LAB_140033d0e;
      }
      else {
        uVar12 = 0x40 - uVar13;
      }
      uVar11 = -(uVar13 - uVar10);
      if ((int)(uVar10 - uVar12) < (int)(uVar13 - uVar10)) {
        uVar11 = uVar10 - uVar12;
      }
      uVar6 = -(uVar9 - uVar12);
      if ((int)(uVar13 - uVar9) < (int)(uVar9 - uVar12)) {
        uVar6 = uVar13 - uVar9;
      }
      uVar13 = -uVar11;
      if ((int)-uVar11 < 0) {
        uVar13 = uVar11;
      }
      uVar12 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar12 = uVar6;
      }
      if (uVar13 <= uVar12) {
        uVar6 = uVar11;
      }
      goto LAB_140033d0e;
    }
  }
  uVar13 = 0xfffffff2;
  if (-0xe < (int)uVar11) {
    uVar13 = uVar11;
  }
LAB_140033d2e:
  iVar8 = uVar7 + uVar13;
  iVar4 = uVar5 + iVar8;
  if (iVar2 <= iVar3) {
    iVar4 = iVar8;
    iVar8 = uVar5 + iVar8;
  }
  *(int *)(param_2 + 8) = iVar8;
  *(int *)(param_3 + 8) = iVar4;
  return uVar13;
}

