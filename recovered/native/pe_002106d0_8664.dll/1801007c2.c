/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801007c2 */

void FUN_1801007c2(longlong param_1,int param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x20);
  FUN_18010093f(dVar1,(float)((double)*(float *)(param_1 + 0x10) * (double)param_2 + dVar1));
  return;
}

