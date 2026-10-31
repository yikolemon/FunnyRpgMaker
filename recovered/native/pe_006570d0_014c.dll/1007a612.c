/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007a612 */

uint __thiscall FUN_1007a612(int *param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(int *)param_1[8] != 0) {
    iVar1 = *(int *)param_1[0xc];
    if (0 < iVar1) {
      *(int *)param_1[0xc] = iVar1 + -1;
      pbVar2 = *(byte **)param_1[8];
      *(byte **)param_1[8] = pbVar2 + 1;
      *pbVar2 = param_2;
      return (uint)param_2;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0xc))(param_2);
  return uVar3;
}

