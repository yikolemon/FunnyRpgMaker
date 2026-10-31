/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a6942 */

void FUN_1800a6942(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)(param_1 + -0x9c + (longlong)iVar1) = iVar1 + -0x98;
  FUN_1800a3e4c(param_1 + -0x80);
  return;
}

