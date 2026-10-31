/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140050be8 */

undefined8 * FUN_140050be8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  param_1[7] = 0;
  cVar1 = FUN_140006aac(param_2);
  if (cVar1 != '\0') {
    *param_1 = std::
               _Func_impl_no_alloc<`public:_class_CLI::Option*___ptr64___cdecl_CLI::App::add_option<std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::vector<class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>,class_std::allocator<class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_>_>,0>(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)___ptr64'::`1'::<lambda_1>,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_const&___ptr64>
               ::vftable;
    param_1[1] = *param_2;
    param_1[7] = param_1;
  }
  return param_1;
}

