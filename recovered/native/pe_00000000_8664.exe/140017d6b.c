/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140017d6b */

undefined8 * FUN_140017d6b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1401887b0(0x50);
  puVar1[1] = 0x100000001;
  *puVar1 = std::
            _Ref_count_obj2<spdlog::sinks::wincolor_stdout_sink<spdlog::details::console_mutex>_>::
            vftable;
  FUN_1400370ad(puVar1 + 2);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

