/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a98a0 */

void FUN_1802a98a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_180247230(param_2 + 0x30);
  }
  return;
}

