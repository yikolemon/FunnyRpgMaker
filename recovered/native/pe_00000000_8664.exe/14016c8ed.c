/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016c8ed */

int FUN_14016c8ed(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar10 = 0;
  if (uVar1 != 0) {
    uVar9 = *param_2 + 1;
    uVar7 = uVar1 >> 1;
    lVar2 = *(longlong *)(param_1 + 0x20);
    uVar10 = 0;
    iVar3 = 0;
    uVar6 = uVar1;
    do {
      uVar8 = (ulonglong)uVar7;
      uVar4 = *(uint *)(lVar2 + uVar8 * 8);
      if (uVar4 == uVar9) {
        iVar3 = *(int *)(lVar2 + 4 + uVar8 * 8);
        goto LAB_14016c992;
      }
      uVar4 = uVar4 & 0x7fffffff;
      if (uVar9 == uVar4) {
        iVar3 = *(int *)(lVar2 + 4 + uVar8 * 8);
      }
      uVar5 = uVar7 + 1;
      if (uVar9 < uVar4 || uVar9 - uVar4 == 0) {
        uVar6 = uVar7;
        uVar5 = uVar10;
      }
      uVar10 = uVar5;
      uVar4 = (uVar9 - uVar4) + uVar7;
      uVar5 = (uVar6 - uVar10 >> 1) + uVar10;
      uVar7 = uVar4;
      if (uVar4 < uVar10) {
        uVar7 = uVar5;
      }
      if (uVar6 <= uVar4) {
        uVar7 = uVar5;
      }
    } while (uVar10 < uVar6);
    if (iVar3 != 0) goto LAB_14016c992;
  }
  iVar3 = 0;
  uVar9 = 0;
  if (uVar10 < uVar1) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)uVar10 * 8);
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar10 * 8) & 0x7fffffff;
  }
LAB_14016c992:
  *param_2 = uVar9;
  return iVar3;
}

