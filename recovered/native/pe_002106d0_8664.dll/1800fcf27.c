/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fcf27 */

longlong FUN_1800fcf27(ulonglong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x10000 - (param_1 & 0xffff);
  if ((param_1 & 0xffff) == 0) {
    lVar1 = 0;
  }
  return lVar1 + param_1;
}

