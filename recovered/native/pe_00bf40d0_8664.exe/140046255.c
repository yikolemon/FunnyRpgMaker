/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046255 */

void FUN_140046255(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_4c;
  int local_48;
  
  if ((param_2 <= param_3) && (param_5 < *(uint *)(param_1 + 3) && param_4 < *(uint *)(param_1 + 3))
     ) {
    uVar13 = (ulonglong)param_4;
    iVar6 = *(int *)(param_1[2] + uVar13 * 8);
    uVar12 = (ulonglong)param_5;
    iVar8 = *(int *)(param_1[2] + uVar12 * 8);
    uVar11 = uVar13;
    local_4c = iVar6;
    local_48 = iVar8;
    if (iVar8 < iVar6) {
      uVar11 = uVar12;
      uVar12 = uVar13;
      local_4c = iVar8;
      local_48 = iVar6;
    }
    iVar1 = *(int *)(*param_1 + uVar11 * 8);
    iVar2 = *(int *)(*param_1 + uVar12 * 8);
    iVar3 = *(int *)(param_1[1] + uVar11 * 8);
    iVar4 = *(int *)(param_1[1] + uVar12 * 8);
    iVar10 = iVar4 - iVar2;
    if ((iVar8 == iVar6) || (uVar7 = iVar4 - iVar3, uVar7 == 0)) {
      do {
        iVar6 = *(int *)(*param_1 + (ulonglong)param_2 * 8);
        iVar8 = iVar6 + iVar10;
        if (iVar6 < iVar2) {
          iVar8 = iVar3;
        }
        if (iVar6 <= iVar1) {
          iVar8 = iVar6 + (iVar3 - iVar1);
        }
        *(int *)(param_1[1] + (ulonglong)param_2 * 8) = iVar8;
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
    else {
      iVar6 = 0;
      bVar5 = false;
      do {
        uVar11 = (ulonglong)param_2;
        iVar8 = *(int *)(*param_1 + uVar11 * 8);
        if (iVar1 < iVar8) {
          if (iVar8 < iVar2) {
            if (!bVar5) {
              iVar6 = FUN_14001ecff(uVar7,local_48 - local_4c);
            }
            lVar9 = (longlong)iVar6 * (longlong)(*(int *)(param_1[2] + uVar11 * 8) - local_4c);
            iVar8 = (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10) + iVar3;
            bVar5 = true;
          }
          else {
            iVar8 = iVar8 + iVar10;
          }
        }
        else {
          iVar8 = iVar8 + (iVar3 - iVar1);
        }
        *(int *)(param_1[1] + uVar11 * 8) = iVar8;
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
  }
  return;
}

