/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d442e */

void FUN_101d442e(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  param_1[8] = *(undefined4 *)(param_2 + 0xb0);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x90);
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  uVar5 = *(undefined4 *)(param_2 + 0xa4);
  uVar6 = *(undefined4 *)(param_2 + 0xa8);
  uVar7 = *(undefined4 *)(param_2 + 0xac);
  param_1[4] = *(undefined4 *)(param_2 + 0xa0);
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}

