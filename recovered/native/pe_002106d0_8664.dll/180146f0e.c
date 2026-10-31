/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146f0e */

undefined8 FUN_180146f0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 4) != *(int *)(lVar1 + 8));
}

