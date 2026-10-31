/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015031d */

undefined8 FUN_14015031d(longlong param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x5c0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x5c8) + (ulonglong)param_2 * 8);
  }
  return 0;
}

