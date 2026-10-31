/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401057c0 */

void FUN_1401057c0(LPCWSTR param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6)

{
  int iVar1;
  int cchSrc;
  
  cchSrc = param_4;
  if (0 < param_4) {
    iVar1 = FUN_14011d0a0(param_3,(longlong)param_4);
    cchSrc = iVar1 + 1;
    if (param_4 <= iVar1) {
      cchSrc = iVar1;
    }
  }
  LCMapStringEx(param_1,param_2,param_3,cchSrc,param_5,param_6,(LPNLSVERSIONINFO)0x0,(LPVOID)0x0,0);
  return;
}

