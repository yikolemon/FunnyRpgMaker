/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000b7f0 */

void FUN_14000b7f0(longlong param_1)

{
  if (*(int *)(param_1 + 0x20) < 1) {
    if ((*(int *)(param_1 + 0x20) < 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1400ddcd0(*(longlong *)(param_1 + 0x18));
    }
  }
  else {
    thunk_FUN_1401212e0(*(undefined8 *)(param_1 + 0x18));
  }
  thunk_FUN_1401212e0(*(undefined8 *)(param_1 + 0x28));
  return;
}

