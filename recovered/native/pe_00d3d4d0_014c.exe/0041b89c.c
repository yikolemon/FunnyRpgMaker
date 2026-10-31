/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b89c */

BOOL FUN_0041b89c(HANDLE param_1,LPCVOID param_2,SIZE_T param_3,uint param_4,PDWORD param_5)

{
  SIZE_T SVar1;
  uint flNewProtect;
  BOOL BVar2;
  _MEMORY_BASIC_INFORMATION _Stack_30;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&_Stack_30;
  _Stack_30.State = 0;
  _Stack_30.Protect = 0;
  _Stack_30.Type = 0;
  _Stack_30.BaseAddress = (PVOID)0x0;
  _Stack_30.AllocationBase = (PVOID)0x0;
  _Stack_30.AllocationProtect = 0;
  _Stack_30.RegionSize = 0;
  SVar1 = VirtualQueryEx(param_1,param_2,&_Stack_30,0x1c);
  if (SVar1 == 0) {
    BVar2 = 0;
  }
  else {
    flNewProtect = FUN_0041b918(_Stack_30.Protect,param_4);
    BVar2 = VirtualProtectEx(param_1,param_2,param_3,flNewProtect,param_5);
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&_Stack_30)) {
    return BVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&_Stack_30);
}

