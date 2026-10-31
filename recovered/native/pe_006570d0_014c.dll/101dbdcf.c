/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dbdcf */

void __fastcall FUN_101dbdcf(int param_1,int param_2)

{
  *(int *)(param_2 + 8) = (*(int *)(param_2 + 4) + *(int *)(param_1 + 8)) - *(int *)(param_1 + 4);
  return;
}

