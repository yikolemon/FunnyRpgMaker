/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400893b0 */

undefined8 FUN_1400893b0(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_48 == 0) {
    uStack_44 = GetLastError();
    if (uStack_44 != 0x3ec) goto LAB_14008944e;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      uStack_44 = GetLastError();
      goto LAB_14008944e;
    }
  }
  uStack_44 = 0;
LAB_14008944e:
  return CONCAT44(uStack_44,local_48);
}

