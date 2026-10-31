/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005db21 */

void Unwind_18005db21(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x4d8) = 1;
  if (*(char *)(param_2 + 0x4cd) == '\x01') {
    FUN_18006db58(param_2 + 0x238);
  }
  *(undefined1 *)(param_2 + 0x4d8) = 1;
  return;
}

