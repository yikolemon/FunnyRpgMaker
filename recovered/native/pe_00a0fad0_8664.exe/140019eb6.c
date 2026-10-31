/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019eb6 */

void FUN_140019eb6(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x88 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x88) + 4);
  *(int *)(param_1 + -0x8c + (longlong)iVar1) = iVar1 + -0x88;
  FUN_14000a610(param_1 + -0x80);
  return;
}

