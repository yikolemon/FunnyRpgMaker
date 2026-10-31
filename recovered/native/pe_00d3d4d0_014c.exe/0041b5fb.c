/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b5fb */

LPVOID __fastcall FUN_0041b5fb(HANDLE param_1,LPCVOID param_2,SIZE_T param_3)

{
  SIZE_T SVar1;
  LPVOID pvVar2;
  LPCVOID pvVar3;
  LPVOID lpAddress;
  _MEMORY_BASIC_INFORMATION local_30;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  local_30.State = 0;
  local_30.Protect = 0;
  local_30.Type = 0;
  local_30.BaseAddress = (LPCVOID)0x0;
  local_30.AllocationBase = (PVOID)0x0;
  local_30.AllocationProtect = 0;
  local_30.RegionSize = 0;
  SVar1 = VirtualQueryEx(param_1,param_2,&local_30,0x1c);
  while (SVar1 != 0) {
    if ((~local_30.RegionSize & 0xfff) == 0) goto LAB_0041b6b6;
    if (local_30.State == 0x10000) {
      pvVar3 = param_2;
      if (param_2 < local_30.BaseAddress) {
        pvVar3 = local_30.BaseAddress;
      }
      lpAddress = (LPVOID)((int)pvVar3 + 0xffffU & 0xffff0000);
      if (lpAddress < (LPVOID)((int)local_30.BaseAddress + local_30.RegionSize)) {
        do {
          pvVar2 = VirtualAllocEx(param_1,lpAddress,param_3,0x3000,4);
          if (pvVar2 != (LPVOID)0x0) goto LAB_0041b6b8;
          lpAddress = (LPVOID)((int)lpAddress + 0x10000);
        } while (lpAddress < (LPVOID)((int)local_30.BaseAddress + local_30.RegionSize));
      }
    }
    pvVar3 = (LPCVOID)(local_30.RegionSize + (int)local_30.BaseAddress);
    local_30.State = 0;
    local_30.Protect = 0;
    local_30.Type = 0;
    local_30.BaseAddress = (LPCVOID)0x0;
    local_30.AllocationBase = (PVOID)0x0;
    local_30.AllocationProtect = 0;
    local_30.RegionSize = 0;
    SVar1 = VirtualQueryEx(param_1,pvVar3,&local_30,0x1c);
  }
  GetLastError();
LAB_0041b6b6:
  pvVar2 = (LPVOID)0x0;
LAB_0041b6b8:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_30)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_30);
}

