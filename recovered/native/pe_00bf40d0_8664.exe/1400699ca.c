/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400699ca */

undefined4
FUN_1400699ca(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar4 = (longlong)((param_5[1] - param_4[1]) + 0x10 >> 5);
  lVar6 = ((*param_3 - *param_2) + 0x10 >> 5) * lVar4;
  lVar8 = (longlong)((*param_5 - *param_4) + 0x10 >> 5);
  lVar9 = ((param_3[1] - param_2[1]) + 0x10 >> 5) * lVar8;
  uVar5 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) -
          (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
  if (uVar5 != 0) {
    lVar4 = lVar4 * ((*param_4 - *param_2) + 0x10 >> 5);
    lVar8 = ((param_4[1] - param_2[1]) + 0x10 >> 5) * lVar8;
    iVar1 = FUN_14001ecff((int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) -
                          (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10),uVar5);
    lVar8 = (longlong)(*param_3 - *param_2) * (longlong)iVar1;
    iVar2 = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + *param_2;
    *param_6 = iVar2;
    lVar8 = (longlong)(param_3[1] - param_2[1]) * (longlong)iVar1;
    iVar3 = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + param_2[1];
    param_6[1] = iVar3;
    iVar1 = *param_2;
    if (iVar1 == *param_3) {
      iVar7 = -(iVar2 - iVar1);
      if (iVar7 < 0) {
        iVar7 = iVar2 - iVar1;
      }
      if (iVar7 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar1;
        iVar2 = iVar1;
      }
    }
    iVar1 = param_2[1];
    if (iVar1 == param_3[1]) {
      iVar7 = -(iVar3 - iVar1);
      if (iVar7 < 0) {
        iVar7 = iVar3 - iVar1;
      }
      if (iVar7 < *(int *)(param_1 + 0x490c)) {
        param_6[1] = iVar1;
        iVar3 = iVar1;
      }
    }
    iVar1 = *param_4;
    if (iVar1 == *param_5) {
      iVar7 = -(iVar2 - iVar1);
      if (iVar7 < 0) {
        iVar7 = iVar2 - iVar1;
      }
      if (iVar7 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar1;
        iVar2 = iVar1;
      }
    }
    iVar1 = param_4[1];
    if (iVar1 == param_5[1]) {
      iVar7 = -(iVar3 - iVar1);
      if (iVar7 < 0) {
        iVar7 = iVar3 - iVar1;
      }
      if (iVar7 < *(int *)(param_1 + 0x490c)) {
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

