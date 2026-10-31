/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007e438 */

void FUN_18007e438(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)(param_1 + -0x9c + (longlong)iVar1) = iVar1 + -0x98;
  FUN_18007bd8e(param_1 + -0x80);
  return;
}

