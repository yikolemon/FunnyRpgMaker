/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400adc8d */

void Unwind_1400adc8d(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x363);
  uVar2 = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_2 + 0x328) = uVar2;
  *(undefined1 *)(param_2 + 0x367) = 0;
  *(undefined1 *)(param_2 + 0x366) = uVar1;
  FUN_14007bf0e(param_2 + 0x260);
  *(undefined8 *)(param_2 + 0x328) = uVar2;
  *(undefined1 *)(param_2 + 0x367) = 0;
  *(undefined1 *)(param_2 + 0x366) = uVar1;
  return;
}

