/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a8a30 */

double FUN_1401a8a30(double param_1)

{
  double dVar1;
  
  if (((uint)((ulonglong)param_1 >> 0x20) & 0x7ff00000) == 0x7ff00000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)FUN_1401b9960(param_1);
      return dVar1;
    }
    if ((longlong)param_1 < 0) goto LAB_1401a8a78;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_1401a8a78:
  dVar1 = (double)FUN_1401b9980(&DAT_140edd160,5,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar1;
}

