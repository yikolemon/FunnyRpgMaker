/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400179c0 */

void FUN_1400179c0(longlong param_1)

{
  if (*(int *)(param_1 + 0x20) < 1) {
    if ((*(int *)(param_1 + 0x20) < 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1400863f0();
    }
  }
  else {
    thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 0x18));
  }
  thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 0x28));
  return;
}

