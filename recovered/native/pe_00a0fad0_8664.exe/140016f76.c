/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016f76 */

void FUN_140016f76(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`public:_class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>___cdecl_CLI::Formatter::make_groups(CLI::App_const*___ptr64,CLI::AppFormatMode)const___ptr64'::`1'::<lambda_1>,bool,CLI::Option_const*___ptr64>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}

