/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400937b8 */

HANDLE FUN_1400937b8(LPSECURITY_ATTRIBUTES param_1,uint param_2,LPCWSTR param_3,undefined8 param_4,
                    DWORD param_5,DWORD *param_6)

{
  DWORD DVar1;
  __acrt_ptd *p_Var2;
  undefined8 *lpParameter;
  HANDLE pvVar3;
  DWORD local_res18 [2];
  
  if (param_3 == (LPCWSTR)0x0) {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1400a0ea0();
    pvVar3 = (HANDLE)0x0;
  }
  else {
    lpParameter = FUN_1400938a4(param_3,param_4);
    pvVar3 = (HANDLE)0x0;
    if (lpParameter != (undefined8 *)0x0) {
      local_res18[0] = 0;
      pvVar3 = CreateThread(param_1,(ulonglong)param_2,FUN_140093908,lpParameter,param_5,local_res18
                           );
      if (pvVar3 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        FUN_140095ea4(DVar1);
        if ((HANDLE)lpParameter[2] != (HANDLE)0x0) {
          CloseHandle((HANDLE)lpParameter[2]);
        }
        if ((HMODULE)lpParameter[3] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)lpParameter[3]);
        }
        FUN_1400a1290(lpParameter);
        pvVar3 = (HANDLE)0x0;
      }
      else if (param_6 != (DWORD *)0x0) {
        *param_6 = local_res18[0];
      }
    }
  }
  return pvVar3;
}

