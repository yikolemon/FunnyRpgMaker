/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10257fe0 */

int FUN_10257fe0(LPCWSTR param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPCWSTR param_5,
                int param_6)

{
  int iVar1;
  
  if (0 < param_4) {
    param_4 = FUN_10271eb0(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10271eb0(param_5,param_6);
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

