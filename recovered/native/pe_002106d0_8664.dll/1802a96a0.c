/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a96a0 */

void FUN_1802a96a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1802449d0(&PTR_vftable_1804038e0);
  }
  return;
}

