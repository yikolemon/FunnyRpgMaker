/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401375f0 */

void FUN_1401375f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    FUN_140005242(param_2 + 0x128);
  }
  return;
}

