/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400211b6 */

undefined8 FUN_1400211b6(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x38);
  if (puVar1 < *(undefined1 **)(param_1 + 0x40)) {
    *(undefined1 **)(param_1 + 0x38) = puVar1 + 1;
    return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1);
  }
  return 0;
}

