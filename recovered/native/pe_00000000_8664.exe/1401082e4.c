/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401082e4 */

void FUN_1401082e4(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x100)) {
    lVar1 = 0;
    do {
      FUN_140077b90(*(undefined8 *)(*(longlong *)(param_1 + 0x108) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x100));
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}

