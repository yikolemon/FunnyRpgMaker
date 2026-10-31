/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495bc0 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00495bc0(int param_1)

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
    RtlUnwind(TargetFrame,(PVOID)0x495c12,&local_54,(PVOID)0x0);
  }
  if (TargetFrame != (PVOID)0x0) {
    iVar1 = FUN_004a3620();
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x20) != 0x56433230)) {
      FUN_00495820((int)TargetFrame,*(uint *)(param_1 + 0x1c));
    }
    else if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
  }
  __NLG_Notify(0);
                    /* WARNING: Could not recover jumptable at 0x00495c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}

