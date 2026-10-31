/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008bc32 */

undefined8 FUN_18008bc32(undefined8 param_1,undefined8 *param_2)

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
  lpWideCharStr = (LPWSTR)thunk_FUN_180239630();
  FUN_1802a89a0(lpWideCharStr,0,lVar1);
  MultiByteToWideChar(0x3a4,0,lpMultiByteStr,-1,lpWideCharStr,cchWideChar);
  FUN_180001254(param_1,lpWideCharStr);
  thunk_FUN_1802464a0(lpWideCharStr);
  return param_1;
}

