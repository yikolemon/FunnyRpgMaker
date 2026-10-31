/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ab1f */

undefined4 FUN_1026ab1f(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_1 == (char *)0x0) {
    uVar1 = FUN_1026aba0(0,param_2);
    return uVar1;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar3 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (param_1,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                              *)&local_1c,uVar2);
  if (iVar3 != 0) {
    if (local_8 != '\0') {
      FUN_10274120(local_14);
    }
    return 0xffffffff;
  }
  uVar1 = FUN_1026aba0(local_14,param_2);
  if (local_8 != '\0') {
    FUN_10274120(local_14);
  }
  return uVar1;
}

