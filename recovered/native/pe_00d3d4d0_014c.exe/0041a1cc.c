/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041a1cc */

LPCVOID __fastcall FUN_0041a1cc(HANDLE param_1,int param_2,int *param_3,int *param_4)

{
  SIZE_T SVar1;
  int iVar2;
  LPCVOID lpAddress;
  _MEMORY_BASIC_INFORMATION local_30;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  _memset(param_3,0,0xf8);
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  lpAddress = (LPCVOID)(param_2 + 0x10000);
  local_30.State = 0;
  local_30.Protect = 0;
  local_30.Type = 0;
  local_30.BaseAddress = (PVOID)0x0;
  local_30.AllocationBase = (PVOID)0x0;
  local_30.AllocationProtect = 0;
  local_30.RegionSize = 0;
  SVar1 = VirtualQueryEx(param_1,lpAddress,&local_30,0x1c);
  do {
    if (((SVar1 == 0) || ((~local_30.RegionSize & 0xfff) == 0)) ||
       ((LPCVOID)((int)local_30.BaseAddress + local_30.RegionSize) < lpAddress)) {
      lpAddress = (LPCVOID)0x0;
LAB_0041a294:
      if (DAT_0050e8c0 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_14 ^ (uint)&local_30);
      }
      return lpAddress;
    }
    if ((local_30.State == 0x1000) &&
       ((local_30.Protect & 0x100) == 0 && (char)local_30.Protect != '\x01')) {
      iVar2 = FUN_0041a522(param_1,lpAddress,param_3);
      if ((param_4 != (int *)0x0) && (iVar2 != 0)) {
        *param_4 = iVar2;
        goto LAB_0041a294;
      }
      if (iVar2 != 0) goto LAB_0041a294;
    }
    lpAddress = (LPCVOID)(local_30.RegionSize + (int)local_30.BaseAddress);
    SVar1 = VirtualQueryEx(param_1,lpAddress,&local_30,0x1c);
  } while( true );
}

