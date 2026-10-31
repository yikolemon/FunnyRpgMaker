/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cffca */

ulonglong FUN_1400cffca(uint param_1)

{
  ulonglong uVar1;
  
  if ((int)param_1 < 0) {
    return (ulonglong)DAT_140211ef0;
  }
  if (param_1 < 10) {
    return (ulonglong)*(uint *)(&DAT_140211d50 + (ulonglong)param_1 * 4);
  }
  uVar1 = FUN_1401a65a0(DAT_1401c86d0,(float)(int)-param_1);
  return uVar1;
}

