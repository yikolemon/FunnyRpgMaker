/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400324a6 */

undefined * FUN_1400324a6(longlong param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_140eccd96;
  if (0xb < *(int *)(param_1 + 8)) {
    puVar1 = &DAT_140eccd80;
  }
  return puVar1;
}

