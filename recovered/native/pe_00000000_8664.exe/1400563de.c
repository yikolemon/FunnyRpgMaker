/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400563de */

LPWSTR FUN_1400563de(LPWSTR param_1,LPCSTR param_2)

{
  int *piVar1;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  LPCSTR lpMultiByteStr;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    lpMultiByteStr = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      lpMultiByteStr = *(LPCSTR *)param_2;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,(int)*(longlong *)(param_2 + 0x10),
                                      (LPWSTR)0x0,0);
    if (0 < cchWideChar) {
      param_1[8] = L'\0';
      param_1[9] = L'\0';
      param_1[10] = L'\0';
      param_1[0xb] = L'\0';
      param_1[0xc] = L'\0';
      param_1[0xd] = L'\0';
      param_1[0xe] = L'\0';
      param_1[0xf] = L'\0';
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      param_1[2] = L'\0';
      param_1[3] = L'\0';
      param_1[4] = L'\0';
      param_1[5] = L'\0';
      param_1[6] = L'\0';
      param_1[7] = L'\0';
      FUN_140047692(param_1,0,cchWideChar);
      lpWideCharStr = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        lpWideCharStr = *(LPWSTR *)param_1;
      }
      piVar1 = (int *)(param_2 + 0x10);
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        param_2 = *(LPCSTR *)param_2;
      }
      MultiByteToWideChar(0xfde9,0,param_2,*piVar1,lpWideCharStr,cchWideChar);
      return param_1;
    }
  }
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  param_1[6] = L'\0';
  param_1[7] = L'\0';
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  return param_1;
}

