/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400142c0 */

void FUN_1400142c0(longlong param_1)

{
  if (*(int *)(param_1 + 0x20) < 1) {
    if ((*(int *)(param_1 + 0x20) < 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_14018e090(*(longlong *)(param_1 + 0x18));
    }
  }
  else {
    thunk_FUN_1401aea30(*(undefined8 *)(param_1 + 0x18));
  }
  thunk_FUN_1401aea30(*(undefined8 *)(param_1 + 0x28));
  return;
}

