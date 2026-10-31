/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026aca0 */

void FUN_1026aca0(wchar_t *param_1,int param_2,HANDLE param_3,int *param_4)

{
  bool bVar1;
  undefined2 uVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_44;
  wchar_t *local_40;
  _BY_HANDLE_FILE_INFORMATION local_3c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  DVar3 = GetFileType(param_3);
  uVar6 = DVar3 & 0xffff7fff;
  if (uVar6 == 1) {
    *(undefined2 *)(param_4 + 2) = 1;
    if (local_40 != (wchar_t *)0x0) {
      local_44 = 0;
      bVar1 = get_drive_number_from_path(local_40,&local_44);
      if (!bVar1) goto LAB_1026adff;
      param_4[4] = local_44 + -1;
      *param_4 = local_44 + -1;
    }
    _memset(&local_3c,0,0x34);
    BVar4 = GetFileInformationByHandle(param_3,&local_3c);
    if (BVar4 != 0) {
      uVar2 = FUN_1026a899(local_3c.dwFileAttributes,local_40);
      *(undefined2 *)((int)param_4 + 6) = uVar2;
      uVar7 = FUN_1026ae96(local_3c.ftLastWriteTime.dwLowDateTime,
                           local_3c.ftLastWriteTime.dwHighDateTime,0,0);
      *(undefined8 *)(param_4 + 8) = uVar7;
      uVar7 = FUN_1026ae96(local_3c.ftLastAccessTime.dwLowDateTime,
                           local_3c.ftLastAccessTime.dwHighDateTime,uVar7);
      *(undefined8 *)(param_4 + 6) = uVar7;
      uVar7 = FUN_1026ae96(local_3c.ftCreationTime.dwLowDateTime,
                           local_3c.ftCreationTime.dwHighDateTime,param_4[8],param_4[9]);
      *(undefined8 *)(param_4 + 10) = uVar7;
      compute_size(&local_3c,param_4 + 5);
      goto LAB_1026adff;
    }
  }
  else {
    if ((uVar6 == 2) || (uVar6 == 3)) {
      uVar2 = 0x1000;
      if (uVar6 == 2) {
        uVar2 = 0x2000;
      }
      *(undefined2 *)((int)param_4 + 6) = uVar2;
      *(undefined2 *)(param_4 + 2) = 1;
      param_4[4] = param_2;
      *param_4 = param_2;
      if ((uVar6 != 2) &&
         (BVar4 = PeekNamedPipe(param_3,(LPVOID)0x0,0,(LPDWORD)0x0,(LPDWORD)&local_40,(LPDWORD)0x0),
         BVar4 != 0)) {
        param_4[5] = (int)local_40;
      }
      goto LAB_1026adff;
    }
    if (uVar6 == 0) {
      puVar5 = (undefined4 *)FUN_10268ffd();
      *puVar5 = 9;
      goto LAB_1026adff;
    }
  }
  DVar3 = GetLastError();
  ___acrt_errno_map_os_error(DVar3);
LAB_1026adff:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

