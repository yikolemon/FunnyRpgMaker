/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101985cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101985cc(WNDPROC param_1)

{
  int iVar1;
  DWORD dwExStyle;
  WNDCLASSW local_34;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&stack0xffffff9c;
  local_34.style = 0x20;
  local_34.lpfnWndProc = param_1;
  local_34.cbClsExtra = 0;
  local_34.cbWndExtra = 0;
  local_34.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_34.hIcon = (HICON)0x0;
  local_34.hCursor = (HCURSOR)0x0;
  local_34.hbrBackground = (HBRUSH)0x0;
  local_34.lpszMenuName = (LPCWSTR)0x0;
  local_34.lpszClassName = L"Global Overlay ImGui Window";
  RegisterClassW(&local_34);
  iVar1 = FUN_100fbf7e();
  if (iVar1 == 0) {
    dwExStyle = 0x80c0028;
  }
  else {
    iVar1 = FUN_1010330d();
    dwExStyle = 0x80c0028;
    if (*(char *)(iVar1 + 0x42) != '\0') {
      dwExStyle = 0x80800a8;
    }
  }
  CreateWindowExW(dwExStyle,local_34.lpszClassName,local_34.lpszClassName,_DAT_10301ba0,
                  _UNK_10301ba4,_UNK_10301ba8,_UNK_10301bac,1,(HWND)0x0,(HMENU)0x0,
                  local_34.hInstance,(LPVOID)0x0);
  if (DAT_10388d00 != (local_c ^ (uint)&stack0xffffff9c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

