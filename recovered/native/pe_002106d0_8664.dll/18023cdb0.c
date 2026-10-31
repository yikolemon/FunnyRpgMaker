/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023cdb0 */

void FUN_18023cdb0(longlong param_1)

{
  wchar_t *_Locale;
  
  _Locale = L"";
  if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
    _Locale = *(wchar_t **)(param_1 + 0x48);
  }
  _wsetlocale(0,_Locale);
  return;
}

