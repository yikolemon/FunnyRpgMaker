/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a9e20 */

void FUN_1802a9e20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_180001ef2(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

