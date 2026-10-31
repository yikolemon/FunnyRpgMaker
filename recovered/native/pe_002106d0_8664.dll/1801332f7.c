/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801332f7 */

void FUN_1801332f7(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x244);
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    FUN_1801166df();
    FUN_1801330fc(param_1,param_2);
    FUN_1801167a4();
    return;
  }
  FUN_1801330fc(param_1,param_2);
  return;
}

