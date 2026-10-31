/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bfe3e */

undefined8 FUN_1400bfe3e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 4) != *(int *)(lVar1 + 8));
}

