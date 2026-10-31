/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400adc20 */

void Unwind_1400adc20(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x368);
  uVar2 = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_2 + 0x310) = uVar2;
  *(undefined1 *)(param_2 + 0x363) = uVar1;
  if (*(char *)(param_2 + 0x369) == '\x01') {
    FUN_1400017de(param_2 + 0x298);
  }
  *(undefined8 *)(param_2 + 0x310) = uVar2;
  *(undefined1 *)(param_2 + 0x363) = uVar1;
  return;
}

