/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007bb02 */

void Unwind_14007bb02(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8f2);
  uVar2 = *(undefined8 *)(param_2 + 0x8b8);
  *(undefined8 *)(param_2 + 0x8b0) = uVar2;
  *(undefined1 *)(param_2 + 0x8f1) = uVar1;
  FUN_1400017de(param_2 + 0x600);
  *(undefined8 *)(param_2 + 0x8b0) = uVar2;
  *(undefined1 *)(param_2 + 0x8f1) = uVar1;
  return;
}

