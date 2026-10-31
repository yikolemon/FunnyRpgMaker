/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004d1e7 */

void Unwind_14004d1e7(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x85);
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  if (*(char *)(param_2 + 0x86) == '\x01') {
    FUN_1400017de(param_2 + 0x60);
  }
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  return;
}

