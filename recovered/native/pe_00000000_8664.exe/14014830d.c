/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014830d */

void FUN_14014830d(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_4c;
  int local_48;
  
  if ((param_2 <= param_3) && (param_5 < *(uint *)(param_1 + 3) && param_4 < *(uint *)(param_1 + 3))
     ) {
    uVar12 = (ulonglong)param_4;
    iVar5 = *(int *)(param_1[2] + uVar12 * 8);
    uVar11 = (ulonglong)param_5;
    iVar7 = *(int *)(param_1[2] + uVar11 * 8);
    uVar10 = uVar12;
    local_4c = iVar5;
    local_48 = iVar7;
    if (iVar7 < iVar5) {
      uVar10 = uVar11;
      uVar11 = uVar12;
      local_4c = iVar7;
      local_48 = iVar5;
    }
    iVar1 = *(int *)(*param_1 + uVar10 * 8);
    iVar2 = *(int *)(*param_1 + uVar11 * 8);
    iVar3 = *(int *)(param_1[1] + uVar10 * 8);
    iVar6 = *(int *)(param_1[1] + uVar11 * 8);
    iVar9 = iVar6 - iVar2;
    if ((iVar7 == iVar5) || (iVar6 = iVar6 - iVar3, iVar6 == 0)) {
      do {
        iVar5 = *(int *)(*param_1 + (ulonglong)param_2 * 8);
        iVar7 = iVar5 + iVar9;
        if (iVar5 < iVar2) {
          iVar7 = iVar3;
        }
        if (iVar5 <= iVar1) {
          iVar7 = iVar5 + (iVar3 - iVar1);
        }
        *(int *)(param_1[1] + (ulonglong)param_2 * 8) = iVar7;
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
    else {
      iVar5 = 0;
      bVar4 = false;
      do {
        uVar10 = (ulonglong)param_2;
        iVar7 = *(int *)(*param_1 + uVar10 * 8);
        if (iVar1 < iVar7) {
          if (iVar7 < iVar2) {
            if (!bVar4) {
              iVar5 = FUN_14012b378(iVar6,local_48 - local_4c);
            }
            lVar8 = (longlong)iVar5 * (longlong)(*(int *)(param_1[2] + uVar10 * 8) - local_4c);
            iVar7 = (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10) + iVar3;
            bVar4 = true;
          }
          else {
            iVar7 = iVar7 + iVar9;
          }
        }
        else {
          iVar7 = iVar7 + (iVar3 - iVar1);
        }
        *(int *)(param_1[1] + uVar10 * 8) = iVar7;
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
  }
  return;
}

