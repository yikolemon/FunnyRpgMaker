/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140008064 */

void Unwind_140008064(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18) = 0;
  return;
}

