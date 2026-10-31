/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a96d0 */

void FUN_1802a96d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa8) & 1) != 0) {
    *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) & 0xfffffffe;
    FUN_1802449d0(*(longlong *)(param_2 + 0x90) + 0x10);
  }
  return;
}

