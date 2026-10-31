/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c573b */

LPWSTR FUN_100c573b(LPWSTR param_1,LPCSTR param_2)

{
  int *piVar1;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  LPCSTR lpMultiByteStr;
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7db0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(int *)(param_2 + 0x10) != 0) {
    lpMultiByteStr = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      lpMultiByteStr = *(LPCSTR *)param_2;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,*(int *)(param_2 + 0x10),(LPWSTR)0x0,0
                                     );
    if (0 < cchWideChar) {
      param_1[8] = L'\0';
      param_1[9] = L'\0';
      param_1[10] = L'\0';
      param_1[0xb] = L'\0';
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      param_1[2] = L'\0';
      param_1[3] = L'\0';
      param_1[4] = L'\0';
      param_1[5] = L'\0';
      param_1[6] = L'\0';
      param_1[7] = L'\0';
      FUN_10005b1e(0,cchWideChar);
      local_14 = 0;
      lpWideCharStr = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        lpWideCharStr = *(LPWSTR *)param_1;
      }
      piVar1 = (int *)(param_2 + 0x10);
      if (0xf < *(uint *)(param_2 + 0x14)) {
        param_2 = *(LPCSTR *)param_2;
      }
      MultiByteToWideChar(0xfde9,0,param_2,*piVar1,lpWideCharStr,cchWideChar);
      *unaff_FS_OFFSET = local_1c;
      return param_1;
    }
  }
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  param_1[6] = L'\0';
  param_1[7] = L'\0';
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\a';
  param_1[0xb] = L'\0';
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

