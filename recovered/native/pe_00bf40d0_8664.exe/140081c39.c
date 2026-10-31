/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081c39 */

ulonglong FUN_140081c39(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_140081a53(param_1,param_2);
  return DAT_1400e7248 & -(ulonglong)(dVar1 < 0.0) | ~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1;
}

