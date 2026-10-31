/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cfb5c */

void Unwind_1400cfb5c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x343);
  uVar2 = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_2 + 0x318) = uVar2;
  *(undefined1 *)(param_2 + 0x347) = 0;
  *(undefined1 *)(param_2 + 0x346) = uVar1;
  FUN_14007bf0e(param_2 + 0x170);
  *(undefined8 *)(param_2 + 0x318) = uVar2;
  *(undefined1 *)(param_2 + 0x347) = 0;
  *(undefined1 *)(param_2 + 0x346) = uVar1;
  return;
}

