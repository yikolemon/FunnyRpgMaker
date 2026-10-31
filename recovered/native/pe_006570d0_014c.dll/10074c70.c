/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074c70 */

uint __fastcall FUN_10074c70(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x18))();
  if (iVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    *(int *)param_1[0xb] = *(int *)param_1[0xb] + -1;
    pbVar1 = *(byte **)param_1[7];
    *(byte **)param_1[7] = pbVar1 + 1;
    uVar3 = (uint)*pbVar1;
  }
  return uVar3;
}

