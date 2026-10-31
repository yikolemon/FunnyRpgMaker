/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484680 */

void __cdecl
FUN_00484680(LPCWSTR param_1,DWORD param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,int param_6)

{
  uint uVar1;
  uint cchSrc;
  
  cchSrc = param_4;
  if (0 < (int)param_4) {
    uVar1 = FUN_004941c0(param_3,param_4);
    cchSrc = uVar1 + 1;
    if ((int)param_4 <= (int)uVar1) {
      cchSrc = uVar1;
    }
  }
  LCMapStringEx(param_1,param_2,param_3,cchSrc,param_5,param_6,(LPNLSVERSIONINFO)0x0,(LPVOID)0x0,0);
  return;
}

