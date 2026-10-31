/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401475c6 */

void FUN_1401475c6(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  for (; (lVar1 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  return;
}

