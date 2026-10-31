/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002fd6a */

undefined8 FUN_14002fd6a(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x318) >> 8),
                  *(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) != 0);
}

