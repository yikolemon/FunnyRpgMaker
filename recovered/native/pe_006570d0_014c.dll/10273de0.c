/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10273de0 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10273de0(int param_1)

{
  int iVar1;
  PVOID TargetFrame;
  EXCEPTION_RECORD local_54;
  
  local_54.ExceptionCode = 0x80000026;
  local_54.ExceptionFlags = 0;
  local_54.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_54.ExceptionAddress = (PVOID)0x0;
  local_54.NumberParameters = 0;
  TargetFrame = *(PVOID *)(param_1 + 0x18);
  if (TargetFrame != ExceptionList) {
    RtlUnwind(TargetFrame,(PVOID)0x10273e32,&local_54,(PVOID)0x0);
  }
  if (TargetFrame != (PVOID)0x0) {
    iVar1 = FUN_10283460(param_1 + 0x20);
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x20) != 0x56433230)) {
      FUN_102735e0(TargetFrame,*(undefined4 *)(param_1 + 0x1c));
    }
    else if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
  }
  __NLG_Notify(0);
                    /* WARNING: Could not recover jumptable at 0x10273ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}

