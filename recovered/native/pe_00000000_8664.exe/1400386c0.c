/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400386c0 */

void FUN_1400386c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != param_1 + 0x80) {
    thunk_FUN_1401aea30();
    return;
  }
  return;
}

