/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a52f1 */

longlong FUN_1400a52f1(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x4c8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x98), lVar1 != 0)) {
    return lVar1;
  }
  return param_1;
}

