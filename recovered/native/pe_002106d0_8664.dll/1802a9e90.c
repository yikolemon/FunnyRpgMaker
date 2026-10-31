/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a9e90 */

void FUN_1802a9e90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    thunk_FUN_180248010(param_2 + 0x128);
  }
  return;
}

