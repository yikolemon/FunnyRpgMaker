/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf2c2 */

void FUN_1801cf2c2(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  
  iVar11 = *param_1;
  iVar3 = param_1[1];
  iVar4 = -iVar11;
  if (iVar11 < iVar3) {
    iVar8 = 0x5a0000;
    iVar5 = iVar3;
    if (iVar3 <= iVar4) {
      iVar8 = -0xb40000;
      if (0 < iVar3) {
        iVar8 = 0xb40000;
      }
      iVar5 = iVar4;
      iVar4 = -iVar3;
    }
  }
  else {
    iVar8 = 0;
    bVar2 = iVar3 < iVar4;
    iVar5 = iVar11;
    iVar4 = iVar3;
    if (bVar2) {
      iVar8 = -0x5a0000;
      iVar5 = -iVar3;
      iVar4 = iVar11;
    }
  }
  iVar3 = 1;
  piVar10 = &DAT_180329680;
  iVar11 = 1;
  do {
    iVar6 = iVar11 + iVar4 >> ((byte)iVar3 & 0x1f);
    iVar7 = iVar11 + iVar5 >> ((byte)iVar3 & 0x1f);
    iVar1 = *piVar10;
    if (iVar4 < 1) {
      iVar6 = -iVar6;
      iVar1 = -iVar1;
    }
    else {
      iVar7 = -iVar7;
    }
    iVar5 = iVar6 + iVar5;
    iVar8 = iVar8 + iVar1;
    iVar4 = iVar4 + iVar7;
    piVar10 = piVar10 + 1;
    iVar11 = iVar11 * 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x17);
  if (iVar8 < 0) {
    uVar9 = -(8U - iVar8 & 0xfffffff0);
  }
  else {
    uVar9 = iVar8 + 8U & 0x7ffffff0;
  }
  *param_1 = iVar5;
  param_1[1] = uVar9;
  return;
}

