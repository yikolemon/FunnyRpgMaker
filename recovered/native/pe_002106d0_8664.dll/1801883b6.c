/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801883b6 */

longlong * FUN_1801883b6(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *param_1 = lVar1;
  return param_1;
}

