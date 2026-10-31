/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036f8e */

undefined8 * FUN_140036f8e(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xe) = 0;
  param_1[1] = 0;
  *param_1 = spdlog::details::aggregate_formatter::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  return param_1;
}

