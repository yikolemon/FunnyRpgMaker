/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002f057 */

void Unwind_14002f057(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x34e);
  *(undefined1 *)(param_2 + 0x34f) = uVar1;
  if (*(char *)(param_2 + 0x34d) == '\x01') {
    FUN_1400017de(param_2 + 0x270);
  }
  *(undefined1 *)(param_2 + 0x34f) = uVar1;
  return;
}

