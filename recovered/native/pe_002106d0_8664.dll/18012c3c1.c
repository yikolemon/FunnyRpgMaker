/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012c3c1 */

longlong FUN_18012c3c1(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x4c8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x98), lVar1 != 0)) {
    return lVar1;
  }
  return param_1;
}

