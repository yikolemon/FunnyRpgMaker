/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229650 */

void FUN_10229650(HANDLE param_1,DWORD *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  _BY_HANDLE_FILE_INFORMATION local_3c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  BVar1 = GetFileInformationByHandleEx(param_1,0x12,param_2,0x18);
  if (BVar1 != 0) {
LAB_102296b7:
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  DVar2 = GetLastError();
  if ((DVar2 == 0x32) || (DVar2 == 0x57)) {
    BVar1 = GetFileInformationByHandle(param_1,&local_3c);
    if (BVar1 != 0) {
      *param_2 = local_3c.dwVolumeSerialNumber;
      param_2[1] = 0;
      param_2[2] = local_3c.nFileIndexHigh;
      param_2[3] = local_3c.nFileIndexLow;
      param_2[4] = 0;
      param_2[5] = 0;
      goto LAB_102296b7;
    }
    GetLastError();
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

