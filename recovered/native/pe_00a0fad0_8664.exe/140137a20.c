/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137a20 */

void FUN_140137a20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa8) & 1) != 0) {
    *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) & 0xfffffffe;
    FUN_1400da240(*(longlong *)(param_2 + 0x90) + 0x10);
  }
  return;
}

