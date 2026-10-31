/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079afab */

void FUN_14079afab(undefined8 param_1,ulonglong param_2)

{
  if (*(int *)(param_2 + 4) != *(int *)(param_2 + 8)) {
    FUN_1407a9c0f();
    *(undefined1 *)((param_2 & 0xffffffff) + 0x16) = 0;
  }
  return;
}

