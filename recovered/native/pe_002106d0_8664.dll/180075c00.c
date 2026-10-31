/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075c00 */

void FUN_180075c00(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0xb8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb8) + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb8) + 4);
  *(int *)(param_1 + -0xbc + (longlong)iVar1) = iVar1 + -0xb8;
  FUN_180073e04(param_1 + -0xa0);
  return;
}

