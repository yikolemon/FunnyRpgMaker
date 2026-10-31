/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b8d4 */

void Unwind_14007b8d4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8f6);
  uVar2 = *(undefined8 *)(param_2 + 0x8d8);
  *(undefined8 *)(param_2 + 0x8d0) = uVar2;
  *(undefined1 *)(param_2 + 0x8f5) = uVar1;
  FUN_1400017de(param_2 + 0x6a0);
  *(undefined8 *)(param_2 + 0x8d0) = uVar2;
  *(undefined1 *)(param_2 + 0x8f5) = uVar1;
  return;
}

