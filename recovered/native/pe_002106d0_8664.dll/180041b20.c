/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041b20 */

undefined8 * FUN_180041b20(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x40);
  }
  return param_1;
}

