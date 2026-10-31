/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400780ec */

undefined8 FUN_1400780ec(LPCSTR param_1,LPCSTR param_2)

{
  int cchWideChar;
  int cchWideChar_00;
  LPWSTR pWVar1;
  undefined8 uVar2;
  WCHAR *lpWideCharStr;
  WCHAR local_258 [264];
  LPWSTR local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  cchWideChar_00 = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  if (cchWideChar_00 + cchWideChar < 0x105) {
    pWVar1 = (LPWSTR)0x0;
  }
  else {
    local_48 = (LPWSTR)0x0;
    pWVar1 = (LPWSTR)FUN_140077ab4((cchWideChar_00 + cchWideChar) * 2);
  }
  lpWideCharStr = local_258;
  if (pWVar1 != (LPWSTR)0x0) {
    lpWideCharStr = pWVar1;
  }
  local_48 = pWVar1;
  MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,cchWideChar);
  local_48 = pWVar1;
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr + cchWideChar,cchWideChar_00);
  local_48 = pWVar1;
  uVar2 = FUN_14019edf0(lpWideCharStr,lpWideCharStr + cchWideChar);
  if (pWVar1 != (LPWSTR)0x0) {
    local_48 = pWVar1;
    FUN_140077b90(pWVar1);
  }
  return uVar2;
}

