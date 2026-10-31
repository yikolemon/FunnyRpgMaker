/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c1c96 */

void Unwind_1400c1c96(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1ee);
  *(undefined1 *)(param_2 + 0x1ec) = uVar1;
  if (*(char *)(param_2 + 0x1ed) == '\x01') {
    FUN_140005690(param_2 + 0x140);
  }
  *(undefined1 *)(param_2 + 0x1ec) = uVar1;
  return;
}

