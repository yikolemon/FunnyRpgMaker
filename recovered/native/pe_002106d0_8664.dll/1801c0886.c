/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c0886 */

void FUN_1801c0886(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (FUN_18014f78a(&DAT_1804200e8,*(undefined4 *)(param_1 + 0x1c),1),
      *(longlong *)(param_1 + 0x20) != 0)) &&
     (cVar3 = FUN_18014d0ad(*(undefined4 *)(param_1 + 0x1c)), cVar3 == '\0')) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_1801c0886(*(undefined8 *)(lVar2 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

