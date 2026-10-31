/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223e3f */

float10 FUN_10223e3f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  ulonglong uVar2;
  
  fVar1 = (float10)FUN_10223c13(param_1,param_2,param_3,param_4);
  uVar2 = -(ulonglong)((double)fVar1 < 0.0);
  return (float10)(double)(~uVar2 & (ulonglong)(double)fVar1 | DAT_103037f0 & uVar2);
}

