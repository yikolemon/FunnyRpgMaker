/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b397 */

void Unwind_14007b397(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x8a8) = param_2 + 0x60;
  *(undefined1 *)(param_2 + 0x8f0) = 1;
  FUN_140016e5c(param_2 + 0x430);
  *(longlong *)(param_2 + 0x8a8) = param_2 + 0x60;
  *(undefined1 *)(param_2 + 0x8f0) = 1;
  return;
}

