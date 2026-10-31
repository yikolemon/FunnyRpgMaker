/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bd6f8 */

void Unwind_1400bd6f8(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x12e);
  *(undefined1 *)(param_2 + 300) = uVar1;
  if (*(char *)(param_2 + 0x12d) == '\x01') {
    FUN_140005690(param_2 + 0xb0);
  }
  *(undefined1 *)(param_2 + 300) = uVar1;
  return;
}

