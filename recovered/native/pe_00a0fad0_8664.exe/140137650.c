/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137650 */

void FUN_140137650(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x10) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffef;
    FUN_140005242(param_2 + 0x148);
  }
  return;
}

