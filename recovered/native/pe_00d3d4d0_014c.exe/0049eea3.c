/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049eea3 */

int __cdecl FUN_0049eea3(uint param_1,WCHAR *param_2,uint param_3,int *param_4)

{
  bool bVar1;
  DWORD *pDVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD local_34 [5];
  DWORD local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  WCHAR *local_c;
  char local_5;
  
  local_14 = param_1;
  local_c = param_2;
  local_10 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (WCHAR *)0x0) {
LAB_0049eecf:
    *(undefined1 *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  local_18 = (int)param_1 >> 6;
  local_1c = (param_1 & 0x3f) * 0x38;
  local_5 = *(char *)(local_1c + 0x29 + (&DAT_00521cc8)[local_18]);
  if (((local_5 == '\x02') || (local_5 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_0049eecf;
  if ((*(byte *)(local_1c + 0x28 + (&DAT_00521cc8)[local_18]) & 0x20) != 0) {
    FUN_0049cdd4(param_1,0,0,(PLARGE_INTEGER)0x2,(int)param_4);
  }
  DVar4 = 0;
  local_34[3] = 0;
  bVar1 = FUN_0049f1d0(local_14,param_4);
  if (bVar1) {
    if (local_5 == '\0') {
      pDVar2 = (DWORD *)FUN_0049f24d(local_34,local_14,(uint *)local_c,local_10,param_4);
    }
    else {
      if ((local_5 != '\x01') && (local_5 != '\x02')) goto LAB_0049f056;
      pDVar2 = (DWORD *)write_double_translated_unicode_nolock((char *)local_34,(uint)local_c);
    }
  }
  else if (*(char *)((&DAT_00521cc8)[local_18] + 0x28 + local_1c) < '\0') {
    if (local_5 == '\0') {
      pDVar2 = (DWORD *)FUN_0049f680(local_34,local_14,(char *)local_c,local_10);
    }
    else if (local_5 == '\x01') {
      pDVar2 = (DWORD *)FUN_0049f844(local_34,local_14,local_c,local_10);
    }
    else {
      if (local_5 != '\x02') goto LAB_0049f056;
      pDVar2 = (DWORD *)FUN_0049f75b(local_34,local_14,local_c,local_10);
    }
  }
  else {
    local_34[0] = 0;
    local_34[1] = 0;
    local_34[2] = 0;
    BVar3 = WriteFile(*(HANDLE *)((&DAT_00521cc8)[local_18] + 0x18 + local_1c),local_c,local_10,
                      local_34 + 1,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      local_34[0] = GetLastError();
    }
    pDVar2 = local_34;
  }
  DVar4 = *pDVar2;
  local_34[3] = DVar4;
  local_34[4] = pDVar2[1];
  local_20 = pDVar2[2];
  if (local_34[4] != 0) {
    return local_34[4] - local_20;
  }
LAB_0049f056:
  if (DVar4 != 0) {
    if (DVar4 == 5) {
      *(undefined1 *)(param_4 + 7) = 1;
      param_4[6] = 9;
      *(undefined1 *)(param_4 + 9) = 1;
      param_4[8] = 5;
      return -1;
    }
    FUN_0048f719(DVar4,(int)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_00521cc8)[local_18] + 0x28 + local_1c) & 0x40) != 0) &&
     ((char)*local_c == '\x1a')) {
    return 0;
  }
  *(undefined1 *)(param_4 + 7) = 1;
  param_4[6] = 0x1c;
  *(undefined1 *)(param_4 + 9) = 1;
  param_4[8] = 0;
  return -1;
}

