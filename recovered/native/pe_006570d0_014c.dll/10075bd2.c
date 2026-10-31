/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075bd2 */

int __fastcall FUN_10075bd2(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x20)) {
    return *(int *)(param_1 + 0xc);
  }
  return param_1 + 0xc;
}

