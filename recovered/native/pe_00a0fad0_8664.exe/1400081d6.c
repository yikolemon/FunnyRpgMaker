/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400081d6 */

void Unwind_1400081d6(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x58) = 0;
  return;
}

