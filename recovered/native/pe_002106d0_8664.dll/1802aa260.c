/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa260 */

void FUN_1802aa260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    FUN_180001ef2(param_2 + 0x168);
  }
  return;
}

