/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017d6b2 */

void FUN_14017d6b2(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  
  iVar2 = *(int *)(param_1 + 0x44);
  iVar1 = param_3[1] * 4;
  iVar5 = *(int *)(param_1 + 0xc);
  iVar13 = param_2[1] >> 6;
  iVar11 = param_3[1] >> 6;
  if ((iVar11 < iVar5 || (iVar13 < iVar5 || iVar2 >> 8 < iVar5)) &&
     (iVar5 = *(int *)(param_1 + 4), iVar5 <= iVar11 || (iVar5 <= iVar13 || iVar5 <= iVar2 >> 8))) {
    iVar5 = param_2[1] * 4;
    lVar16 = (longlong)*param_2 * 4 - (longlong)*(int *)(param_1 + 0x40);
    iVar11 = iVar5 - iVar2;
    uVar14 = *param_3 * 4 - ((int)((longlong)*param_2 * 4) + (int)lVar16);
    uVar12 = iVar1 - (iVar5 + iVar11);
    uVar9 = -uVar14;
    if ((int)-uVar14 < 0) {
      uVar9 = uVar14;
    }
    uVar8 = -uVar12;
    if ((int)-uVar12 < 0) {
      uVar8 = uVar12;
    }
    if (uVar8 < uVar9) {
      uVar8 = uVar9;
    }
    if (uVar8 < 0x41) {
      FUN_14017d379(param_1);
      return;
    }
    bVar4 = 0x10;
    bVar3 = 0x21;
    bVar6 = 0x20;
    uVar7 = (ulonglong)uVar8;
    do {
      bVar4 = bVar4 - 1;
      bVar3 = bVar3 - 1;
      bVar6 = bVar6 - 2;
      uVar9 = (uint)uVar7;
      uVar7 = uVar7 >> 2;
    } while (0x103 < uVar9);
    uVar9 = 0x10000 >> (bVar4 & 0x1f);
    lVar18 = (longlong)(int)uVar14 << (bVar6 & 0x3f);
    lVar15 = (longlong)(int)uVar12 << (bVar6 & 0x3f);
    lVar17 = (lVar16 << (bVar3 & 0x3f)) + lVar18;
    lVar16 = ((longlong)iVar11 << (bVar3 & 0x3f)) + lVar15;
    uVar7 = (longlong)*(int *)(param_1 + 0x40) << 0x20;
    uVar10 = (longlong)iVar2 << 0x20;
    do {
      uVar7 = uVar7 + lVar17;
      uVar10 = uVar10 + lVar16;
      lVar17 = lVar17 + lVar18 * 2;
      lVar16 = lVar16 + lVar15 * 2;
      FUN_14017d379(param_1,uVar7 >> 0x20,uVar10 >> 0x20);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  else {
    *(int *)(param_1 + 0x40) = *param_3 * 4;
    *(int *)(param_1 + 0x44) = iVar1;
  }
  return;
}

