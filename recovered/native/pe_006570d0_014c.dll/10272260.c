/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272260 */

PVOID FUN_10272260(void)

{
  DWORD dwErrCode;
  PVOID lpFlsData;
  BOOL BVar1;
  
  if (DAT_1039b3e0 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_1039b3e0);
    if (lpFlsData != (PVOID)0xffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_102722dc:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_1039b3e0,(PVOID)0xffffffff);
      if (BVar1 != 0) {
        lpFlsData = (PVOID)FUN_1026d360(1,0x28);
        if (lpFlsData == (PVOID)0x0) {
          FlsSetValue(DAT_1039b3e0,(PVOID)0x0);
          lpFlsData = (PVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_1039b3e0,lpFlsData);
          if (BVar1 != 0) {
            thunk_FUN_10274120();
            goto LAB_102722dc;
          }
          FlsSetValue(DAT_1039b3e0,(PVOID)0x0);
        }
        thunk_FUN_10274120(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

