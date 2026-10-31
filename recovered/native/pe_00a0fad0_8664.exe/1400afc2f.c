/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400afc2f */

LPSTR FUN_1400afc2f(LPCWSTR param_1)

{
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  
  cbMultiByte = WideCharToMultiByte(0x3a4,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  lpMultiByteStr = (LPSTR)thunk_FUN_1400d3680();
  FUN_1401366a0(lpMultiByteStr,0,(longlong)cbMultiByte);
  WideCharToMultiByte(0x3a4,0,param_1,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  return lpMultiByteStr;
}

