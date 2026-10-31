/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016110 */

void Unwind_140016110(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x15f);
  *(undefined1 *)(param_2 + 0x15b) = uVar1;
  if (*(char *)(param_2 + 0x15e) == '\x01') {
    FUN_1400017de(param_2 + 0x118);
  }
  *(undefined1 *)(param_2 + 0x15b) = uVar1;
  return;
}

