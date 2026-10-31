/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000d510 */

undefined8 * FUN_18000d510(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

