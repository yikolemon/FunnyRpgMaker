/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801088d4 */

uint FUN_1801088d4(float *param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(DAT_180419160 + 0x118);
  if (param_1 != (float *)0x0) {
    pfVar1 = param_1;
  }
  return -(uint)(DAT_1802de724 <= pfVar1[1] && DAT_1802de724 <= *pfVar1) & 0xffffff01;
}

