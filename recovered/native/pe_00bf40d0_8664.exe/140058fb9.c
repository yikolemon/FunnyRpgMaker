/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140058fb9 */

void FUN_140058fb9(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001e6ca((longlong *)(*(longlong *)(*param_1 + 0x2b8) + 0xa8),param_1[8]);
  if (lVar1 != 0) {
    FUN_14001e9c3((longlong *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}

