/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101655b6 */

void FUN_101655b6(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  *(undefined4 *)(param_1 + 0x28c) = *param_2;
  *(undefined4 *)(param_1 + 0x290) = uVar7;
  *(undefined4 *)(param_1 + 0x294) = uVar8;
  *(undefined4 *)(param_1 + 0x298) = uVar9;
  iVar2 = *(int *)(param_1 + 0x2e8);
  *(undefined4 *)(iVar2 + 0x48) = uVar3;
  *(undefined4 *)(iVar2 + 0x4c) = uVar4;
  *(undefined4 *)(iVar2 + 0x50) = uVar5;
  *(undefined4 *)(iVar2 + 0x54) = uVar6;
  puVar1 = (undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x2e8) + 0x8c) + -0x10 +
           *(int *)(*(int *)(param_1 + 0x2e8) + 0x84) * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  return;
}

