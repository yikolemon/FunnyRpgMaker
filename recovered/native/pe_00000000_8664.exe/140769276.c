/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769276 */

void FUN_140769276(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(undefined1 *)(param_1 + 0xf9) = 1;
  iVar1 = *(int *)(param_1 + 0x1d8);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x1e0);
    uVar5 = 0;
    do {
      uVar3 = (ulonglong)*(uint *)(uVar2 + uVar5);
      if (*(char *)(uVar3 + 0x101) == '\0') {
        *(undefined1 *)(uVar3 + 0xff) = 1;
        *(undefined1 *)(uVar3 + 0xf9) = 1;
        FUN_140769276();
      }
      uVar4 = (int)uVar5 + 4;
      uVar5 = (ulonglong)uVar4;
    } while (iVar1 << 2 != uVar4);
  }
  return;
}

