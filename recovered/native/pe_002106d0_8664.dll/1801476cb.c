/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801476cb */

undefined8 FUN_1801476cb(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2));
}

