/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8fab */

float10 FUN_101c8fab(double param_1)

{
  float10 fVar1;
  
  if (0.0 <= param_1) {
    if (DAT_103039e8 <= param_1) {
      fVar1 = (float10)FUN_1026dec0(param_1,0,0x40768000);
      return fVar1;
    }
  }
  else {
    fVar1 = (float10)FUN_1026dec0(param_1,0,0x40768000);
    param_1 = (double)fVar1 + DAT_103039e8;
  }
  return (float10)param_1;
}

