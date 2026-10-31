/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ce2e */

void FUN_14000ce2e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_140107e60();
  if (iVar2 == 0) {
    FUN_14000cebe(*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014000ce7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

