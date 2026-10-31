/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140008246 */

void Unwind_140008246(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x38) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x38) = 0;
  return;
}

