/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041a522 */

int __fastcall FUN_0041a522(HANDLE param_1,LPCVOID param_2,int *param_3)

{
  SIZE_T SVar1;
  BOOL BVar2;
  int iVar3;
  _MEMORY_BASIC_INFORMATION _Stack_70;
  short local_54 [30];
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&_Stack_70;
  _memset(param_3,0,0xf8);
  if (param_2 == (LPCVOID)0x0) {
    SetLastError(0x57);
  }
  else {
    _Stack_70.State = 0;
    _Stack_70.Protect = 0;
    _Stack_70.Type = 0;
    _Stack_70.BaseAddress = (PVOID)0x0;
    _Stack_70.AllocationBase = (PVOID)0x0;
    _Stack_70.AllocationProtect = 0;
    _Stack_70.RegionSize = 0;
    SVar1 = VirtualQueryEx(param_1,param_2,&_Stack_70,0x1c);
    if (SVar1 != 0) {
      BVar2 = ReadProcessMemory(param_1,param_2,local_54,0x40,(SIZE_T *)0x0);
      iVar3 = 0;
      if (BVar2 == 0) goto LAB_0041a5d3;
      if (((local_54[0] == 0x5a4d) && (0x3f < local_18)) && (local_18 <= _Stack_70.RegionSize)) {
        BVar2 = ReadProcessMemory(param_1,(LPCVOID)(local_18 + (int)param_2),param_3,0xf8,
                                  (SIZE_T *)0x0);
        if (BVar2 == 0) goto LAB_0041a5d3;
        if (*param_3 == 0x4550) {
          iVar3 = (int)param_2 + local_18;
          goto LAB_0041a5d3;
        }
      }
      SetLastError(0xc1);
      goto LAB_0041a5d3;
    }
  }
  iVar3 = 0;
LAB_0041a5d3:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&_Stack_70)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&_Stack_70);
}

