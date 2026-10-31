/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c532 */

undefined8 * FUN_18001c532(undefined8 *param_1,uint param_2)

{
  *param_1 = std::collate<char>::vftable;
  thunk_FUN_180290e40(param_1[3]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x20);
  }
  return param_1;
}

