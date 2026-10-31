/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b5f9 */

void Unwind_14007b5f9(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x8e0) = param_2 + 0x2e0;
  *(undefined1 *)(param_2 + 0x8f7) = 1;
  FUN_140016e5c(param_2 + 0x510);
  *(longlong *)(param_2 + 0x8e0) = param_2 + 0x2e0;
  *(undefined1 *)(param_2 + 0x8f7) = 1;
  return;
}

