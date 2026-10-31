/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003776e */

undefined8 * FUN_14003776e(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x40);
  }
  return param_1;
}

