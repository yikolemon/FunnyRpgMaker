/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c5628 */

LPSTR FUN_100c5628(LPSTR param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR pWVar1;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7da0;
  local_1c = ExceptionList;
  if (*(int *)(param_2 + 8) != 0) {
    pWVar1 = param_2;
    if (7 < *(uint *)(param_2 + 10)) {
      pWVar1 = *(LPCWSTR *)param_2;
    }
    ExceptionList = &local_1c;
    cbMultiByte = WideCharToMultiByte(0xfde9,0,pWVar1,*(int *)(param_2 + 8),(LPSTR)0x0,0,(LPCSTR)0x0
                                      ,(LPBOOL)0x0);
    if (0 < cbMultiByte) {
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      FUN_10062152(0,cbMultiByte);
      local_14 = 0;
      lpMultiByteStr = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        lpMultiByteStr = *(LPSTR *)param_1;
      }
      pWVar1 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 10)) {
        param_2 = *(LPCWSTR *)param_2;
      }
      WideCharToMultiByte(0xfde9,0,param_2,*(int *)pWVar1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      ExceptionList = local_1c;
      return param_1;
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\x0f';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  ExceptionList = local_1c;
  return param_1;
}

