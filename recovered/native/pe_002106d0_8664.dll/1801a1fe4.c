/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a1fe4 */

void FUN_1801a1fe4(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  HWND pHVar3;
  HWND hWnd;
  
  puVar2 = (undefined8 *)FUN_18019ff31();
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    pHVar3 = GetCapture();
    hWnd = (HWND)*plVar1;
    if (pHVar3 == hWnd) {
      ReleaseCapture();
      SetCapture((HWND)*puVar2);
      hWnd = (HWND)*plVar1;
    }
    if ((hWnd != (HWND)0x0) && ((char)plVar1[2] == '\x01')) {
      DestroyWindow(hWnd);
    }
    *plVar1 = 0;
    FUN_180146568(plVar1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

