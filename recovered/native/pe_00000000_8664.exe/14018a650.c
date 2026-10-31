/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018a650 */

void FUN_14018a650(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint local_2a0 [2];
  ulonglong local_298;
  undefined4 local_290;
  uint local_28c;
  DWORD DStack_288;
  DWORD local_284;
  uint local_280;
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_2c8;
  uVar5 = param_3 & 0xfffffffe;
  if (((param_3 & 1) == 0) || ((param_3 & 4) == 0)) {
    if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
       (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
      uVar5 = param_3 & 0xfffffffc;
      *(uint *)(param_2 + 2) = param_4;
    }
    if (uVar5 == 0) goto LAB_14018a929;
    if (((uVar5 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2a0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) goto LAB_14018a929;
        pvVar4 = FindFirstFileW(param_1,&local_278);
        if (pvVar4 == (HANDLE)0xffffffffffffffff) {
          GetLastError();
          goto LAB_14018a929;
        }
        FindClose(pvVar4);
        local_28c = local_278.ftLastWriteTime.dwLowDateTime;
        DStack_288 = local_278.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_278.ftLastWriteTime.dwHighDateTime = DStack_288;
        local_278.ftLastWriteTime.dwLowDateTime = local_28c;
        local_278.dwFileAttributes = local_2a0[0];
        local_278.nFileSizeLow = local_280;
        local_278.nFileSizeHigh = local_284;
      }
      if (((param_3 & 1) == 0) || ((local_278.dwFileAttributes & 0x400) == 0)) {
        *(DWORD *)(param_2 + 2) = local_278.dwFileAttributes;
        param_2[1] = CONCAT44(local_278.nFileSizeHigh,local_278.nFileSizeLow);
        *param_2 = (ulonglong)local_278.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_28c;
        uVar6 = uVar5 & 0xffffffd5;
        if (((local_278.dwFileAttributes & 0x400) == 0) && ((uVar5 & 4) != 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          uVar6 = uVar5 & 0xffffffd1;
        }
        uVar5 = uVar6;
        if (uVar5 == 0) goto LAB_14018a929;
      }
    }
    iVar3 = FUN_14018a570(&local_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (iVar3 == 0) {
      pvVar4 = (HANDLE)CONCAT44(uStack_2a4,local_2a8);
      uVar6 = uVar5;
      if ((uVar5 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar4,FileBasicInfo,local_2a0,0x28);
        if (BVar1 == 0) {
          GetLastError();
          if ((pvVar4 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1401a0758();
          }
          goto LAB_14018a929;
        }
        uVar6 = uVar5 & 0xffffffdd;
        *(uint *)(param_2 + 2) = local_280;
        *param_2 = CONCAT44(local_28c,local_290);
        if ((uVar5 & 4) != 0) {
          if ((local_280 >> 10 & 1) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar4,FileAttributeTagInfo,&local_2a8,8);
            if (BVar1 == 0) {
              GetLastError();
              if ((pvVar4 != (HANDLE)0xffffffffffffffff) &&
                 (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_1401a0758();
              }
              goto LAB_14018a929;
            }
            *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2a4;
          }
          uVar6 = uVar5 & 0xffffffd9;
        }
      }
      if ((uVar6 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar4,FileStandardInfo,local_2a0,0x18);
        if (BVar1 == 0) {
          GetLastError();
          if ((pvVar4 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1401a0758();
          }
          goto LAB_14018a929;
        }
        uVar6 = uVar6 & 0xffffffe7;
        param_2[1] = local_298;
        *(undefined4 *)(param_2 + 3) = local_290;
      }
      if (uVar6 != 0) {
        if ((pvVar4 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar4), BVar1 != 0))
        goto LAB_14018a929;
        goto LAB_14018a96b;
      }
      if (pvVar4 == (HANDLE)0xffffffffffffffff) goto LAB_14018a929;
      iVar3 = CloseHandle(pvVar4);
    }
    else {
      if ((HANDLE)CONCAT44(uStack_2a4,local_2a8) == (HANDLE)0xffffffffffffffff) goto LAB_14018a929;
      iVar3 = CloseHandle((HANDLE)CONCAT44(uStack_2a4,local_2a8));
    }
    if (iVar3 == 0) {
LAB_14018a96b:
                    /* WARNING: Subroutine does not return */
      FUN_1401a0758();
    }
  }
LAB_14018a929:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_2c8);
}

