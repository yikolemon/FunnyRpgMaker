/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405e1e */

void __fastcall FUN_00405e1e(undefined4 *param_1)

{
  *param_1 = std::ctype<wchar_t>::vftable;
  if (param_1[4] != 0) {
    thunk_FUN_00495f00((LPVOID)param_1[3]);
  }
  thunk_FUN_00495f00((LPVOID)param_1[5]);
  return;
}

