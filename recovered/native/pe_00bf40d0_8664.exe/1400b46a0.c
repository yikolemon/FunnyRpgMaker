/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b46a0 */

void FUN_1400b46a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa8) & 1) != 0) {
    *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) & 0xfffffffe;
    FUN_140088350((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x10));
  }
  return;
}

