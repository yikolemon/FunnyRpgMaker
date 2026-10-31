/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d1681 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d1681(ulonglong param_1,longlong param_2,float param_3)

{
  ulonglong uVar1;
  float fVar2;
  
  fVar2 = (float)(param_2 - param_1) * param_3 + (float)param_1;
  uVar1 = (ulonglong)fVar2;
  return (longlong)(fVar2 - _DAT_1401c8620) & (longlong)uVar1 >> 0x3f | uVar1;
}

