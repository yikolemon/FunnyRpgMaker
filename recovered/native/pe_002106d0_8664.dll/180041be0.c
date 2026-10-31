/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041be0 */

void FUN_180041be0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

