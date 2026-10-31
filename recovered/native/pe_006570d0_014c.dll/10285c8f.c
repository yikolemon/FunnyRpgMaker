/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285c8f */

int FUN_10285c8f(undefined4 *param_1,uint *param_2,undefined1 *param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  HANDLE hFile;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 **ppuVar7;
  undefined1 *apuStack_78 [5];
  uint uStack_64;
  uint uStack_60;
  undefined1 local_4c [24];
  byte local_34 [4];
  uint local_30;
  int local_28;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  byte local_10;
  HANDLE local_c;
  byte local_5;
  
  apuStack_78[4] = local_4c;
  uStack_60 = param_5;
  uStack_64 = param_4;
  apuStack_78[3] = (undefined1 *)0x10285cac;
  puVar1 = (undefined4 *)FUN_10286205();
  pbVar6 = local_34;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pbVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    pbVar6 = pbVar6 + 4;
  }
  if (local_28 == -1) {
    puVar1 = (undefined4 *)FUN_10269012();
    *puVar1 = 0;
    *param_2 = 0xffffffff;
    goto LAB_10285cce;
  }
  uVar3 = __alloc_osfhnd();
  *param_2 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar1 = (undefined4 *)FUN_10269012();
    *puVar1 = 0;
    *param_2 = 0xffffffff;
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x18;
    goto LAB_10285cce;
  }
  local_18 = 0;
  local_1c = 0xc;
  *param_1 = 1;
  local_14 = ~(param_4 >> 7) & 1;
  apuStack_78[1] = (undefined1 *)&local_1c;
  apuStack_78[0] = param_3;
  pbVar6 = local_34;
  ppuVar7 = apuStack_78 + 2;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppuVar7 = (undefined1 *)*(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    ppuVar7 = ppuVar7 + 1;
  }
  hFile = (HANDLE)create_file();
  local_c = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    if (((local_30 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      apuStack_78[1] = (undefined1 *)&local_1c;
      local_30 = local_30 & 0x7fffffff;
      apuStack_78[0] = param_3;
      pbVar6 = local_34;
      ppuVar7 = apuStack_78 + 2;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppuVar7 = (undefined1 *)*(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        ppuVar7 = ppuVar7 + 1;
      }
      hFile = (HANDLE)create_file();
      local_c = hFile;
      if (hFile != (HANDLE)0xffffffff) goto LAB_10285db5;
    }
    pbVar6 = (byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x28 + (*param_2 & 0x3f) * 0x38);
    *pbVar6 = *pbVar6 & 0xfe;
    GetLastError();
    uStack_60 = 0x10285daf;
    ___acrt_errno_map_os_error();
LAB_10285cce:
    piVar2 = (int *)FUN_10268ffd();
    return *piVar2;
  }
LAB_10285db5:
  uStack_60 = 0x10285dbc;
  local_c = hFile;
  DVar4 = GetFileType(hFile);
  if (DVar4 == 0) {
    DVar4 = GetLastError();
    uStack_60 = 0x10285dce;
    ___acrt_errno_map_os_error();
    pbVar6 = (byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x28 + (*param_2 & 0x3f) * 0x38);
    *pbVar6 = *pbVar6 & 0xfe;
    uStack_60 = 0x10285def;
    CloseHandle(hFile);
    if (DVar4 == 0) {
      puVar1 = (undefined4 *)FUN_10268ffd();
      *puVar1 = 0xd;
    }
    goto LAB_10285cce;
  }
  if (DVar4 == 2) {
    local_34[0] = local_34[0] | 0x40;
  }
  else if (DVar4 == 3) {
    local_34[0] = local_34[0] | 8;
  }
  uStack_60 = *param_2;
  uStack_64 = 0x10285e28;
  local_5 = local_34[0];
  FUN_1027ac9d();
  local_10 = local_5 | 1;
  local_34[0] = local_10;
  *(byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x28 + (*param_2 & 0x3f) * 0x38) = local_10;
  *(undefined1 *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x29 + (*param_2 & 0x3f) * 0x38) = 0;
  if ((param_4 & 2) != 0) {
    uStack_60 = 0x10285e74;
    iVar5 = truncate_ctrl_z_if_present(*param_2);
    if (iVar5 != 0) goto LAB_10285e7d;
  }
  local_5 = 0;
  uStack_60 = param_4;
  uVar3 = *param_2;
  pbVar6 = local_34;
  ppuVar7 = apuStack_78;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppuVar7 = (undefined1 *)*(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    ppuVar7 = ppuVar7 + 1;
  }
  iVar5 = FUN_10286428(uVar3);
  uVar3 = local_30;
  if (iVar5 != 0) {
LAB_10285e7d:
    uStack_60 = 0x10285e82;
    FUN_1027e730();
    return iVar5;
  }
  *(byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x29 + (*param_2 & 0x3f) * 0x38) = local_5;
  iVar5 = (*param_2 & 0x3f) * 0x38;
  pbVar6 = (byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x2d + iVar5);
  *pbVar6 = *pbVar6 ^ ((byte)(param_4 >> 0x10) ^
                      *(byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x2d + iVar5)) & 1;
  if (((local_10 & 0x48) == 0) && ((param_4 & 8) != 0)) {
    pbVar6 = (byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x28 + (*param_2 & 0x3f) * 0x38);
    *pbVar6 = *pbVar6 | 0x20;
  }
  if (((local_30 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
    uStack_60 = 0x10285f3d;
    CloseHandle(local_c);
    apuStack_78[1] = (undefined1 *)&local_1c;
    local_30 = uVar3 & 0x7fffffff;
    apuStack_78[0] = param_3;
    pbVar6 = local_34;
    ppuVar7 = apuStack_78 + 2;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar7 = (undefined1 *)*(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      ppuVar7 = ppuVar7 + 1;
    }
    iVar5 = create_file();
    if (iVar5 == -1) {
      GetLastError();
      uStack_60 = 0x10285f75;
      ___acrt_errno_map_os_error();
      pbVar6 = (byte *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x28 + (*param_2 & 0x3f) * 0x38);
      *pbVar6 = *pbVar6 & 0xfe;
      uStack_60 = *param_2;
      uStack_64 = 0x10285f95;
      FUN_1027ac0c();
      goto LAB_10285cce;
    }
    *(int *)((&DAT_103a5230)[(int)*param_2 >> 6] + 0x18 + (*param_2 & 0x3f) * 0x38) = iVar5;
  }
  return 0;
}

