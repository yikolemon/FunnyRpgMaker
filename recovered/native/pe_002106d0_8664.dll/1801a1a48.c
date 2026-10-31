/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a1a48 */

void FUN_1801a1a48(HWND param_1)

{
  int iVar1;
  HRESULT HVar2;
  HRGN ho;
  undefined1 auStack_58 [32];
  DWM_BLURBEHIND local_38;
  DWORD local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1801a17cb(6,0);
  if (iVar1 != 0) {
    HVar2 = DwmIsCompositionEnabled(&local_1c);
    if ((-1 < HVar2) && (local_1c != 0)) {
      iVar1 = FUN_1801a17cb(6,2);
      if (iVar1 == 0) {
        HVar2 = DwmGetColorizationColor(&local_24,&local_20);
        if ((HVar2 < 0) || (local_20 != 0)) {
          local_38.fEnable = 0;
          local_38.hRgnBlur._0_4_ = 0;
          local_38.hRgnBlur._4_4_ = 0;
          local_38.fTransitionOnMaximized = 0;
          local_38.dwFlags = 1;
          DwmEnableBlurBehindWindow(param_1,&local_38);
          goto LAB_1801a1afd;
        }
      }
      ho = CreateRectRgn(0,0,-1,-1);
      local_38.fTransitionOnMaximized = 0;
      local_38.dwFlags = 3;
      local_38.fEnable = 1;
      local_38.hRgnBlur._0_4_ = SUB84(ho,0);
      local_38.hRgnBlur._4_4_ = (undefined4)((ulonglong)ho >> 0x20);
      DwmEnableBlurBehindWindow(param_1,&local_38);
      DeleteObject(ho);
    }
  }
LAB_1801a1afd:
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

