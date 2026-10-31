/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001c3e4 */

undefined8 * FUN_14001c3e4(undefined8 *param_1,uint param_2)

{
  *param_1 = fmt::v12::format_facet<std::locale>::vftable;
  FUN_14000109c(param_1 + 10);
  FUN_14000109c(param_1 + 6);
  FUN_14000109c(param_1 + 2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x70);
  }
  return param_1;
}

