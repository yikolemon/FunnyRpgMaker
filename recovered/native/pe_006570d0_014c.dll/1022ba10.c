/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ba10 */

void FUN_1022ba10(int param_1)

{
  wchar_t *_Locale;
  
  _Locale = L"";
  if (*(wchar_t **)(param_1 + 0x24) != (wchar_t *)0x0) {
    _Locale = *(wchar_t **)(param_1 + 0x24);
  }
  __wsetlocale(0,_Locale);
  return;
}

