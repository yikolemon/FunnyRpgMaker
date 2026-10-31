/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b65f8 */

void __thiscall FUN_100b65f8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  if (((iVar3 + uVar4 & 3) == 0) && (*(uint *)(param_1 + 8) <= iVar3 + 4U >> 2)) {
    FUN_100b667e(1);
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 4);
  uVar4 = *(int *)(param_1 + 8) * 4 - 1U & uVar4;
  *(uint *)(param_1 + 0xc) = uVar4;
  uVar4 = uVar4 + iVar3;
  uVar6 = uVar4 >> 2;
  uVar5 = *(int *)(param_1 + 8) + 0x3fffffffU & uVar6;
  if (*(int *)(iVar2 + uVar5 * 4) == 0) {
    uVar1 = FUN_10228350(0x10);
    *(undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 4) = uVar1;
    iVar2 = *(int *)(param_1 + 4);
    uVar5 = *(int *)(param_1 + 8) - 1U & uVar6;
  }
  *(undefined4 *)(*(int *)(iVar2 + uVar5 * 4) + (uVar4 & 3) * 4) = *param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

