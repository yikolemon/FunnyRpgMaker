/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006432e */

undefined8 * FUN_18006432e(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_18026ea90(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x20);
  }
  return param_1;
}

