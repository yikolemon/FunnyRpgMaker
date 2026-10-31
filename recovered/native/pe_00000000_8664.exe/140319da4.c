/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140319da4 */

uint FUN_140319da4(float *param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(DAT_14062a630 + 0x118);
  if (param_1 != (float *)0x0) {
    pfVar1 = param_1;
  }
  return -(uint)(DAT_1404efbf4 <= pfVar1[1] && DAT_1404efbf4 <= *pfVar1) & 0xffffff01;
}

