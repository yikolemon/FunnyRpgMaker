/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009d690 */

PVOID FUN_14009d690(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_14013bbe0 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_14013bbe0);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_14009d728:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_14013bbe0,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = _calloc_base(1,0x80);
        if (lpFlsData == (LPVOID)0x0) {
          FlsSetValue(DAT_14013bbe0,(PVOID)0x0);
          lpFlsData = (LPVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_14013bbe0,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_1400a1290((LPVOID)0x0);
            goto LAB_14009d728;
          }
          FlsSetValue(DAT_14013bbe0,(PVOID)0x0);
        }
        thunk_FUN_1400a1290(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

