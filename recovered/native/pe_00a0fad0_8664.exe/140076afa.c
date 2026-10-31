/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140076afa */

void Unwind_140076afa(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x2af);
  *(undefined1 *)(param_2 + 0x2ad) = uVar1;
  if (*(char *)(param_2 + 0x2ae) == '\x01') {
    FUN_140005690(param_2 + 0x1c0);
  }
  *(undefined1 *)(param_2 + 0x2ad) = uVar1;
  return;
}

