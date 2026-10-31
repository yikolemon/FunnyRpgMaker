/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400189e6 */

void Unwind_1400189e6(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8f);
  *(undefined1 *)(param_2 + 0x8e) = uVar1;
  FUN_1400017de(param_2 + 0x68);
  *(undefined1 *)(param_2 + 0x8e) = uVar1;
  return;
}

