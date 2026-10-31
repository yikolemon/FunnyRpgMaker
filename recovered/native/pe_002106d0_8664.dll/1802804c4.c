/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802804c4 */

void FUN_1802804c4(wchar_t *param_1,int param_2,HANDLE param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  DWORD DVar4;
  BOOL BVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 auStackY_a8 [32];
  DWORD local_78 [2];
  _BY_HANDLE_FILE_INFORMATION local_70;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStackY_a8;
  DVar4 = GetFileType(param_3);
  uVar8 = DVar4 & 0xffff7fff;
  if (uVar8 == 1) {
    *(undefined2 *)(param_4 + 2) = 1;
    if (param_1 != (wchar_t *)0x0) {
      local_78[0] = 0;
      cVar1 = FUN_180280168(param_1,local_78);
      if (cVar1 == '\0') goto LAB_18028064d;
      param_4[4] = local_78[0] - 1;
      *param_4 = local_78[0] - 1;
    }
    local_70.dwFileAttributes = 0;
    local_70.ftCreationTime.dwLowDateTime = 0;
    local_70.ftCreationTime.dwHighDateTime = 0;
    local_70.ftLastAccessTime.dwLowDateTime = 0;
    local_70.nFileIndexLow = 0;
    local_70.ftLastAccessTime.dwHighDateTime = 0;
    local_70.ftLastWriteTime.dwLowDateTime = 0;
    local_70.ftLastWriteTime.dwHighDateTime = 0;
    local_70.dwVolumeSerialNumber = 0;
    local_70.nFileSizeHigh = 0;
    local_70.nFileSizeLow = 0;
    local_70.nNumberOfLinks = 0;
    local_70.nFileIndexHigh = 0;
    BVar5 = GetFileInformationByHandle(param_3,&local_70);
    if (BVar5 != 0) {
      uVar2 = convert_to_stat_mode(local_70.dwFileAttributes,param_1);
      *(ushort *)((longlong)param_4 + 6) = uVar2;
      uVar6 = FUN_180280670(CONCAT44(local_70.ftLastWriteTime.dwHighDateTime,
                                     local_70.ftLastWriteTime.dwLowDateTime),0);
      *(undefined8 *)(param_4 + 8) = uVar6;
      uVar6 = FUN_180280670(CONCAT44(local_70.ftLastAccessTime.dwHighDateTime,
                                     local_70.ftLastAccessTime.dwLowDateTime),uVar6);
      *(undefined8 *)(param_4 + 6) = uVar6;
      uVar6 = FUN_180280670(CONCAT44(local_70.ftCreationTime.dwHighDateTime,
                                     local_70.ftCreationTime.dwLowDateTime),
                            *(undefined8 *)(param_4 + 8));
      *(undefined8 *)(param_4 + 10) = uVar6;
      param_4[5] = 0;
      if ((local_70.nFileSizeHigh == 0) && (local_70.nFileSizeLow < 0x80000000)) {
        param_4[5] = local_70.nFileSizeLow;
      }
      else {
        puVar7 = (undefined4 *)FUN_18027e66c();
        *puVar7 = 0x84;
      }
      goto LAB_18028064d;
    }
  }
  else {
    if (uVar8 == 2 || uVar8 == 3) {
      *(undefined2 *)(param_4 + 2) = 1;
      uVar3 = 0x1000;
      param_4[4] = param_2;
      *param_4 = param_2;
      if (uVar8 == 2) {
        uVar3 = 0x2000;
      }
      *(undefined2 *)((longlong)param_4 + 6) = uVar3;
      if (uVar8 != 2) {
        local_78[0] = 0;
        BVar5 = PeekNamedPipe(param_3,(LPVOID)0x0,0,(LPDWORD)0x0,local_78,(LPDWORD)0x0);
        if (BVar5 != 0) {
          param_4[5] = local_78[0];
        }
      }
      goto LAB_18028064d;
    }
    if (uVar8 == 0) {
      puVar7 = (undefined4 *)FUN_18027e66c();
      *puVar7 = 9;
      goto LAB_18028064d;
    }
  }
  DVar4 = GetLastError();
  FUN_18027e6b4(DVar4);
LAB_18028064d:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStackY_a8);
}

