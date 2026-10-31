/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400160bc */

void Unwind_1400160bc(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x15d);
  *(undefined1 *)(param_2 + 0x15f) = uVar1;
  *(undefined1 *)(param_2 + 0x15e) = uVar1;
  if (*(char *)(param_2 + 0x15c) == '\x01') {
    FUN_1400017de(param_2 + 0x138);
  }
  *(undefined1 *)(param_2 + 0x15f) = uVar1;
  *(undefined1 *)(param_2 + 0x15e) = uVar1;
  return;
}

