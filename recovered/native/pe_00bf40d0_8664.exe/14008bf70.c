/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008bf70 */

void FUN_14008bf70(LPCWSTR param_1,DWORD param_2,undefined1 (*param_3) [32],int param_4,
                  LPWSTR param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  int cchSrc;
  
  cchSrc = param_4;
  if (0 < param_4) {
    uVar2 = FUN_14009d080(param_3,(longlong)param_4);
    iVar1 = (int)uVar2;
    cchSrc = iVar1 + 1;
    if (param_4 <= iVar1) {
      cchSrc = iVar1;
    }
  }
  LCMapStringEx(param_1,param_2,(LPCWSTR)param_3,cchSrc,param_5,param_6,(LPNLSVERSIONINFO)0x0,
                (LPVOID)0x0,0);
  return;
}

