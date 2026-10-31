/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d83c5 */

void FUN_1400d83c5(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  BringWindowToTop((HWND)*puVar1);
  SetForegroundWindow((HWND)*puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001400d83e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetFocus(*puVar1);
  return;
}

