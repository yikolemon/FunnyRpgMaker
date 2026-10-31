/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ba7e */

undefined4 * FUN_1008ba7e(undefined4 *param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPCWSTR pWVar1;
  undefined1 auStack_24 [3];
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3600;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_2 + 8) == 0) {
    local_21 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1007d974(1,&local_21);
  }
  else {
    pWVar1 = param_2;
    if (7 < *(uint *)(param_2 + 10)) {
      pWVar1 = *(LPCWSTR *)param_2;
    }
    local_20 = auStack_24;
    cbMultiByte = WideCharToMultiByte(0x3a4,0,pWVar1,*(int *)(param_2 + 8),(LPSTR)0x0,0,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
    local_21 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1007d974(cbMultiByte + 1,&local_21);
    local_14 = 0;
    pWVar1 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 10)) {
      param_2 = *(LPCWSTR *)param_2;
    }
    WideCharToMultiByte(0x3a4,0,param_2,*(int *)pWVar1,(LPSTR)*param_1,cbMultiByte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  ExceptionList = local_1c;
  return param_1;
}

