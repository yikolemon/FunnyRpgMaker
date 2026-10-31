/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180058361 */

undefined8 * FUN_180058361(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x20);
  puVar1[1] = 0x100000001;
  *puVar1 = std::
            _Ref_count_obj2<nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            ::vftable;
  puVar1[2] = nlohmann::json_abi_v3_12_0::detail::
              output_string_adapter<char,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
  puVar1[3] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

