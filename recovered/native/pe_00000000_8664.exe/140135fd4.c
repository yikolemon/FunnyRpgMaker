/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140135fd4 */

void FUN_140135fd4(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_1 <= param_2) {
    lVar6 = param_4;
    if (*(int *)(param_4 + 0x1c) < *(int *)(param_3 + 0x1c)) {
      lVar6 = param_3;
      param_3 = param_4;
    }
    iVar1 = *(int *)(param_3 + 0x18);
    iVar2 = *(int *)(param_3 + 0x1c);
    iVar3 = *(int *)(lVar6 + 0x1c);
    iVar7 = *(int *)(lVar6 + 0x18) - iVar3;
    if ((*(int *)(lVar6 + 0x18) == iVar1) || (iVar3 == iVar2)) {
      do {
        iVar4 = *(int *)(param_1 + 0x1c);
        iVar5 = iVar4 + iVar7;
        if (iVar4 < iVar3) {
          iVar5 = iVar1;
        }
        if (iVar4 <= iVar2) {
          iVar5 = iVar4 + (iVar1 - iVar2);
        }
        *(int *)(param_1 + 0x18) = iVar5;
        param_1 = param_1 + 0x30;
      } while (param_1 <= param_2);
    }
    else {
      iVar4 = FUN_14012b378();
      do {
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar5 - iVar2 == 0 || iVar5 < iVar2) {
          iVar5 = iVar5 + (iVar1 - iVar2);
        }
        else if (iVar5 < iVar3) {
          lVar6 = (longlong)(iVar5 - iVar2) * (longlong)iVar4;
          iVar5 = (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + iVar1;
        }
        else {
          iVar5 = iVar5 + iVar7;
        }
        *(int *)(param_1 + 0x18) = iVar5;
        param_1 = param_1 + 0x30;
      } while (param_1 <= param_2);
    }
  }
  return;
}

