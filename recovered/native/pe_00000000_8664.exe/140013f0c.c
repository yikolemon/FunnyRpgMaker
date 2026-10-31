/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140013f0c */

void FUN_140013f0c(longlong param_1)

{
  FUN_140189170(param_1);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_140188e10(param_1);
  return;
}

