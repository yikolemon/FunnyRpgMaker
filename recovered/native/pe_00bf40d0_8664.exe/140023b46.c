/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023b46 */

void FUN_140023b46(double *param_1,double *param_2,double param_3,double *param_4,int param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_140023b1e(param_4,param_5);
  dVar2 = (double)FUN_140023b1e(param_2,param_5);
  dVar1 = FUN_140023acc(dVar2,param_3,dVar1);
  FUN_140023add(param_1,param_2,dVar1,param_4);
  return;
}

