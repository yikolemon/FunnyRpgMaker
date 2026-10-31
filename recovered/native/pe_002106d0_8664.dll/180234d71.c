/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180234d71 */

ulonglong FUN_180234d71(void)

{
  double dVar1;
  
  dVar1 = (double)FUN_180234b8b();
  return DAT_18032a0f8 & -(ulonglong)(dVar1 < 0.0) | ~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1;
}

