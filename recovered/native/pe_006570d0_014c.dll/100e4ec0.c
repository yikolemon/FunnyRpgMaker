/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e4ec0 */

void __thiscall FUN_100e4ec0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 <= *(int *)(param_1 + 0x10) + 1U) {
    FUN_100e4f30(1);
    uVar3 = *(uint *)(param_1 + 8);
  }
  uVar4 = *(uint *)(param_1 + 0xc) & uVar3 - 1;
  *(uint *)(param_1 + 0xc) = uVar4;
  if (uVar4 == 0) {
    uVar4 = uVar3;
  }
  uVar4 = uVar4 - 1;
  uVar3 = uVar3 - 1 & uVar4;
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + uVar3 * 4) == 0) {
    uVar1 = FUN_10001447(0x3040);
    *(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4) = uVar1;
    iVar2 = *(int *)(param_1 + 4);
    uVar3 = *(int *)(param_1 + 8) - 1U & uVar4;
  }
  FUN_100e506e(*(undefined4 *)(iVar2 + uVar3 * 4),param_2);
  *(uint *)(param_1 + 0xc) = uVar4;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

