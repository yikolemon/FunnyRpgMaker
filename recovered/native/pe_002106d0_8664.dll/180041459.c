/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041459 */

void FUN_180041459(undefined8 *param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetStdHandle(0xfffffff5);
  FUN_1800414ea(param_1,pvVar1,1);
  *param_1 = spdlog::sinks::wincolor_stdout_sink<spdlog::details::console_mutex>::vftable;
  return;
}

