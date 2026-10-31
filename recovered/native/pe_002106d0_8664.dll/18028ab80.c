/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028ab80 */

double FUN_18028ab80(double param_1)

{
  double dVar1;
  
  if (((uint)((ulonglong)param_1 >> 0x20) & 0x7ff00000) == 0x7ff00000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)FUN_18029c560(param_1);
      return dVar1;
    }
    if ((longlong)param_1 < 0) goto LAB_18028abc8;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_18028abc8:
  dVar1 = (double)FUN_18029c580(&DAT_1803873f0,5,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar1;
}

