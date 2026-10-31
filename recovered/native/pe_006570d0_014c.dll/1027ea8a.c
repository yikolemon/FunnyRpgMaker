/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ea8a */

int FUN_1027ea8a(uint param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  DWORD *pDVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD local_34 [5];
  DWORD local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  char *local_c;
  char local_5;
  
  local_14 = param_1;
  local_c = param_2;
  local_10 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
LAB_1027eab6:
    *(undefined1 *)(param_4 + 0x24) = 1;
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_4);
    return -1;
  }
  local_18 = (int)param_1 >> 6;
  local_1c = (param_1 & 0x3f) * 0x38;
  local_5 = *(char *)(local_1c + 0x29 + (&DAT_103a5230)[local_18]);
  if (((local_5 == '\x02') || (local_5 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_1027eab6;
  if ((*(byte *)(local_1c + 0x28 + (&DAT_103a5230)[local_18]) & 0x20) != 0) {
    FUN_102793ca(param_1,0,0,2,param_4);
  }
  DVar4 = 0;
  local_34[3] = 0;
  cVar1 = FUN_1027edb7(local_14,param_4);
  if (cVar1 == '\0') {
    if (*(char *)((&DAT_103a5230)[local_18] + 0x28 + local_1c) < '\0') {
      if (local_5 == '\0') {
        pDVar2 = (DWORD *)FUN_1027f267(local_34,local_14,local_c,local_10);
      }
      else if (local_5 == '\x01') {
        pDVar2 = (DWORD *)FUN_1027f42b(local_34,local_14,local_c,local_10);
      }
      else {
        if (local_5 != '\x02') goto LAB_1027ec3d;
        pDVar2 = (DWORD *)FUN_1027f342(local_34,local_14,local_c,local_10);
      }
    }
    else {
      local_34[0] = 0;
      local_34[1] = 0;
      local_34[2] = 0;
      BVar3 = WriteFile(*(HANDLE *)((&DAT_103a5230)[local_18] + 0x18 + local_1c),local_c,local_10,
                        local_34 + 1,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        local_34[0] = GetLastError();
      }
      pDVar2 = local_34;
    }
  }
  else if (local_5 == '\0') {
    pDVar2 = (DWORD *)FUN_1027ee34(local_34,local_14,local_c,local_10,param_4);
  }
  else {
    if ((local_5 != '\x01') && (local_5 != '\x02')) goto LAB_1027ec3d;
    pDVar2 = (DWORD *)write_double_translated_unicode_nolock((char *)local_34,(uint)local_c);
  }
  DVar4 = *pDVar2;
  local_34[3] = DVar4;
  local_34[4] = pDVar2[1];
  local_20 = pDVar2[2];
  if (local_34[4] != 0) {
    return local_34[4] - local_20;
  }
LAB_1027ec3d:
  if (DVar4 != 0) {
    if (DVar4 == 5) {
      *(undefined1 *)(param_4 + 0x1c) = 1;
      *(undefined4 *)(param_4 + 0x18) = 9;
      *(undefined1 *)(param_4 + 0x24) = 1;
      *(undefined4 *)(param_4 + 0x20) = 5;
      return -1;
    }
    FUN_102690a9(DVar4,param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_103a5230)[local_18] + 0x28 + local_1c) & 0x40) != 0) && (*local_c == '\x1a')
     ) {
    return 0;
  }
  *(undefined1 *)(param_4 + 0x1c) = 1;
  *(undefined4 *)(param_4 + 0x18) = 0x1c;
  *(undefined1 *)(param_4 + 0x24) = 1;
  *(undefined4 *)(param_4 + 0x20) = 0;
  return -1;
}

