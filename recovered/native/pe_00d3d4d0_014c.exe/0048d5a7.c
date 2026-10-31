/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d5a7 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __fastcall FUN_0048d5a7(undefined4 *param_1)

{
  code *pcVar1;
  void *local_14;
  
  if (DAT_005216f4 != '\0') {
    ExceptionList = local_14;
    return;
  }
  LOCK();
  DAT_005216f0 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_005216ec != DAT_0050e8c0) {
      pcVar1 = (code *)FUN_0048d68f(DAT_005216ec);
      (*(code *)PTR_guard_check_icall_00508898)(0,0,0);
      (*pcVar1)();
    }
  }
  else if (*(int *)*param_1 != 1) goto LAB_0048d618;
  FUN_0048f368();
LAB_0048d618:
  if (*(int *)*param_1 == 0) {
    FUN_0048fdf1((undefined4 *)&DAT_00508940,(undefined4 *)&DAT_00508950);
  }
  FUN_0048fdf1((undefined4 *)&DAT_00508954,(undefined4 *)&DAT_00508958);
  if (*(int *)param_1[1] == 0) {
    DAT_005216f4 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  ExceptionList = local_14;
  return;
}

