/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c9b6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_1026c9b6(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*param_1);
  for (piVar2 = &DAT_103a50f0; piVar2 != &DAT_103a50f4; piVar2 = piVar2 + 1) {
    if ((undefined **)*piVar2 != &PTR_DAT_1039b408) {
      iVar1 = __updatetlocinfoEx_nolock(piVar2,&PTR_DAT_1039b408);
      *piVar2 = iVar1;
    }
  }
  FUN_1026ca18();
  ExceptionList = local_14;
  return;
}

