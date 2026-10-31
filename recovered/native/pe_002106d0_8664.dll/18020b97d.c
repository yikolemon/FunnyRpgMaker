/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020b97d */

void FUN_18020b97d(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1801cbd6f(*(longlong *)(*param_1 + 0x2b8) + 0xa8,param_1[8]);
  if (lVar1 != 0) {
    FUN_1801cc068(param_1[8]);
    param_1[8] = 0;
  }
  return;
}

