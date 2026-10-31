/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cfbbd */

void Unwind_1400cfbbd(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x346);
  uVar2 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_2 + 0x2f8) = uVar2;
  *(undefined1 *)(param_2 + 0x342) = uVar1;
  if (*(char *)(param_2 + 0x347) == '\x01') {
    FUN_1400017de(param_2 + 0x170);
  }
  *(undefined8 *)(param_2 + 0x2f8) = uVar2;
  *(undefined1 *)(param_2 + 0x342) = uVar1;
  return;
}

