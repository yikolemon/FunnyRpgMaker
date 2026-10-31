/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140131135 */

ulonglong FUN_140131135(void)

{
  double dVar1;
  
  dVar1 = (double)FUN_140130f4f();
  return DAT_140e8e0e8 & -(ulonglong)(dVar1 < 0.0) | ~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1;
}

