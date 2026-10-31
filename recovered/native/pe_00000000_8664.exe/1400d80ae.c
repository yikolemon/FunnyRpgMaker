/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d80ae */

void FUN_1400d80ae(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  HWND pHVar3;
  HWND hWnd;
  
  puVar2 = (undefined8 *)FUN_1400d6041();
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
    FUN_1400bf498(plVar1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

