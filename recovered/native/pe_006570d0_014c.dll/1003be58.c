/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003be58 */

undefined * __fastcall FUN_1003be58(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1033c42d;
  if (0xb < *(int *)(param_1 + 8)) {
    puVar1 = &DAT_1033c3e5;
  }
  return puVar1;
}

