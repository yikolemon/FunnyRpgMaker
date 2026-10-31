/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d1c4c */

short * FUN_1800d1c4c(LPCVOID param_1)

{
  SIZE_T SVar1;
  _MEMORY_BASIC_INFORMATION local_68;
  LPCVOID local_30;
  int *local_28;
  short *local_18;
  
  local_68.State = 0;
  local_68.Protect = 0;
  local_68.Type = 0;
  local_68._44_4_ = 0;
  local_68.AllocationProtect = 0;
  local_68._20_4_ = 0;
  local_68.RegionSize = 0;
  local_68.BaseAddress = (PVOID)0x0;
  local_68.AllocationBase = (short *)0x0;
  local_30 = param_1;
  SVar1 = VirtualQuery(param_1,&local_68,0x30);
  if (SVar1 == 0) {
    SetLastError(0xc1);
  }
  else if (((local_68.State == 0x1000) && ((char)local_68.Protect != '\x01')) &&
          ((local_68.Protect >> 8 & 1) == 0)) {
    local_18 = local_68.AllocationBase;
    if (*(short *)local_68.AllocationBase == 0x5a4d) {
      local_28 = (int *)((longlong)*(int *)((longlong)local_68.AllocationBase + 0x3c) +
                        (longlong)local_68.AllocationBase);
      if (*local_28 == 0x4550) {
        if ((short)local_28[5] != 0) {
          SetLastError(0);
          return local_18;
        }
        SetLastError(0xc0);
      }
      else {
        SetLastError(0xbf);
      }
    }
    else {
      SetLastError(0xc1);
    }
  }
  else {
    SetLastError(0xc1);
  }
  return (short *)0x0;
}

