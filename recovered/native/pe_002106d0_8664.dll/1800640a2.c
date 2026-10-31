/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800640a2 */

undefined8 * FUN_1800640a2(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_18026e9f0(param_2 + 8);
  *param_1 = utf8::exception::vftable;
  *param_1 = utf8::invalid_code_point::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

