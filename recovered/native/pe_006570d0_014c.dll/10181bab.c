/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10181bab */

void __fastcall FUN_10181bab(HWND param_1,char param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  HWND hWndInsertAfter;
  
  pvVar1 = GetPropW(param_1,L"__ImGui_ImplWin32_EnableAlphaCompositing__");
  if (pvVar1 == (HANDLE)0x0) {
    FUN_1019a526(param_1);
    SetPropW(param_1,L"__ImGui_ImplWin32_EnableAlphaCompositing__",(HANDLE)0x1);
  }
  uVar2 = GetWindowLongW(param_1,-0x14);
  if (param_2 == '\0') {
    hWndInsertAfter = (HWND)0xfffffffe;
    if ((uVar2 & 8) == 0) {
      return;
    }
  }
  else {
    if ((uVar2 & 8) != 0) {
      return;
    }
    hWndInsertAfter = (HWND)0xffffffff;
  }
  SetWindowPos(param_1,hWndInsertAfter,0,0,0,0,0x13);
  return;
}

