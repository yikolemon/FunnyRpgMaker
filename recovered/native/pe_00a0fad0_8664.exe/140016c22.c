/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016c22 */

undefined8 * FUN_140016c22(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  param_1[7] = 0;
  cVar2 = FUN_140006aac(param_2);
  if (cVar2 != '\0') {
    *param_1 = std::
               _Func_impl_no_alloc<`public:_class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>___cdecl_CLI::Formatter::make_groups(CLI::App_const*___ptr64,CLI::AppFormatMode)const___ptr64'::`1'::<lambda_1>,bool,CLI::Option_const*___ptr64>
               ::vftable;
    uVar1 = param_2[1];
    param_1[1] = *param_2;
    param_1[2] = uVar1;
    param_1[3] = param_2[2];
    param_1[7] = param_1;
  }
  return param_1;
}

