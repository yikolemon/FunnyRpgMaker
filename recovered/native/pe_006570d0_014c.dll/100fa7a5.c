/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa7a5 */

FILE * FUN_100fa7a5(LPCSTR param_1,LPCSTR param_2)

{
  wchar_t *cchWideChar;
  int iVar1;
  FILE *pFVar2;
  int *unaff_FS_OFFSET;
  WCHAR local_23c [260];
  int local_34;
  LPWSTR local_30;
  LPWSTR local_2c;
  wchar_t *local_28;
  LPWSTR local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_23c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012c940;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  local_28 = (wchar_t *)MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  local_2c = (LPWSTR)0x0;
  local_14 = 0;
  local_34 = iVar1;
  if (0x104 < (int)local_28 + iVar1) {
    local_24 = (LPWSTR)0x0;
    local_2c = (LPWSTR)FUN_100fa1fa(((int)local_28 + iVar1) * 2);
  }
  local_30 = local_23c;
  if (local_2c != (LPWSTR)0x0) {
    local_30 = local_2c;
  }
  local_24 = local_2c;
  MultiByteToWideChar(0xfde9,0,param_1,-1,local_30,local_34);
  cchWideChar = local_28;
  local_28 = local_30 + local_34;
  local_24 = local_2c;
  MultiByteToWideChar(0xfde9,0,param_2,-1,local_28,(int)cchWideChar);
  local_24 = local_2c;
  pFVar2 = __wfopen(local_30,local_28);
  local_24 = local_2c;
  local_14 = 0xffffffff;
  if (local_2c != (LPWSTR)0x0) {
    FUN_100fa2cb(local_2c);
  }
  *unaff_FS_OFFSET = local_1c;
  return pFVar2;
}

