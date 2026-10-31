/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015b6e */

void FUN_140015b6e(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0xb0 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb0) + 4);
  *(int *)(param_1 + -0xb4 + (longlong)iVar1) = iVar1 + -0xb0;
  FUN_1400132d4(param_1 + -0xa0);
  return;
}

