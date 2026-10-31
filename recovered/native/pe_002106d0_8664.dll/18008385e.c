/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008385e */

ulonglong FUN_18008385e(longlong *param_1)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  if (*(longlong *)param_1[7] != 0) {
    iVar1 = *(int *)param_1[10];
    if (0 < iVar1) {
      *(int *)param_1[10] = iVar1 + -1;
      pbVar2 = *(byte **)param_1[7];
      *(byte **)param_1[7] = pbVar2 + 1;
      return (ulonglong)*pbVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018008388b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x38))();
  return uVar3;
}

