/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005a2c8 */

void FUN_14005a2c8(undefined8 *param_1)

{
  *param_1 = std::ctype<wchar_t>::vftable;
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1401aea30(param_1[3]);
  }
  thunk_FUN_1401aea30(param_1[5]);
  return;
}

