/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006425a */

undefined4 * __thiscall FUN_1006425a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = utf8::exception::vftable;
  *param_1 = utf8::invalid_code_point::vftable;
  param_1[3] = param_2;
  return param_1;
}

