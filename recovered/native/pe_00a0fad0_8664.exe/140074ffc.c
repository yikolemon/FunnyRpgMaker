/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140074ffc */

void Unwind_140074ffc(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x3be);
  *(undefined1 *)(param_2 + 0x3bd) = uVar1;
  if (*(char *)(param_2 + 0x3bf) == '\x01') {
    FUN_140005690(param_2 + 0x280);
  }
  *(undefined1 *)(param_2 + 0x3bd) = uVar1;
  return;
}

