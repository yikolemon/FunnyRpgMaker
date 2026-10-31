/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fcb3c */

BOOL FUN_1800fcb3c(HANDLE param_1,LPCVOID param_2,SIZE_T param_3,undefined4 param_4,PDWORD param_5)

{
  DWORD flNewProtect;
  BOOL BVar1;
  SIZE_T SVar2;
  undefined1 auStackY_98 [32];
  _MEMORY_BASIC_INFORMATION local_68;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStackY_98;
  local_68.State = 0;
  local_68.Protect = 0;
  local_68.Type = 0;
  local_68._44_4_ = 0;
  local_68.AllocationProtect = 0;
  local_68._20_4_ = 0;
  local_68.RegionSize = 0;
  local_68.BaseAddress = (PVOID)0x0;
  local_68.AllocationBase = (PVOID)0x0;
  SVar2 = VirtualQueryEx(param_1,param_2,&local_68,0x30);
  if (SVar2 == 0) {
    BVar1 = 0;
  }
  else {
    flNewProtect = FUN_1800fcbe1(local_68.Protect,param_4);
    BVar1 = VirtualProtectEx(param_1,param_2,param_3,flNewProtect,param_5);
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStackY_98)) {
    return BVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStackY_98);
}

