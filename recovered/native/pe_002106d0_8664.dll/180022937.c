/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180022937 */

undefined8 * FUN_180022937(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x50);
  puVar1[1] = 0x100000001;
  *puVar1 = std::
            _Ref_count_obj2<spdlog::sinks::wincolor_stdout_sink<spdlog::details::console_mutex>_>::
            vftable;
  FUN_180041459(puVar1 + 2);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

