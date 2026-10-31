/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004280e */

void FUN_14004280e(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0xa8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xa8) + 4);
  *(int *)(param_1 + -0xac + (longlong)iVar1) = iVar1 + -0xa8;
  FUN_1400132d4(param_1 + -0xa0);
  return;
}

