/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa2f0 */

void FUN_1802aa2f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x10) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffef;
    FUN_180001ef2(param_2 + 0x148);
  }
  return;
}

