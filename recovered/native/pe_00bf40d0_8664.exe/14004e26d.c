/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e26d */

undefined8 FUN_14004e26d(longlong param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x5c0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x5c8) + (ulonglong)param_2 * 8);
  }
  return 0;
}

