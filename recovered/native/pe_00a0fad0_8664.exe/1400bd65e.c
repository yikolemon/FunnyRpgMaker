/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bd65e */

void Unwind_1400bd65e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 299);
  *(undefined1 *)(param_2 + 0x12f) = uVar1;
  if (*(char *)(param_2 + 0x12a) == '\x01') {
    FUN_140005690(param_2 + 0x48);
  }
  *(undefined1 *)(param_2 + 0x12f) = uVar1;
  return;
}

