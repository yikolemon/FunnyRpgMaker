/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a9d60 */

void FUN_1802a9d60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xc0) & 1) != 0) {
    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) & 0xfffffffe;
    FUN_18000d016(param_2 + 0x20);
  }
  return;
}

