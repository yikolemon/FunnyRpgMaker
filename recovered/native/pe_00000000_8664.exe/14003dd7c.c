/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003dd7c */

void FUN_14003dd7c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_140190620();
  if (iVar2 == 0) {
    FUN_14003de0c(*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014003ddcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

