/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007f84 */

void Unwind_140007f84(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x58) = 0;
  return;
}

