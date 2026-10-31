/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d1b10 */

short * FUN_1800d1b10(longlong param_1)

{
  int iVar1;
  SIZE_T SVar2;
  _MEMORY_BASIC_INFORMATION local_78;
  short *local_40;
  int *local_38;
  short *local_30;
  int local_24;
  short *local_20;
  
  local_30 = (short *)(param_1 + 0x10000);
  local_78.State = 0;
  local_78.Protect = 0;
  local_78.Type = 0;
  local_78._44_4_ = 0;
  local_78.AllocationProtect = 0;
  local_78._20_4_ = 0;
  local_78.RegionSize = 0;
  local_78.BaseAddress = (PVOID)0x0;
  local_78.AllocationBase = (PVOID)0x0;
  SVar2 = VirtualQuery(local_30,&local_78,0x30);
  if (SVar2 != 0) {
    do {
      if ((local_78.State == 0x1000) &&
         ((local_78._32_8_ & 0x10000000000) == 0 && (char)local_78.Protect != '\x01')) {
        local_20 = local_30;
        if ((*local_30 == 0x5a4d) &&
           ((*(uint *)(local_30 + 0x1e) <= local_78.RegionSize &&
            (0x3f < *(uint *)(local_30 + 0x1e))))) {
          local_38 = (int *)((longlong)*(int *)(local_30 + 0x1e) + (longlong)local_30);
          iVar1 = 4;
          if (*local_38 == 0x4550) {
            SetLastError(0);
            local_40 = local_20;
            iVar1 = 1;
          }
        }
        else {
          local_24 = 4;
          iVar1 = local_24;
        }
        local_24 = iVar1;
        if (local_24 != 4) {
          return local_40;
        }
      }
      local_30 = (short *)((longlong)local_78.BaseAddress + local_78.RegionSize);
      SVar2 = VirtualQuery(local_30,&local_78,0x30);
    } while (SVar2 != 0);
  }
  return (short *)0x0;
}

