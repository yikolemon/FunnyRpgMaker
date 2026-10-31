/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dcf90 */

undefined8 FUN_1400dcf90(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  BOOL local_res8 [8];
  int local_48;
  DWORD DStack_44;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_48 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      return 0x45900000000;
    }
  }
  if (local_48 == 0) {
    DStack_44 = GetLastError();
    if (DStack_44 != 0x3ec) goto LAB_1400dd091;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      DStack_44 = GetLastError();
      goto LAB_1400dd091;
    }
  }
  DStack_44 = 0;
LAB_1400dd091:
  return CONCAT44(DStack_44,local_48);
}

