/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa2c0 */

void FUN_1802aa2c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    FUN_180001ef2(param_2 + 0xe8);
  }
  return;
}

