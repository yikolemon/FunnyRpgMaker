/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a9be4 */

WCHAR FUN_1400a9be4(WCHAR param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  WCHAR local_res8 [4];
  WCHAR local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (param_1 == L'\xffff') goto LAB_1400a9cd3;
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if ((ushort)local_res8[0] < 0x80) {
      if (((&DAT_14010beb2)[(ulonglong)bVar2 * 2] & 1) == 0) {
        param_2 = (__crt_locale_pointers *)(ulonglong)bVar2;
      }
      else {
LAB_1400a9c6b:
        param_2 = (__crt_locale_pointers *)
                  (ulonglong)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
      }
    }
    else {
LAB_1400a9c86:
      local_res18[0] = L'\0';
      iVar1 = __acrt_LCMapStringW(*(ushort **)(local_20 + 0x138),0x100,
                                  (undefined1 (*) [32])local_res8,1,local_res18,1);
      param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res8[0];
      if (iVar1 != 0) {
        param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res18[0];
      }
    }
  }
  else {
    param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res8[0];
    if ((ushort)local_res8[0] < 0x100) {
      if (((&DAT_14010beb2)[((ulonglong)param_2 & 0xff) * 2] & 1) != 0) goto LAB_1400a9c6b;
      param_2 = (__crt_locale_pointers *)(ulonglong)bVar2;
    }
    else if (*(longlong *)(local_20 + 0x138) != 0) goto LAB_1400a9c86;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
LAB_1400a9cd3:
  return (WCHAR)param_2;
}

