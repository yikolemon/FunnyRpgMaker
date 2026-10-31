/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008136e */

void __fastcall FUN_1008136e(int *param_1)

{
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    FUN_10073a60((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 1) +
                 (uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) * 4,0);
  }
  return;
}

