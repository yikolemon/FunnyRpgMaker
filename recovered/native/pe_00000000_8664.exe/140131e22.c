/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140131e22 */

undefined8 FUN_140131e22(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x318) >> 8),
                  *(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) != 0);
}

