/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fccd4 */

LPVOID FUN_1800fccd4(LPCVOID param_1,longlong param_2)

{
  DWORD DVar1;
  LPCVOID lpAddress;
  SIZE_T SVar2;
  LPVOID pvVar3;
  undefined1 auStack_98 [32];
  _MEMORY_BASIC_INFORMATION local_78;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_98;
  lpAddress = (LPCVOID)FUN_1800fcf1d(param_2 + -0x10000);
  if (param_1 < lpAddress) {
    do {
      if ((lpAddress < DAT_180403990) || (DAT_180403998 < lpAddress)) {
        local_78.State = 0;
        local_78.Protect = 0;
        local_78.Type = 0;
        local_78._44_4_ = 0;
        local_78.AllocationProtect = 0;
        local_78._20_4_ = 0;
        local_78.RegionSize = 0;
        local_78.BaseAddress = (PVOID)0x0;
        local_78.AllocationBase = (PVOID)0x0;
        SVar2 = VirtualQuery(lpAddress,&local_78,0x30);
        if (SVar2 == 0) break;
        if ((local_78.State == 0x10000) && (0xffff < local_78.RegionSize)) {
          pvVar3 = VirtualAlloc(lpAddress,0x10000,0x3000,0x40);
          if (pvVar3 != (LPVOID)0x0) goto LAB_1800fcdc7;
          DVar1 = GetLastError();
          if (DVar1 == 0x677) goto LAB_1800fcdc7;
          lpAddress = (LPCVOID)((longlong)lpAddress + -0x10000);
        }
        else {
          lpAddress = (LPCVOID)FUN_1800fcf1d((longlong)local_78.AllocationBase + -0x10000);
        }
      }
      else {
        lpAddress = (LPCVOID)((longlong)lpAddress + -0x8000000);
      }
    } while (param_1 < lpAddress);
  }
  pvVar3 = (LPVOID)0x0;
LAB_1800fcdc7:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_98)) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_98);
}

