/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481b20 */

longlong FUN_00481b20(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int iVar1;
  DWORD DVar2;
  BOOL local_8;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    iVar1 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                               );
  }
  else {
    local_8 = 0;
    iVar1 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,&local_8);
    if (local_8 != 0) {
      return 0x45900000000;
    }
  }
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x3ec) goto LAB_00481bda;
    iVar1 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      return (ulonglong)DVar2 << 0x20;
    }
  }
  DVar2 = 0;
LAB_00481bda:
  return CONCAT44(DVar2,iVar1);
}

