/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004133a */

undefined8 * FUN_18004133a(undefined8 *param_1)

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

