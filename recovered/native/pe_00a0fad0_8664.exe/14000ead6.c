/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ead6 */

undefined8 * FUN_14000ead6(undefined8 *param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_14000edde(param_1,param_2);
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}

