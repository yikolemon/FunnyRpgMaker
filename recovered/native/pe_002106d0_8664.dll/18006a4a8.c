/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a4a8 */

undefined8 * FUN_18006a4a8(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

