/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081bec */

uint FUN_140081bec(float *param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(DAT_140f2a910 + 0x118);
  if (param_1 != (float *)0x0) {
    pfVar1 = param_1;
  }
  return -(uint)(DAT_140211484 <= pfVar1[1] && DAT_140211484 <= *pfVar1) & 0xffffff01;
}

