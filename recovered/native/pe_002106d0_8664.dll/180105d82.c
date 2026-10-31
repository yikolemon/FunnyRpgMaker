/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105d82 */

undefined8 FUN_180105d82(longlong param_1)

{
  BOOL BVar1;
  int cbMultiByte;
  int iVar2;
  HANDLE hMem;
  LPCWSTR lpWideCharStr;
  LPSTR lpMultiByteStr;
  int iVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x2878) != 0) {
    *(undefined8 *)(param_1 + 0x2870) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x2878) = 0;
  }
  uVar4 = 0;
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 != 0) {
    hMem = GetClipboardData(0xd);
    if (hMem == (HANDLE)0x0) {
      CloseClipboard();
      uVar4 = 0;
    }
    else {
      lpWideCharStr = GlobalLock(hMem);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
        iVar2 = *(int *)(param_1 + 0x2874);
        if (iVar2 < cbMultiByte) {
          if (iVar2 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar2 / 2 + iVar2;
          }
          iVar3 = cbMultiByte;
          if (cbMultiByte < iVar2) {
            iVar3 = iVar2;
          }
          lpMultiByteStr = (LPSTR)FUN_1800fe7f8((longlong)iVar3);
          if (*(longlong *)(param_1 + 0x2878) != 0) {
            FUN_1802a82f0(lpMultiByteStr,*(longlong *)(param_1 + 0x2878),
                          (longlong)*(int *)(param_1 + 0x2870));
            FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x2878));
          }
          *(LPSTR *)(param_1 + 0x2878) = lpMultiByteStr;
          *(int *)(param_1 + 0x2874) = iVar3;
        }
        else {
          lpMultiByteStr = *(LPSTR *)(param_1 + 0x2878);
        }
        *(int *)(param_1 + 0x2870) = cbMultiByte;
        WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
      GlobalUnlock(hMem);
      CloseClipboard();
      uVar4 = *(undefined8 *)(param_1 + 0x2878);
    }
  }
  return uVar4;
}

