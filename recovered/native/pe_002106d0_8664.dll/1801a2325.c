/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2325 */

bool FUN_1801a2325(longlong param_1)

{
  longlong *plVar1;
  HWND pHVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  pHVar2 = GetForegroundWindow();
  return pHVar2 == (HWND)*plVar1;
}

