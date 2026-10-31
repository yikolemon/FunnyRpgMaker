/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400562c1 */

LPSTR FUN_1400562c1(LPSTR param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR pWVar1;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    pWVar1 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pWVar1 = *(LPCWSTR *)param_2;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,pWVar1,(int)*(longlong *)(param_2 + 8),(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < cbMultiByte) {
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      FUN_140058da8(param_1,0,cbMultiByte);
      lpMultiByteStr = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        lpMultiByteStr = *(LPSTR *)param_1;
      }
      pWVar1 = param_2 + 8;
      if (7 < *(ulonglong *)(param_2 + 0xc)) {
        param_2 = *(LPCWSTR *)param_2;
      }
      WideCharToMultiByte(0xfde9,0,param_2,*(int *)pWVar1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      return param_1;
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  return param_1;
}

