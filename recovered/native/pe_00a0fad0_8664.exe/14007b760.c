/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b760 */

void Unwind_14007b760(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8ec);
  *(longlong *)(param_2 + 0x888) = param_2 + 0x380;
  *(undefined1 *)(param_2 + 0x8ee) = uVar1;
  FUN_1400017de(param_2 + 0x6e0);
  *(longlong *)(param_2 + 0x888) = param_2 + 0x380;
  *(undefined1 *)(param_2 + 0x8ee) = uVar1;
  return;
}

