/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a84c2 */

void FUN_1400a84c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400a8477();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400a8477();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_140077b90();
  }
  return;
}

