/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015b3c */

ulonglong FUN_140015b3c(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140015b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x38))();
  return uVar3;
}

