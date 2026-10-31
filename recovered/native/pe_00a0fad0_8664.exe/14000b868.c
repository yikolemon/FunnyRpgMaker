/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000b868 */

undefined8 * FUN_14000b868(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

