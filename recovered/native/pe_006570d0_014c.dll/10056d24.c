/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10056d24 */

undefined4 * FUN_10056d24(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_1005ad40;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar1 = (undefined4 *)FUN_10228350(0x14);
  puVar1[1] = 1;
  puVar1[2] = 1;
  *puVar1 = std::
            _Ref_count_obj2<nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            ::vftable;
  puVar1[3] = nlohmann::json_abi_v3_12_0::detail::
              output_string_adapter<char,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
  puVar1[4] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  ExceptionList = local_14;
  return param_1;
}

