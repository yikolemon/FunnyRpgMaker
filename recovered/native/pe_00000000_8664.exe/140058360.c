/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140058360 */

void FUN_140058360(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)(param_1 + -0x9c + (longlong)iVar1) = iVar1 + -0x98;
  FUN_14005840e(param_1 + -0x80);
  return;
}

