/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494580 */

PVOID FUN_00494580(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  BOOL BVar2;
  DWORD dwFlsIndex;
  PVOID lpFlsData;
  
  if (DAT_0051ae60 != 0xffffffff) {
    dwErrCode = GetLastError();
    pvVar1 = FlsGetValue(DAT_0051ae60);
    if (pvVar1 != (PVOID)0xffffffff) {
      if (pvVar1 != (PVOID)0x0) {
LAB_004945fc:
        SetLastError(dwErrCode);
        return pvVar1;
      }
      BVar2 = FlsSetValue(DAT_0051ae60,(PVOID)0xffffffff);
      if (BVar2 != 0) {
        lpFlsData = (PVOID)0x28;
        dwFlsIndex = 1;
        pvVar1 = (PVOID)FUN_00490470(1,0x28);
        if (pvVar1 == (PVOID)0x0) {
          FlsSetValue(dwFlsIndex,lpFlsData);
          pvVar1 = (LPVOID)0x0;
        }
        else {
          BVar2 = FlsSetValue(dwFlsIndex,lpFlsData);
          if (BVar2 != 0) {
            thunk_FUN_00495f00((LPVOID)0x0);
            goto LAB_004945fc;
          }
          FlsSetValue(DAT_0051ae60,(PVOID)0x0);
        }
        thunk_FUN_00495f00(pvVar1);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

