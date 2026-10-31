/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f877a */

LPVOID __fastcall FUN_100f877a(LPCVOID param_1)

{
  LPCVOID lpAddress;
  SIZE_T SVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  _MEMORY_BASIC_INFORMATION local_30;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  lpAddress = (LPCVOID)FUN_100f893b();
  pvVar3 = (LPVOID)0x0;
  if (param_1 < lpAddress) {
    do {
      if ((lpAddress < DAT_10389d70) || (DAT_10389d74 < lpAddress)) {
        local_30.State = 0;
        local_30.Protect = 0;
        local_30.Type = 0;
        local_30.BaseAddress = (PVOID)0x0;
        local_30.AllocationBase = (PVOID)0x0;
        local_30.AllocationProtect = 0;
        local_30.RegionSize = 0;
        SVar1 = VirtualQuery(lpAddress,&local_30,0x1c);
        if (SVar1 == 0) break;
        if ((local_30.State == 0x10000) && (0xffff < local_30.RegionSize)) {
          pvVar3 = VirtualAlloc(lpAddress,0x10000,0x3000,0x40);
          if ((pvVar3 != (LPVOID)0x0) || (DVar2 = GetLastError(), DVar2 == 0x677))
          goto LAB_100f8834;
          lpAddress = (LPCVOID)((int)lpAddress + -0x10000);
        }
        else {
          lpAddress = (LPCVOID)FUN_100f893b();
        }
      }
      else {
        lpAddress = (LPCVOID)((int)lpAddress + -0x8000000);
      }
    } while (param_1 < lpAddress);
    pvVar3 = (LPVOID)0x0;
  }
LAB_100f8834:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return pvVar3;
}

