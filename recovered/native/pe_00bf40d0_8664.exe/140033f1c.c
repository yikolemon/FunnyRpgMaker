/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033f1c */

void FUN_140033f1c(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_1 <= param_2) {
    lVar7 = param_4;
    if (*(int *)(param_4 + 0x1c) < *(int *)(param_3 + 0x1c)) {
      lVar7 = param_3;
      param_3 = param_4;
    }
    iVar1 = *(int *)(param_3 + 0x18);
    iVar2 = *(int *)(param_3 + 0x1c);
    iVar3 = *(int *)(lVar7 + 0x1c);
    iVar8 = *(int *)(lVar7 + 0x18) - iVar3;
    uVar5 = *(int *)(lVar7 + 0x18) - iVar1;
    if ((uVar5 == 0) || (iVar3 - iVar2 == 0)) {
      do {
        iVar4 = *(int *)(param_1 + 0x1c);
        iVar6 = iVar4 + iVar8;
        if (iVar4 < iVar3) {
          iVar6 = iVar1;
        }
        if (iVar4 <= iVar2) {
          iVar6 = iVar4 + (iVar1 - iVar2);
        }
        *(int *)(param_1 + 0x18) = iVar6;
        param_1 = param_1 + 0x30;
      } while (param_1 <= param_2);
    }
    else {
      iVar4 = FUN_14001ecff(uVar5,iVar3 - iVar2);
      do {
        iVar6 = *(int *)(param_1 + 0x1c);
        if (iVar6 - iVar2 == 0 || iVar6 < iVar2) {
          iVar6 = iVar6 + (iVar1 - iVar2);
        }
        else if (iVar6 < iVar3) {
          lVar7 = (longlong)(iVar6 - iVar2) * (longlong)iVar4;
          iVar6 = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10) + iVar1;
        }
        else {
          iVar6 = iVar6 + iVar8;
        }
        *(int *)(param_1 + 0x18) = iVar6;
        param_1 = param_1 + 0x30;
      } while (param_1 <= param_2);
    }
  }
  return;
}

