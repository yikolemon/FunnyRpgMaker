/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cedb3 */

undefined8 FUN_1801cedb3(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x38);
  if (puVar1 < *(undefined1 **)(param_1 + 0x40)) {
    *(undefined1 **)(param_1 + 0x38) = puVar1 + 1;
    return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1);
  }
  return 0;
}

