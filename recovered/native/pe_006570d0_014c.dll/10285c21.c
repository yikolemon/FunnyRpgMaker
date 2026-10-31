/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285c21 */

/* Library Function - Single Match
    __sopen_nolock
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl
__sopen_nolock(int *UnlockFlag,int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,
              int _PermissionFlag,int _SecureFlag)

{
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (_Filename,
                     (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                     &local_1c,uVar1);
  if (iVar2 == 0) {
    eVar3 = FUN_10285c8f(UnlockFlag,_FileHandle,local_14,_OpenFlag,_ShareFlag,_PermissionFlag,
                         _SecureFlag);
  }
  else {
    eVar3 = -1;
  }
  if (local_8 != '\0') {
    FUN_10274120(local_14);
  }
  return eVar3;
}

