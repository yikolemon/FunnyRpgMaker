/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180200c31 */

undefined8 FUN_180200c31(longlong param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x5c0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x5c8) + (ulonglong)param_2 * 8);
  }
  return 0;
}

