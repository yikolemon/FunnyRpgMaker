/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf6a5 */

void Unwind_1400cf6a5(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 800) = param_2 + 0x60;
  *(undefined1 *)(param_2 + 0x349) = 1;
  *(undefined1 *)(param_2 + 0x348) = 1;
  FUN_140016e5c(param_2 + 0x1c8);
  *(longlong *)(param_2 + 800) = param_2 + 0x60;
  *(undefined1 *)(param_2 + 0x349) = 1;
  *(undefined1 *)(param_2 + 0x348) = 1;
  return;
}

