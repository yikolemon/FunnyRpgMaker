/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000346f */

void Unwind_14000346f(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8a3);
  *(undefined1 *)(param_2 + 0x8a1) = uVar1;
  if (*(char *)(param_2 + 0x8a2) == '\x01') {
    FUN_140005690(param_2 + 0x750);
  }
  *(undefined1 *)(param_2 + 0x8a1) = uVar1;
  return;
}

