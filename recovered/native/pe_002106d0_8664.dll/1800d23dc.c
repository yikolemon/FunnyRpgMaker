/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d23dc */

LPCVOID FUN_1800d23dc(HANDLE param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  SIZE_T SVar1;
  longlong lVar2;
  LPCVOID pvVar3;
  LPCVOID lpAddress;
  undefined1 auStack_88 [32];
  _MEMORY_BASIC_INFORMATION local_68;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  FUN_1802a89a0(param_3,0,0xf8);
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  lpAddress = (LPCVOID)(param_2 + 0x10000);
  local_68.State = 0;
  local_68.Protect = 0;
  local_68.Type = 0;
  local_68._44_4_ = 0;
  local_68.AllocationProtect = 0;
  local_68._20_4_ = 0;
  local_68.RegionSize = 0;
  local_68.BaseAddress = (PVOID)0x0;
  local_68.AllocationBase = (PVOID)0x0;
  SVar1 = VirtualQueryEx(param_1,lpAddress,&local_68,0x30);
  if (SVar1 != 0) {
    do {
      if ((~(uint)local_68.RegionSize & 0xfff) == 0) break;
      pvVar3 = (LPCVOID)0x0;
      if ((LPCVOID)((longlong)local_68.BaseAddress + local_68.RegionSize) < lpAddress)
      goto LAB_1800d24f3;
      if ((local_68.State == 0x1000) &&
         ((local_68._32_8_ & 0x10000000000) == 0 && (char)local_68.Protect != '\x01')) {
        lVar2 = FUN_1800d27fe(param_1,lpAddress,param_3);
        pvVar3 = lpAddress;
        if ((param_4 != (longlong *)0x0) && (lVar2 != 0)) {
          *param_4 = lVar2;
          goto LAB_1800d24f3;
        }
        if (lVar2 != 0) goto LAB_1800d24f3;
      }
      lpAddress = (LPCVOID)(local_68.RegionSize + (longlong)local_68.BaseAddress);
      SVar1 = VirtualQueryEx(param_1,lpAddress,&local_68,0x30);
    } while (SVar1 != 0);
  }
  pvVar3 = (LPCVOID)0x0;
LAB_1800d24f3:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
  }
  return pvVar3;
}

