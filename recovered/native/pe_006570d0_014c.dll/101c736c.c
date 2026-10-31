/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c736c */

bool FUN_101c736c(double param_1,double param_2,double param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_101c7130(param_2 - param_1);
  fVar2 = (float10)FUN_101c7130(param_3 - param_1);
  return (double)fVar1 < (double)fVar2;
}

