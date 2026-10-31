/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400800cc */

void FUN_1400800cc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

