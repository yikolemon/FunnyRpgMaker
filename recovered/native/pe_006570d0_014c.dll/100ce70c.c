/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ce70c */

short * FUN_100ce70c(LPCVOID param_1)

{
  SIZE_T SVar1;
  _MEMORY_BASIC_INFORMATION local_58;
  int *local_38;
  short *local_2c;
  undefined1 *local_28;
  void *local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_28 = (undefined1 *)&local_58;
  local_18 = &DAT_10375ec0;
  local_1c = &LAB_10259150;
  local_20 = ExceptionList;
  local_58.State = 0;
  local_58.Protect = 0;
  local_58.Type = 0;
  local_58.BaseAddress = (PVOID)0x0;
  local_58.AllocationBase = (short *)0x0;
  local_58.AllocationProtect = 0;
  local_58.RegionSize = 0;
  local_14 = 0;
  ExceptionList = &local_20;
  SVar1 = VirtualQuery(param_1,&local_58,0x1c);
  if (SVar1 == 0) {
    SetLastError(0xc1);
  }
  else if (((local_58.State == 0x1000) && ((char)local_58.Protect != '\x01')) &&
          ((local_58.Protect >> 8 & 1) == 0)) {
    local_2c = local_58.AllocationBase;
    if (*(short *)local_58.AllocationBase == 0x5a4d) {
      local_38 = (int *)((int)local_58.AllocationBase +
                        *(int *)((int)local_58.AllocationBase + 0x3c));
      if (*local_38 == 0x4550) {
        if ((short)local_38[5] != 0) {
          local_14 = 0;
          SetLastError(0);
          ExceptionList = local_20;
          return local_2c;
        }
        local_14 = 0;
        SetLastError(0xc0);
      }
      else {
        local_14 = 0;
        SetLastError(0xbf);
      }
    }
    else {
      local_14 = 0;
      SetLastError(0xc1);
    }
  }
  else {
    SetLastError(0xc1);
  }
  ExceptionList = local_20;
  return (short *)0x0;
}

