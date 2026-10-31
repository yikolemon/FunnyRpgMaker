/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007b606 */

void FUN_14007b606(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  
  iVar1 = param_1[0x11];
  uVar7 = *param_3 * 4;
  uVar9 = param_3[1] * 4;
  iVar5 = param_1[3];
  iVar14 = param_2[1] >> 6;
  iVar12 = param_3[1] >> 6;
  if ((iVar12 < iVar5 || (iVar14 < iVar5 || iVar1 >> 8 < iVar5)) &&
     (iVar5 = param_1[1], iVar5 <= iVar12 || (iVar5 <= iVar14 || iVar5 <= iVar1 >> 8))) {
    iVar5 = param_2[1] * 4;
    lVar18 = (longlong)*param_2 * 4 - (longlong)param_1[0x10];
    iVar12 = iVar5 - iVar1;
    uVar15 = uVar7 - ((int)((longlong)*param_2 * 4) + (int)lVar18);
    uVar13 = uVar9 - (iVar5 + iVar12);
    uVar2 = -uVar15;
    if ((int)-uVar15 < 0) {
      uVar2 = uVar15;
    }
    uVar8 = -uVar13;
    if ((int)-uVar13 < 0) {
      uVar8 = uVar13;
    }
    if (uVar8 < uVar2) {
      uVar8 = uVar2;
    }
    if (uVar8 < 0x41) {
      FUN_14007b2cd(param_1,uVar7,uVar9);
      return;
    }
    bVar4 = 0x10;
    bVar3 = 0x21;
    bVar6 = 0x20;
    uVar11 = (ulonglong)uVar8;
    do {
      bVar4 = bVar4 - 1;
      bVar3 = bVar3 - 1;
      bVar6 = bVar6 - 2;
      uVar9 = (uint)uVar11;
      uVar11 = uVar11 >> 2;
    } while (0x103 < uVar9);
    uVar9 = 0x10000 >> (bVar4 & 0x1f);
    lVar20 = (longlong)(int)uVar15 << (bVar6 & 0x3f);
    lVar16 = (longlong)(int)uVar13 << (bVar6 & 0x3f);
    lVar19 = (lVar18 << (bVar3 & 0x3f)) + lVar20;
    lVar17 = ((longlong)iVar12 << (bVar3 & 0x3f)) + lVar16;
    lVar18 = (longlong)param_1[0x10] << 0x20;
    lVar10 = (longlong)iVar1 << 0x20;
    do {
      lVar18 = lVar18 + lVar19;
      lVar10 = lVar10 + lVar17;
      lVar19 = lVar19 + lVar20 * 2;
      lVar17 = lVar17 + lVar16 * 2;
      FUN_14007b2cd(param_1,(uint)((ulonglong)lVar18 >> 0x20),(uint)((ulonglong)lVar10 >> 0x20));
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  else {
    param_1[0x10] = uVar7;
    param_1[0x11] = uVar9;
  }
  return;
}

