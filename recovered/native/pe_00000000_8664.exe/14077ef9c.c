/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077ef9c */

float FUN_14077ef9c(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  float10 in_ST0;
  
  pfVar1 = (float *)(ulonglong)((int)&stack0x00000000 - 0x14);
  if (param_1 <= param_3) {
    pfVar1[2] = pfVar1[6];
    pfVar1[1] = param_1;
    *pfVar1 = 0.0;
    pfVar1[-2] = 3.8740196;
    pfVar1[-1] = 1.4013e-45;
    FUN_140742235();
    pfVar1[4] = (float)in_ST0;
    param_1 = pfVar1[4];
  }
  else if (param_2 - param_3 <= param_1) {
    pfVar1[2] = pfVar1[6];
    pfVar1[1] = param_2;
    *pfVar1 = param_1;
    pfVar1[-2] = 3.874011;
    pfVar1[-1] = 1.4013e-45;
    FUN_140742235();
    pfVar1[3] = (float)in_ST0;
    param_1 = pfVar1[3];
  }
  return param_1;
}

