/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400adbaf */

void Unwind_1400adbaf(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x364);
  uVar2 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_2 + 0x330) = uVar2;
  *(undefined1 *)(param_2 + 0x369) = 0;
  *(undefined1 *)(param_2 + 0x368) = uVar1;
  FUN_14007bf0e(param_2 + 0x298);
  *(undefined8 *)(param_2 + 0x330) = uVar2;
  *(undefined1 *)(param_2 + 0x369) = 0;
  *(undefined1 *)(param_2 + 0x368) = uVar1;
  return;
}

