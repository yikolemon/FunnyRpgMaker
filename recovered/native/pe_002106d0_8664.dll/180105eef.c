/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105eef */

void FUN_180105eef(undefined8 param_1,LPCSTR param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000180105fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseClipboard();
    return;
  }
  return;
}

