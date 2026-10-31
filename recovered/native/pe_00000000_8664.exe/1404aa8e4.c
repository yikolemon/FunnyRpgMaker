/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aa8e4 */

ushort FUN_1404aa8e4(ushort param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  ushort local_res8 [4];
  ushort local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (0x7f < local_res8[0]) {
LAB_1404aa986:
      local_res18[0] = 0;
      iVar1 = __acrt_LCMapStringW(*(undefined8 *)(local_20 + 0x138),0x100,local_res8,1,local_res18,1
                                 );
      if (iVar1 != 0) {
        local_res8[0] = local_res18[0];
      }
      goto LAB_1404aa9c0;
    }
    if (((&DAT_1405602c2)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_1404aa9c0;
    }
  }
  else {
    if (0xff < local_res8[0]) {
      if (*(longlong *)(local_20 + 0x138) == 0) goto LAB_1404aa9c0;
      goto LAB_1404aa986;
    }
    if (((&DAT_1405602c2)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_1404aa9c0;
    }
  }
  local_res8[0] = (ushort)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
LAB_1404aa9c0:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return local_res8[0];
}

