/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028cfc0 */

PVOID FUN_18028cfc0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_180415e80 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_180415e80);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_18028d058:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_180415e80,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = (PVOID)_calloc_base(1,0x80);
        if (lpFlsData == (PVOID)0x0) {
          FlsSetValue(DAT_180415e80,(PVOID)0x0);
          lpFlsData = (PVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_180415e80,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_180290e40(0);
            goto LAB_18028d058;
          }
          FlsSetValue(DAT_180415e80,(PVOID)0x0);
        }
        thunk_FUN_180290e40(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

