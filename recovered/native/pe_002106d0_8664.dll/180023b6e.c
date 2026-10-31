/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180023b6e */

undefined8 * FUN_180023b6e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  *param_1 = spdlog::details::full_formatter::vftable;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = FUN_180018c5c;
  param_1[4] = param_1 + 8;
  param_1[6] = 0xfa;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = spdlog::details::mdc_formatter<spdlog::details::null_scoped_padder>::vftable;
  return param_1;
}

