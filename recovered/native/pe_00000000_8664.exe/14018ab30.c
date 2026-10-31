/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018ab30 */

undefined8 FUN_14018ab30(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_48 == 0) {
    uStack_44 = GetLastError();
    if (uStack_44 != 0x3ec) goto LAB_14018abce;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      uStack_44 = GetLastError();
      goto LAB_14018abce;
    }
  }
  uStack_44 = 0;
LAB_14018abce:
  return CONCAT44(uStack_44,local_48);
}

