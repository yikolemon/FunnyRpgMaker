/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a526 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019a526(HWND param_1)

{
  int iVar1;
  HRESULT HVar2;
  HRGN ho;
  DWM_BLURBEHIND local_28;
  DWORD local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_28;
  iVar1 = FUN_1019a2b9();
  if (iVar1 != 0) {
    HVar2 = DwmIsCompositionEnabled(&local_10);
    if ((-1 < HVar2) && (local_10 != 0)) {
      iVar1 = FUN_1019a2b9();
      if (iVar1 == 0) {
        HVar2 = DwmGetColorizationColor(&local_18,&local_14);
        if ((HVar2 < 0) || (local_14 != 0)) {
          local_28.fEnable = 0;
          local_28.hRgnBlur = (HRGN)0x0;
          local_28.fTransitionOnMaximized = 0;
          local_28.dwFlags = 1;
          DwmEnableBlurBehindWindow(param_1,&local_28);
          goto LAB_1019a5d0;
        }
      }
      ho = CreateRectRgn(_DAT_102b8ae0,_UNK_102b8ae4,_UNK_102b8ae8,_UNK_102b8aec);
      local_28.fTransitionOnMaximized = 0;
      local_28.dwFlags = 3;
      local_28.hRgnBlur = ho;
      local_28.fEnable = 1;
      DwmEnableBlurBehindWindow(param_1,&local_28);
      DeleteObject(ho);
    }
  }
LAB_1019a5d0:
  if (DAT_10388d00 == (local_c ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

