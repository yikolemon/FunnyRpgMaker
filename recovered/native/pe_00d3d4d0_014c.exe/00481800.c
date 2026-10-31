/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481800 */

void FUN_00481800(LPCWSTR param_1,DWORD *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_298 [4];
  DWORD local_294;
  DWORD local_290;
  DWORD local_28c;
  byte local_285;
  HANDLE local_284;
  _WIN32_FIND_DATAW local_280;
  undefined1 local_30 [4];
  uint local_2c [3];
  DWORD local_20;
  DWORD local_1c;
  DWORD local_18;
  DWORD local_14;
  HANDLE local_10;
  DWORD local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_285 = (byte)param_3 & 1;
  uVar4 = param_3 & 0xfffffffe;
  if (((param_3 & 1) != 0) && ((param_3 >> 2 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  if ((((param_3 >> 1 & 1) != 0) && (param_4 != 0xffffffff)) &&
     (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
    uVar4 = param_3 & 0xfffffffc;
    param_2[4] = param_4;
  }
  if (uVar4 == 0) goto LAB_00481ae3;
  uVar5 = uVar4;
  if (((uVar4 & 0x2a) != 0) &&
     (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
    BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 != 0x20) goto LAB_00481ae3;
      pvVar3 = FindFirstFileW(param_1,&local_280);
      if (pvVar3 == (HANDLE)0xffffffff) {
        GetLastError();
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
      }
      FindClose(pvVar3);
      local_284 = (HANDLE)local_280.nFileSizeHigh;
      local_290 = local_280.nFileSizeLow;
      local_294 = local_280.ftLastWriteTime.dwLowDateTime;
      local_28c = local_280.ftLastWriteTime.dwHighDateTime;
    }
    else {
      local_290 = local_c;
      local_284 = local_10;
      local_28c = local_14;
      local_294 = local_18;
      local_280.dwFileAttributes = local_2c[0];
    }
    if ((local_285 == 0) || ((local_280.dwFileAttributes >> 10 & 1) == 0)) {
      param_2[4] = local_280.dwFileAttributes;
      uVar5 = uVar4 & 0xffffffd5;
      param_2[2] = local_290;
      param_2[3] = (DWORD)local_284;
      *param_2 = local_294;
      param_2[1] = local_28c;
      if (((local_280.dwFileAttributes >> 10 & 1) == 0) && ((uVar5 >> 2 & 1) != 0)) {
        param_2[5] = 0;
        uVar5 = uVar4 & 0xffffffd1;
      }
    }
    if (uVar5 == 0) goto LAB_00481ae3;
  }
  DVar2 = FUN_00481790((int *)&local_284,param_1,0x80,((local_285 ^ 1) + 0x10) * 0x200000);
  pvVar3 = local_284;
  if (DVar2 != 0) {
    if ((local_284 != (HANDLE)0xffffffff) && (BVar1 = CloseHandle(local_284), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_004903c8();
    }
    goto LAB_00481a24;
  }
  uVar4 = uVar5;
  if ((uVar5 & 0x26) == 0) {
LAB_00481a89:
    if ((uVar4 & 0x18) != 0) {
      BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,&local_20,0x18);
      if (BVar1 == 0) goto LAB_00481a11;
      uVar4 = uVar4 & 0xffffffe7;
      param_2[2] = local_18;
      param_2[3] = local_14;
      param_2[6] = (DWORD)local_10;
    }
    FUN_00481c60(&local_284);
    if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
    }
LAB_00481ae3:
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  BVar1 = GetFileInformationByHandleEx(local_284,FileBasicInfo,local_30,0x28);
  if (BVar1 != 0) {
    uVar4 = uVar5 & 0xffffffdd;
    *param_2 = local_20;
    param_2[4] = (DWORD)local_10;
    param_2[1] = local_1c;
    if ((uVar4 >> 2 & 1) != 0) {
      if (((uint)local_10 & 0x400) == 0) {
        param_2[5] = 0;
      }
      else {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,local_298,8);
        if (BVar1 == 0) goto LAB_00481a11;
        param_2[5] = local_294;
      }
      uVar4 = uVar5 & 0xffffffd9;
    }
    goto LAB_00481a89;
  }
LAB_00481a11:
  GetLastError();
  FUN_00481c60(&local_284);
LAB_00481a24:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

