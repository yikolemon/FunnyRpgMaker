/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189170 */

void FUN_140189170(longlong param_1)

{
  wchar_t *_Locale;
  
  _Locale = L"";
  if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
    _Locale = *(wchar_t **)(param_1 + 0x48);
  }
  _wsetlocale(0,_Locale);
  return;
}

