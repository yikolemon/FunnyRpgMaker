/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009378a */

void Unwind_14009378a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xbd);
  *(undefined1 *)(param_2 + 0xbf) = uVar1;
  FUN_1400080f6(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0xbf) = uVar1;
  return;
}

