/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801887eb */

void FUN_1801887eb(HWND param_1,char param_2)

{
  HANDLE pvVar1;
  ulonglong uVar2;
  HWND hWndInsertAfter;
  
  pvVar1 = GetPropW(param_1,L"__ImGui_ImplWin32_EnableAlphaCompositing__");
  if (pvVar1 == (HANDLE)0x0) {
    FUN_1801a1a48(param_1);
    SetPropW(param_1,L"__ImGui_ImplWin32_EnableAlphaCompositing__",(HANDLE)0x1);
  }
  uVar2 = GetWindowLongPtrW(param_1,-0x14);
  if (param_2 == '\0') {
    hWndInsertAfter = (HWND)0xfffffffffffffffe;
    if ((uVar2 & 8) == 0) {
      return;
    }
  }
  else {
    hWndInsertAfter = (HWND)0xffffffffffffffff;
    if ((uVar2 & 8) != 0) {
      return;
    }
  }
  SetWindowPos(param_1,hWndInsertAfter,0,0,0,0,0x13);
  return;
}

