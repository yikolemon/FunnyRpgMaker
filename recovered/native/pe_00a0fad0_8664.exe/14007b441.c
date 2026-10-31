/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b441 */

void Unwind_14007b441(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x8b8) = param_2 + 0x100;
  *(undefined1 *)(param_2 + 0x8f2) = 1;
  FUN_140016e5c(param_2 + 0x470);
  *(longlong *)(param_2 + 0x8b8) = param_2 + 0x100;
  *(undefined1 *)(param_2 + 0x8f2) = 1;
  return;
}

