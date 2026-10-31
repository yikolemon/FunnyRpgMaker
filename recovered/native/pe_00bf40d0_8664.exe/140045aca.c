/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140045aca */

void FUN_140045aca(uint param_1,uint param_2,ulonglong param_3,ulonglong param_4,longlong param_5,
                  longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (param_1 <= param_2) {
    lVar12 = 0;
    bVar8 = true;
    do {
      bVar7 = bVar8;
      lVar1 = param_5 + lVar12 * 4;
      iVar4 = *(int *)(lVar1 + (param_3 & 0xffffffff) * 8);
      iVar3 = *(int *)(lVar1 + (param_4 & 0xffffffff) * 8);
      uVar11 = param_3;
      if (iVar3 < iVar4) {
        uVar11 = param_4;
      }
      uVar11 = uVar11 & 0xffffffff;
      lVar2 = param_6 + lVar12 * 4;
      if (iVar3 < iVar4) {
        param_4 = param_3;
      }
      param_4 = param_4 & 0xffffffff;
      iVar3 = *(int *)(lVar1 + uVar11 * 8);
      iVar4 = *(int *)(lVar1 + param_4 * 8);
      iVar5 = *(int *)(lVar2 + uVar11 * 8);
      iVar6 = *(int *)(lVar2 + param_4 * 8);
      if ((iVar4 != iVar3) || (iVar6 == iVar5)) {
        if (iVar4 - iVar3 == 0) {
          lVar10 = 0;
        }
        else {
          iVar9 = FUN_14001ecff(iVar6 - iVar5,iVar4 - iVar3);
          lVar10 = (longlong)iVar9;
        }
        lVar13 = 0;
        do {
          iVar9 = *(int *)(param_5 + (ulonglong)param_1 * 8 + lVar12 * 4 + lVar13 * 8);
          if (iVar9 - iVar3 == 0 || iVar9 < iVar3) {
            iVar9 = iVar9 + (iVar5 - iVar3);
          }
          else if (iVar9 < iVar4) {
            lVar14 = (iVar9 - iVar3) * lVar10;
            iVar9 = (int)((ulonglong)(lVar14 + (lVar14 >> 0x3f) + 0x8000) >> 0x10) + iVar5;
          }
          else {
            iVar9 = iVar9 + (iVar6 - iVar4);
          }
          *(int *)(lVar12 * 4 + param_6 + (ulonglong)param_1 * 8 + lVar13 * 8) = iVar9;
          lVar13 = lVar13 + 1;
        } while ((param_2 - param_1) + 1 != (int)lVar13);
      }
      lVar12 = 1;
      param_3 = uVar11;
      param_6 = lVar2;
      param_5 = lVar1;
      bVar8 = false;
    } while (bVar7);
  }
  return;
}

