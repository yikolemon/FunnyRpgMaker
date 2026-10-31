/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ee67 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0048ee67(int *param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*param_1);
  for (piVar2 = &DAT_00521b90; piVar2 != &DAT_00521b94; piVar2 = piVar2 + 1) {
    if ((undefined **)*piVar2 != &PTR_DAT_0051ae88) {
      ppuVar1 = __updatetlocinfoEx_nolock(piVar2,&PTR_DAT_0051ae88);
      *piVar2 = (int)ppuVar1;
    }
  }
  FUN_0048eec9();
  ExceptionList = local_14;
  return;
}

