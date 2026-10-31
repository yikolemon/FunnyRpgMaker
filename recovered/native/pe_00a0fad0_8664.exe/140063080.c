/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063080 */

void FUN_140063080(undefined8 *param_1)

{
  *param_1 = std::ctype<wchar_t>::vftable;
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1401212e0(param_1[3]);
  }
  thunk_FUN_1401212e0(param_1[5]);
  return;
}

