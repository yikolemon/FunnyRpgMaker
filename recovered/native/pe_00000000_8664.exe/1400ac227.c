/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ac227 */

void FUN_1400ac227(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x244);
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    FUN_14008f9f7();
    FUN_1400ac02c(param_1,param_2);
    FUN_14008fabc();
    return;
  }
  FUN_1400ac02c(param_1,param_2);
  return;
}

