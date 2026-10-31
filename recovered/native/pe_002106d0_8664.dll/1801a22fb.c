/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a22fb */

void FUN_1801a22fb(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  BringWindowToTop((HWND)*puVar1);
  SetForegroundWindow((HWND)*puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001801a231e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetFocus(*puVar1);
  return;
}

