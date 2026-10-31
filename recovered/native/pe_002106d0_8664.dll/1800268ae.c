/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800268ae */

undefined8 * FUN_1800268ae(undefined8 *param_1,uint param_2)

{
  *param_1 = fmt::v12::format_facet<std::locale>::vftable;
  FUN_180001ef2(param_1 + 10);
  FUN_180001ef2(param_1 + 6);
  FUN_180001ef2(param_1 + 2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x70);
  }
  return param_1;
}

