/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140096d24 */

longlong FUN_140096d24(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *param_1;
  uVar4 = param_2 + 7U & 0xfffffffc;
  iVar3 = iVar1 + uVar4;
  iVar5 = param_1[1];
  if (iVar5 < iVar3) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    if (iVar5 <= iVar3) {
      iVar5 = iVar3;
    }
    lVar2 = FUN_140077ab4((longlong)iVar5);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1401c5180(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_140077b90(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar2;
    param_1[1] = iVar5;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 2);
  }
  *param_1 = iVar3;
  *(uint *)(lVar2 + iVar1) = uVar4;
  return *(longlong *)(param_1 + 2) + (longlong)iVar1 + 4;
}

