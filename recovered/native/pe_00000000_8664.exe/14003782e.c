/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003782e */

void FUN_14003782e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

