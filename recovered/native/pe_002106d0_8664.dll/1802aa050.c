/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa050 */

void FUN_1802aa050(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x20) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffdf;
    FUN_1800010ec(param_2 + 0x188);
  }
  return;
}

