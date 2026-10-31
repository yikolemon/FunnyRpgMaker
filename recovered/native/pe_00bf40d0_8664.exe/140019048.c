/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140019048 */

void FUN_140019048(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140018816(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400863f0();
    return;
  }
  return;
}

