/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d9fe */

void __fastcall FUN_1001d9fe(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 8);
  *puVar1 = *puVar1 ^ 1;
  return;
}

