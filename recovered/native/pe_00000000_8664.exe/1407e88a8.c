/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e88a8 */

void FUN_1407e88a8(ulonglong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1407e73aa();
  }
  *(undefined1 *)((undefined4 *)(param_1 & 0xffffffff) + 10) = 0;
  *(undefined4 *)(param_1 & 0xffffffff) = 0;
  return;
}

