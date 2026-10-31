/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c922 */

undefined * FUN_18003c922(longlong param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_18036c557;
  if (0xb < *(int *)(param_1 + 8)) {
    puVar1 = &DAT_18036c50f;
  }
  return puVar1;
}

