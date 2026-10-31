/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400176d0 */

undefined8 * FUN_1400176d0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  param_1[7] = 0;
  cVar1 = FUN_140006aac(param_2);
  if (cVar1 != '\0') {
    *param_1 = std::
               _Func_impl_no_alloc<`public:_virtual_class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>___cdecl_CLI::Formatter::make_subcommands(CLI::App_const*___ptr64,CLI::AppFormatMode)const___ptr64'::`1'::<lambda_2>,bool,CLI::App_const*___ptr64>
               ::vftable;
    param_1[1] = *param_2;
    param_1[7] = param_1;
  }
  return param_1;
}

