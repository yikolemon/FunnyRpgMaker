/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180063fee */

undefined8 * FUN_180063fee(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = utf8::exception::vftable;
  *param_1 = utf8::invalid_code_point::vftable;
  *(undefined4 *)(param_1 + 3) = param_2;
  return param_1;
}

