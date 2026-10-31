/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400adad1 */

void Unwind_1400adad1(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x365);
  uVar2 = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_2 + 0x338) = uVar2;
  *(undefined1 *)(param_2 + 0x36b) = 0;
  *(undefined1 *)(param_2 + 0x36a) = uVar1;
  FUN_14007bf0e(param_2 + 0x1b8);
  *(undefined8 *)(param_2 + 0x338) = uVar2;
  *(undefined1 *)(param_2 + 0x36b) = 0;
  *(undefined1 *)(param_2 + 0x36a) = uVar1;
  return;
}

