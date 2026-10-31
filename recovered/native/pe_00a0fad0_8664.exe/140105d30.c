/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140105d30 */

int FUN_140105d30(LPCWSTR param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPCWSTR param_5,
                 int param_6)

{
  int iVar1;
  
  if (0 < param_4) {
    param_4 = FUN_14011d0a0(param_3,(longlong)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_14011d0a0(param_5,(longlong)param_6);
  }
  if ((param_4 != 0) && (param_6 != 0)) {
    iVar1 = CompareStringEx(param_1,param_2,param_3,param_4,param_5,param_6,(LPNLSVERSIONINFO)0x0,
                            (LPVOID)0x0,0);
    return iVar1;
  }
  if (param_4 - param_6 == 0) {
    return 2;
  }
  return (param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3;
}

