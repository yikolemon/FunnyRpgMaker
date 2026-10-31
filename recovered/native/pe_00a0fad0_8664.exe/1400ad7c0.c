/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ad7c0 */

void Unwind_1400ad7c0(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x340) = param_2 + 0xf8;
  *(undefined1 *)(param_2 + 0x36d) = 1;
  *(undefined1 *)(param_2 + 0x36c) = 1;
  FUN_140016e5c(param_2 + 0x210);
  *(longlong *)(param_2 + 0x340) = param_2 + 0xf8;
  *(undefined1 *)(param_2 + 0x36d) = 1;
  *(undefined1 *)(param_2 + 0x36c) = 1;
  return;
}

