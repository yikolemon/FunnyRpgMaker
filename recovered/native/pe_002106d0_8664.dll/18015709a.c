/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015709a */

ulonglong FUN_18015709a(uint param_1)

{
  ulonglong uVar1;
  
  if ((int)param_1 < 0) {
    return (ulonglong)DAT_1802df180;
  }
  if (param_1 < 10) {
    return (ulonglong)*(uint *)(&DAT_1802defe0 + (ulonglong)param_1 * 4);
  }
  uVar1 = FUN_1802886b0(DAT_1802dc2dc,(float)(int)-param_1);
  return uVar1;
}

