/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e2736 */

undefined8 FUN_1801e2736(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x318) >> 8),
                  *(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) != 0);
}

