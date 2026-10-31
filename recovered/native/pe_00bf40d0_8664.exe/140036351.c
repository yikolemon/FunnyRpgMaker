/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140036351 */

void FUN_140036351(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_1400377f4(param_1,(*(int *)(param_2 + 0x10) - *(int *)(param_3 + 0x10)) / 7 +
                        *(int *)(param_2 + 0x10) + 0x10);
  return;
}

