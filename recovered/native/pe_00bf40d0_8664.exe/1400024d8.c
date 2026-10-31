/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400024d8 */

undefined8 FUN_1400024d8(longlong param_1,int *param_2,int param_3)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 2) >> 8),
                  *param_2 == param_3 &&
                  *(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8));
}

