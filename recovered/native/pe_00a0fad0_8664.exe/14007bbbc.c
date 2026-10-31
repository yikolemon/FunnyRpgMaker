/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007bbbc */

void Unwind_14007bbbc(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8f0);
  uVar2 = *(undefined8 *)(param_2 + 0x8a8);
  *(undefined8 *)(param_2 + 0x868) = uVar2;
  *(undefined1 *)(param_2 + 0x8e9) = uVar1;
  FUN_1400017de(param_2 + 0x5c0);
  *(undefined8 *)(param_2 + 0x868) = uVar2;
  *(undefined1 *)(param_2 + 0x8e9) = uVar1;
  return;
}

