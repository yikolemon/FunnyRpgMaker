/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140054292 */

void Unwind_140054292(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x29e);
  *(undefined1 *)(param_2 + 0x29b) = uVar1;
  if (*(char *)(param_2 + 0x29d) == '\x01') {
    FUN_1400017de(param_2 + 0x278);
  }
  *(undefined1 *)(param_2 + 0x29b) = uVar1;
  return;
}

