/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400925e4 */

void Unwind_1400925e4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x9e);
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  if (*(char *)(param_2 + 0x9d) == '\x01') {
    FUN_140005242(param_2 + 0x48);
  }
  *(undefined1 *)(param_2 + 0x9f) = uVar1;
  return;
}

