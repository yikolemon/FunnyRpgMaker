/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4586 */

void FUN_101d4586(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 0x114);
  uVar2 = *(undefined4 *)(param_2 + 0x118);
  uVar3 = *(undefined4 *)(param_2 + 0x11c);
  param_1[8] = *(undefined4 *)(param_2 + 0x110);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0xf0);
  uVar2 = *(undefined4 *)(param_2 + 0xf4);
  uVar3 = *(undefined4 *)(param_2 + 0xf8);
  uVar4 = *(undefined4 *)(param_2 + 0xfc);
  uVar5 = *(undefined4 *)(param_2 + 0x104);
  uVar6 = *(undefined4 *)(param_2 + 0x108);
  uVar7 = *(undefined4 *)(param_2 + 0x10c);
  param_1[4] = *(undefined4 *)(param_2 + 0x100);
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}

