/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140062e9a */

int FUN_140062e9a(undefined8 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  pbVar7 = (byte *)*param_1;
  if (param_3 - 0x25 < 0xffffffdd || param_2 <= pbVar7) {
    return 0;
  }
  bVar1 = *pbVar7;
  if ((bVar1 == 0x2d) || (bVar11 = true, bVar1 == 0x2b)) {
    pbVar7 = pbVar7 + 1;
    if (pbVar7 == param_2) {
      return 0;
    }
    bVar11 = bVar1 != 0x2d;
    if (*pbVar7 == 0x2b) {
      return 0;
    }
    if (*pbVar7 == 0x2d) {
      return 0;
    }
  }
  pbVar8 = pbVar7;
  iVar6 = 0;
  if (pbVar7 < param_2) {
    iVar5 = 0;
    bVar2 = false;
    do {
      uVar10 = (ulonglong)*pbVar7;
      pbVar8 = pbVar7;
      if ((((uVar10 < 0x21) && ((0x100003601U >> (uVar10 & 0x3f) & 1) != 0)) ||
          ((char)*pbVar7 < '\0')) ||
         (uVar9 = (uint)(char)(&DAT_1400f9e70)[uVar10], param_3 <= uVar9)) break;
      iVar4 = (int)(0x7fffffff / (ulonglong)param_3);
      iVar6 = iVar5;
      bVar3 = true;
      if ((iVar5 <= iVar4) &&
         ((iVar5 != iVar4 || (iVar6 = iVar4, (int)uVar9 <= (int)(0x7fffffff % (ulonglong)param_3))))
         ) {
        iVar6 = iVar5 * param_3 + uVar9;
        bVar3 = bVar2;
      }
      bVar2 = bVar3;
      iVar5 = iVar6;
      pbVar7 = pbVar7 + 1;
      pbVar8 = param_2;
    } while (pbVar7 != param_2);
    iVar6 = 0x7fffffff;
    if (!bVar2) {
      iVar6 = iVar5;
    }
  }
  *param_1 = pbVar8;
  iVar5 = -iVar6;
  if (bVar11) {
    iVar5 = iVar6;
  }
  return iVar5;
}

