/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10040c88 */

undefined4 * __fastcall FUN_10040c88(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = spdlog::details::aggregate_formatter::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf;
  return param_1;
}

