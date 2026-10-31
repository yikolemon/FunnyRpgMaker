/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408bf9fc */

undefined1 FUN_1408bf9fc(void)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  if ((*(byte *)(uVar1 + 8) & 4) != 0) {
    return 1;
  }
  if ((*(byte *)(uVar1 + 8) & 1) != 0) {
    if ((*(byte *)(uVar1 + 8) & 2) == 0) {
      if (0x7fffffff < *(uint *)(uVar1 + 0x10)) {
        return 1;
      }
      if (*(uint *)(uVar1 + 0x10) < 0x7fffffff) {
        return 0;
      }
      bVar2 = *(int *)(uVar1 + 0xc) != -1;
      bVar3 = *(int *)(uVar1 + 0xc) == -1;
    }
    else {
      if (0x80000000 < *(uint *)(uVar1 + 0x10)) {
        return 1;
      }
      if (*(uint *)(uVar1 + 0x10) < 0x80000000) {
        return 0;
      }
      bVar2 = false;
      bVar3 = *(int *)(uVar1 + 0xc) == 0;
    }
    if (!bVar2 && !bVar3) {
      return 1;
    }
  }
  return 0;
}

