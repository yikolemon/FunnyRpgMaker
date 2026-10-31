/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140052e84 */

void FUN_140052e84(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400589e8(*(longlong *)(param_1 + 0xf8),param_1);
  }
  FUN_140058b56(param_1);
  return;
}

