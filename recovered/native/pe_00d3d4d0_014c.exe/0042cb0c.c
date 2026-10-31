/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042cb0c */

void FUN_0042cb0c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  param_1[8] = *(undefined4 *)(param_2 + 0x80);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  uVar2 = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x6c);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  uVar7 = *(undefined4 *)(param_2 + 0x7c);
  param_1[4] = *(undefined4 *)(param_2 + 0x70);
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}

