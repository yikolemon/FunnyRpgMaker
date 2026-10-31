/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d8425 */

void FUN_1400d8425(longlong param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  uint cchWideChar;
  uint uVar2;
  LPWSTR lpWideCharStr;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  if ((int)cchWideChar < 1) {
    lpWideCharStr = (LPWSTR)0x0;
  }
  else {
    uVar2 = 8;
    if (8 < cchWideChar) {
      uVar2 = cchWideChar;
    }
    lpWideCharStr = (LPWSTR)FUN_140077ab4(uVar2 * 2);
  }
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,cchWideChar);
  DefWindowProcW((HWND)*puVar1,0xc,0,(LPARAM)lpWideCharStr);
  if (lpWideCharStr != (LPWSTR)0x0) {
    FUN_140077b90(lpWideCharStr);
    return;
  }
  return;
}

