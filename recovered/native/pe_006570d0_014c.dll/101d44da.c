/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d44da */

void FUN_101d44da(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  uVar2 = *(undefined4 *)(param_2 + 0xe8);
  uVar3 = *(undefined4 *)(param_2 + 0xec);
  param_1[8] = *(undefined4 *)(param_2 + 0xe0);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  uVar2 = *(undefined4 *)(param_2 + 0xc4);
  uVar3 = *(undefined4 *)(param_2 + 200);
  uVar4 = *(undefined4 *)(param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0xd4);
  uVar6 = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = *(undefined4 *)(param_2 + 0xdc);
  param_1[4] = *(undefined4 *)(param_2 + 0xd0);
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}

