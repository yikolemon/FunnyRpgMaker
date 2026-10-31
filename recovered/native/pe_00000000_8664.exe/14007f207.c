/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f207 */

void FUN_14007f207(undefined8 param_1,LPCSTR param_2)

{
  BOOL BVar1;
  int cchWideChar;
  HGLOBAL hMem;
  LPWSTR lpWideCharStr;
  HANDLE pvVar2;
  
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 != 0) {
    cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
    hMem = GlobalAlloc(2,(longlong)cchWideChar * 2);
    if (hMem != (HGLOBAL)0x0) {
      lpWideCharStr = GlobalLock(hMem);
      MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,cchWideChar);
      GlobalUnlock(hMem);
      EmptyClipboard();
      pvVar2 = SetClipboardData(0xd,hMem);
      if (pvVar2 == (HANDLE)0x0) {
        GlobalFree(hMem);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014007f2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseClipboard();
    return;
  }
  return;
}

