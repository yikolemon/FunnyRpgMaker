/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cfaff */

void Unwind_1400cfaff(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x348);
  uVar2 = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_2 + 0x300) = uVar2;
  *(undefined1 *)(param_2 + 0x343) = uVar1;
  if (*(char *)(param_2 + 0x349) == '\x01') {
    FUN_1400017de(param_2 + 0x1a8);
  }
  *(undefined8 *)(param_2 + 0x300) = uVar2;
  *(undefined1 *)(param_2 + 0x343) = uVar1;
  return;
}

