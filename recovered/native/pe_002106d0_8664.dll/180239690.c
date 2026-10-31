/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180239690 */

undefined8 * FUN_180239690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x18);
  }
  return param_1;
}

