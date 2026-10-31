/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016aa2 */

ulonglong FUN_140016aa2(longlong *param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  if (*(longlong *)param_1[8] != 0) {
    iVar1 = *(int *)param_1[0xb];
    if (0 < iVar1) {
      *(int *)param_1[0xb] = iVar1 + -1;
      pbVar2 = *(byte **)param_1[8];
      *(byte **)param_1[8] = pbVar2 + 1;
      *pbVar2 = param_2;
      return (ulonglong)param_2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140016adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return uVar3;
}

