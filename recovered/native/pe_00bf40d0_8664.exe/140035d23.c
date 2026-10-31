/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140035d23 */

void FUN_140035d23(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar5 * 8);
      iVar6 = -0x80000000;
      iVar7 = 0x7fffffff;
      if (lVar2 != 0) {
        lVar4 = lVar2;
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20);
        while (lVar3 != lVar2) {
          iVar1 = *(int *)(lVar4 + 0x14);
          if (iVar1 < iVar7) {
            iVar7 = iVar1;
          }
          if (iVar6 < iVar1) {
            iVar6 = iVar1;
          }
          lVar4 = *(longlong *)(lVar4 + 0x20);
          lVar3 = lVar4;
        }
      }
      *(int *)(*(longlong *)(param_1 + 0x38) + lVar5 * 4) = iVar7;
      *(int *)(*(longlong *)(param_1 + 0x40) + lVar5 * 4) = iVar6;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x2c));
  }
  return;
}

