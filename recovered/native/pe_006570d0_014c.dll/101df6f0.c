/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101df6f0 */

int __fastcall FUN_101df6f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_24;
  
  iVar6 = *(int *)(param_1 + 0x24);
  if (iVar6 < 1) {
    iVar9 = 0x7fffffff;
    iVar7 = -0x80000000;
    local_24 = 0x7fffffff;
    iVar10 = -0x80000000;
  }
  else {
    iVar8 = 0;
    local_24 = 0x7fffffff;
    iVar10 = -0x80000000;
    iVar9 = 0x7fffffff;
    iVar7 = -0x80000000;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x28) + iVar8 * 4);
      iVar3 = iVar1;
      iVar5 = *(int *)(iVar1 + 0x20);
      iVar2 = *(int *)(*(int *)(iVar1 + 0x20) + 0x20);
      while (iVar2 != iVar1) {
        iVar3 = *(int *)(iVar3 + 0x20);
        iVar4 = *(int *)(iVar3 + 0x10);
        iVar5 = iVar3;
        iVar2 = iVar3;
        if (iVar8 == param_2) {
          if (iVar4 < local_24) {
            local_24 = iVar4;
          }
          if (iVar10 < iVar4) {
            iVar10 = iVar4;
          }
        }
        else {
          if (iVar4 < iVar9) {
            iVar9 = iVar4;
          }
          if (iVar7 < iVar4) {
            iVar7 = iVar4;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar6);
    iVar6 = CONCAT31((int3)((uint)iVar5 >> 8),1);
    if ((iVar9 <= iVar10) && (iVar10 <= iVar7)) {
      return iVar6;
    }
    if ((iVar9 <= local_24) && (local_24 <= iVar7)) {
      return iVar6;
    }
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),local_24 <= iVar9 && iVar7 <= iVar10);
}

