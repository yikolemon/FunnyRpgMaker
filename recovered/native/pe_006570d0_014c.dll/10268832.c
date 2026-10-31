/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268832 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __fastcall FUN_10268832(undefined4 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  void *local_14;
  
  if (DAT_103a4d60 != '\0') {
    ExceptionList = local_14;
    return;
  }
  LOCK();
  DAT_103a4d5c = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_103a4d58 != DAT_10388d00) {
      pcVar1 = (code *)FUN_1026860d(DAT_103a4d58);
      (*(code *)PTR_guard_check_icall_1035d810)(0,0,0);
      (*pcVar1)();
    }
    puVar2 = &DAT_103a4e70;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_102688a3;
    puVar2 = &DAT_103a4e7c;
  }
  FUN_10268ccc(puVar2);
LAB_102688a3:
  if (*(int *)*param_1 == 0) {
    FUN_10269cc9(&DAT_1035d900,&DAT_1035d910);
  }
  FUN_10269cc9(&DAT_1035d914,&DAT_1035d918);
  if (*(int *)param_1[1] == 0) {
    DAT_103a4d60 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  ExceptionList = local_14;
  return;
}

