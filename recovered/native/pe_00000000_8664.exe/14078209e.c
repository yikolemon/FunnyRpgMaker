/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078209e */

void FUN_14078209e(ulonglong param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_140781617();
    *(undefined4 *)((param_1 & 0xffffffff) + 0x30) = 0;
  }
  return;
}

