/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140079a7e */

void FUN_140079a7e(longlong param_1,int param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x20);
  FUN_140079bfb(dVar1,(float)((double)*(float *)(param_1 + 0x10) * (double)param_2 + dVar1));
  return;
}

