/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137190 */

void FUN_140137190(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1400da240(&PTR_vftable_1401c97c0);
  }
  return;
}

