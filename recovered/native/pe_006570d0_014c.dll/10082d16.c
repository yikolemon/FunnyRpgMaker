/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10082d16 */

uint __fastcall FUN_10082d16(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(int *)param_1[7] != 0) {
    iVar1 = *(int *)param_1[0xb];
    if (0 < iVar1) {
      *(int *)param_1[0xb] = iVar1 + -1;
      pbVar2 = *(byte **)param_1[7];
      *(byte **)param_1[7] = pbVar2 + 1;
      return (uint)*pbVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10082d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x1c))();
  return uVar3;
}

