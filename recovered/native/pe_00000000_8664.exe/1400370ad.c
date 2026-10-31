/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400370ad */

void FUN_1400370ad(undefined8 *param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetStdHandle(0xfffffff5);
  FUN_14003713a(param_1,pvVar1,1);
  *param_1 = spdlog::sinks::wincolor_stdout_sink<spdlog::details::console_mutex>::vftable;
  return;
}

