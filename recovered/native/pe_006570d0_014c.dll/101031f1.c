/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101031f1 */

float10 FUN_101031f1(float *param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (0.0 <= param_2) {
    iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
    if ((param_2 != 0.0) || (NAN(param_2))) {
      if (0.0 < param_2) {
        param_2 = param_2 + (*(float *)(iVar1 + 0x50) - *(float *)(iVar1 + 0xc4));
      }
    }
    else {
      param_2 = *(float *)(iVar1 + 0x274);
    }
    fVar2 = (float10)FUN_100fdbca(param_2 - *param_1,0x3f800000);
  }
  else {
    fVar2 = (float10)0;
  }
  return fVar2;
}

