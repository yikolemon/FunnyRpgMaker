/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102296f0 */

DWORD FUN_102296f0(HANDLE param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 3;
  BVar1 = SetFileInformationByHandle(param_1,0x15,&local_c,4);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    switch(DVar2) {
    case 1:
    case 0x32:
    case 0x57:
      local_5 = 1;
      BVar1 = SetFileInformationByHandle(param_1,FileDispositionInfo,&local_5,1);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        return DVar2;
      }
      break;
    default:
      goto switchD_10229727_caseD_2;
    }
  }
  DVar2 = 0;
switchD_10229727_caseD_2:
  return DVar2;
}

