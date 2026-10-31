/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140003c3c */

void Unwind_140003c3c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x8b4);
  *(undefined1 *)(param_2 + 0x8a4) = uVar1;
  if (*(char *)(param_2 + 0x8b3) == '\x01') {
    FUN_140005690(param_2 + 0x770);
  }
  *(undefined1 *)(param_2 + 0x8a4) = uVar1;
  return;
}

