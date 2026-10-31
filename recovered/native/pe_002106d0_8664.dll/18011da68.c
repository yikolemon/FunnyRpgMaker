/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011da68 */

longlong FUN_18011da68(int *param_1,int param_2)

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
    lVar2 = FUN_1800fe7f8((longlong)iVar5);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
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

