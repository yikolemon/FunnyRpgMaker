/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140003098 */

undefined8 FUN_140003098(longlong param_1,int *param_2,int param_3)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 2) >> 8),
                  *param_2 == param_3 &&
                  *(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8));
}

