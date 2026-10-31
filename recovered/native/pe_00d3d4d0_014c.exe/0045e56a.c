/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e56a */

int __fastcall FUN_0045e56a(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  pbVar8 = (byte *)*param_1;
  if (param_3 - 0x25 < 0xffffffdd || param_2 <= pbVar8) {
    return 0;
  }
  bVar1 = *pbVar8;
  if ((bVar1 == 0x2d) || (bVar10 = true, bVar1 == 0x2b)) {
    pbVar8 = pbVar8 + 1;
    if (pbVar8 == param_2) {
      return 0;
    }
    bVar10 = bVar1 != 0x2d;
    if (*pbVar8 == 0x2b) {
      return 0;
    }
    if (*pbVar8 == 0x2d) {
      return 0;
    }
  }
  iVar4 = (int)(0x7fffffff / (ulonglong)param_3);
  iVar6 = 0;
  pbVar9 = pbVar8;
  if (pbVar8 < param_2) {
    iVar7 = 0;
    bVar2 = false;
    do {
      uVar5 = (uint)*pbVar8;
      pbVar9 = pbVar8;
      if ((((uVar5 - 9 < 0x18) && ((0x80001bU >> (uVar5 - 9 & 0x1f) & 1) != 0)) || (uVar5 == 0)) ||
         (((char)*pbVar8 < '\0' || (uVar5 = (uint)(char)(&DAT_004e6a78)[uVar5], param_3 <= uVar5))))
      break;
      iVar6 = iVar7;
      bVar3 = true;
      if ((iVar7 <= iVar4) &&
         ((iVar7 != iVar4 || (iVar6 = iVar4, (int)uVar5 <= (int)(0x7fffffff % (ulonglong)param_3))))
         ) {
        iVar6 = iVar7 * param_3 + uVar5;
        bVar3 = bVar2;
      }
      bVar2 = bVar3;
      iVar7 = iVar6;
      pbVar8 = pbVar8 + 1;
      pbVar9 = param_2;
    } while (pbVar8 != param_2);
    iVar6 = 0x7fffffff;
    if (!bVar2) {
      iVar6 = iVar7;
    }
  }
  *param_1 = pbVar9;
  iVar4 = -iVar6;
  if (bVar10) {
    iVar4 = iVar6;
  }
  return iVar4;
}

