/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180241210 */

undefined8 * FUN_180241210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x10);
  }
  return param_1;
}

