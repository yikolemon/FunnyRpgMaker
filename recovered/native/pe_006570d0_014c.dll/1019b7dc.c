/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019b7dc */

undefined4 __fastcall FUN_1019b7dc(HWND param_1)

{
  HWND pHVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((DAT_103a33c4 == 0) &&
     (DAT_103a33c4 = SetWindowLongW(param_1,-4,0x1019b849), DAT_103a33c4 == 0)) {
    uVar3 = 0;
    pHVar1 = DAT_103a33c8;
  }
  else {
    uVar3 = 1;
    pHVar1 = DAT_103a33c8;
    if (DAT_103a33c8 != param_1) {
      if (DAT_103a33c8 != (HWND)0x0) {
        FUN_10198834();
      }
      cVar2 = FUN_101986a8(param_1);
      pHVar1 = param_1;
      if (cVar2 == '\0') {
        MessageBoxW((HWND)0x0,L"Failed to initialize ImGui Win32 Implementation",L"Error",0x10);
                    /* WARNING: Subroutine does not return */
        FUN_102716bc();
      }
    }
  }
  DAT_103a33c8 = pHVar1;
  return uVar3;
}

