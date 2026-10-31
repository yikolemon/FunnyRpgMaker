/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180013ea4 */

void Unwind_180013ea4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x30) == '\x01') {
    FUN_180001ef2(*(longlong *)(param_2 + 0x20) + 0x10);
  }
  return;
}

