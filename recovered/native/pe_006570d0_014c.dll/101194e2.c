/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101194e2 */

int __fastcall FUN_101194e2(int param_1)

{
  if (*(int *)(param_1 + 0x434) != 0) {
    param_1 = *(int *)(*(int *)(param_1 + 0x434) + 0x7c);
  }
  return param_1;
}

