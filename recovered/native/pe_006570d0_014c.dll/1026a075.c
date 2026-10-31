/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a075 */

/* Library Function - Single Match
    __mkdir
   
   Library: Visual Studio 2019 Release */

int __cdecl __mkdir(char *_Path)

{
  int iVar1;
  uint uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  wchar_t *local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (_Path == (char *)0x0) {
    iVar1 = __wmkdir((wchar_t *)0x0);
    return iVar1;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = (wchar_t *)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar1 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (_Path,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                            *)&local_1c,uVar2);
  if (iVar1 == 0) {
    iVar1 = __wmkdir(local_14);
  }
  else {
    iVar1 = -1;
  }
  if (local_8 != '\0') {
    FUN_10274120(local_14);
  }
  return iVar1;
}

