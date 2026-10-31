/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cf8d1 */

void Unwind_1400cf8d1(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x34e);
  *(longlong *)(param_2 + 0x338) = param_2 + 0x120;
  *(undefined1 *)(param_2 + 0x34f) = uVar1;
  FUN_14007bf0e(param_2 + 0x290);
  *(longlong *)(param_2 + 0x338) = param_2 + 0x120;
  *(undefined1 *)(param_2 + 0x34f) = uVar1;
  return;
}

