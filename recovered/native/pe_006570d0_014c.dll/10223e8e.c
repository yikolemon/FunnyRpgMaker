/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223e8e */

float10 FUN_10223e8e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)FUN_10223d29(param_1,param_2,param_3,param_4);
  dVar2 = 0.0;
  if (0.0 <= (double)fVar1) {
    dVar2 = (double)fVar1;
  }
  return (float10)dVar2;
}

