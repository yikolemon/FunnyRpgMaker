/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d302 */

void FUN_14000d302(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)(param_1 + -0x9c + (longlong)iVar1) = iVar1 + -0x98;
  FUN_14000a610(param_1 + -0x80);
  return;
}

