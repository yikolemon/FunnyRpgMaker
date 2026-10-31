/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ad9f3 */

void Unwind_1400ad9f3(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x36f);
  uVar2 = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_2 + 0x340) = uVar2;
  *(undefined1 *)(param_2 + 0x36d) = 0;
  *(undefined1 *)(param_2 + 0x36c) = uVar1;
  FUN_14007bf0e(param_2 + 0x1f0);
  *(undefined8 *)(param_2 + 0x340) = uVar2;
  *(undefined1 *)(param_2 + 0x36d) = 0;
  *(undefined1 *)(param_2 + 0x36c) = uVar1;
  return;
}

