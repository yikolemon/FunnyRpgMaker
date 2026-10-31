/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e280 */

void FUN_14044e280(longlong param_1)

{
  wchar_t *_Locale;
  
  _Locale = (wchar_t *)" Base Class Array\'";
  if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
    _Locale = *(wchar_t **)(param_1 + 0x48);
  }
  _wsetlocale(0,_Locale);
  return;
}

