/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002372c */

undefined4 * __thiscall FUN_1002372c(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[3] = param_3;
  *(undefined8 *)(param_1 + 1) = param_2;
  *param_1 = spdlog::details::full_formatter::vftable;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[9] = &LAB_100190fe;
  param_1[6] = param_1 + 10;
  param_1[8] = 0xfa;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = spdlog::details::mdc_formatter<spdlog::details::null_scoped_padder>::vftable;
  return param_1;
}

