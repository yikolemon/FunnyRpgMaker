/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a9c80 */

void FUN_1802a9c80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001ef2(param_2 + 0xa0);
  }
  return;
}

