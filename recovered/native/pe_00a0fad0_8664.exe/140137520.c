/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137520 */

void FUN_140137520(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x10) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffef;
    thunk_FUN_1400de380(param_2 + 0x148);
  }
  return;
}

