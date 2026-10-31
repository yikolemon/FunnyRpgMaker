/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ac52 */

undefined4 FUN_1008ac52(undefined4 param_1,undefined4 *param_2)

{
  LPWSTR pWVar1;
  int cchWideChar;
  int *unaff_FS_OFFSET;
  LPCSTR local_2c;
  size_t local_28;
  LPWSTR local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3590;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c = (LPCSTR)*param_2;
  cchWideChar = MultiByteToWideChar(0x3a4,0,local_2c,-1,(LPWSTR)0x0,0);
  local_28 = cchWideChar * 2 + 2;
  if (cchWideChar < -1) {
    local_28 = 0xffffffff;
  }
  local_24 = (LPWSTR)FUN_102332c0(local_28);
  local_14 = 0;
  _memset(local_24,0,local_28);
  pWVar1 = local_24;
  local_14 = 0xffffffff;
  MultiByteToWideChar(0x3a4,0,local_2c,-1,local_24,cchWideChar);
  FUN_100012b0(pWVar1);
  local_14 = 0xffffffff;
  thunk_FUN_10274120(local_24);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

