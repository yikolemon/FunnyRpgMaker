/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d83ef */

bool FUN_1400d83ef(longlong param_1)

{
  longlong *plVar1;
  HWND pHVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  pHVar2 = GetForegroundWindow();
  return pHVar2 == (HWND)*plVar1;
}

