/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021d6ef */

void __fastcall FUN_1021d6ef(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0xc] = param_1[6];
  iVar2 = *param_1 + param_1[2];
  iVar1 = param_1[2] + param_1[4];
  iVar3 = param_1[4] + param_1[6];
  param_1[10] = iVar3 >> 1;
  iVar3 = iVar3 + iVar1;
  iVar1 = iVar1 + iVar2;
  param_1[8] = iVar3 >> 2;
  param_1[2] = iVar2 >> 1;
  param_1[4] = iVar1 >> 2;
  param_1[6] = iVar1 + iVar3 >> 3;
  param_1[0xd] = param_1[7];
  iVar2 = param_1[1] + param_1[3];
  iVar1 = param_1[3] + param_1[5];
  iVar3 = param_1[5] + param_1[7];
  param_1[0xb] = iVar3 >> 1;
  iVar3 = iVar3 + iVar1;
  iVar1 = iVar1 + iVar2;
  param_1[9] = iVar3 >> 2;
  param_1[3] = iVar2 >> 1;
  param_1[5] = iVar1 >> 2;
  param_1[7] = iVar1 + iVar3 >> 3;
  return;
}

