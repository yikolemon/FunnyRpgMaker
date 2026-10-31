/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006916e */

void FUN_14006916e(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    FUN_14001c53d(lVar1,param_1[2]);
    param_1[2] = 0;
    FUN_14001c53d(lVar1,(longlong)param_1);
    return;
  }
  return;
}

