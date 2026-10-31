/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140107c84 */

void FUN_140107c84(longlong param_1)

{
  uint uVar1;
  
  FUN_1401082e4(param_1);
  for (uVar1 = 0; (int)uVar1 < *(int *)(param_1 + 0x120); uVar1 = uVar1 + 1) {
    FUN_140077b90(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + (ulonglong)uVar1 * 8));
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

