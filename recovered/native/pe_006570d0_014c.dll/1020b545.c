/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b545 */

int __fastcall FUN_1020b545(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3;
}

