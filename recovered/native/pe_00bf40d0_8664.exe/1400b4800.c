/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b4800 */

void FUN_1400b4800(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_140088350(&PTR_vftable_14012eb50);
  }
  return;
}

