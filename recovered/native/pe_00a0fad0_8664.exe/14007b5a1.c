/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b5a1 */

void Unwind_14007b5a1(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x8d8) = param_2 + 0x290;
  *(undefined1 *)(param_2 + 0x8f6) = 1;
  FUN_140016e5c(param_2 + 0x4f0);
  *(longlong *)(param_2 + 0x8d8) = param_2 + 0x290;
  *(undefined1 *)(param_2 + 0x8f6) = 1;
  return;
}

