/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140025b07 */

uint FUN_140025b07(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  iVar7 = (int)param_1[1];
  iVar4 = (int)param_1[0x15] + iVar7;
  iVar9 = (int)param_2[1];
  iVar6 = (int)param_2[0x15] + iVar9;
  bVar11 = SBORROW4(iVar4,iVar6);
  bVar10 = iVar4 - iVar6 < 0;
  if (iVar4 == iVar6) {
    uVar3 = 0;
    if (0 < iVar7 - iVar9) {
      uVar3 = iVar7 - iVar9;
    }
    lVar5 = (longlong)iVar7;
    lVar8 = (longlong)iVar9;
    while ((longlong)(ulonglong)uVar3 < lVar5) {
      uVar1 = *(uint *)(*param_1 + -4 + lVar5 * 4);
      lVar5 = lVar5 + -1;
      uVar2 = *(uint *)(*param_2 + -4 + lVar8 * 4);
      lVar8 = lVar8 + -1;
      if (uVar1 != uVar2) {
        return (uVar2 < uVar1) - 1 | 1;
      }
    }
    bVar11 = SBORROW8(lVar5,lVar8);
    bVar10 = lVar5 - lVar8 < 0;
    if (lVar5 == lVar8) {
      return 0;
    }
  }
  return (uint)(bVar11 == bVar10) * 2 - 1;
}

