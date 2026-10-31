/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093dd4 */

void FUN_180093dd4(undefined8 *param_1)

{
  *param_1 = std::ctype<wchar_t>::vftable;
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_180290e40(param_1[3]);
  }
  thunk_FUN_180290e40(param_1[5]);
  return;
}

