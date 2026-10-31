/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140057080 */

void Unwind_140057080(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x30e);
  *(undefined1 *)(param_2 + 0x30d) = uVar1;
  if (*(char *)(param_2 + 0x30f) == '\x01') {
    FUN_140005690(param_2 + 0x270);
  }
  *(undefined1 *)(param_2 + 0x30d) = uVar1;
  return;
}

