/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f4b0 */

void __cdecl FUN_0047f4b0(int param_1)

{
  wchar_t *_Locale;
  
  _Locale = L"";
  if (*(wchar_t **)(param_1 + 0x24) != (wchar_t *)0x0) {
    _Locale = *(wchar_t **)(param_1 + 0x24);
  }
  __wsetlocale(0,_Locale);
  return;
}

