/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007fc46 */

void FUN_18007fc46(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0xa8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xa8) + 4);
  *(int *)(param_1 + -0xac + (longlong)iVar1) = iVar1 + -0xa8;
  FUN_180073e04(param_1 + -0xa0);
  return;
}

