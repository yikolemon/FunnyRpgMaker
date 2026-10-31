/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b499 */

void Unwind_14007b499(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x8c0) = param_2 + 0x1a0;
  *(undefined1 *)(param_2 + 0x8f3) = 1;
  FUN_140016e5c(param_2 + 0x490);
  *(longlong *)(param_2 + 0x8c0) = param_2 + 0x1a0;
  *(undefined1 *)(param_2 + 0x8f3) = 1;
  return;
}

