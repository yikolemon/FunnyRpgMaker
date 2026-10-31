/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400afd54 */

LPWSTR FUN_1400afd54(LPCSTR param_1,int *param_2)

{
  int cchWideChar;
  LPWSTR lpWideCharStr;
  longlong lVar1;
  
  cchWideChar = *param_2;
  lVar1 = -1;
  if (-2 < (longlong)cchWideChar) {
    lVar1 = (longlong)cchWideChar * 2 + 2;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_1400d3680();
  FUN_1401366a0(lpWideCharStr,0,lVar1);
  MultiByteToWideChar(0x3a4,0,param_1,-1,lpWideCharStr,cchWideChar);
  return lpWideCharStr;
}

