/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ce58c */

short * FUN_100ce58c(int param_1)

{
  int iVar1;
  SIZE_T SVar2;
  _MEMORY_BASIC_INFORMATION local_5c;
  short *local_3c;
  int *local_38;
  short *local_34;
  int local_30;
  short *local_2c;
  undefined1 *local_28;
  void *local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_28 = (undefined1 *)&local_5c;
  local_14 = 0xffffffff;
  local_18 = &DAT_10375eb4;
  local_1c = &LAB_10259150;
  local_20 = ExceptionList;
  local_34 = (short *)(param_1 + 0x10000);
  local_5c.State = 0;
  local_5c.Protect = 0;
  local_5c.Type = 0;
  local_5c.BaseAddress = (PVOID)0x0;
  local_5c.AllocationBase = (PVOID)0x0;
  local_5c.AllocationProtect = 0;
  local_5c.RegionSize = 0;
  ExceptionList = &local_20;
  SVar2 = VirtualQuery(local_34,&local_5c,0x1c);
  do {
    if (SVar2 == 0) {
      ExceptionList = local_20;
      return (short *)0x0;
    }
    if ((local_5c.State == 0x1000) &&
       ((local_5c.Protect & 0x100) == 0 && (char)local_5c.Protect != '\x01')) {
      local_2c = local_34;
      if ((*local_34 == 0x5a4d) &&
         ((*(uint *)(local_34 + 0x1e) <= local_5c.RegionSize && (0x3f < *(uint *)(local_34 + 0x1e)))
         )) {
        local_38 = (int *)((int)local_34 + *(int *)(local_34 + 0x1e));
        iVar1 = 4;
        if (*local_38 == 0x4550) {
          local_14 = 0;
          SetLastError(0);
          local_3c = local_2c;
          iVar1 = 1;
        }
      }
      else {
        local_30 = 4;
        iVar1 = local_30;
      }
      local_30 = iVar1;
      if (local_30 != 4) {
        ExceptionList = local_20;
        return local_3c;
      }
    }
    local_34 = (short *)((int)local_5c.BaseAddress + local_5c.RegionSize);
    local_14 = 0xffffffff;
    SVar2 = VirtualQuery(local_34,&local_5c,0x1c);
  } while( true );
}

