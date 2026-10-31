/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b7bd */

void Unwind_14007b7bd(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8ee);
  uVar2 = *(undefined8 *)(param_2 + 0x888);
  *(undefined8 *)(param_2 + 0x878) = uVar2;
  *(undefined1 *)(param_2 + 0x8eb) = uVar1;
  FUN_1400017de(param_2 + 0x6c0);
  *(undefined8 *)(param_2 + 0x878) = uVar2;
  *(undefined1 *)(param_2 + 0x8eb) = uVar1;
  return;
}

