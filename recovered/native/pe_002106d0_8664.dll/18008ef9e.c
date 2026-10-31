/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008ef9e */

undefined8 * FUN_18008ef9e(undefined8 *param_1,uint param_2)

{
  *param_1 = CommonEvents::vftable;
  FUN_18008e9c4(param_1 + 0xc);
  FUN_1800703dc(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x80);
  }
  return param_1;
}

