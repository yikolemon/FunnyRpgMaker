/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd580 */

void FUN_1400dd580(HANDLE param_1,ulonglong *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 auStack_68 [32];
  _BY_HANDLE_FILE_INFORMATION local_48;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  BVar1 = GetFileInformationByHandleEx(param_1,0x12,param_2,0x18);
  if ((BVar1 == 0) && ((DVar2 = GetLastError(), DVar2 == 0x32 || (DVar2 == 0x57)))) {
    BVar1 = GetFileInformationByHandle(param_1,&local_48);
    if (BVar1 == 0) {
      GetLastError();
    }
    else {
      *param_2 = (ulonglong)local_48.dwVolumeSerialNumber;
      *(DWORD *)(param_2 + 1) = local_48.nFileIndexHigh;
      *(DWORD *)((longlong)param_2 + 0xc) = local_48.nFileIndexLow;
      param_2[2] = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_68);
}

