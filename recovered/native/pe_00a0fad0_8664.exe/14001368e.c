/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001368e */

void Unwind_14001368e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1e6);
  *(undefined1 *)(param_2 + 0x1e7) = uVar1;
  FUN_1400017de(param_2 + 0x1c0);
  *(undefined1 *)(param_2 + 0x1e7) = uVar1;
  return;
}

