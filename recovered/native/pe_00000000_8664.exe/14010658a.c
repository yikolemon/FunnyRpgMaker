/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010658a */

void FUN_14010658a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (FUN_1400c86ba(&DAT_140f31838,*(undefined4 *)(param_1 + 0x1c),1),
      *(longlong *)(param_1 + 0x20) != 0)) &&
     (cVar3 = FUN_1400c5fdd(*(undefined4 *)(param_1 + 0x1c)), cVar3 == '\0')) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_14010658a(*(undefined8 *)(lVar2 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

