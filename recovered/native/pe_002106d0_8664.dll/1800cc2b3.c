/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc2b3 */

undefined8 * FUN_1800cc2b3(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x1a8);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<spdlog::sinks::basic_file_sink<std::mutex>_>::vftable;
  FUN_1800ccf51(puVar1 + 2,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

