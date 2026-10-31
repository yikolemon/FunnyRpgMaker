/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a4a8 */

void FUN_14002a4a8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014002a4bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    return;
  }
  return;
}

