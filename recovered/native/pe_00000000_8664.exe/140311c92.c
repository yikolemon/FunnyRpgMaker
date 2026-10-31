/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140311c92 */

void FUN_140311c92(longlong param_1,int param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x20);
  FUN_140311e0f(dVar1,(float)((double)*(float *)(param_1 + 0x10) * (double)param_2 + dVar1));
  return;
}

