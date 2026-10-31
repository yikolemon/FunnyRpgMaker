/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ea48b */

ulonglong FUN_1801ea48b(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x2c);
  if ((longlong)uVar5 < 1) {
    iVar7 = 0x7fffffff;
    iVar10 = -0x80000000;
    iVar6 = 0x7fffffff;
    iVar9 = -0x80000000;
  }
  else {
    iVar6 = 0x7fffffff;
    iVar9 = -0x80000000;
    uVar8 = 0;
    iVar7 = 0x7fffffff;
    iVar10 = -0x80000000;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + uVar8 * 8);
      lVar4 = lVar2;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20);
      while (lVar3 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x20);
        iVar1 = *(int *)(lVar4 + 0x10);
        lVar3 = lVar4;
        if (uVar8 == param_2) {
          if (iVar1 < iVar6) {
            iVar6 = iVar1;
          }
          if (iVar9 < iVar1) {
            iVar9 = iVar1;
          }
        }
        else {
          if (iVar1 < iVar7) {
            iVar7 = iVar1;
          }
          if (iVar10 < iVar1) {
            iVar10 = iVar1;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
    uVar5 = CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x2c) >> 8),1);
    if ((iVar7 <= iVar9) && (iVar9 <= iVar10)) {
      return uVar5;
    }
    if ((iVar7 <= iVar6) && (iVar6 <= iVar10)) {
      return uVar5;
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),iVar6 <= iVar7 && iVar10 <= iVar9);
}

