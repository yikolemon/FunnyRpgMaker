/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140063e2c */

void Unwind_140063e2c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x9e);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  if (*(char *)(param_2 + 0x9d) == '\x01') {
    FUN_140001e90(param_2 + 0x48);
  }
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  return;
}

