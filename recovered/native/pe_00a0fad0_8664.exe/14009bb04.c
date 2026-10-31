/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009bb04 */

undefined8 FUN_14009bb04(undefined8 param_1,undefined8 *param_2)

{
  LPCSTR lpMultiByteStr;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  longlong lVar1;
  
  lpMultiByteStr = (LPCSTR)*param_2;
  cchWideChar = MultiByteToWideChar(0x3a4,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
  lVar1 = -1;
  if (-2 < cchWideChar) {
    lVar1 = (longlong)cchWideChar * 2 + 2;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_1400d3680();
  FUN_1401366a0(lpWideCharStr,0,lVar1);
  MultiByteToWideChar(0x3a4,0,lpMultiByteStr,-1,lpWideCharStr,cchWideChar);
  FUN_14000f628(param_1,lpWideCharStr);
  thunk_FUN_1400ddcd0(lpWideCharStr);
  return param_1;
}

