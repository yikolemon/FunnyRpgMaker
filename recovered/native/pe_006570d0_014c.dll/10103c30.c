/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103c30 */

uint FUN_10103c30(float *param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(DAT_1039d74c + 0xe4);
  if (param_1 != (float *)0x0) {
    pfVar1 = param_1;
  }
  return -(uint)(DAT_102b8bd0 <= pfVar1[1] && DAT_102b8bd0 <= *pfVar1) & 0xffffff01;
}

