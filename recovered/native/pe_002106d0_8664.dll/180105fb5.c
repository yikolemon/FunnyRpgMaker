/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105fb5 */

bool FUN_180105fb5(undefined8 param_1,LPCSTR param_2)

{
  uint cchWideChar;
  HINSTANCE pHVar1;
  uint uVar2;
  LPCWSTR lpWideCharStr;
  
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  if ((int)cchWideChar < 1) {
    lpWideCharStr = (LPCWSTR)0x0;
  }
  else {
    uVar2 = 8;
    if (8 < cchWideChar) {
      uVar2 = cchWideChar;
    }
    lpWideCharStr = (LPCWSTR)FUN_1800fe7f8(uVar2 * 2);
  }
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,cchWideChar);
  pHVar1 = ShellExecuteW((HWND)0x0,L"open",lpWideCharStr,(LPCWSTR)0x0,(LPCWSTR)0x0,10);
  if (lpWideCharStr != (LPCWSTR)0x0) {
    FUN_1800fe8d4(lpWideCharStr);
  }
  return 0x20 < (longlong)pHVar1;
}

