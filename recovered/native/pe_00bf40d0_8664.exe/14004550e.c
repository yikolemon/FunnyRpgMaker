/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004550e */

void FUN_14004550e(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  for (; (lVar1 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  return;
}

