/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005bfc */

void FUN_140005bfc(undefined8 *param_1)

{
  *param_1 = std::ctype<wchar_t>::vftable;
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1400a1290((LPVOID)param_1[3]);
  }
  thunk_FUN_1400a1290((LPVOID)param_1[5]);
  return;
}

