/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf650 */

void Unwind_1400cf650(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x318) = param_2 + 0x20;
  *(undefined1 *)(param_2 + 0x347) = 1;
  *(undefined1 *)(param_2 + 0x346) = 1;
  FUN_140016e5c(param_2 + 400);
  *(longlong *)(param_2 + 0x318) = param_2 + 0x20;
  *(undefined1 *)(param_2 + 0x347) = 1;
  *(undefined1 *)(param_2 + 0x346) = 1;
  return;
}

