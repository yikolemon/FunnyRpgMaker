/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cefe0 */

LPCVOID __fastcall FUN_100cefe0(HANDLE param_1,int param_2,void *param_3,int *param_4)

{
  SIZE_T SVar1;
  int iVar2;
  LPCVOID lpAddress;
  _MEMORY_BASIC_INFORMATION local_30;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
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
LAB_100cf0a8:
      if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      return lpAddress;
    }
    if ((local_30.State == 0x1000) &&
       ((local_30.Protect & 0x100) == 0 && (char)local_30.Protect != '\x01')) {
      iVar2 = FUN_100cf336(param_3);
      if ((param_4 != (int *)0x0) && (iVar2 != 0)) {
        *param_4 = iVar2;
        goto LAB_100cf0a8;
      }
      if (iVar2 != 0) goto LAB_100cf0a8;
    }
    lpAddress = (LPCVOID)(local_30.RegionSize + (int)local_30.BaseAddress);
    SVar1 = VirtualQueryEx(param_1,lpAddress,&local_30,0x1c);
  } while( true );
}

