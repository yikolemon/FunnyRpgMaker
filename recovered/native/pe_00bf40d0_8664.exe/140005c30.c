/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005c30 */

undefined8 * FUN_140005c30(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

