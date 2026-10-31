/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140032566 */

undefined8 * FUN_140032566(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = std::
             _Func_impl_no_alloc<`public:_class_CLI::Option*___ptr64___cdecl_CLI::Option::type_name(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)___ptr64'::`1'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
             ::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[3] = param_2[2];
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_1;
}

