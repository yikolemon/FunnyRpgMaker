/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000233a */

undefined8 FUN_18000233a(longlong param_1,int *param_2,int param_3)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 2) >> 8),
                  *param_2 == param_3 &&
                  *(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8));
}

