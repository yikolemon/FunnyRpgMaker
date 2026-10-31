/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe92e */

longlong FUN_1800fe92e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1802a8150(param_1,10,param_2 - param_1);
  if (lVar1 == 0) {
    lVar1 = param_2;
  }
  return lVar1;
}

