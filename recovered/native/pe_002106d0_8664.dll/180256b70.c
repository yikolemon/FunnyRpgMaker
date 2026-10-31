/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180256b70 */

undefined8 * FUN_180256b70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::collate<unsigned_short>::vftable;
  thunk_FUN_180290e40(param_1[3]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x20);
  }
  return param_1;
}

