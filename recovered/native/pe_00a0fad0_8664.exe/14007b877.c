/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b877 */

void Unwind_14007b877(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8f7);
  uVar2 = *(undefined8 *)(param_2 + 0x8e0);
  *(undefined8 *)(param_2 + 0x8d8) = uVar2;
  *(undefined1 *)(param_2 + 0x8f6) = uVar1;
  FUN_1400017de(param_2 + 0x738);
  *(undefined8 *)(param_2 + 0x8d8) = uVar2;
  *(undefined1 *)(param_2 + 0x8f6) = uVar1;
  return;
}

