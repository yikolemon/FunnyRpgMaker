/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f3d9 */

void FUN_14007f3d9(undefined8 param_1,longlong param_2,longlong param_3)

{
  HWND pHVar1;
  HIMC pHVar2;
  undefined1 auStack_a8 [32];
  tagCANDIDATEFORM local_88;
  tagCOMPOSITIONFORM local_5c;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  pHVar1 = *(HWND *)(param_2 + 0x68);
  if (pHVar1 != (HWND)0x0) {
    pHVar2 = ImmGetContext(pHVar1);
    if (pHVar2 != (HIMC)0x0) {
      local_5c.rcArea.left = 0;
      local_5c.rcArea.top = 0;
      local_5c.rcArea.right = 0;
      local_5c.rcArea.bottom = 0;
      local_5c.ptCurrentPos.x =
           (int)((float)*(undefined8 *)(param_3 + 4) - (float)*(undefined8 *)(param_2 + 8));
      local_5c.ptCurrentPos.y =
           (int)((float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20));
      local_5c.dwStyle = 0x20;
      ImmSetCompositionWindow(pHVar2,&local_5c);
      local_88.rcArea.left = 0;
      local_88.rcArea.top = 0;
      local_88.rcArea.right = 0;
      local_88.rcArea.bottom = 0;
      local_88.dwIndex = 0;
      local_88.dwStyle = 0x40;
      local_88.ptCurrentPos.x =
           (int)((float)*(undefined8 *)(param_3 + 4) - (float)*(undefined8 *)(param_2 + 8));
      local_88.ptCurrentPos.y =
           (int)((float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20));
      ImmSetCandidateWindow(pHVar2,&local_88);
      ImmReleaseContext(pHVar1,pHVar2);
    }
  }
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_a8);
}

