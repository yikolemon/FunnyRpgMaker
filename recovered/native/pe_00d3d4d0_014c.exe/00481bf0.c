/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481bf0 */

longlong FUN_00481bf0(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0)
  ;
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x3ec) goto LAB_00481c57;
    iVar1 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      return (ulonglong)DVar2 << 0x20;
    }
  }
  DVar2 = 0;
LAB_00481c57:
  return CONCAT44(DVar2,iVar1);
}

