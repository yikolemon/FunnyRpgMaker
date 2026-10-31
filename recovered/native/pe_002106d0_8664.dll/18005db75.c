/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005db75 */

void Unwind_18005db75(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x4da) = 1;
  if (*(char *)(param_2 + 0x4d8) == '\x01') {
    FUN_1800010ec(param_2 + 0x218);
  }
  *(undefined1 *)(param_2 + 0x4da) = 1;
  return;
}

