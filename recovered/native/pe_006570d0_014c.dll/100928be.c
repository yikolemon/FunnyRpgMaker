/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100928be */

void __fastcall FUN_100928be(undefined4 *param_1)

{
  *param_1 = std::ctype<wchar_t>::vftable;
  if (param_1[4] != 0) {
    thunk_FUN_10274120(param_1[3]);
  }
  thunk_FUN_10274120(param_1[5]);
  return;
}

