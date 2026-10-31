/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400937ba */

void Unwind_1400937ba(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xbf);
  *(undefined1 *)(param_2 + 0xbe) = uVar1;
  FUN_1400017de(param_2 + 0x90);
  *(undefined1 *)(param_2 + 0xbe) = uVar1;
  return;
}

