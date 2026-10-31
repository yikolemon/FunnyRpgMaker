/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073eb4 */

undefined8 * FUN_180073eb4(undefined8 *param_1,uint param_2)

{
  *param_1 = std::ios_base::vftable;
  FUN_18023ef00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x48);
  }
  return param_1;
}

