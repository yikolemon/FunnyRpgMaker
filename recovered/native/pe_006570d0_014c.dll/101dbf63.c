/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dbf63 */

void __fastcall FUN_101dbf63(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 <= param_2) {
    iVar5 = param_4;
    if (*(int *)(param_4 + 0x1c) < *(int *)(param_3 + 0x1c)) {
      iVar5 = param_3;
      param_3 = param_4;
    }
    iVar1 = *(int *)(param_3 + 0x18);
    iVar2 = *(int *)(param_3 + 0x1c);
    iVar3 = *(int *)(iVar5 + 0x1c);
    iVar7 = *(int *)(iVar5 + 0x18) - iVar3;
    iVar5 = *(int *)(iVar5 + 0x18) - iVar1;
    if ((iVar5 == 0) || (iVar3 - iVar2 == 0)) {
      do {
        iVar5 = *(int *)(param_1 + 0x1c);
        iVar6 = iVar7 + iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar1;
        }
        if (iVar5 <= iVar2) {
          iVar6 = iVar5 + (iVar1 - iVar2);
        }
        *(int *)(param_1 + 0x18) = iVar6;
        param_1 = param_1 + 0x28;
      } while (param_1 <= param_2);
    }
    else {
      iVar5 = FUN_101c2523(iVar5,iVar3 - iVar2);
      do {
        iVar6 = *(int *)(param_1 + 0x1c);
        if (iVar6 - iVar2 == 0 || iVar6 < iVar2) {
          iVar6 = iVar6 + (iVar1 - iVar2);
        }
        else if (iVar6 < iVar3) {
          lVar4 = (longlong)(iVar6 - iVar2) * (longlong)iVar5;
          iVar6 = (int)(lVar4 >> 0x3f);
          lVar4 = lVar4 + CONCAT44(iVar6,iVar6) + 0x8000;
          iVar6 = ((int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10) + iVar1;
        }
        else {
          iVar6 = iVar6 + iVar7;
        }
        *(int *)(param_1 + 0x18) = iVar6;
        param_1 = param_1 + 0x28;
      } while (param_1 <= param_2);
    }
  }
  return;
}

