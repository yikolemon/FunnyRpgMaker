/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a0d82 */

undefined8 * FUN_1400a0d82(undefined8 *param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPCWSTR pWVar1;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_14008c1de(param_1,1);
  }
  else {
    pWVar1 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pWVar1 = *(LPCWSTR *)param_2;
    }
    cbMultiByte = WideCharToMultiByte(0x3a4,0,pWVar1,(int)*(longlong *)(param_2 + 8),(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_14008c1de(param_1,(longlong)(cbMultiByte + 1));
    pWVar1 = param_2 + 8;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      param_2 = *(LPCWSTR *)param_2;
    }
    WideCharToMultiByte(0x3a4,0,param_2,*(int *)pWVar1,(LPSTR)*param_1,cbMultiByte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return param_1;
}

