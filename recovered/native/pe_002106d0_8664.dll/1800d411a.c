/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d411a */

LPVOID FUN_1800d411a(HANDLE param_1,ulonglong param_2,LPCVOID param_3,uint param_4)

{
  SIZE_T SVar1;
  LPVOID pvVar2;
  LPCVOID lpAddress;
  ulonglong uVar3;
  PVOID pvVar4;
  LPVOID lpAddress_00;
  undefined1 auStackY_c8 [32];
  _MEMORY_BASIC_INFORMATION local_98;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStackY_c8;
  local_98.State = 0;
  local_98.Protect = 0;
  local_98.Type = 0;
  local_98._44_4_ = 0;
  local_98.AllocationProtect = 0;
  local_98._20_4_ = 0;
  local_98.RegionSize = 0;
  local_98.BaseAddress = (LPCVOID)0x0;
  local_98.AllocationBase = (PVOID)0x0;
  SVar1 = VirtualQueryEx(param_1,param_3,&local_98,0x30);
  if (SVar1 != 0) {
    do {
      pvVar2 = (LPVOID)0x0;
      if ((~(uint)local_98.RegionSize & 0xfff) == 0) goto LAB_1800d425f;
      if (local_98.State == 0x10000) {
        pvVar4 = param_3;
        if (param_3 < local_98.BaseAddress) {
          pvVar4 = local_98.BaseAddress;
        }
        lpAddress_00 = (LPVOID)((longlong)pvVar4 + 0xffffU & 0xffffffffffff0000);
        uVar3 = ~param_2 + (ulonglong)param_4 + (longlong)lpAddress_00;
        if (uVar3 >> 0x20 != 0) goto LAB_1800d425f;
        if (lpAddress_00 < (LPVOID)((longlong)local_98.BaseAddress + local_98.RegionSize)) {
          do {
            pvVar2 = VirtualAllocEx(param_1,lpAddress_00,(ulonglong)param_4,0x3000,4);
            if (pvVar2 != (LPVOID)0x0) {
              if (uVar3 >> 0x20 != 0) {
                pvVar2 = (LPVOID)0x0;
              }
              goto LAB_1800d425f;
            }
            lpAddress_00 = (LPVOID)((longlong)lpAddress_00 + 0x10000);
            uVar3 = uVar3 + 0x10000;
          } while (lpAddress_00 < (LPVOID)((longlong)local_98.BaseAddress + local_98.RegionSize));
        }
      }
      lpAddress = (LPCVOID)(local_98.RegionSize + (longlong)local_98.BaseAddress);
      local_98.State = 0;
      local_98.Protect = 0;
      local_98.Type = 0;
      local_98._44_4_ = 0;
      local_98.AllocationProtect = 0;
      local_98._20_4_ = 0;
      local_98.RegionSize = 0;
      local_98.BaseAddress = (LPCVOID)0x0;
      local_98.AllocationBase = (PVOID)0x0;
      SVar1 = VirtualQueryEx(param_1,lpAddress,&local_98,0x30);
    } while (SVar1 != 0);
  }
  GetLastError();
  pvVar2 = (LPVOID)0x0;
LAB_1800d425f:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStackY_c8);
  }
  return pvVar2;
}

