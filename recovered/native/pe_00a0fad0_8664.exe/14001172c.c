/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001172c */

undefined8 * FUN_14001172c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  param_1[7] = 0;
  cVar1 = FUN_140006aac(param_2);
  if (cVar1 != '\0') {
    *param_1 = std::
               _Func_impl_no_alloc<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*)(CLI::App_const*___ptr64,CLI::Error_const&___ptr64),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,CLI::App_const*___ptr64,CLI::Error_const&___ptr64>
               ::vftable;
    param_1[1] = param_2;
    param_1[7] = param_1;
  }
  return param_1;
}

