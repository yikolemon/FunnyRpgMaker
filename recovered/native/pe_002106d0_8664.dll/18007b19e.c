/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b19e */

void FUN_18007b19e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_18026eb40();
  if (iVar2 == 0) {
    FUN_18007b340(*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018007b1ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

