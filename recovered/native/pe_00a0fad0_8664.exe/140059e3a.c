/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059e3a */

void FUN_140059e3a(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0xa8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xa8) + 4);
  *(int *)(param_1 + -0xac + (longlong)iVar1) = iVar1 + -0xa8;
  FUN_14003eaa6(param_1 + -0xa0);
  return;
}

