/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007b718 */

void Unwind_14007b718(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8ef);
  *(undefined1 *)(param_2 + 0x8ec) = uVar1;
  FUN_1400017de(param_2 + 0x550);
  *(undefined1 *)(param_2 + 0x8ec) = uVar1;
  return;
}

