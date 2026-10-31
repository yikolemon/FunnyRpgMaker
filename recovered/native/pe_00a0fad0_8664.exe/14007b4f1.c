/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b4f1 */

void Unwind_14007b4f1(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x8c8) = param_2 + 0x1f0;
  *(undefined1 *)(param_2 + 0x8f4) = 1;
  FUN_140016e5c(param_2 + 0x4b0);
  *(longlong *)(param_2 + 0x8c8) = param_2 + 0x1f0;
  *(undefined1 *)(param_2 + 0x8f4) = 1;
  return;
}

