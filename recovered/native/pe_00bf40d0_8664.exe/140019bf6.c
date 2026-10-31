/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140019bf6 */

longlong FUN_140019bf6(HANDLE param_1,LPCVOID param_2,undefined1 (*param_3) [32])

{
  BOOL BVar1;
  SIZE_T SVar2;
  DWORD dwErrCode;
  longlong lVar3;
  undefined1 auStackY_c8 [32];
  _MEMORY_BASIC_INFORMATION local_98;
  short local_60 [30];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  FUN_1400b3c00(param_3,0,0xf8);
  if (param_2 == (LPCVOID)0x0) {
    dwErrCode = 0x57;
LAB_140019ce9:
    SetLastError(dwErrCode);
  }
  else {
    local_98.State = 0;
    local_98.Protect = 0;
    local_98.Type = 0;
    local_98._44_4_ = 0;
    local_98.AllocationProtect = 0;
    local_98._20_4_ = 0;
    local_98.RegionSize = 0;
    local_98.BaseAddress = (PVOID)0x0;
    local_98.AllocationBase = (PVOID)0x0;
    SVar2 = VirtualQueryEx(param_1,param_2,&local_98,0x30);
    if (SVar2 != 0) {
      BVar1 = ReadProcessMemory(param_1,param_2,local_60,0x40,(SIZE_T *)0x0);
      if (BVar1 != 0) {
        if (local_60[0] == 0x5a4d) {
          if ((0x3f < (ulonglong)local_24) && (local_24 <= local_98.RegionSize)) {
            BVar1 = ReadProcessMemory(param_1,(LPCVOID)((longlong)(int)local_24 + (longlong)param_2)
                                      ,param_3,0xf8,(SIZE_T *)0x0);
            if (BVar1 == 0) goto LAB_140019cee;
            if (*(int *)*param_3 == 0x4550) {
              lVar3 = (longlong)param_2 + (longlong)(int)local_24;
              goto LAB_140019cf0;
            }
          }
        }
        dwErrCode = 0xc1;
        goto LAB_140019ce9;
      }
    }
  }
LAB_140019cee:
  lVar3 = 0;
LAB_140019cf0:
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_c8)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_c8);
}

