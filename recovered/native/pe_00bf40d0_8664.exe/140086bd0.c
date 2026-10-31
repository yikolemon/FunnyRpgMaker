/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086bd0 */

undefined8 * FUN_140086bd0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_14008dba0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_1400863f0();
  }
  return param_1;
}

