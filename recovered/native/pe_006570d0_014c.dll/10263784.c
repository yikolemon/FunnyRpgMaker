/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10263784 */

uint __fastcall FUN_10263784(int param_1)

{
  if (*(int *)(param_1 + 0x404) == 0) {
    return 0x100;
  }
  return *(uint *)(param_1 + 0x400) >> 2;
}

