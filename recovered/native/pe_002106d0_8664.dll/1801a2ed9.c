/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2ed9 */

ulonglong FUN_1801a2ed9(HWND param_1)

{
  HWND pHVar1;
  char cVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  if ((DAT_18041f1b8 == 0) &&
     (DAT_18041f1b8 = SetWindowLongPtrW(param_1,-4,0x1801a2f68), DAT_18041f1b8 == 0)) {
    uVar3 = 0;
    pHVar1 = DAT_18041f1c0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    pHVar1 = DAT_18041f1c0;
    if (DAT_18041f1c0 != param_1) {
      if (DAT_18041f1c0 != (HWND)0x0) {
        FUN_18019febd();
      }
      cVar2 = FUN_18019fd00(param_1);
      pHVar1 = param_1;
      if (cVar2 == '\0') {
        MessageBoxW((HWND)0x0,L"Failed to initialize ImGui Win32 Implementation",L"Error",0x10);
                    /* WARNING: Subroutine does not return */
        FUN_18028c2e0();
      }
    }
  }
  DAT_18041f1c0 = pHVar1;
  return uVar3 & 0xffffffff;
}

