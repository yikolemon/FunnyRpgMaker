/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f2e3 */

void FUN_14008f2e3(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x109) = 1;
  iVar1 = *(int *)(param_1 + 0x1f0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1f8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(char *)(lVar3 + 0x111) == '\0') {
        *(undefined1 *)(lVar3 + 0x10f) = 1;
        *(undefined1 *)(lVar3 + 0x109) = 1;
        FUN_14008f2e3();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

