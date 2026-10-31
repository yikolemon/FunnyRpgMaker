/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c1bf8 */

void Unwind_1400c1bf8(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1eb);
  *(undefined1 *)(param_2 + 0x1ef) = uVar1;
  if (*(char *)(param_2 + 0x1ea) == '\x01') {
    FUN_140005690(param_2 + 0x120);
  }
  *(undefined1 *)(param_2 + 0x1ef) = uVar1;
  return;
}

