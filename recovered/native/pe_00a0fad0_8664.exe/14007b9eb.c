/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b9eb */

void Unwind_14007b9eb(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8f3);
  uVar2 = *(undefined8 *)(param_2 + 0x8c0);
  *(undefined8 *)(param_2 + 0x880) = uVar2;
  *(undefined1 *)(param_2 + 0x8ed) = uVar1;
  FUN_1400017de(param_2 + 0x640);
  *(undefined8 *)(param_2 + 0x880) = uVar2;
  *(undefined1 *)(param_2 + 0x8ed) = uVar1;
  return;
}

