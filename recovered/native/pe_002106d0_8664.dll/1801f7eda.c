/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f7eda */

void FUN_1801f7eda(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  for (; (lVar1 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  return;
}

