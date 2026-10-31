/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801325c2 */

longlong FUN_1801325c2(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar3 = param_1[8];
  if (iVar3 == *param_1) {
    iVar1 = iVar3 + 1;
    iVar5 = param_1[1];
    if (iVar3 < iVar5) {
      lVar4 = *(longlong *)(param_1 + 2);
      iVar5 = iVar1;
    }
    else {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      lVar4 = FUN_1800fe7f8((longlong)iVar5 << 4);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1802a82f0(lVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar4;
      param_1[1] = iVar5;
      iVar5 = param_1[8] + 1;
    }
    *param_1 = iVar1;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 2);
    iVar5 = *(int *)(lVar4 + (longlong)iVar3 * 0x10);
  }
  param_1[8] = iVar5;
  puVar2 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[9] = param_1[9] + 1;
  return (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 2);
}

