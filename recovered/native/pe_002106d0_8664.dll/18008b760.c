/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008b760 */

void FUN_18008b760(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0xb0 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb0) + 4);
  *(int *)(param_1 + -0xb4 + (longlong)iVar1) = iVar1 + -0xb0;
  FUN_180073e04(param_1 + -0xa0);
  return;
}

