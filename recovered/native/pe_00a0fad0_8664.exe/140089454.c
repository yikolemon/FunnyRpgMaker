/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089454 */

void FUN_140089454(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0xb8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb8) + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb8) + 4);
  *(int *)(param_1 + -0xbc + (longlong)iVar1) = iVar1 + -0xb8;
  FUN_14003eaa6(param_1 + -0xa0);
  return;
}

