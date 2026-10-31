/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d2900 */

void FUN_1400d2900(WNDPROC param_1)

{
  longlong lVar1;
  DWORD dwExStyle;
  undefined1 auStackY_d8 [32];
  WNDCLASSW local_78;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStackY_d8;
  local_78.style = 0x20;
  local_78.cbClsExtra = 0;
  local_78.cbWndExtra = 0;
  local_78.lpfnWndProc = param_1;
  local_78.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_78.hIcon = (HICON)0x0;
  local_78.hCursor = (HCURSOR)0x0;
  local_78.hbrBackground = (HBRUSH)0x0;
  local_78.lpszMenuName = (LPCWSTR)0x0;
  local_78.lpszClassName = L"Global Overlay ImGui Window";
  RegisterClassW(&local_78);
  lVar1 = FUN_1400799b5();
  if (lVar1 == 0) {
    dwExStyle = 0x80c0028;
  }
  else {
    lVar1 = FUN_140081200();
    dwExStyle = 0x80c0028;
    if (*(char *)(lVar1 + 0x56) != '\0') {
      dwExStyle = 0x80800a8;
    }
  }
  CreateWindowExW(dwExStyle,local_78.lpszClassName,local_78.lpszClassName,0x80000000,0,0,1,1,
                  (HWND)0x0,(HMENU)0x0,local_78.hInstance,(LPVOID)0x0);
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStackY_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStackY_d8);
  }
  return;
}

