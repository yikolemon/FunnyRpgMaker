/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234d10 */

void FUN_10234d10(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    thunk_FUN_10274120();
    return;
  }
  return;
}

