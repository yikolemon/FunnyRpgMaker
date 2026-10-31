/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b3ec */

void Unwind_14007b3ec(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x8b0) = param_2 + 0xb0;
  *(undefined1 *)(param_2 + 0x8f1) = 1;
  FUN_140016e5c(param_2 + 0x450);
  *(longlong *)(param_2 + 0x8b0) = param_2 + 0xb0;
  *(undefined1 *)(param_2 + 0x8f1) = 1;
  return;
}

