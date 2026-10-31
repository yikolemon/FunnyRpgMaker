/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021585e */

int FUN_18021585e(undefined8 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  
  pbVar6 = (byte *)*param_1;
  if (param_3 - 0x25 < 0xffffffdd || param_2 <= pbVar6) {
    return 0;
  }
  bVar1 = *pbVar6;
  if ((bVar1 == 0x2d) || (bVar11 = true, bVar1 == 0x2b)) {
    pbVar6 = pbVar6 + 1;
    if (pbVar6 == param_2) {
      return 0;
    }
    bVar11 = bVar1 != 0x2d;
    if (*pbVar6 == 0x2b) {
      return 0;
    }
    if (*pbVar6 == 0x2d) {
      return 0;
    }
  }
  pbVar7 = pbVar6;
  iVar5 = 0;
  if (pbVar6 < param_2) {
    iVar9 = 0;
    bVar2 = false;
    do {
      uVar10 = (ulonglong)*pbVar6;
      pbVar7 = pbVar6;
      if ((((uVar10 < 0x21) && ((0x100003601U >> (uVar10 & 0x3f) & 1) != 0)) ||
          ((char)*pbVar6 < '\0')) ||
         (uVar8 = (uint)(char)(&DAT_18033cd40)[uVar10], param_3 <= uVar8)) break;
      iVar4 = (int)(0x7fffffff / (ulonglong)param_3);
      iVar5 = iVar9;
      bVar3 = true;
      if ((iVar9 <= iVar4) &&
         ((iVar9 != iVar4 || (iVar5 = iVar4, (int)uVar8 <= (int)(0x7fffffff % (ulonglong)param_3))))
         ) {
        iVar5 = iVar9 * param_3 + uVar8;
        bVar3 = bVar2;
      }
      bVar2 = bVar3;
      iVar9 = iVar5;
      pbVar6 = pbVar6 + 1;
      pbVar7 = param_2;
    } while (pbVar6 != param_2);
    iVar5 = 0x7fffffff;
    if (!bVar2) {
      iVar5 = iVar9;
    }
  }
  *param_1 = pbVar7;
  iVar9 = -iVar5;
  if (bVar11) {
    iVar9 = iVar5;
  }
  return iVar9;
}

