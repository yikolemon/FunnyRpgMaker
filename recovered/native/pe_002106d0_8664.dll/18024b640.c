/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024b640 */

undefined8 * FUN_18024b640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::ctype<unsigned_short>::vftable;
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_180290e40(param_1[3]);
  }
  thunk_FUN_180290e40(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x60);
  }
  return param_1;
}

