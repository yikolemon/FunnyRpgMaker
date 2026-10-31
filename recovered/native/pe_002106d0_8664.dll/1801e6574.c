/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e6574 */

uint FUN_1801e6574(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar1 = *(uint *)(param_1 + 0x117c);
  uVar14 = 0x40;
  if ((uVar1 & 4) == 0) {
    if (((*(byte *)(param_2 + 0xc) & 1) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      uVar14 = (uint)(param_5 != 0) * 2 + 0x3b;
    }
    else {
      uVar14 = 0x37;
      if (param_5 == 0) {
        uVar14 = 0x31;
      }
    }
  }
  iVar2 = *(int *)(param_3 + 4);
  iVar3 = *(int *)(param_2 + 4);
  uVar6 = FUN_1801e6732(param_1,param_5,iVar2 - iVar3);
  uVar5 = (uint)uVar6;
  uVar8 = ((iVar3 + iVar2) / 2 + param_4) - ((int)(((uint)(uVar6 >> 0x1f) & 1) + uVar5) >> 1);
  uVar7 = 0;
  uVar13 = uVar8 & 0x3f;
  if ((uVar13 == 0) || (uVar10 = uVar8 + uVar5 & 0x3f, uVar10 == 0)) {
LAB_1801e66da:
    uVar14 = uVar7;
    if (((uVar1 & 4) != 0) || (uVar14 = 0xe, uVar12 = uVar7, 0xe < (int)uVar7)) goto LAB_1801e66fa;
  }
  else {
    uVar11 = 0x40 - uVar13;
    if ((int)uVar5 <= (int)uVar14) {
      uVar7 = 0;
      if (((int)uVar10 < (int)uVar5) && (uVar7 = -uVar10, uVar11 <= uVar10)) {
        uVar7 = uVar11;
      }
      goto LAB_1801e66da;
    }
    if (((uVar1 & 4) != 0) ||
       ((((uVar12 = 0, uVar13 < uVar14 && (uVar11 < uVar14)) && (uVar10 < uVar14)) &&
        (0x40 - uVar10 < uVar14)))) {
      uVar13 = uVar5 & 0x3f;
      if (uVar13 < 0x20) {
        if ((uVar11 <= uVar13) || (uVar10 <= uVar13)) goto LAB_1801e66da;
      }
      else {
        uVar13 = 0x40 - uVar14;
      }
      uVar12 = -(uVar14 - uVar11);
      if ((int)(uVar11 - uVar13) < (int)(uVar14 - uVar11)) {
        uVar12 = uVar11 - uVar13;
      }
      uVar7 = -(uVar10 - uVar13);
      if ((int)(uVar14 - uVar10) < (int)(uVar10 - uVar13)) {
        uVar7 = uVar14 - uVar10;
      }
      uVar14 = -uVar12;
      if ((int)-uVar12 < 0) {
        uVar14 = uVar12;
      }
      uVar13 = -uVar7;
      if ((int)-uVar7 < 0) {
        uVar13 = uVar7;
      }
      if (uVar14 <= uVar13) {
        uVar7 = uVar12;
      }
      goto LAB_1801e66da;
    }
  }
  uVar14 = 0xfffffff2;
  if (-0xe < (int)uVar12) {
    uVar14 = uVar12;
  }
LAB_1801e66fa:
  iVar9 = uVar8 + uVar14;
  iVar4 = uVar5 + iVar9;
  if (iVar2 <= iVar3) {
    iVar4 = iVar9;
    iVar9 = uVar5 + iVar9;
  }
  *(int *)(param_2 + 8) = iVar9;
  *(int *)(param_3 + 8) = iVar4;
  return uVar14;
}

