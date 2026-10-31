/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d9bba */

void FUN_1400d9bba(longlong param_1)

{
  FUN_1400d9e26(param_1);
  FUN_1400d9ae6(param_1,0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_140077b90();
  }
  FUN_1400da5e2(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

