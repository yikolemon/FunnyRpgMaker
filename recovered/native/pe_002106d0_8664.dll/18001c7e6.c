/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c7e6 */

undefined8 * FUN_18001c7e6(undefined8 *param_1,uint param_2)

{
  *param_1 = std::ctype<char>::vftable;
  FUN_18001c862();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x30);
  }
  return param_1;
}

