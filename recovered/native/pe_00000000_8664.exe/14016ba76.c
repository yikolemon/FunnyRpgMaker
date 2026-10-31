/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016ba76 */

undefined4
FUN_14016ba76(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = (longlong)((param_5[1] - param_4[1]) + 0x10 >> 5);
  lVar5 = ((*param_3 - *param_2) + 0x10 >> 5) * lVar4;
  lVar7 = (longlong)((*param_5 - *param_4) + 0x10 >> 5);
  lVar8 = ((param_3[1] - param_2[1]) + 0x10 >> 5) * lVar7;
  if ((int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) !=
      (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10)) {
    lVar4 = lVar4 * ((*param_4 - *param_2) + 0x10 >> 5);
    lVar7 = ((param_4[1] - param_2[1]) + 0x10 >> 5) * lVar7;
    iVar1 = FUN_14012b378((int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) -
                          (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10));
    lVar7 = (longlong)(*param_3 - *param_2) * (longlong)iVar1;
    iVar2 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + *param_2;
    *param_6 = iVar2;
    lVar7 = (longlong)(param_3[1] - param_2[1]) * (longlong)iVar1;
    iVar3 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + param_2[1];
    param_6[1] = iVar3;
    iVar1 = *param_2;
    if (iVar1 == *param_3) {
      iVar6 = -(iVar2 - iVar1);
      if (iVar6 < 0) {
        iVar6 = iVar2 - iVar1;
      }
      if (iVar6 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar1;
        iVar2 = iVar1;
      }
    }
    iVar1 = param_2[1];
    if (iVar1 == param_3[1]) {
      iVar6 = -(iVar3 - iVar1);
      if (iVar6 < 0) {
        iVar6 = iVar3 - iVar1;
      }
      if (iVar6 < *(int *)(param_1 + 0x490c)) {
        param_6[1] = iVar1;
        iVar3 = iVar1;
      }
    }
    iVar1 = *param_4;
    if (iVar1 == *param_5) {
      iVar6 = -(iVar2 - iVar1);
      if (iVar6 < 0) {
        iVar6 = iVar2 - iVar1;
      }
      if (iVar6 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar1;
        iVar2 = iVar1;
      }
    }
    iVar1 = param_4[1];
    if (iVar1 == param_5[1]) {
      iVar6 = -(iVar3 - iVar1);
      if (iVar6 < 0) {
        iVar6 = iVar3 - iVar1;
      }
      if (iVar6 < *(int *)(param_1 + 0x490c)) {
        param_6[1] = iVar1;
        iVar3 = iVar1;
      }
    }
    iVar2 = iVar2 - (*param_4 + *param_3) / 2;
    iVar1 = -iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x4908);
    if (iVar1 <= iVar2) {
      iVar3 = iVar3 - (param_4[1] + param_3[1]) / 2;
      iVar1 = -iVar3;
      if (iVar1 < 0) {
        iVar1 = iVar3;
      }
      return CONCAT31((int3)((uint)iVar2 >> 8),iVar1 <= iVar2);
    }
  }
  return 0;
}

