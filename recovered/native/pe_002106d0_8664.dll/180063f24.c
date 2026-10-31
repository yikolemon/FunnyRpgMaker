/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180063f24 */

undefined8 * FUN_180063f24(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_18026e9f0(param_2 + 8);
  *param_1 = utf8::exception::vftable;
  *param_1 = utf8::invalid_utf8::vftable;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}

