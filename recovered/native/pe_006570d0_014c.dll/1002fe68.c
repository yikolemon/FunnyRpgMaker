/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002fe68 */

void __thiscall FUN_1002fe68(int *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    uVar5 = 0;
    iVar4 = 0;
    do {
      lVar1 = (ulonglong)param_2 * (ulonglong)*(uint *)(*param_1 + iVar4 * 4) + (ulonglong)uVar5;
      *(int *)(*param_1 + iVar4 * 4) = (int)lVar1;
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
    if (uVar5 != 0) {
      iVar2 = param_1[1];
      uVar3 = iVar2 + 1;
      if ((uint)param_1[2] < uVar3) {
        (*(code *)param_1[3])(param_1,uVar3);
        iVar2 = param_1[1];
        uVar3 = iVar2 + 1;
      }
      param_1[1] = uVar3;
      *(uint *)(*param_1 + iVar2 * 4) = uVar5;
    }
  }
  return;
}

