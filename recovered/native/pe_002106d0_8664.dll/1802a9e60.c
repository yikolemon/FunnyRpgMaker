/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a9e60 */

void FUN_1802a9e60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    thunk_FUN_180248010(param_2 + 0x168);
  }
  return;
}

