/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229180 */

longlong FUN_10229180(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0)
  ;
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x3ec) goto LAB_102291e7;
    iVar1 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      return (ulonglong)DVar2 << 0x20;
    }
  }
  DVar2 = 0;
LAB_102291e7:
  return CONCAT44(DVar2,iVar1);
}

