/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140108c80 */

void FUN_140108c80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

