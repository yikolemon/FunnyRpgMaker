/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001841a */

void __thiscall FUN_1001841a(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  if (uVar4 <= iVar1 + 1U) {
    FUN_10018482(1);
    uVar4 = *(uint *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  uVar3 = *(uint *)(param_1 + 0xc) & uVar4 - 1;
  *(uint *)(param_1 + 0xc) = uVar3;
  uVar4 = uVar4 - 1 & uVar3 + iVar1;
  if (*(int *)(*(int *)(param_1 + 4) + uVar4 * 4) == 0) {
    uVar2 = FUN_10228350(0x28);
    *(undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4) = uVar2;
  }
  FUN_1001860e(param_2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

