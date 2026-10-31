/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189d20 */

undefined8 * FUN_140189d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1401905b0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x20);
  }
  return param_1;
}

