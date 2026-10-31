/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180013000 */

void Unwind_180013000(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x185) = 1;
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_180001ef2(param_2 + 0xc0);
  }
  *(undefined1 *)(param_2 + 0x185) = 1;
  return;
}

