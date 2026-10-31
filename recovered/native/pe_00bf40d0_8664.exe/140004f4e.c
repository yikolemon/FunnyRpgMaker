/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004f4e */

void FUN_140004f4e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_14008dc10();
  if (iVar2 == 0) {
    FUN_1400060e8((longlong *)*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140004f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

