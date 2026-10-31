/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015b069 */

void FUN_14015b069(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14012ad43(*(longlong *)(*param_1 + 0x2b8) + 0xa8,param_1[8]);
  if (lVar1 != 0) {
    FUN_14012b03c(param_1[8]);
    param_1[8] = 0;
  }
  return;
}

