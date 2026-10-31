/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180012e2b */

void Unwind_180012e2b(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x187) = 1;
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_180001ef2(param_2 + 0x150);
  }
  *(undefined1 *)(param_2 + 0x187) = 1;
  return;
}

