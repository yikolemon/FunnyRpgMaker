/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c526e */

longlong * FUN_1800c526e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_18023db80();
  lVar2 = FUN_18023db60();
  if (lVar1 == 24000000) {
    lVar2 = lVar2 * 0x29 + (lVar2 * 2) / 3;
  }
  else if (lVar1 == 10000000) {
    lVar2 = lVar2 * 100;
  }
  else {
    lVar2 = ((lVar2 % lVar1) * 1000000000) / lVar1 + (lVar2 / lVar1) * 1000000000;
  }
  *param_1 = lVar2;
  return param_1;
}

